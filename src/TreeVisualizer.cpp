#include "TreeVisualizer.h"
#include <iostream>
#include <queue>
#include <sstream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::chrono;

struct Node {
    int data;
    Node* left = nullptr;
    Node* right = nullptr;
    Node(int d) : data(d) {}
};

void waitTree() {
    this_thread::sleep_for(milliseconds(500));
}

Node* buildBinaryTreeFromInput() {
    cout << "Enter node values in level-order (-1 for NULL), e.g., 1 2 3 -1 -1 4 -1:\n";
    cin.ignore();
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> values;
    int val;

    while (ss >> val) values.push_back(val);

    if (values.empty() || values[0] == -1) return nullptr;

    Node* root = new Node(values[0]);
    queue<Node*> q;
    q.push(root);
    int i = 1;

    while (!q.empty() && i < values.size()) {
        Node* curr = q.front(); q.pop();

        if (values[i] != -1) {
            curr->left = new Node(values[i]);
            q.push(curr->left);
        }
        i++;

        if (i < values.size() && values[i] != -1) {
            curr->right = new Node(values[i]);
            q.push(curr->right);
        }
        i++;
    }

    return root;
}

void inorderTraversal(Node* root) {
    if (!root) return;
    inorderTraversal(root->left);
    cout << "-> Visiting: " << root->data << "\n";
    waitTree();
    inorderTraversal(root->right);
}

void treeVisualizer() {
    Node* root = buildBinaryTreeFromInput();
    if (!root) {
        cout << "Tree is empty or invalid input.\n";
        return;
    }
    cout << "\n\U0001F333 Inorder Traversal:\n";
    inorderTraversal(root);
}

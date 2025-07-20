#include <iostream>
#include "SortingVisualizer.h"
#include "TreeVisualizer.h"
#include "GraphVisualizer.h"

using namespace std;

void showMenu() {
    cout << "\n\U0001F393 DSA Visualizer Menu\n";
    cout << "1. Sorting Visualizer\n";
    cout << "2. Binary Tree Traversal\n";
    cout << "3. Graph BFS Traversal\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                sortingVisualizer();
                break;
            case 2:
                treeVisualizer();
                break;
            case 3:
                graphVisualizer();
                break;
            case 4:
                cout << "\U0001F44B Exiting Visualizer...\n";
                break;
            default:
                cout << "\u274C Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
} 

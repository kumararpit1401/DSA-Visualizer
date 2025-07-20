#include "SortingVisualizer.h"
#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <sstream>
#include <algorithm>

using namespace std;
using namespace std::chrono;

void wait() {
    this_thread::sleep_for(milliseconds(500));
}

void printBar(int value) {
    for (int i = 0; i < value; ++i) cout << "\u2588"; // Use '#' if box char doesn't render
    cout << " (" << value << ")";
}

void printArrayBars(const vector<int>& arr) {
    cout << "\n";
    for (int i = 0; i < arr.size(); ++i) {
        cout << i << ": ";
        printBar(arr[i]);
        cout << "\n";
    }
    cout << "-------------------\n";
    wait();
}

void sortingVisualizer() {
    cout << "\nEnter array elements (space-separated): ";
    string line;
    cin.ignore();
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int val;

    while (ss >> val) arr.push_back(val);

    cout << "\n\U0001F3AF Starting Bubble Sort...\n";
    printArrayBars(arr);

    for (int i = 0; i < arr.size() - 1; ++i) {
        for (int j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                printArrayBars(arr);
            }
        }
    }

    cout << "\n\u2705 Sorted Result:\n";
    printArrayBars(arr);
} 

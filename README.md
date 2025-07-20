# ✨ DSA Visualizer in C++ (Console App)

A modular, interactive, and beginner-friendly **Data Structures and Algorithms Visualizer** for the console, built using **C++**. This project demonstrates step-by-step operations of common DSA concepts like:

- **Sorting Algorithms** (Bubble Sort)
- **Binary Tree Traversal** (Inorder)
- **Graph Traversal** (BFS)

It is perfect for learning, teaching, or showcasing DSA visually in the terminal.

---

## 📁 Project Structure

```
DSA_Visualizer/
├── include/
│   ├── SortingVisualizer.h
│   ├── TreeVisualizer.h
│   └── GraphVisualizer.h
│
├── src/
│   ├── SortingVisualizer.cpp
│   ├── TreeVisualizer.cpp
│   └── GraphVisualizer.cpp
│
├── main.cpp
└── README.md
```

---

## 📆 Features

### ✔ Sorting Visualizer

- User inputs any array.
- Shows bubble sort step-by-step using ASCII bars.

### ✔ Tree Traversal Visualizer

- Accepts binary tree input in level order (e.g., `1 2 3 -1 -1 4 -1`).
- Prints **inorder traversal** with delays to simulate animation.

### ✔ Graph BFS Visualizer

- User inputs node/edge count and connections.
- Simulates BFS traversal node-by-node.

---

## ⚡ How to Build & Run

### Using g++ manually:

```bash
g++ -std=c++17 -Iinclude src/*.cpp main.cpp -o dsa_visualizer
./dsa_visualizer
```

### Using Makefile (optional):

Create a `Makefile` with:

```makefile
all:
	g++ -std=c++17 -Iinclude src/*.cpp main.cpp -o dsa_visualizer
```

Then run:

```bash
make
./dsa_visualizer
```

---

## 🚀 Upcoming Features

- Selection / Insertion / Merge Sort visualizers
- Preorder / Postorder tree traversals
- DFS traversal for graphs
- Stack, Queue and Heap visualization

---

## ❤ Contributing

Feel free to fork, improve, and share! Perfect for adding new visualizations or animations.

---

## 📄 License

This project is licensed under the MIT License.


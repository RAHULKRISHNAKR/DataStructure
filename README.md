# Data Structure Repository

This repository contains a collection of essential data structures and their implementations in C++. Each data structure is carefully implemented, tested, and documented to serve as a reliable resource for understanding and applying core data structures in competitive programming and software development.

## Features

- **Comprehensive Data Structures**: Includes implementation of common data structures such as stacks, queues, linked lists, trees, graphs, heaps, hash tables, and more.
- **Efficient Algorithms**: Accompanying algorithms for data manipulation, searching, and sorting, optimized for performance and clarity.
- **Modular Codebase**: Each data structure is separated into its own file for easy navigation and reuse.
- **Practical Applications**: Illustrative examples and problem-solving use cases for each data structure.

## Contents

- **Array**: Basic operations, searching, sorting, and manipulation techniques.
- **Linked List**: Singly, doubly, and circular linked lists with standard operations.
- **Stack**: Array-based and linked list-based implementations, with use cases.
- **Queue**: Array-based, circular, and deque implementations.
- **Trees**: Binary trees, binary search trees, AVL trees, and tree traversals.
- **Graph**: Representation using adjacency matrix and list, with traversal algorithms (DFS, BFS).
- **Heap**: Max-heap and min-heap structures with insertion and deletion.
- **Hash Table**: Hashing techniques with collision resolution strategies.

## Getting Started

### Prerequisites

Ensure you have a C++ compiler set up, such as `g++`. For example, on Linux:

```bash
sudo apt install g++
```

### Cloning the Repository

```bash
git clone https://github.com/RAHULKRISHNAKR/DataStructure.git
cd DataStructure
```

### Running the Code

Each data structure implementation has its own main file where you can test the code:

```bash
g++ linked_list.cpp -o linked_list
./linked_list
```

## Examples

1. **Binary Tree Traversal**
   ```cpp
   BinaryTree tree;
   tree.insert(10);
   tree.insert(5);
   tree.insert(20);
   tree.inorderTraversal();
   ```

2. **Graph Traversal**
   ```cpp
   Graph g(5); // 5 vertices
   g.addEdge(0, 1);
   g.BFS(0);   // BFS traversal from vertex 0
   ```

## Contributing

Contributions to improve and expand this repository are welcome! Please fork the repo and create a pull request.

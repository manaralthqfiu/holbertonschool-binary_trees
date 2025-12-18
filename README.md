# 🌳 Binary Trees Project 🌳

## 📌 Project Overview

This project explores **Binary Trees**, one of the most fundamental data structures in computer science.
Using the C programming language, we implemented multiple operations to create, traverse, analyze, and manage binary trees efficiently.

Through this project, we strengthened our understanding of **recursion**, **tree traversal**, and **hierarchical data structures**, while strictly following proper memory management and the **Betty coding style**.

---

## ▶️ Data Structure Used:

```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;
```

---

## 🧠 Concepts Covered:

* 🌿 What is a Binary Tree
* 🔗 Difference between Binary Trees and Linked Lists

* 🔄 Tree traversal methods:

  * Pre-order
  * In-order
  * Post-order

* 📏 Tree measurements:

  * Height
  * Depth
  * Size
  * Balance factor

* 🌲 Types of Binary Trees:

  * Full Binary Tree
  * Perfect Binary Tree
  * Balanced Binary Tree

* 👨‍👩‍👧 Node relationships:

  * Parent
  * Sibling
  * Uncle
* 🔁 Recursion in tree algorithms
* ❇️ Dynamic memory allocation & deallocation

---

## 🎯 Learning Objectives

By the end of this project, we are able to explain:

* What a binary tree is
* The difference between a binary tree and a Binary Search Tree (BST)
* The performance gains of trees compared to linked lists
* What depth, height, and size mean in a binary tree
* Different traversal methods used in binary trees
* The difference between complete, full, perfect, and balanced binary trees

---

## 🖥️ Environment:

* OS: Ubuntu 20.04 LTS
* Compiler: gcc
* Standard: GNU89

---

## 📋 Project Requirements:

* ✏️ Allowed editors: vi, vim, emacs
* 📐 Code follows Betty style
* 🚫 No global variables
* 📁 No more than 5 functions per file
* 📝 All functions are fully documented
* 📄 All files end with a new line
* 📌 All function prototypes are declared in `binary_trees.h`
* 🛡️ Header files are include guarded

—

## 🛠️ Tasks Implemented (18 Total)

| #  | File                         | Description                          |
| -- | ---------------------------- | ------------------------------------ |
| 0  | 0-binary_tree_node.c         | Creates a binary tree node           |
| 1  | 1-binary_tree_insert_left.c  | Inserts a node as the left child     |
| 2  | 2-binary_tree_insert_right.c | Inserts a node as the right child    |
| 3  | 3-binary_tree_delete.c       | Deletes an entire binary tree        |
| 4  | 4-binary_tree_is_leaf.c      | Checks if a node is a leaf           |
| 5  | 5-binary_tree_is_root.c      | Checks if a node is the root         |
| 6  | 6-binary_tree_preorder.c     | Traverses a tree using pre-order     |
| 7  | 7-binary_tree_inorder.c      | Traverses a tree using in-order      |
| 8  | 8-binary_tree_postorder.c    | Traverses a tree using post-order    |
| 9  | 9-binary_tree_height.c       | Measures the height of a tree        |
| 10 | 10-binary_tree_depth.c       | Measures the depth of a node         |
| 11 | 11-binary_tree_size.c        | Measures the size of a tree          |
| 12 | 12-binary_tree_leaves.c      | Counts the number of leaves          |
| 13 | 13-binary_tree_nodes.c       | Counts nodes with at least one child |
| 14 | 14-binary_tree_balance.c     | Measures the balance factor          |
| 15 | 15-binary_tree_is_full.c     | Checks if a tree is full             |
| 16 | 16-binary_tree_is_perfect.c  | Checks if a tree is perfect          |
| 17 | 17-binary_tree_sibling.c     | Finds the sibling of a node          |
| 18 | 18-binary_tree_uncle.c       | Finds the uncle of a node            |

---

## ⚙️ Compilation 🛠️

All files were compiled using:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o binary_trees
```

---

## 🔍 Example Usage:

```c
binary_tree_t *root;

root = binary_tree_node(NULL, 10);
binary_tree_insert_left(root, 5);
binary_tree_insert_right(root, 15);
```

---

## 👩‍💻 Authors:

* **Norah Aljuhani** ✨
* **Manar Althqfi** ✨

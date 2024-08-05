
# Binary Trees Project

This project involves the implementation and exploration of binary trees in language C, focusing on binary search trees (BST), including functions for tree creation, node insertion, and traversal methods.


## Table of Contents

Description

Table of Contents

Requirements

Installation

Usage

Functions
## Requirements
#### Working environment `Ubuntu 20.04 using GCC options -Wall -Werror -Wextra -pedantic -std=gnu89`

#### Checker `Betty`

#### Header file `binary_trees.h`

#### Allowed editors `vi, vim, emacs`

#### Compiler `GCC`

## Installation
Clone the repository:
 
```git clone https://github.com/yourusername/binary_trees.git```

Navigate to the project directory:

```cd binary_trees```

## Usage

Compile the code using `gcc`:

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c main.c
```

Run the executable:
```bash
./binary_tree
```
## Functions

#### We use functions like :

`binary_tree_node` - Creates a new node in a binary tree.

`binary_tree_insert_left` - Inserts a node as the left-child of another node.

`binary_tree_is_leaf` - Checks if a node is a leaf.

`binary_tree_is_root` - Checks if a node is the root.

`binary_tree_delete` - Deletes an entire binary tree.

`binary_tree_preorder` - Goes through a binary tree using pre-order traversal.
# 0x1D. C - Binary trees

## Resources

[Binary tree](https://intranet.alxswe.com/rltoken/1F2x42-8vUbOmU4L1C1KMg) (note the first line: Not to be confused with B-tree.)
[Data Structure and Algorithms - Tree](https://intranet.alxswe.com/rltoken/QmcTMCkQyrgMjrqoWxYdhw)
[Tree Traversal](https://intranet.alxswe.com/rltoken/z6ZaXr_RxwE5nTHAUx_dfQ)
[Binary Search Tree](https://intranet.alxswe.com/rltoken/qO5dBlMnYJzbaWG3xVpcnQ)
[Data structures: Binary Tree](https://intranet.alxswe.com/rltoken/BeyJ2gjlE7_djwRiDyeHig)

## Learning Objectives

### General

- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Our code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- We are not allowed to use global variables
- No more than 5 functions per file
- We are allowed to use the standard library
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in the header file called binary_trees.h
- All the header files should be include guarded

### GitHub

There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

## More Info

### Data structures

#### Basic Binary Tree

/**  
 * struct binary_tree_s - Binary tree node  
 *  
 * @n: Integer stored in the node  
 * @parent: Pointer to the parent node  
 * @left: Pointer to the left child node  
 * @right: Pointer to the right child node  
 */  
struct binary_tree_s  
{  
    int n;  
    struct binary_tree_s *parent;  
    struct binary_tree_s *left;  
    struct binary_tree_s *right;  
};  
  
typedef struct binary_tree_s binary_tree_t;  
#### Binary Search Tree  
typedef struct binary_tree_s bst_t;  
#### AVL Tree  
typedef struct binary_tree_s avl_t;  
#### Max Binary Heap  
typedef struct binary_tree_s heap_t;  
Note: For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.  

## Print function
To match the examples in the tasks, we are given [this function](https://github.com/alx-tools/0x1C.c)  

This function is used only for visualization purposes. We don’t have to push it to your repo. It may not be used during the correctio

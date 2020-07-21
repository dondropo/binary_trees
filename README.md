# Binary trees

## Resources
_Read or watch:_
* [Binary tree (note the first line: Not to be confused with B-tree.)](https://intranet.hbtn.io/rltoken/YjCgugjFZBKqIeU2_lF-fQ)
* [Data Structure and Algorithms - Tree](https://intranet.hbtn.io/rltoken/YERnIz9OggXbBoXpiqSMEw)
* [Tree Traversal](https://intranet.hbtn.io/rltoken/pR4-vwFxzbph4FkMF2np1Q)
* [Binary Search Tree](https://intranet.hbtn.io/rltoken/L2CpULSk9hQEOBKaGI8IkQ)
* [Data structures: Binary Tree](https://intranet.hbtn.io/rltoken/jQNFgIuh8O73TqIaFeQoPA)

## Learning Objectives

### General

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## Requirements

### General

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the standard library
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called binary_trees.h
* Don’t forget to push your header file
* All your header files should be include guarded

## More info

### Data structures

The following data structures were needed to do this project

### Basic binary tree
'''
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
'''

### Binary Tree Search

'''
    typedef struct binary_tree_s bst_t;
'''

### AVL Tree

'''
    typedef struct binary_tree_s avl_t;
'''

### Max Binary Heap

'''
    typedef struct binary_tree_s heap_t;
'''

## Print Function
[This function](https://github.com/holbertonschool/0x1C.c) was used to match these functions with the tasks examples

# Atuhors
Project made by:
Alejandro Rusca Moreno [GitHub](https://github.com/dondropo) | [Twitter](https://twitter.com/don_dropo) | [Linkedin](https://www.linkedin.com/in/alejandro-rusca-moreno-59138b1a1/)

Juan José Gómez Rodríguez [Github](https://github.com/JuanJoseGomezR) | [Twitter](https://twitter.com/J_Gmez) | [Linkedin](https://www.linkedin.com/in/juan-jos%C3%A9-g%C3%B3mez-1b8b801a0/)

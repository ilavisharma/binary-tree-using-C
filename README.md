# Binary Tree

A binary tree is defined as finite set of elements called **nodes** such that the tree contains a distinguished node called **root** of the tree and the remaining nodes form a ordered pair of disjoint binary tree T<sub>1</sub> T<sub>2</sub>
<p align="center">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/f/f7/Binary_tree.svg/192px-Binary_tree.svg.png">
</p>

*Every node contain atmost 2 child*<br>
*The degree of binary tree highest possible is 2*<br>

In short binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.

## Traversal of binary tree

### Pre-order
1. Check if the current node is empty or null.
2. Display the data part of the root (or current node).
3. Traverse the left subtree by recursively calling the pre-order function.
4. Traverse the right subtree by recursively calling the pre-order function.
<p align="center">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/d/d4/Sorted_binary_tree_preorder.svg/220px-Sorted_binary_tree_preorder.svg.png"><br>
    Pre-order: F, B, A, D, C, E, G, I, H
</p>   

### In-order
1. Check if the current node is empty or null.
2. Traverse the left subtree by recursively calling the in-order function.
3. Display the data part of the root (or current node).
4. Traverse the right subtree by recursively calling the in-order function.
<p align="center">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/7/77/Sorted_binary_tree_inorder.svg/220px-Sorted_binary_tree_inorder.svg.png"><br>
    In-order: A, B, C, D, E, F, G, H, I
</p>

*In a binary search tree, in-order traversal retrieves data in sorted order*

### Post-order
1. Check if the current node is empty or null.
2. Traverse the left subtree by recursively calling the post-order function.
3. Traverse the right subtree by recursively calling the post-order function.
4. Display the data part of the root (or current node).
<p align="center">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/9/9d/Sorted_binary_tree_postorder.svg/220px-Sorted_binary_tree_postorder.svg.png"><br>
    Post-order: A, C, E, D, B, H, I, G, F
</p>

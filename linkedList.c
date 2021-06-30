/*
Introduction to Linked ListsBeginner
 
Linked List Implementation – C, C++, Java, PythonBeginner
 
Linked List | Insertion at TailBeginner
 
Static Linked ListBeginner
 
Clone given Linked ListEasy
 
Delete Linked ListEasy
 
Pop operation in linked listEasy
 
Insert given node into the correct sorted position in the given sorted linked listEasy
 
Rearrange linked list in increasing order (Sort linked list)Medium
 
Split the nodes of the given linked list into front and back halvesEasy
 
Remove duplicates from a sorted linked listEasy
 
Move front node of the given list to the front of the another listEasy
 
Move even nodes to the end of the list in reverse orderMedium
 
Split given linked list into two lists where each list containing alternating elements from itMedium
 
Construct a linked list by merging alternate nodes of two given listsEasy
 
Merge Sort Algorithm for Singly Linked ListHard
 
Merge two sorted linked lists into oneMedium
 
Merge K sorted linked listsHard
 
Intersection of two given sorted linked listsMedium
 
Reverse Linked List (Iterative Solution)Medium
 
Reverse Linked List (Recursive Solution)Hard
 
Reverse every group of k nodes in given linked listMedium
 
Find K’th node from the end in a linked listEasy
 
Merge alternate nodes of two linked lists into the first listMedium
 
Merge two sorted linked lists from their endMedium
 
Delete every N nodes in a linked list after skipping M nodesEasy
 
Rearrange linked list in specific manner in linear timeMedium
 
Check if linked list is palindrome or notMedium
 
Move last node to front in a given Linked ListEasy
 
Rearrange the linked list in specific mannerEasy
 
Detect Cycle in a linked list (Floyd’s Cycle Detection Algorithm)Easy
 
Sort linked list containing 0’s, 1’s and 2’sMedium
 
Implement Stack using Linked ListEasy
 
Implement Queue using Linked ListEasy
 
Remove duplicates from a linked listEasy
 
Rearrange the linked list so that it has alternating high, low valuesMedium
 
Rearrange a Linked List by Separating Odd Nodes from the Even OnesMedium
 
Calculate height of a binary tree with leaf nodes forming a circular doubly linked listMedium
 
XOR Linked List: Overview and ImplementationMedium
 
Convert a multilevel linked list to a singly linked listMedium
 
Recursively check if linked list of characters is palindrome or notMedium
 
Merge two BSTs into a doubly linked list in sorted orderHard
 
Remove redundant nodes from a path formed by a linked listMedium
 
Add a single-digit number to a linked list representing a numberMedium
 
Reverse every alternate group of k nodes in a linked listMedium
 
Determine if a given linked list is a palindrome or notMedium
 
Sort a Doubly Linked List using Merge SortMedium
 
Reverse a Doubly Linked ListEasy
 
Pairwise swap adjacent nodes of a linked listMedium
 
Flatten a linked listHard
 
Check if a Linked List of String is PalindromicEasy
 
Flatten a multilevel linked listMedium
 
Construct a height-balanced BST from an unbalanced BSTHard
 
Swap K’th node from beginning with K’th node from end in a Linked ListMedium
 
Add two linked lists without using any extra spaceMedium
 
Clone a Linked List with Random PointersHard
 
Update random pointer for each linked list node to point to the maximum nodeMedium
 
Link nodes present in each level of a binary tree in the form of a linked listHard
 
Convert a Ternary Tree to a Doubly Linked ListMedium
 
Print nodes of a given binary tree in vertical orderMedium
 
Convert a Binary Tree into a Doubly Linked List in Spiral OrderHard
 
Construct a Height-Balanced BST from a Sorted Doubly Linked ListHard
 
In-place merge two sorted linked lists without modifying links of the first listMedium
 
Reverse specified portion of a Linked List
*/
/*
https://medium.com/techie-delight/linked-list-interview-questions-and-practice-problems-55f75302d613
Introduction to Linked Lists
Linked List Implementation — C, C++, Java, Python
Linked List — Insertion at Tail
Static Linked List
Clone a Linked List
Delete a linked list
Pop operation in a linked list
Insert a node to its correct sorted position in a sorted linked list
Rearrange linked list in increasing order (Sort linked list)
Split nodes of a linked list into the front and back halves
Remove duplicates from a sorted linked list
Move the front node of a linked list in front of another list
Move even nodes to the end of the linked list in reverse order
Split a linked list into two lists where each list contains alternating elements from it
Construct a linked list by merging alternate nodes of two given lists
Merge two sorted linked lists into one
Efficiently merge `k` sorted linked lists
Intersection of two sorted linked lists
Reverse a linked List — Iterative Solution
Reverse a Linked List — Recursive Solution
Reverse every group of `k` nodes in a linked list
Find k’th node from the end of a linked list
Merge alternate nodes of two linked lists into the first list
Merge two sorted linked lists from their end
Delete every `N` nodes in a linked list after skipping `M` nodes
Rearrange linked list in a specific manner in linear time
Check if a linked list is palindrome or not
Move the last node to the front of a linked list
Rearrange linked list in a specific manner
Detect cycle in a linked list (Floyd’s Cycle Detection Algorithm)
Sort linked list containing 0’s, 1’s, and 2’s in a single traversal
Remove duplicates from a linked list in a single traversal
Rearrange linked list so that it has alternating high and low values
Rearrange a linked list by separating odd nodes from even ones
Calculate the height of a binary tree with leaf nodes forming a circular doubly linked list
XOR Linked List — Overview and Implementation in C/C++
Recursively check if the linked list of characters is palindrome or not
Merge two BSTs into a doubly-linked list in sorted order
Remove redundant nodes from a path formed by a linked list
Add a single-digit number to a linked list representing a number
Reverse every alternate group of `k` nodes in a linked list
Determine whether a linked list is palindrome or not
Reverse a doubly linked list
Pairwise swap adjacent nodes of a linked list
Flatten a Linked List
Check if a linked list of strings is palindromic
Flatten a multilevel linked list
Construct a height-balanced BST from an unbalanced BST
Swap k’th node from beginning with k’th node from the end in a linked list
Add two linked lists without using any extra space
Clone a linked list with random pointers
Update random pointer for each linked list node to point to the maximum node
Link nodes present in each level of a binary tree in the form of a linked list
Convert a ternary tree to a doubly-linked list
Construct a height-balanced BST from a sorted doubly linked list
In-place merge two sorted linked lists without modifying links of the first list
Reverse specified portion of a linked list
Find the intersection point of two linked lists
Extract leaves of a binary tree into a doubly-linked list
Find the vertical sum of a binary tree
In-place convert a binary tree to a doubly-linked list
Find a triplet with the given sum in a BST
Check whether the leaf traversal of given binary trees is the same or not
Merge sort algorithm for a singly linked list
Sort a doubly-linked list using merge sort
Stack Implementation using a Linked List
Queue Implementation using a Linked List
Convert a binary tree into a doubly-linked list in spiral order
Convert a Binary Search Tree into a Min Heap
Convert a multilevel linked list to a singly linked list
Print nodes of a binary tree in vertical order
 */

#include <stdio.h>
struct linkedList{
    int data;
    struct linkedList *next;
};


void printList(struct linkedList *list)
{
    struct linkedList *temp = list;
    while(temp != NULL)
    {
        printf("--->%d",temp->data);
        temp = temp->next;
    }
}


int main(void)
{
    printf("Single linked program \n");
    return 0;
}



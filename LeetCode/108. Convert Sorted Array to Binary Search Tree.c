
//108. Convert Sorted Array to Binary Search Tree
//Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

//A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* sortedArrayToBST(int* nums, int numsSize){

    struct TreeNode *p = (struct TreeNode*)malloc(sizeof(struct TreeNode));

    if(numsSize<1) return NULL;

    int pivot_n = numsSize/2;
    int pivot = nums[pivot_n];
    p->val = pivot;
    
    int* pp = &nums[pivot_n+1];

    p-> left = sortedArrayToBST(nums,numsSize/2);
    p-> right = sortedArrayToBST(pp , numsSize-(numsSize/2)-1);
   

   return p;
}

/*
Runtime: 16 ms, faster than 43.29% of C online submissions for Add Two Numbers.
Memory Usage: 7.3 MB, less than 100.00% of C online submissions for Add Two Numbers.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct Node *newNode(int data) 
{ 
    struct ListNode *new_node = (struct ListNode *) malloc(sizeof(struct ListNode)); 
    new_node->val = data; 
    new_node->next = NULL; 
    return new_node; 
} 

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){

    int carry = 0;
    int a, b;
    int sum;
    
    struct ListNode *result = NULL;
    struct ListNode *temp = NULL, *prev = NULL;
    
    while(l1 || l2)
    {
        a = (l1 != NULL) ? l1->val : 0;
        b = (l2 != NULL) ? l2->val : 0;
        
        sum = carry + a + b;
        carry = sum / 10;
        temp = newNode(sum % 10);
        
        if(result == NULL)
            result = temp;
        else
            prev->next = temp;
        
        prev = temp; 
        
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
                
    }
    
    if(carry > 0)
        temp->next = newNode(carry);
    
    return result;
}

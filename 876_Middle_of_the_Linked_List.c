/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Middle of the Linked List.
Memory Usage: 5.4 MB, less than 100.00% of C online submissions for Middle of the Linked List.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getCount(struct ListNode* head) 
{ 
    // Base case 
    if (head == NULL) 
        return 0; 
  
    // count is 1 + count of remaining list 
    return 1 + getCount(head->next); 
}

struct ListNode* middleNode(struct ListNode* head){

    int count = getCount(head);
    
    int mid = count / 2;
    
    struct ListNode* current = head;
    
    int i = 0;
    
    while(i < mid)
    {
        current = current->next;
        i++;
    }
    
    return current;
}

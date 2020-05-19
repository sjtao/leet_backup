/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Convert Binary Number in a Linked List to Integer.
Memory Usage: 5.4 MB, less than 100.00% of C online submissions for Convert Binary Number in a Linked List to Integer.
*/

int getDecimalValue(struct ListNode* head){
    
    int integer = 0;
    
    while(head!=NULL)
    {
        integer = integer * 2 + head->val;
        head = head->next;
    }
    
    return integer;
}

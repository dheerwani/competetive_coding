ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp = head;
        ListNode* curr = head->next;
        while(head!=NULL && curr!=NULL)
        {
            if(head->val == curr->val)
            {
                head->next = curr->next;
                curr = head->next;
                
            }
            else
            {
                head = curr;
                curr=curr->next;
            }
        }
        
        return temp;
    }

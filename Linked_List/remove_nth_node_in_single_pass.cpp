if(!head)
            return head;
        if(head->next == NULL)
            return NULL;
        ListNode* slow =head;
        ListNode* fast =head;
        
        for(int i=0;i<n;i++)
        {
            fast=fast->next;
        }
        if(fast == nullptr) return head->next;
        while(fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next = slow->next->next;
        
        return head;

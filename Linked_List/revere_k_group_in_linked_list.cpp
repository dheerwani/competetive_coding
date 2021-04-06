ListNode* reverseKGroup(ListNode* head, int k) {
        if (k<=1)
            return head;
        
        ListNode* nextNode = head;
        for(int i=0;i<k;i++)
        {
            if(!nextNode)
                return head;
            nextNode = nextNode->next;
        }
        
        ListNode* prev = head;
        ListNode* next = head->next;
        
        for(int i=0;i<k-1;i++)
        {
            ListNode* temp = next->next;
            next->next = prev;
            prev=next;
            next =temp;
        }
        head->next = reverseKGroup(nextNode,k);
        
        return prev;
        
    }

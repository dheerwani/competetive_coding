void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        unordered_set<Node*> s;
        Node* prev=NULL;
        while(head!=NULL)
        {
            if(s.find(head) == s.end())
            {
                s.insert(head);
                prev =head;
                head=head->next;
            }
            else
            {
                break;
            }
        }
        prev->next=NULL;
    }

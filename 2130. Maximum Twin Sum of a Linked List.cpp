class Solution {
public:
    ListNode *reverse(ListNode *head){
        ListNode *prev = NULL, *curr = head, *nxt = NULL;
        while(curr){
            nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    int pairSum(ListNode* head) {
        ListNode *slow = head , *fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow = reverse(slow);
        int maximum = slow->val + head->val;
        
        while(slow){
            maximum = max (maximum , slow->val + head->val);
            slow = slow->next;
            head = head->next;
        }
        return maximum;
    }
    
};


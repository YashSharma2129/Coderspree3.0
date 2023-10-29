/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return head;
        ListNode *tail=head,*ptr=head;
        int n=0;
        while(tail->next!=NULL){
            n++;
            tail=tail->next;
        }
        n++;
        k=k%n;
        // cout<<k<<endl;
        if(k==0)
            return head;
        int cnt=1;
        while(cnt<n-k){
            cnt++;
            ptr=ptr->next;
        }
        ListNode*ans=ptr->next;
        // cout<<ans->val<<endl;
        ptr->next=NULL;
        tail->next=head;
        return ans;
    }
};
#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=0;

        ListNode dummy(0);
        ListNode* curr=&dummy;
        while(l1||l2||carry){
            int sum=carry;
            if(l1){
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2){
                sum=sum+l2->val;
                l2=l2->next;
            }
            carry=sum/10;

            curr->next=new ListNode(sum%10);
            curr=curr->next;
            
        }
        return dummy.next;
            
        }


        
        
    
};
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        auto it1 = l1 , it2 =l2;
        auto it3 = ans;
        
        while(it1 != NULL && it2 != NULL){
            if(it1->val <= it2->val){
                
                it3->next = it1;
                it1 = it1->next;
            }else{
                it3->next = it2;
                it2 = it2->next;
            } 
            it3 = it3->next;
        }
        while(it1 != NULL){
            it3->next = it1;
            it1 = it1->next;
            it3 = it3->next;
            
        }
        while(it2 != NULL){
            it3->next = it2;
            it2 = it2->next;
            it3 = it3->next;
        }
        //cout << it->val;
        
        return ans->next;
    }
};

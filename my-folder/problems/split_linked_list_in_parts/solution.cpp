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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
      int listLength = 0;
      ListNode *tmp = head; // [1,2,3,4,5,6,7,8,9,10]
      vector<ListNode*> ret={};
  
      for(int i = 0; i < k; i++) {
        ret.push_back(nullptr);
      }
        
      while(tmp) {
        listLength = listLength + 1;
        tmp = tmp->next;
      }
  
      int partLength = (listLength / k);
      if (partLength <= 0) partLength = 1;
      int extraLength = 0;
      if (listLength > k) {
        extraLength = listLength % k ;// 10 除以 k 的餘數 = 2
      }
  
      ListNode *tmp2 = nullptr;        
      for(int i = 0; i < k; i++) { 
        if (extraLength <= 0) extraLength = 0;
        int oneMore = 0;
        if (extraLength > 0) {
          oneMore = 1;
        }
        ret[i] = head;
          
        for(int j = 0; j < partLength + oneMore; j++) {
          tmp2 = head;
          if (head) {
            head = head->next;
          }
        }
        extraLength = extraLength - 1;
        if (tmp2) tmp2->next = nullptr;
      }
        return ret;        
        
    }
};
    
    

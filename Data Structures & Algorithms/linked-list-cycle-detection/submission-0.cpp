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


/*
iterate through the linked list,
at head node, track which heads ive seen via a unordered_set
so at the start of each iteration of the list, i can say if ive seen this before,
if its true, then i say yes

*/
class Solution {
public:
    bool hasCycle(ListNode* head) {
    unordered_set<ListNode*> visited;
    ListNode* curr = head;

    while(true) {

        if(visited.contains(curr)) { //if visited contains a node we looked at already
            return true;
        } else {
            if(curr == nullptr) {return false;} //if we reached the end of the list
            visited.insert(curr); //if we havent, then we insert the current node 
        }
        curr = curr->next;
    }


    }
};

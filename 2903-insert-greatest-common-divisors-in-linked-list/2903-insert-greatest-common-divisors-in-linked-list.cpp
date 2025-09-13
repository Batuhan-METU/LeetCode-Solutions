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
    int GCD(int number1, int number2) {
        if (number1 == 0)
            return number2; 
        if (number2 == 0)
            return number1; 
        if (number1 > number2 && number1 % number2 == 0)
            return number2; 
        else if (number2 > number1 && number2 % number1 == 0)
            return number1; 
        else if (number1 > number2 && number1 % number2 != 0) {
            int remainder = number1 % number2; 
            return GCD(remainder, number2); 
        }
        else {
            int remainder = number2 % number1; 
            return GCD(remainder, number1); 
        }
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head -> next == NULL)
            return head; 
        
        ListNode *prev, *curr; 
        curr = head->next; 
        prev = head; 

        do 
        {
            ListNode* newNode = new ListNode(GCD(prev->val, curr->val)); 

            prev->next = newNode; 
            newNode->next = curr; 

            prev = curr; 
            curr = curr->next; 
        } while(curr != nullptr); 

        return head; 
    }
};
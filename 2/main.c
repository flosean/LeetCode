/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* add_node(struct ListNode* tar, int val) {
    struct ListNode* new_n;

    if ( tar == NULL ) {
        tar = malloc(sizeof(struct ListNode));
        tar->val = val;
        tar->next = NULL;
        return tar;
    }
    new_n = malloc(sizeof(struct ListNode));
    new_n->val = val;
    new_n->next = NULL;
    tar->next = new_n;

    return new_n;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *ans = NULL, *head;
    int i, j, k;

    ans = malloc(sizeof(struct ListNode));
    head = ans;
    j = 0;
    while ( 1 ) {
        if ( (l1 != NULL) && (l2 != NULL) ) {
            i = l1->val + l2->val;
            if ( j == 1 )
                i ++;
            if ( i >= 10 ) {
                i -= 10;
                j = 1;
            }
            else
                j = 0;
            ans = add_node(ans, i);
            l1 = l1->next;
            l2 = l2->next;
        }
        else if ( (l1 != NULL) && (l2 == NULL) ) {
            i = l1->val;
            if ( j == 1 )
                i ++;
            if ( i >= 10 ) {
                i -= 10;
                j = 1;
            }
            else
                j = 0;
            ans = add_node(ans, i);
            l1 = l1->next;
        }
        else if ( (l1 == NULL ) && (l2 != NULL) ) {
            i = l2->val;
            if ( j == 1 )
                i ++;
            if ( i >= 10 ) {
                i -= 10;
                j = 1;
            }
            else
                j = 0;
            ans = add_node(ans, i);
            l2 = l2->next;
        }
        else if ( (l1 == NULL) && (l2 == NULL) ) {
            if ( j == 0 )
                return head->next;
            else {
                ans = add_node(ans, 1);
                return head->next;
            }
        }
    }
}


int main(void)
{

    return 0;
}

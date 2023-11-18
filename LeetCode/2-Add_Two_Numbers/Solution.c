#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

// ! LEETCODE SECTION
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    int carry=0;
    struct ListNode *ans = (struct ListNode*)malloc(sizeof(struct ListNode)), *p=ans;

    p->val = l1->val + l2->val;
    if(p->val >= 10) {
        p->val -= 10; carry=1;
    }
    l1= l1->next; l2= l2->next;

    while(l1 != NULL && l2 != NULL) {
        p->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        p = p->next;
        if(carry == 0) {
            p->val = l1->val + l2->val;
            if(p->val >= 10) {
                p->val -= 10; carry=1;
            }
        }
        else {
            p->val = l1->val + l2->val + 1;
            if(p->val >= 10) {
                p->val %= 10; carry=1;
            }
            else
                carry = 0;
        }
        l1= l1->next;  l2= l2->next;
    }
    if(l1 == NULL) {
        while(l2 != NULL) {
            p->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            p = p->next;
            if(carry == 0) {
                p->val = l2->val;
                if(p->val >= 10) {
                    p->val -= 10; carry=1;
                }
            }
            else {
                p->val = l2->val + 1;
                if(p->val >= 10) {
                    p->val %= 10; carry=1;
                }
                else
                    carry = 0;
            }
            l2= l2->next;
        }
    }
    else if(l2 == NULL) {
        while(l1 != NULL) {
            p->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            p = p->next;
            if(carry == 0) {
                p->val = l1->val;
                if(p->val >= 10) {
                    p->val -= 10; carry=1;
                }
            }
            else {
                p->val = l1->val + 1;
                if(p->val >= 10) {
                    p->val %= 10; carry=1;
                }
                else
                    carry = 0;
            }
            l1= l1->next;
        }
    }

    if(carry == 1) {
        p->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        p = p->next;
        p->val = 1;
    }

    p->next = NULL;
    return ans;
}
// ! LEETCODE SECTION

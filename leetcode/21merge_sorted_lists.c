#include <stdlib.h>
#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1==0) return list2;
    if(!list2) return list1;
}
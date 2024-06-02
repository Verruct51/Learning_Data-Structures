// Created by 22343019_Alvin Anugerah Pratama
#include <stdio.h>
#include <stdlib.h>

struct Node {
     int data;
     struct Node* next;
};

void printList(struct Node* n)
{
     while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
     }
}

int main()
{
     struct Node* head = NULL;
     struct Node* second = NULL;
     struct Node* third = NULL;

     head = (struct Node*)malloc(sizeof(struct Node));
     second = (struct Node*)malloc(sizeof(struct Node));
     third = (struct Node*)malloc(sizeof(struct Node));

     head->data = 1;
     head->next = second;

     second->data = 2;
     second->next = third;

     third->data = 3;
     third->next = NULL;

     printf("\tFirst  : %d ", head->data);
     printf("\n\tSecond : %d ", second->data);
     printf("\n\tThird  : %d ", third->data);

     return 0;
}


// Created by 22343019_Alvin Anugerah Pratama
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main()
{
     struct node* head = NULL;
     struct node* second = NULL;
     struct node* third = NULL;

     head = (struct node*)malloc(sizeof(struct node));
     second = (struct node*)malloc(sizeof(struct node));
     third = (struct node*)malloc(sizeof(struct node));

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

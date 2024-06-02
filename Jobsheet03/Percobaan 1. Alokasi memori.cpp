// Created by 22343019_Alvin Anugerah Pratama
#include<stdio.h>
#include<stdlib.h>

typedef struct Employee {
    char name[40];
    int id;
};

main()
{
    int myInt;
    Employee john;

    printf("\tSize of int is %d\n",sizeof(myInt));
    printf("\tSize of int is %d\n",sizeof(int));
    printf("\tSize of Employee is %d\n",sizeof(Employee));
    printf("\tSize of john is %d\n",sizeof(john));
    printf("\tSize of char is %d\n",sizeof(char));
    printf("\tSize of short is %d\n",sizeof(short));
    printf("\tSize of int is %d\n",sizeof(int));
    printf("\tSize of long is %d\n",sizeof(long));
    printf("\tSize of float is %d\n",sizeof(float));
    printf("\tSize of double is %d\n",sizeof(double));

    return 0;
}


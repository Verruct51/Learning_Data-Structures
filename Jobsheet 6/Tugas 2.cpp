// Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack {
    int top;
    char data[MAX_SIZE];
};

void push(struct Stack *stack, char ch) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack->top++;
    stack->data[stack->top] = ch;
}

char pop(struct Stack *stack) {
    if (stack->top == -1) {
        printf("Stack underflow\n");
        return '\0';
    }
    char ch = stack->data[stack->top];
    stack->top--;
    return ch;
}

void balikKata(char *kata) {
    int length = strlen(kata);
    struct Stack stack;
    stack.top = -1;
    for (int i = 0; i < length; i++) {
        push(&stack, kata[i]);
    }
    for (int i = 0; i < length; i++) {
        kata[i] = pop(&stack);
    }
}

int main() {
    int choice;
    char kata[MAX_SIZE];
    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Input Kata\n");
        printf("2. Balik Kata\n");
        printf("3. Exit\n");
        printf("Pilihan: ");
        scanf("%d", &choice);fflush(stdin);
        switch (choice) {
            case 1:
                printf("Masukkan kata: ");
                scanf("%s", kata);fflush(stdin);
                break;
            case 2:
                balikKata(kata);
                printf("Kata setelah dibalik: %s\n", kata);
                break;
            case 3:
                exit(0);
            default:
                printf("Pilihan tidak valid\n");
        }
    }
    return 0;
}


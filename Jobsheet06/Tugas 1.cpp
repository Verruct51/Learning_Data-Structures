// Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Mahasiswa {
    char nim[10];
    char nama[50];
    float nilai;
};

struct Stack {
    int top;
    struct Mahasiswa data[MAX_SIZE];
};

void push(struct Stack *stack) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    struct Mahasiswa mhs;
    printf("Masukkan NIM: ");
    scanf("%s", mhs.nim);
    printf("Masukkan Nama: ");
    scanf(" %[^\n]s", mhs.nama);
    printf("Masukkan Nilai: ");
    scanf("%f", &mhs.nilai);
    stack->top++;
    stack->data[stack->top] = mhs;
    printf("Data berhasil ditambahkan ke stack\n");
}

void pop(struct Stack *stack) {
    if (stack->top == -1) {
        printf("Stack underflow\n");
        return;
    }
    printf("Data yang diambil dari stack:\n");
    printf("NIM: %s\n", stack->data[stack->top].nim);
    printf("Nama: %s\n", stack->data[stack->top].nama);
    printf("Nilai: %.2f\n", stack->data[stack->top].nilai);
    stack->top--;
}

void display(struct Stack *stack) {
    if (stack->top == -1) {
        printf("Stack kosong\n");
        return;
    }
    printf("Isi stack:\n");
    for (int i = stack->top; i >= 0; i--) {
        printf("NIM: %s\n", stack->data[i].nim);
        printf("Nama: %s\n", stack->data[i].nama);
        printf("Nilai: %.2f\n", stack->data[i].nilai);
    }
}

void swap(struct Mahasiswa *a, struct Mahasiswa *b) {
    struct Mahasiswa temp = *a;
    *a = *b;
    *b = temp;
}

void sort(struct Stack *stack) {
    if (stack->top == -1) {
        printf("Stack kosong\n");
        return;
    }
    for (int i = 0; i <= stack->top; i++) {
        for (int j = i + 1; j <= stack->top; j++) {
            if (stack->data[i].nilai < stack->data[j].nilai) {
                swap(&stack->data[i], &stack->data[j]);
            }
        }
    }
    printf("Data berhasil diurutkan secara descending berdasarkan nilai\n");
}

int main() {
    struct Stack stack;
    stack.top = -1;
    int choice;
    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Sort by Nilai\n");
        printf("5. Exit\n");
        printf("Pilihan: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push(&stack);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                display(&stack);
                break;
            case 4:
                sort(&stack);
                break;
            case 5:
                exit(0);
                default:
        printf("Pilihan tidak valid\n");
        }
    }
return 0;
}


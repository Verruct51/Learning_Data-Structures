/*
 Tampilkan bilangan Fibonaci pertama sampai ke-n menggunakan Pointer dengan
 Malloc, dimana n dimasukkan oleh user. Gunakan pengecekan pengalokasian dan
 fungsi free di akhir program.
*/

// Created by 22343019_Alvin Anugerah Pratama
#include <stdio.h>
#include <stdlib.h>

void fib(int n, int *arr)
{
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
}

int main()
{
    printf("=================================\n");
    printf(" Nama: Alvin Anugerah Pratama\n");
	printf(" Nim : 22343019\n");
	printf("=================================\n");

    int n;
    printf("\n");
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    int *fibonacci = (int *)malloc(n * sizeof(int));
    if (fibonacci == NULL) {
        printf("Memori gagal di alokasikan\n");
        exit(1);
    }

    fib(n, fibonacci);

    printf("Deret Bilangan Fibonacci : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");

    free(fibonacci);
    return 0;
}



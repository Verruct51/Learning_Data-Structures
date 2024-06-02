// Created by 22343019_Alvin Anugerah Pratama

/*
 Tampilkan bilangan Prima pertama sampai ke-n menggunakan Pointer dengan Malloc,
 dimana n dimasukkan oleh user. Gunakan fungsi realloc() untuk mengalokasikan
 ukuran memori yang baru (m), dimana m dimasukkan oleh user.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void prime(int n, int *arr, int *m)
{
    int count = 0, is_prime;
    for (int i = 2; count < n; i++) {
        is_prime = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            if (count == *m) {
                *m *= 2;
                arr = (int *)realloc(arr, (*m) * sizeof(int));
                if (arr == NULL) {
                    printf("Memori gagal di alokasikan\n");
                    exit(1);
                }
            }
            arr[count++] = i;
        }
    }
}

int main()
{
	printf("=================================\n");
    printf(" Nama: Alvin Anugerah Pratama\n");
	printf(" Nim : 22343019\n");
	printf("=================================\n");

    int n, m = 10;
    printf("\n");
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    int *primes = (int *)malloc(m * sizeof(int));
    if (primes == NULL) {
        printf("Memori gagal di alokasikan\n");
        exit(1);
    }

    prime(n, primes, &m);

    printf("Deret Bilangan Prima  : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");

    free(primes);
    return 0;
}

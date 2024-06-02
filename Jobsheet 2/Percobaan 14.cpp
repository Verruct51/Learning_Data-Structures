// Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>

int main()
{
	int usia1 = 50;
	int usia2 = 18;
	// menciptakan sebuah pointer
	int *ptr;
	// menugaskan pointer tersebut ke usia1
	ptr = &usia1; // & adalah operator alamat

	printf("\nUsia saya (usia1): %d\n", usia1); // menampilkan 50
	printf("Usia saya (*ptr): %d\n", *ptr); // menampilkan 50
	// *ptr merupakan nilai yang disimpan oleh ptr, yaitu 50
	printf("&usia1: %x\nptr: %x\n", &usia1, ptr);
	// ptr adalah alamat dari usia1, jadi juga merupakan &usia1. Keduanya sama

	// sekarang menugaskan ke usia2
	ptr = &usia2;

	printf("\nUsia saya (usia2): %d\n", usia2); // menampilkan 18
	printf("Usia anda (*ptr): %d\n", *ptr); // menampilkan 18
	// ptr adalah nilai yang disimpan oleh ptr, yaitu 18
	printf("&usia2: %x\nptr: %x\n", &usia2, ptr);
	// ptr adalah alamat dari usia2, jadi juga merupakan &usia2. Keduanya sama



return 0;
}


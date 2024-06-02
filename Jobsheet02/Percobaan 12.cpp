// Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>
#include <stdlib.h>

struct complex{
	int imag;
	float real;
};

struct number{
	struct complex comp;
	int integers;
}num1, num2;

struct details{
	struct number num1;
	struct number num2;
};

struct information{
	struct details det1;
	struct details det2;
};

struct personal_info{
	struct information info1;
	struct information info2;
};

int main(){
	struct personal_info me;



	printf("Masukkan informasi real pertama: ");
	scanf("%f", &me.info1.det1.num1.comp.real); fflush(stdin);

	printf("Masukkan informasi imag pertama: ");
	scanf("%d", &me.info1.det1.num1.comp.imag);fflush(stdin);

	printf("Masukkan informasi integer pertama: ");
	scanf("%d", &me.info1.det1.num1.integers);fflush(stdin);

	printf("\nInformasi complex pertama: %.2f + %di\n", me.info1.det1.num1.comp.real, me.info1.det1.num1.comp.imag);
	printf("Informasi integer pertama: %d\n", me.info1.det1.num1.integers);

	return 0;
}


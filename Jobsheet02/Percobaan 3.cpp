// Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>
int main()
{
	int n,i,angka[5];

	printf("\nMasukkan banyaknya bilangan : ");
	scanf("%d",&n);
	printf("\n");

	for (i=0; i<5; i++){
		printf("Masukkan angka ke %d :",i+1);
		scanf("%d",&angka[i]);
	}
	printf("\n");
	for (i=0; i<5; i++){
		printf("Angka ke %d : %d\n", i+1, angka[i]);
	}
	getchar();
	return 0;

}

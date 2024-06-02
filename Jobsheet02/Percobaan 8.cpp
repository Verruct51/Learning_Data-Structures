// Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef int angka;
typedef char huruf;

int main(){
    angka umur;
    huruf h;
    huruf nama[10];

    printf("Masukkan umur anda : ");scanf("%d",&umur);fflush(stdin);
    printf("Umur anda adalah %d",umur);
    printf("\nMasukkan huruf : "); h=getche();
    printf("\nHuruf anda %c",h);
    printf("\nMasukkan nama : ");
    gets(nama);
    printf("Nama anda %s",nama);
    getch();
}

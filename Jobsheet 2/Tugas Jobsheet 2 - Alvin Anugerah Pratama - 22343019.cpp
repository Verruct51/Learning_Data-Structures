// Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>
#include <stdlib.h>

typedef struct mahasiswa {
    char nama[30];
    char tgl[30];
    char nim[30];
    float ipk;

}Data;

int main (void)
{
    Data mhs01;

    printf("Masukkan Nama            : ");
    gets(mhs01.nama); fflush(stdin);
    printf("Masukkan Tanggal Lahir   : ");
    gets(mhs01.tgl); fflush(stdin);
    printf("Masukan NIM              : ");
    scanf("%s",mhs01.nim); fflush(stdin);
    printf("Masukkan Nilai IPK       : ");
    scanf("%f",&mhs01.ipk); fflush(stdin);

    printf("\nNama           : %s ",mhs01.nama);
    printf("\nTanggal Lahir  : %s ",mhs01.tgl);
    printf("\nNIM            : %s ",mhs01.nim);
    printf("\nNilai IPK      : %.2f \n",mhs01.ipk);

}

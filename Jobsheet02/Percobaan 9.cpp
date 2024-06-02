// Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int nik;
    char nama[25],alamat[30],status[25];
} ktp;

int main(){
    ktp myktp;

    printf("Nama\t: "); gets(myktp.nama); fflush(stdin);
    printf("NIK \t: "); scanf("%i", &myktp.nik);fflush(stdin);
    printf("Alamat\t: "); gets(myktp.alamat);
    printf("Kewarganegaraan\t: "); gets(myktp.status);

    return 0;
}

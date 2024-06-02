// Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>
#include <cstring>

typedef struct Mahasiswa{
    char nama[50],jurusan[50];
    int nilai;
}data;

int main(void)
{
    data mhs01;

    strcpy(mhs01.nama,"Alvin Anugerah Pratama");
    strcpy(mhs01.jurusan,"Informatika");
    mhs01.nilai = 100;

    printf("%s adalah mahasiswa jurusan %s ",mhs01.nama,mhs01.jurusan);
    printf("\n\nMemperoleh nilai UAS %i \n",mhs01.nilai);

    return 0;
}


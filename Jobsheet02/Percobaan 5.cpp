// Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>
#include <cstring>

struct Mahasiswa{
    char nama[50],jurusan[50];
    int nilai;
};


int main(void)
{
    struct Mahasiswa Mhs01;
    strcpy(Mhs01.nama,"Alvin Anugerah Pratama");
    strcpy(Mhs01.jurusan,"Informatika");
    Mhs01.nilai = 100;

    printf("%s adalah mahasiswa jurusan %s ",Mhs01.nama,Mhs01.jurusan);
    printf("\n\nMemperoleh nilai UAS %i \n",Mhs01.nilai);

    return 0;
}

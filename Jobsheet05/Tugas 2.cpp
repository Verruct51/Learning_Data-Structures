// Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct mobil {
    char no_plat[15];
    char merk[50];
    char pemilik[50];
    struct mobil *prev;
    struct mobil *next;
} Mobil;

Mobil *head = NULL;

void tambah_mobil(char *no_plat, char *merk, char *pemilik) {
    Mobil *mobil_baru = (Mobil*) malloc(sizeof(Mobil));
    strcpy(mobil_baru->no_plat, no_plat);
    strcpy(mobil_baru->merk, merk);
    strcpy(mobil_baru->pemilik, pemilik);
    mobil_baru->prev = NULL;
    mobil_baru->next = NULL;

    if (head == NULL) {
        head = mobil_baru;
    } else {
        Mobil *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = mobil_baru;
        mobil_baru->prev = current;
    }
}

void hapus_mobil(char *no_plat) {
    Mobil *current = head;
    while (current != NULL) {
        if (strcmp(current->no_plat, no_plat) == 0) {
            if (current->prev != NULL) {
                current->prev->next = current->next;
            } else {
                head = current->next;
            }
            if (current->next != NULL) {
                current->next->prev = current->prev;
            }
            free(current);
            return;
        }
        current = current->next;
    }
}

void tampilkan_mobil() {
    Mobil *current = head;
    while (current != NULL) {
        printf("No Plat: %s, Merk: %s,  Pemilik: %s\n", current->no_plat, current->merk, current->pemilik);
        current = current->next;
    }
}

int main() {
    tambah_mobil("BA 2134 XYZ", "Toyota Avanza     ",  "Marzuki");
    tambah_mobil("BM 6678 ABC", "Daihatsu Xenia    ",  "Otong");
    tambah_mobil("BK 2023 PQR", "Mitsubishi Xpander", "Riska");

    printf("Daftar antrian mobil:\n");
    tampilkan_mobil();

    printf("\nMenghapus mobil dengan no plat \"BK 2023 PQR\"...\n");
    hapus_mobil("BK 2023 PQR");

    printf("\nDaftar antrian mobil setelah mobil dihapus:\n");
    tampilkan_mobil();

    return 0;

}

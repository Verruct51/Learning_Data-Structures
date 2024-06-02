// Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct buku {
    char judul[50];
    char pengarang[50];
    int tahun;
    struct buku *prev;
    struct buku *next;
} Buku;

Buku *head = NULL;

void tambah_buku(char *judul, char *pengarang, int tahun) {
    Buku *buku_baru = (Buku*) malloc(sizeof(Buku));
    strcpy(buku_baru->judul, judul);
    strcpy(buku_baru->pengarang, pengarang);
    buku_baru->tahun = tahun;
    buku_baru->prev = NULL;
    buku_baru->next = NULL;

    if (head == NULL) {
        head = buku_baru;
    } else {
        Buku *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = buku_baru;
        buku_baru->prev = current;
    }
}

void hapus_buku(char *judul) {
    Buku *current = head;
    while (current != NULL) {
        if (strcmp(current->judul, judul) == 0) {
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

void tampilkan_buku() {
    Buku *current = head;
    while (current != NULL) {
        printf("Judul: %s, Pengarang: %s, Tahun: %d\n", current->judul, current->pengarang, current->tahun);
        current = current->next;
    }
}

int main() {
    tambah_buku("Tenggelamnya Kapal Van Der Wijck", "Hamka        ",1938);
    tambah_buku("Laskar Pelangi                  ", "Andrea Hirata",2005);
    tambah_buku("Perahu Kertas                   ", "Dewi Lestari ", 2009);

    printf("Buku yang tersedia:\n");
    tampilkan_buku();

    printf("\nMenghapus buku \"Perahu Kertas\"...\n");
    hapus_buku("Perahu Kertas");

    printf("\nBuku yang tersedia setelah dihapus:\n");
    tampilkan_buku();

    return 0;
}


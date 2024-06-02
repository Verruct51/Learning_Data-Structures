//Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>
#include <string.h>

#define MAX_MHS 100

struct Mahasiswa {
    int NIM;
    char Nama[50];
    char TTL[50];
    float IPK;
};

void sequentialSearch(struct Mahasiswa data[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (data[i].NIM == key) {
            printf("\nData ditemukan pada indeks ke-%d\n", i);
            printf("NIM     : %d\n", data[i].NIM);
            printf("Nama    : %s\n", data[i].Nama);
            printf("TTL     : %s\n", data[i].TTL);
            printf("IPK     : %.2f\n", data[i].IPK);
            return;
        }
    }
    printf("\nData tidak ditemukan\n", key);
}

void insertionSort(struct Mahasiswa data[], int n){
    int i, j;
    struct Mahasiswa key;
    for (i = 1; i < n; i++) {
        key = data[i];
        j = i - 1;
        while (j >= 0 && data[j].NIM > key.NIM) {
            data[j+1] = data[j];
            j = j - 1;
        }
        data[j+1] = key;
    }
}
void binarySearch(struct Mahasiswa data[], int n, int key){
    int low = 0, high = n - 1, mid;
    while (low <= high){
        mid = (low + high) / 2;
        if (data[mid].NIM == key){
            printf("\nData ditemukan pada indeks ke-%d\n", mid);
            printf("NIM     : %d\n", data[mid].NIM);
            printf("Nama    : %s\n", data[mid].Nama);
            printf("TTL     : %s\n", data[mid].TTL);
            printf("IPK     : %.2f\n", data[mid].IPK);
            return;
        }
        else if (data[mid].NIM < key){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    printf("\nData tidak ditemukan\n");
}
int main(){
    struct Mahasiswa data[MAX_MHS];
    int n, i, key, pilihan, lagi;
    printf("Masukkan jumlah data mahasiswa yang ingin di input : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("\nData ke-%d:\n", i+1);
        printf("NIM     : ");
        scanf("%d", &data[i].NIM);
        printf("Nama    : ");
        scanf(" %[^\n]", &data[i].Nama);
        printf("TTL     : ");
        scanf(" %[^\n]",& data[i].TTL);
        printf("IPK     : ");
        scanf("%f", &data[i].IPK);
    }
    insertionSort(data, n);
    do{
        printf("\nPilih Metode Pencarian\n");
        printf("======================\n");
        printf("1. Sequential Search\n");
        printf("2. Binary Search\n");
        printf("Pilihan : ");
        scanf("%d", &pilihan);
        printf("Masukkan NIM yang ingin dicari: ");
        scanf("%d", &key);
        if (pilihan == 1) {
            sequentialSearch(data, n, key);
        }
        else if (pilihan == 2) {
            binarySearch(data, n, key);
        }
        else {
            printf("Pilihan tidak valid\n");
        }
        printf("\nApakah Anda ingin mencari lagi? (1 = Ya, 0 = Tidak) ");
        scanf("%d", &lagi);
    } while (lagi == 1);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Bank{
    char nama[60];
    int nomor;
    struct Bank* lanjut;
}Bank;

Bank* kepala = NULL;

void inputAntrian(int nomor, char nama[]){
    Bank* antrian = (Bank*)malloc(sizeof(Bank));
    antrian -> nomor = nomor;
    strcpy(antrian->nama, nama);
    antrian -> lanjut = NULL;

    if(kepala == NULL){
        kepala = antrian;
    }
    else{
        Bank* sekarang = kepala;
        while ( sekarang -> lanjut != NULL){
            sekarang = sekarang -> lanjut;
        }
        sekarang -> lanjut = antrian;
    }
}

void cetakAntrian(){
    Bank* sekarang = kepala;
    printf("\nDaftar Data Nasabah   :\n");
    printf("=======================\n");
    printf("|No. Rek.|   Nasabah  |\n");
    printf("=======================\n");
    while (sekarang != NULL) {
        printf("| %-6d | %-10s |\n", sekarang -> nomor, sekarang -> nama);
        sekarang = sekarang -> lanjut;

    }
}

void swap(Bank* a, Bank* b){
    int ksgnomor = a -> nomor;
    char ksgnama [60];
    strcpy (ksgnama, a -> nama);

    a -> nomor = b -> nomor;
    strcpy (a -> nama, b -> nama);

    b -> nomor = ksgnomor;
    strcpy (b -> nama, ksgnama);
}

void sortirNasabah(){
    if (kepala == NULL || kepala -> lanjut == NULL)
        return;
    int tukar;
    Bank* urut1;
    Bank* urutn = NULL;

    do {
        tukar = 0;
        urut1 = kepala;

        while (urut1 -> lanjut != urutn){
            if (urut1 -> nomor > urut1 -> lanjut -> nomor){
                swap(urut1, urut1 -> lanjut);
                tukar = 1;
            }
            urut1 = urut1 -> lanjut;
        }
        urutn = urut1;
    }while (tukar);
}

void ubah(int nomor){
    Bank* sekarang = kepala;
    while (sekarang != NULL){
        if (sekarang -> nomor == nomor){
            printf("Masukkan nama baru : ");
            scanf("%s", sekarang -> nama);
            printf("Data nasabah dengan nomor %d berhasil diubah \n", nomor);
            return;
        }
        sekarang = sekarang -> lanjut;
    }
    printf("Data nasabah dengan nomor %d tidak ditemukan \n ", nomor);
}

void hapusData(int nomor){
    if (kepala == NULL){
        printf("Rekening Nasabah Kosong\n");
        return;
    }

    Bank* hapus = NULL;
    if (kepala -> nomor == nomor){
        hapus = kepala;
        kepala = kepala -> lanjut;
    }
    else {
        Bank* sekarang = kepala;
        while (sekarang -> lanjut != NULL){
            if (sekarang -> lanjut -> nomor == nomor){
                hapus = sekarang -> lanjut;
                sekarang -> lanjut = sekarang -> lanjut -> lanjut;
                break;
            }
            sekarang = sekarang -> lanjut;
        }
    }
    if (hapus != NULL){
        free(hapus);
        printf("Data nasabah %d berhasil dihapus\n", nomor);
    }
    else{
        printf("Data nasabah %d tidak ditemukan\n", nomor);
    }
}

Bank* cariData(int nomor){
    Bank* sekarang = kepala;
    while (sekarang != NULL){
        if (sekarang -> nomor == nomor){
            return sekarang;
        }
        sekarang = sekarang -> lanjut;
    }
    return NULL;
}

int main(){
    int pilih, nomor;
    char nama[60];

    printf("===========================================\n");
    printf("=  Nama         : ALVIN ANUGERAH PRATAMA  =\n");
    printf("=  NIM          : 22343019                =\n");
    printf("=  Mata Kuliah  : Prak. Struktur Data     =\n");
    printf("=  Sesi         : 202223430029            =\n");
    printf("===========================================\n\n");

    printf(" Program Rekening Nasabah Bank\n");
    printf("==============================\n\n");

    do{
        printf("Data Nasabah Bank : \n");
        printf("1. Tambah No. Rekening\n");
        printf("2. Lihat Rekening Nasabah\n");
        printf("3. Urutkan Data Nasabah\n");
        printf("4. Cari Data Nasabah \n");
        printf("5. Ubah Data Nasabah\n");
        printf("6. Hapus Data Nasabah\n");
        printf("0. Keluar\n");
        printf("Masukkan Pilihan Anda : ");
        scanf("%d", &pilih);
        switch(pilih){
            case 1:
                printf("\nMasukkan Nomor Rekening Anda : ");
                scanf("%d", &nomor);
                printf("Masukkan nama                : ");
                scanf("%s", &nama);
                inputAntrian(nomor, nama);
                printf("No. Rekening berhasil di tambahkan! \n\n");
                break;

            case 2:
                cetakAntrian();
                printf("\nDaftar Rekening Data Nasabah \n");
                break;

            case 3:
                sortirNasabah();
                printf("\nDaftar Nasabah Telah Diurutkan : \n\n");
                break;

            case 4:
                printf("Masukkan Nomor Rekening Yang Ingin Dicari : ");
                scanf("%d", &nomor);
                {
                    Bank* hasil = cariData(nomor);
                    if (hasil != NULL){
                        printf("Rekening dengan nomor %d ditemukan: %s \n", hasil -> nomor, hasil -> nama);
                    }
                    else {
                        printf("Rekening dengan nomor %d Tidak di temukan \n", nomor);
                    }
                }

            case 5:
                printf("\nMasukkan Data Nasabahh yang ingin diubah : \n");
                scanf("%d", &nomor);
                ubah(nomor);
                break;

            case 6:
                printf("Masukkan Data Nasabah yang ingin dihapus : \n");
                scanf("%d", &nomor);
                hapusData(nomor);
                break;

            case 0:
                printf("\nThank You!!!\n");
                printf("Senang Berbisinis Dengan Anda...\n");
                break;

            default:
                printf("Nomor pilihan tidak valid\n\n");

        }
    } while (pilih !=0);

    return 0;
}

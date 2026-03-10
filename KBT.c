#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int pilihanKelas;
    int pilihanDestinasi;
    int pilihanJam;
    int nomorKursi;
    int hargaTiket = 0;

    char namaKelas[20];
    char namaDestinasi[20];
    char namaJam[20];
    char namaKeberangkatan[] = "Laguboti";

    printf("==============================================\n");
    printf("Selamat Datang di Sistem Pemesanan Tiket KBT!\n");
    printf("Keberangkatan Anda dari: %s\n", namaKeberangkatan);
    printf("==============================================\n\n");

    printf("Silakan pilih jenis kelas angkutan:\n");
    printf("1. Ekonomi\n");
    printf("2. Eksekutif\n");
    printf("Pilihan Anda (1/2): ");
    while (scanf("%d", &pilihanKelas) != 1 || (pilihanKelas < 1 || pilihanKelas > 2)) {
        printf("Input tidak valid. Mohon masukkan angka 1 atau 2: ");
        clearInputBuffer();
    }
    clearInputBuffer();

    if (pilihanKelas == 1) {
        snprintf(namaKelas, sizeof(namaKelas), "Ekonomi");
    } else {
        snprintf(namaKelas, sizeof(namaKelas), "Eksekutif");
    }
    printf("Anda memilih kelas: %s\n\n", namaKelas);

    printf("Silakan pilih destinasi tujuan:\n");
    printf("1. Medan\n");
    printf("2. Parapat\n");
    printf("3. Siantar\n");
    printf("Pilihan Anda (1/2/3): ");
    while (scanf("%d", &pilihanDestinasi) != 1 || (pilihanDestinasi < 1 || pilihanDestinasi > 3)) {
        printf("Input tidak valid. Mohon masukkan angka 1, 2, atau 3: ");
        clearInputBuffer();
    }
    clearInputBuffer();

    switch (pilihanDestinasi) {
        case 1:
            snprintf(namaDestinasi, sizeof(namaDestinasi), "Medan");
            if (pilihanKelas == 1) {
                hargaTiket = 85000;
            } else {
                hargaTiket = 120000;
            }
            break;
        case 2:
            snprintf(namaDestinasi, sizeof(namaDestinasi), "Parapat");
            if (pilihanKelas == 1) {
                hargaTiket = 20000;
            } else {
                hargaTiket = 25000;
            }
            break;
        case 3:
            snprintf(namaDestinasi, sizeof(namaDestinasi), "Siantar");
            if (pilihanKelas == 1) {
                hargaTiket = 50000;
            } else {
                hargaTiket = 60000;
            }
            break;
    }
    printf("Anda memilih destinasi: %s dengan harga: Rp %d\n\n", namaDestinasi, hargaTiket);

    printf("Silakan pilih jam keberangkatan:\n");
    printf("1. Pagi (06.00)\n");
    printf("2. Siang (13.00)\n");
    printf("3. Malam (19.00)\n");
    printf("Pilihan Anda (1/2/3): ");
    while (scanf("%d", &pilihanJam) != 1 || (pilihanJam < 1 || pilihanJam > 3)) {
        printf("Input tidak valid. Mohon masukkan angka 1, 2, atau 3: ");
        clearInputBuffer();
    }
    clearInputBuffer();

    switch (pilihanJam) {
        case 1: snprintf(namaJam, sizeof(namaJam), "Pagi (06.00)"); break;
        case 2: snprintf(namaJam, sizeof(namaJam), "Siang (13.00)"); break;
        case 3: snprintf(namaJam, sizeof(namaJam), "Malam (19.00)"); break;
    }
    printf("Anda memilih jam keberangkatan: %s\n\n", namaJam);

    printf("Silakan pilih nomor bangku duduk (2-13):\n");
    printf("(Bangku 1 adalah supir)\n");
    printf("Nomor Bangku: ");
    while (scanf("%d", &nomorKursi) != 1 || (nomorKursi < 2 || nomorKursi > 13)) {
        printf("Input tidak valid. Mohon masukkan angka antara 2 dan 13: ");
        clearInputBuffer();
    }
    clearInputBuffer();
    printf("Anda memilih bangku nomor: %d\n\n", nomorKursi);

    printf("======================================\n");
    printf("          TIKET TELAH DIPESAN!\n");
    printf("======================================\n");
    printf("Detail Pesanan Anda:\n");
    printf("Transportasi  : KBT\n");
    printf("Keberangkatan : %s\n", namaKeberangkatan);
    printf("Destinasi     : %s\n", namaDestinasi);
    printf("Kelas         : %s\n", namaKelas);
    printf("Jam Berangkat : %s\n", namaJam);
    printf("Nomor Bangku  : %d\n", nomorKursi);
    printf("Total Harga   : Rp %d\n", hargaTiket);
    printf("======================================\n");

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char kode_kota[10];
    float berat_butet, berat_ucok, total_berat;
    float ongkir_per_kg, total_ongkir, diskon, ongkir_akhir;
    int is_luar_pulau;
    char nama_kota[20];

    // Bikin looping terus-terusan sampai user ketik "END"
    while (1) {
        scanf("%s", kode_kota);

        // Kalau inputnya END, langsung keluar dari looping
        if (strcmp(kode_kota, "END") == 0) {
            break;
        }

        scanf("%f", &berat_butet);

        // Menghitung berat paket Ucok (3/2 atau 1.5 dari berat Butet)
        berat_ucok = 1.5 * berat_butet;
        total_berat = berat_butet + berat_ucok;

        // Reset variabel untuk setiap perulangan
        is_luar_pulau = 0;
        ongkir_per_kg = 0;

        // Tentukan nama kota, ongkir per kg, dan status pulaunya
        if (strcmp(kode_kota, "MDN") == 0) {
            strcpy(nama_kota, "Medan");
            ongkir_per_kg = 8000;
        } else if (strcmp(kode_kota, "BLG") == 0) {
            strcpy(nama_kota, "Balige");
            ongkir_per_kg = 5000;
        } else if (strcmp(kode_kota, "JKT") == 0) {
            strcpy(nama_kota, "Jakarta");
            ongkir_per_kg = 12000;
            is_luar_pulau = 1; // 1 berarti Luar Pulau
        } else if (strcmp(kode_kota, "SBY") == 0) {
            strcpy(nama_kota, "Surabaya");
            ongkir_per_kg = 13000;
            is_luar_pulau = 1; // 1 berarti Luar Pulau
        } else {
            printf("Kode kota %s ga valid, masukin yang bener!\n", kode_kota);
            continue; // Skip ke perulangan berikutnya kalau kode ngaco
        }

        // Hitung total ongkos kirim kotor
        total_ongkir = total_berat * ongkir_per_kg;
        diskon = 0;
        char promo_info[100] = "Tidak ada promo";

        // Cek syarat promo Lebaran: Total berat > 10 kg DAN Luar Pulau
        if (total_berat > 10.0 && is_luar_pulau == 1) {
            diskon = total_ongkir * 0.10; // Diskon 10%
            strcpy(promo_info, "Diskon ongkir 10%% dan asuransi gratis");
        }

        // Hitung total ongkos kirim bersih setelah diskon
        ongkir_akhir = total_ongkir - diskon;

        // Cetak struknya
        printf("\n--- Struk Pembayaran Del-Express ---\n");
        printf("Kota Tujuan       : %s\n", nama_kota);
        printf("Berat Paket Butet : %.2f kg\n", berat_butet);
        printf("Berat Paket Ucok  : %.2f kg\n", berat_ucok);
        printf("Total Berat       : %.2f kg\n", total_berat);
        printf("Total Ongkir      : Rp %.2f\n", ongkir_akhir);
        printf("Promo Diperoleh   : %s\n", promo_info);
        printf("------------------------------------\n\n");
    }

    return 0;
}
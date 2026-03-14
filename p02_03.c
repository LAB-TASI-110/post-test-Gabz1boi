#include <stdio.h>

int main() {
    // Deklarasi variabel
    // Karena aku masih maba, aku pakai variabel satu-satu ya biar gampang dimengerti
    char nama[50];
    int teh_manis = 0, bengbeng = 0, nutrisari = 0, capucino = 0, pop_ice = 0;
    int tahu = 0, tempe = 0, bakwan = 0, risol = 0, roti_isi_ayam = 0;
    int tipe_pesanan, metode_bayar;
    int total_harga = 0;

    printf("============================================\n");
    printf("     SELAMAT DATANG DI KAFETARIA IT DEL     \n");
    printf("============================================\n");
    
    // 1. Meminta input nama tanpa fgets
    printf("Masukkan nama Anda: ");
    scanf(" %[^\n]s", nama); 

    // 2. Meminta input jumlah pesanan minuman
    printf("\n--- MENU MINUMAN (Semua Rp 5.000) ---\n");
    printf("Isi dengan angka 0 jika tidak memesan.\n");
    printf("Berapa gelas Teh Manis  : "); scanf("%d", &teh_manis);
    printf("Berapa gelas BengBeng   : "); scanf("%d", &bengbeng);
    printf("Berapa gelas Nutrisari  : "); scanf("%d", &nutrisari);
    printf("Berapa gelas Capucino   : "); scanf("%d", &capucino);
    printf("Berapa gelas Pop Ice    : "); scanf("%d", &pop_ice);

    // 3. Meminta input jumlah pesanan makanan ringan
    printf("\n--- MENU MAKANAN RINGAN (Semua Rp 5.000) ---\n");
    printf("Isi dengan angka 0 jika tidak memesan.\n");
    printf("Berapa potong Tahu           : "); scanf("%d", &tahu);
    printf("Berapa potong Tempe          : "); scanf("%d", &tempe);
    printf("Berapa potong Bakwan         : "); scanf("%d", &bakwan);
    printf("Berapa potong Risol          : "); scanf("%d", &risol);
    printf("Berapa potong Roti Isi Ayam  : "); scanf("%d", &roti_isi_ayam);

    // 4. Meminta input tipe pesanan
    printf("\n--- TIPE PESANAN ---\n");
    printf("1. Take Away\n");
    printf("2. Makan Disini\n");
    printf("Pilih tipe pesanan (1/2): ");
    scanf("%d", &tipe_pesanan);

    // 5. Meminta input metode pembayaran
    printf("\n--- METODE PEMBAYARAN ---\n");
    printf("1. Cash\n");
    printf("2. QRIS\n");
    printf("Pilih metode pembayaran (1/2): ");
    scanf("%d", &metode_bayar);

    // Menghitung total harga
    // Karena semua harga 5000, aku jumlahkan semua porsi lalu dikali 5000
    int total_porsi = teh_manis + bengbeng + nutrisari + capucino + pop_ice + 
                      tahu + tempe + bakwan + risol + roti_isi_ayam;
    total_harga = total_porsi * 5000;

    // 6. Menampilkan semua hasil inputan / Struk Pesanan
    printf("\n\n============================================\n");
    printf("              STRUK PESANAN ANDA            \n");
    printf("============================================\n");
    printf("Nama Pelanggan  : %s\n", nama);
    
    printf("Tipe Pesanan    : ");
    if(tipe_pesanan == 1) {
        printf("Take Away\n");
    } else {
        printf("Makan Disini\n");
    }

    printf("Metode Bayar    : ");
    if(metode_bayar == 1) {
        printf("Cash\n");
    } else {
        printf("QRIS\n");
    }
    printf("--------------------------------------------\n");
    
    printf("Rincian Menu yang Dipesan:\n");
    // Hanya menampilkan menu yang jumlah pesanannya lebih dari 0
    if(teh_manis > 0) printf("- Teh Manis        : %d porsi\n", teh_manis);
    if(bengbeng > 0) printf("- BengBeng         : %d porsi\n", bengbeng);
    if(nutrisari > 0) printf("- Nutrisari        : %d porsi\n", nutrisari);
    if(capucino > 0) printf("- Capucino         : %d porsi\n", capucino);
    if(pop_ice > 0) printf("- Pop Ice          : %d porsi\n", pop_ice);
    if(tahu > 0) printf("- Tahu             : %d porsi\n", tahu);
    if(tempe > 0) printf("- Tempe            : %d porsi\n", tempe);
    if(bakwan > 0) printf("- Bakwan           : %d porsi\n", bakwan);
    if(risol > 0) printf("- Risol            : %d porsi\n", risol);
    if(roti_isi_ayam > 0) printf("- Roti Isi Ayam    : %d porsi\n", roti_isi_ayam);
    
    printf("--------------------------------------------\n");
    printf("Total Porsi     : %d porsi\n", total_porsi);
    printf("Total Pembayaran: Rp %d\n", total_harga);
    printf("============================================\n");
    printf("     Terima kasih! Silahkan ditunggu...     \n");
    printf("============================================\n");

    return 0;
}
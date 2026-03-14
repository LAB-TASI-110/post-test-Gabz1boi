#include <stdio.h>

int main() {
    int n;
    
    printf("Berapa banyak data stoknya le? ");
    scanf("%d", &n);
    
    int stok[n];
    
    printf("Masukkan deret stoknya (pisahkan pake spasi aja): ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &stok[i]);
    }
    
    int kategori;
    printf("Pilih kategori (1 buat Seragam/Ganjil, 2 buat Sembako/Genap): ");
    scanf("%d", &kategori);
    
    int total = 0;
    
    for(int i = 0; i < n; i++) {
        if(kategori == 1 && i % 2 == 0) {
            total += stok[i];
        } else if(kategori == 2 && i % 2 != 0) {
            total += stok[i];
        }
    }
    
    printf("Total stok buat kategori %d itu ada: %d\n", kategori, total);
    
    return 0;
}
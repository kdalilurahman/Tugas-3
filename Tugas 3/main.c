#include <stdio.h>
#include <stdlib.h>

// TUGAS 3 MENGECEK TIPE FILE
// NAMA: Kadhan D
// NIM : 13220001

int main()
{
    // KAMUS
    FILE *buka_file;
    char nama_file[255] = "";
    char buff[255];

    // ALGORITMA
    printf("Masukkan nama file anda: ");
    scanf("%s", &nama_file);
    buka_file = fopen(nama_file, "r");
    if (buka_file == NULL){
        printf("\nFile tidak dapat ditemukan!");
        exit(-1);
    }
    fgets(buff, 255, buka_file);
    printf("%s", buff);
    if (buff =="%PDF-1.7"){
        printf("\nFile anda bertipe '.PDF'");
    }
    fclose(buka_file);
}

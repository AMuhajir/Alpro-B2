/*Nama File     : TunjAnak.c*/
/*Deskripsi     : Menerima jumlah anak dan gaji pokok dan mengeluarkan tunjangan anak yang diberikan berdasarkan aturan yang sudah ditentukan*/
/*Pembuat       : Ahmad Muhajir*/
/*Tgl Pembuatan : Minggu,20 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int i,j;

    //algoritma
    printf("Masukkan gaji:");
    scanf("%d", &i);
    printf("Masukkan jumlah anak:");
    scanf("%d", &j);

    if (i > 0 && j >= 0) {
        if (0 <= j && j < 3) {
            printf("Tunjangan sebesar %d", (j*(i*10/100)));
        }
        else {
            printf("Tunjangan sebesar %d", (3*(i*10/100)));
        }

    }
    else {
        printf("Jumlah gaji atau anak tidak benar");
    }

    return 0;
}

/*Nama File     : CekBulan.c*/
/*Deskripsi     : Mengecek bulan apa*/
/*Pembuat       : Ahmad Muhajir*/
/*Tgl Pembuatan : Minggu,13 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int i;

    //algoritma
    printf("Masukkan bilangan antara 1-12:");
    scanf("%d", &i);

    switch (i) {
case 1 :
    printf("Januari");
    break;
case 2 :
    printf("Februari");
    break;
case 3 :
    printf("Maret");
    break;
case 4 :
    printf("April");
    break;
case 5 :
    printf("Mei");
    break;
case 6 :
    printf("Juni");
    break;
case 7 :
    printf("Juli");
    break;
case 8 :
    printf("Agustus");
    break;
case 9 :
    printf("September");
    break;
case 10 :
    printf("Oktober");
    break;
case 11 :
    printf("November");
    break;
case 12 :
    printf("Desember");
    break;
default :
    printf("Masukan nomor bulan tidak tepat ");
    break;
    }
    return 0;
}

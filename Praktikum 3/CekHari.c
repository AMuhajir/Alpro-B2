/*Nama File     : CekHari.c*/
/*Deskripsi     : Mengecek hari apa*/
/*Pembuat       : Ahmad Muhajir*/
/*Tgl Pembuatan : Minggu,13 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int i;

    //algoritma
    printf("Masukkan bilangan antara 1-7:");
    scanf("%d", &i);

    switch (i) {
case 1 :
    printf("Hari Senin");
    break;
case 2 :
    printf("Hari Selasa");
    break;
case 3 :
    printf("Hari Rabu");
    break;
case 4 :
    printf("Hari Kamis");
    break;
case 5 :
    printf("Hari Jumat");
    break;
case 6 :
    printf("Hari Sabtu");
    break;
case 7 :
    printf("Hari Minggu");
    break;
default :
    printf("Masukan nomor hari tidak tepat");
    break;
    }
    return 0;
}

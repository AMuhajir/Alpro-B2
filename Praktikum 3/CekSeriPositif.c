/*Nama File     : CekSeriPositif.c*/
/*Deskripsi     : Menerima 3 buah bilangan yang harus positif dan menjumlahkan ketiganya*/
/*Pembuat       : Ahmad Muhajir*/
/*Tgl Pembuatan : Minggu,13 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int i,j,k;

    //algoritma
    printf("Masukkan bilangan pertama:");
    scanf("%d", &i);
    printf("Masukkan bilangan kedua:");
    scanf("%d", &j);
    printf("Masukkan bilangan ketiga:");
    scanf("%d", &k);
    if (i < 0 || j < 0 || k < 0) {
            printf("Masukan tahanan tidak boleh negatif");
    }
    else {
            printf("Total ketiga bilangan adalah %d", (i+j+k));
    }

    return 0;
}

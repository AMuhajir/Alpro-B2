/*Nama File     : TarifPLN.c*/
/*Deskripsi     : menerima jumlah pemakaian listrik dan mengeluarkan tarif listrik berdasarkan golongannya*/
/*Pembuat       : Ahmad Muhajir*/
/*Tgl Pembuatan : Minggu,20 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int i,j;

    //algoritma
    printf("Masukkan nomor golongan:");
    scanf("%d", &i);
    printf("Masukkan pemakaian listrik(dalam kWh):");
    scanf("%d", &j);

    if ((i==1 || i==2) && j>0) {
        if (j<=100) {
            if (i==1) {
                printf("Tagihan sebesar 100000");
            }
            else {
                printf("Tagihan sebesar 200000");
            }
        }
        else if  (100<j && j<1000) {
            if (i==1) {
                printf("Tagihan sebesar %d", (1000*j));
            }
            else {
                printf("Tagihan sebesar %d", (2000*j));
            }
        }
        else {
            if (i==1) {
                printf("Tagihan sebesar %d", ((1000*j)+(1000*j*10/100)));
            }
            else {
                printf("Tagihan sebesar %d", ((2000*j)+(2000*j*10/100)));
            }
        }
    }
    else {
        printf("Golongan atau pemakaian listrik salah");
    }

    return 0;
}

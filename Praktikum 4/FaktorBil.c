/*Nama File     : TarifPLN.c*/
/*Deskripsi     : mengeluarkan faktor-faktor dari sebuah bilangan sembarang N*/
/*Pembuat       : Ahmad Muhajir*/
/*Tgl Pembuatan : Minggu,20 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int i,N;

    //algoritma
    printf("Masukkan bilangan yang mau dicari faktornya:");
    scanf("%d", &N);

    if (N<=0){
        printf("N harus positif");
    }
    else {
        for (i=1;i<=N;i++) {
            if (N % i == 0){
                printf("%d ", i);
            }
        }
    }

    return 0;
}

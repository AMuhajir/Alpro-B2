/*Nama File     : CekPrima.c*/
/*Deskripsi     : mengecek apakah bilangan prima*/
/*Pembuat       : Ahmad Muhajir*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int n,i,prima = 1;

    //algoritma
    printf("Masukkan sebuah bilangan: ");
    scanf("%d",&n);

    if (n<0){
        printf("Bilangan harus positif");
    }
    else {
        if(n == 0 || n == 1) {
        prima = 0;
        }
        else {
            for (i = 2; i <= n/2; i++) {
                if (n % i == 0) {
                prima = 0;
                }
            }
        }

            if (prima == 1)
                printf("%i adalah prima",n);
            else
                printf("%i bukan prima",n);
        }

 return 0;
}

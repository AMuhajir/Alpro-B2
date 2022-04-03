/*Nama File     : Tetris1.c*/
/*Deskripsi     : menerima N>0 dan menyusun "*" seperti contoh berikut jika N = 5
                    ***** --5
                    **** --4
                    *** --3
                    ** --2
                    * --1
                                        */
/*Pembuat       : Ahmad Muhajir*/

#include <stdio.h>

int main()
{
    //kamus
        int n, i, x;

    //algoritma
    printf("Masukkan bilangan: ");
    scanf("%d", &n);
    if(n<=0){
        printf("Bilangan tidak bisa negatif");
    }
    else{
        for (i=n; i>=1; i--){
            x = 1;
            do{
                printf("*");
                x = x + 1;
            } while (x <= i);
            printf("\n");
        }
    }
return 0;
}

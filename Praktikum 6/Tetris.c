/*Nama File     : Tetris.c*/
/*Deskripsi     : menerima N>0 dan menyusun "*" seperti contoh berikut jika N = 5
                    * --1
                    ** --2
                    *** --3
                    **** --4
                    ***** --5
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
        for (i=1; i<=n; i++){
            x = 0;
            do{
                printf("*");
                x = x + 1;
            } while (x < i);
            printf("\n");
        }
    }
return 0;
}

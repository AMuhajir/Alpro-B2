/*Nama File     : CekSempurna.c*/
/*Deskripsi     : mengecek apakah bilangan sempurna*/
/*Pembuat       : Ahmad Muhajir*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int i,j=0,n;

    //algoritma
    printf("Masukkan sebuah bilangan: ");
    scanf("%d",&n);

    if (n<0){
        printf("Bilangan tidak boleh negatif");
    }
    else{
        for(i=1; i<n; i++){
            if (n % i==0){
                j = j + i;
            }
        }
        if(j == n){
            printf("Bilangan adalah bilangan sempurna");
        }
        else{
            printf("Bilangan tidak sempurna");
        }
    }

return 0;
}

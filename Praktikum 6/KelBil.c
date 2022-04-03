/*Nama File     : KelBil.c*/
/*Deskripsi     : menemukan kelipatan bilangan terkecil dari sebuah array 3 integer*/
/*Pembuat       : Ahmad Muhajir*/

#include <stdio.h>

int main()
{
    //kamus
    int bil[3];
    int i;

    //algoritma
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bil[0]);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bil[1]);
    printf("Masukkan bilangan ketiga: ");
    scanf("%d", &bil[2]);
    if (bil[0] > 0 && bil[1] > 0 && bil[2] > 0){
        for (i= 1; i <= bil[0]*bil[1]*bil[2]; i++){
            if ((i % bil[0] == 0) && (i % bil[1] == 0) && (i % bil[2] == 0)){
                printf("Kelipatan terkecil dari array adalah %d", i);
                break;
            }
        }
    }
    else{
        printf("Bilangan harus positif");
    }
return 0;
}

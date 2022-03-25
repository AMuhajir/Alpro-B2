/*Nama File     : SiputNaik.c*/
/*Deskripsi     : Seekor siput yang berada pada sebuah lubang sedalam N meter (N
                dimasukan melalui keyboard yang nilai N>0). Siput pada setiap pagi hari akan mengalami
                kenaikan sebesar 0.3 meter, sedangkan setiap malam hari akan mengalami penurunan sebesar
                0.1 meter. Menghitung berapa hari yang dibutuhkan sampai siput keluar.*/
/*Pembuat       : Ahmad Muhajir*/

#include <stdio.h>

int main()
{
    //kamus
    float j=0, n;
    int i=0;

    //algoritma
    printf("Masukkan kedalaman lubang: ");
    scanf("%f", &n);
    if(n<0){
        printf("Bilangan tidak bisa negatif");
    }
    else{
        while (j<n){
            j = j + 0.3;
            i++;
            if (j != n){
                j = j - 0.1;
            }
        }
        if (j == n){
        }
    }
    printf("Siput butuh %d hari untuk keluar", i);

return 0;
}

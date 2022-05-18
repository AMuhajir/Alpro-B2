#include <stdio.h>
#include <string.h>

void main()
{
    char str[50], *ptr;
    int len = 0, i;
    char C;
    printf("Masukkan kalimat:\n");
    scanf("%[^\n]s", str);
    ptr = str;
    len = strlen(str);
    printf("Setelah di inverese:\n");
    for (i = len - 1; i >= 0;i--)
    {

        C = str[i];
        printf("%c", C);
    }
}

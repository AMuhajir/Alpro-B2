#include <stdio.h>
#include <string.h>

void main()
{
    char s[1000];
    int count = 0, i;

    printf("Masukan kalimat:\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;
    }
    printf("Jumlah kata dalam kalimat adalah: %d\n", count + 1);
}

#include <stdio.h>
#include <string.h>

void main()
{
    char string[25], palin[25] = {'\0'};
    int  i, length = 0, flag = 0;

    fflush(stdin);
    printf("Enter a string \n");
    gets(string);

    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    for (i = length - 1; i >= 0; i--)
    {
       palin[length - i - 1] = string[i];
    }
    for (i = 0; i < length; i++)
    {
        if (palin[i] == string[i])
            flag = 1;
        else
            flag = 0;
    }
    if (flag == 1)
        printf("%s adalah sebuah palindrom \n", string);
    else
        printf("%s bukan sebuah palindrom \n", string);
}

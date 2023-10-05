/*string uppercase*/

#include<stdio.h>

void string_uppercase(char *str);

int main()
{
    char str[50];
    printf("Enter the string: ");
    gets(str);
    string_uppercase(str);
    printf("String uppercase : %s\n",str);
    return 0;
}

void string_uppercase(char *str)
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] > 90)
        str[i] = str[i] - 32;
        i++;
    }
}
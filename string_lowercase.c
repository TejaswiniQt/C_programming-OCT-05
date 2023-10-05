/*string lowercase*/

#include<stdio.h>

void string_lowercase(char *str);

int main()
{
    char str[50];
    printf("Enter the string: ");
    gets(str);
    string_lowercase(str);
    printf("%s\n",str);
    return 0;
}

void string_lowercase(char *str)
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] < 97)
        str[i] = str[i] + 32;
        i++;
    }
}

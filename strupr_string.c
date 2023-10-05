/*string uppercase*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter the string: ");
    gets(str);
    printf("String uppercase: %s\n",strupr(str));
    return 0;
}
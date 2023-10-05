/*String length */

#include<stdio.h>

int str_length(char str[]);

int main()
{
    char str[50];
    int length;
    printf("Enter the string: ");
    fgets(str,50,stdin);
    //scanf("%[^\n]s",str);
    length = str_length(str);
    printf("Length of the string is: %d\n",length);
    return 0;
}

int str_length(char str[])
{
    int count =0 ;
    while(*str)
    {
        count++;
        str++;
    }
    return count;
}
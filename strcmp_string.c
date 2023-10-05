/*string compare*/

#include<stdio.h>
#include<string.h>

int string_compare(const char *str1,const char *str2);

int main()
{
    char str1[100];
    char str2[100];
    int res;
    printf("Enter string1: ");
    gets(str1);
    printf("Enter string2: ");
    gets(str2);
    res = string_compare(str1,str2);
    if(res == 0)
    printf("strings are equal\n");
    else
    printf("Strings are not equal\n");
    return 0;
}

int string_compare(const char *str1, const char *str2)
{
    int result;
    result = strcmp(str1,str2);
    return result;
}
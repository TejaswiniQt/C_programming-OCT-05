/* String compare */

#include<stdio.h>

int string_compare(const char* str1, const char* str2);

int main()
{
    char str1[100],str2[100];
    int res;
    printf("Enter string1: ");
    fgets(str1,100,stdin);
    printf("Enter string2: ");
    fgets(str2,100,stdin);
    res = string_compare(str1,str2);
    if(res == 0)
    printf("Strings are equal\n");
    else
    printf("Strings are not equal\n");
    return 0;
}

int string_compare(const char* str1, const char* str2)
{
    int result,i=0;
    while(str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            result = 1;
            break;
        }
        else
        result = 0;
        i++;
    }
    return result;
}
/*strcat*/

/*string concatenation*/

#include<stdio.h>
#include<string.h>

void string_concatenation(const char *src_str,char * des_str);

int main()
{
    char src_str[100],des_str[100];
    printf("Enter src string: ");
    gets(src_str);
    printf("Enter dest string: ");
    gets(des_str);
    string_concatenation(src_str,des_str);
    printf("String after concatenation: %s\n",des_str);
    return 0;
}

void string_concatenation(const char *src_str,char * des_str)
{
    strcat(des_str,src_str);
}
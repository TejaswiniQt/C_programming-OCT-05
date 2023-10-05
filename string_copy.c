/* String copy */

#include<stdio.h>

void string_copy(char *src_str,char *des_str);

int main()
{
    char src_str[100],des_str[100];
    printf("Enter the string: ");
    fgets(src_str,100,stdin);
    //scanf("%[^\n]s",src_str);
    string_copy(src_str,des_str);
   printf("%s\n",des_str);
    return 0;
}

void string_copy(char *src_str,char *des_str)
{
    int i=0;
    while(src_str[i] != '\0')
    {
        if(src_str[i] != '\n')
        des_str[i] = src_str[i];
        i++;
    }
    des_str[--i] = '\0';
}
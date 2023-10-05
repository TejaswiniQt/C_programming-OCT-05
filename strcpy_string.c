/* String copy */

#include<stdio.h>
#include<string.h>

int main()
{
    char src_str[100],des_str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",src_str);
    //fgets(src_str,100,stdin);
    strcpy(des_str,src_str);
    printf("After strcpy:\n");
    printf("%s\n%s",des_str,src_str);
    return 0;
}
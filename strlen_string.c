/*string lengh*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int length;
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    length = strlen(str);
    printf("Length of the string is: %d\n",length);
    return 0;
}
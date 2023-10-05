/* strstr */

#include<stdio.h>
#include<string.h>

char *str_str(char *str1,char *str2);

int main()
{
    char str1[100],str2[100];
    printf("Enter the string1: ");
    gets(str1);
    printf("Enter the string2: ");
    gets(str2);
    char *ptr = str_str(str1,str2);
    if(ptr == NULL)
    printf("Unable to find string\n");
    else
    printf("%s\n",ptr);
    return 0;
}

char *str_str(char *str1,char *str2)
{
    int i=0,j=0,length,count=0;
    char *ptr;
    for(i=0; i<strlen(str1); i++)
    {
      for(j=0; j<strlen(str2); j++)
      {
        if(str1[i+j] != str2[j])
        break;
      }
       if(j == strlen(str2))
        {
          ptr = &str1[i];
          break;
        }
        else
        ptr = NULL;
    }
    return ptr;
}
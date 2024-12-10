#include<stdio.h>
#include<string.h>
int main()
{
    char f_name[20], l_name[20], name[50];
    printf("enter your first name:");
    scanf("%s", f_name);
    printf("enter your last name:");
    scanf("%s", l_name);
    //strcpy => string copy -> strcpy(resultstring,orgstring)
    strcpy(name, f_name);
    //strcpy => string concatenation -> strcat(result_str,str_org)
    //ex: str1 = "nadiya" str2 = "taj" -> strcat(str1,str2) => str = nadiyataj
    strcpy(name, l_name);
    printf("full name:%s\n", name); //using string handling functions
    printf("full name: %s %s\n", f_name, l_name);
    printf("full name in upper case:%s\n", strupr(name));
    printf("full name in lower case:%s\n",strlwr(name));
    printf("full name is reversed:%s",strrev(name));
}
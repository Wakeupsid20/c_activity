#include<stdio.h>
void input_two_strings(char *str1, char *str2); 
int stringcompare(char *str1, char *str2);
void output(char *str1, char *str2, int result);


int main()
{
    char str1[50], str2[50];
    int result;
    input_two_strings(str1,str2);
    result=stringcompare(str1,str2);
    output(str1,str2,result);
    return 0;
} 
void input_two_strings(char *str1, char *str2)
{
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
}
int stringcompare(char *str1, char *str2)
{
    int i,k=0;
    for(i=0;str1[i]!=0||str2[i]!=0;i++)
    {
        if(str1[i]<str2[i])
        {
            k=-1;
            break;
        }
        else if (str1[i]>str2[i])
        {
            k=1;
            break;
        }
        else
        {
            k=0;
        }
    }
    return k;
}
void output(char *str1, char *str2, int result)
{
    if(result==-1)
    printf("%s is grater than %s",str2,str1);
    else if(result==1)
    printf("%s is smaller than %s",str1,str2);
    else
    printf("%s and %s are equal",str1,str2);
}
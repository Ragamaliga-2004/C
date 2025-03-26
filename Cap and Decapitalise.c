#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,len;
    scanf("%[^\n]s",s1);
    scanf("%s", s2);
    len=strlen(s1);
    for(i=0; i<len; i++)
    {
        if(s1[i]==s2[0])
        {
        if((s1[i]>='a') && (s1[i]<='z'))
        {
            s1[i]=s1[i]-32;
        }
        else if((s1[i]>='A')&&(s1[i]<='Z'))
        {
            s1[i]=s1[i]+32;
        }
    }
    }
    printf("%s", s1);
    return 0;
}

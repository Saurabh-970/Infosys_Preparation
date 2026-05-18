#include<stdio.h>
#include<string.h>

void Reverse(char str[])
{
    char *iStart = str;
    char *iEnd = str;
    char temp = {'\0'};

    while(*iEnd != '\0')
    {
        iEnd++;
    }
    iEnd--;

    while(iStart <= iEnd)
    {
        temp = *iStart;
        *iStart = *iEnd;
        *iEnd = temp;

        iStart++;
        iEnd--;
    }
}
int main()
{
    char str[] = "Hello";

    Reverse(str);

    printf("%s",str);

    return 0;
}
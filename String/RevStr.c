#include<stdio.h>
#include<string.h>

void ReveString(char str[])
{
    char *iStart = str;
    char *iEnd = str;
    char iTemp = 0;

    while(*iEnd != '\0')
    {
        iEnd++;

    }
    iEnd--;

    while(iStart <= iEnd)
    {
        iTemp =  *iStart;
        *iStart = *iEnd;
        *iEnd = iTemp;

        iStart++;
        iEnd--;
    }
}
int main()
{
    char Arr[] = "Hello";

    ReveString(Arr);

    printf("%s ",Arr);
}
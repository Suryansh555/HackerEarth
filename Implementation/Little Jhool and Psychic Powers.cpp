#include <stdio.h>

#include <string.h>

int main(){

    char s[101];

    scanf("%s",&s);

 

    int len = strlen(s);

 

    if(len < 6)

    {

        printf("Good luck!");

        return 0;

    }

    int zseq = 0, oseq = 0, maxz = 0, maxo = 0;

    for(int  i = 0; i < len; i++)

    {

        if(s[i] == '0')

        {

            oseq=0;

            zseq++;

        }

        else

        {

            oseq++;

            zseq=0;

        }

        maxz = maxz>zseq?maxz:zseq;

        maxo = maxo>oseq?maxo:oseq;

    }

 

    if(maxz >= 6 || maxo >= 6)

        printf("Sorry, sorry!");

    

    else

        printf("Good luck!");

    return 0;

}
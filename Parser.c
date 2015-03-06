

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int parseString(char *str, char *delims, char **pieces);
 
int main()
{
    char str[] = " now # is # the  time for# all # good men to come to the # aid of their country";
    char delims[] = "#";
    char **words;
    int i, length;
 
    length=parseString(str,delims,words);
    for(i=0;i<length;i++)
        printf("%sn",words[i]);
 
    return 0;
}
 
int parseString(char *str, char *delims, char **pieces)
{
    int index=0;
    char *token = NULL;
    token = strtok( str, delims );
    while( token != NULL )
    {
        pieces[index++] = token;
        token = strtok(NULL,delims);
    }
    return index;
}

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int isalnum(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
            i++;
        else
            return(0);
    }
    return(1);
}
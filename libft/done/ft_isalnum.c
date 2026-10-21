#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isalnum(char *str)
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

int main(int argc, char **argv)
{
    (void) argc;
    printf("%d\n", ft_isalnum(argv[1]));
    return(0);
}
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isprint(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if((str[i] >= 32 && str[i] <= 126) || str[i] == ' ')
            i++;
        else
            return(0);
    }
    return(1);
}

int main(int argc, char **argv)
{
    (void) argc;
    printf("%d\n", ft_isprint(argv[1]));
    return(0);
}
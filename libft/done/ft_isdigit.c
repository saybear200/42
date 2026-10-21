#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isdigit(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return(0);
    }
    return(1);
}

int main(int argc, char **argv)
{
    (void) argc;
    printf("%d\n", ft_isdigit(argv[1]));
    return(0);
}
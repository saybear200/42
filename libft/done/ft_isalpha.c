#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isalpha(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            i++;
        else
            return(0);
    }
    return(1);
}

int main(int argc, char **argv)
{
    (void) argc;
    printf("%d\n", ft_isalpha(argv[1]));
    return(0);
}
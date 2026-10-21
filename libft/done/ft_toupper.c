#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_toupper(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(!(str[i] >= 'a' && str[i] <= 'z'))
            i++;
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    return(str);
}

int main(int argc, char **argv)
{
    (void) argc;
    printf("%s\n", ft_toupper(argv[1]));
    return(0);
}
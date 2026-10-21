#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_tolower(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(!(str[i] >= 'A' && str[i] <= 'Z'))
            i++;
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    return(str);
}

int main(int argc, char **argv)
{
    (void) argc;
    printf("%s\n", ft_tolower(argv[1]));
    return(0);
}
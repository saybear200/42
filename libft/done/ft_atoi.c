#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int i;
    int a;
    int sinal;

    a = 0;
    i = 0;
    sinal = 1;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sinal = sinal * -1;
            i++;
        }
        else 
            i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        a = (a * 10) + (str[i] - '0');
        i++;
    }
    return(a*sinal);
}

int main(int argc, char **argv)
{
    (void) argc;
    printf("%d\n", ft_atoi(argv[1]));
    printf("%d\n", atoi(argv[1]));
    return(0);
}
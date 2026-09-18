#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int ft_recursive_factorial(int nb)
{
    if (nb <= 1)
        return(1);
    return (nb * ft_recursive_factorial(nb-1));
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
    }
    return(0);
}
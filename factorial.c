#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int ft_iterative_factorial(int nb)
{
    int a = 1;
    while(nb > 0)
    {
      a = a * nb;
      nb--;
    }
    return(a);
}

int main(int argc, char **argv)
{
    if(argc == 2)
        printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
    return(0);
}
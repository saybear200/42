#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *s1)
{
    int i;
    
    i = 0;
    while (s1[i])
        i++;
    return(i);
}

int ft_strlcat(char *dest, char *src)
{
    int a;

    a = ft_strlen(dest) - ft_strlen(src);
    return(a);
        
}

int main(int argc, char **argv)
{
    (void) argc;
    printf("%d\n", ft_strlcat(argv[1], argv[2]));
    return(0);
}
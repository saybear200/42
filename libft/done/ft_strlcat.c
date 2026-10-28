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

int ft_strlcat(char *dest, char *src, size_t size)
{
    int a;
    int dest_len;
    int src_len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if(size == 0)
        return(src_len);
    if(size < dest_len)
        return(src_len + size);
    else
    {
        
    } 
        
}

int main(int argc, char **argv)
{
    (void) argc;
    printf("%d\n", ft_strlcat(argv[1], argv[2]));
    return(0);
}
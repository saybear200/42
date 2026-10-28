#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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
    int i;
    int j;
    unsigned int    dest_len;
    unsigned int    src_len;

    i = 0;
    dest_len = ft_strlen(dest);
    j = dest_len;
    src_len = ft_strlen(src);
    if (size == 0)
        return (src_len);
    if (size < dest_len)
        return (src_len + size);
    else
    {
        while (src[i] && (dest_len + i) < size)
			dest[j++] = src[i++];
        if ((dest_len + i) == size && dest_len < size)
			dest[--j] = '\0';
        else
			dest[j] = '\0';
        return (src_len + dest_len);
    }         
}

int main(int argc, char **argv)
{
    (void) argc;
    printf("%d\n", ft_strlcat(argv[1], argv[2], atoi(argv[3])));
    return(0);
}
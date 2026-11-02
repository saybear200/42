#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    char *p;

    p = s;
    while (n > 0)
    {
        *p = (char)c;
        p++;
        n--;
    }
    return (s);
}

// int main()
// {
//     char strava[10] = "banana";
//     ft_memset(strava, 'a', 6);
//     printf("%s\n", strava);
//     return(0);
// }
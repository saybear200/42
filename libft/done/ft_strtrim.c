#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int size_s1;
    int start;
    int end;
    int str_size ;
    char *str;
    int i;
    
    i = 0;
    start = 0;
    size_s1 = ft_strlen(s1);
    end = size_s1;
    while(s1[start] && ft_strchr(set, s1[start]))       
        start++;
    while(end > start && ft_strrchr(set, s1[end - 1]))  
        end--;
    str_size = end - start;
    str = malloc(sizeof(char) * (str_size + 1)); 
    if (!str)
        return(NULL);
    while(i < str_size)
    {
        str[i] = s1[start + i];
        i++;
    }
    str[i] = '\0';
    return(str);
}

// int main(int argc, char **argv)
// {
//     (void) argc;
//     printf("%s\n", ft_strtrim(argv[1], argv[2]));
//     return(0);
// }
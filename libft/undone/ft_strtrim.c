#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int size_s1;
    int size_set;
    int str_size;
    char *str;
    int i;
    
    i = 0;
    size_s1 = ft_strlen(s1);
    size_set = ft_strlen(set);
	str_size = malloc(sizeof(size_s1 - size_set) * (char));
    while(s1[i])
    {
        if(strchr(set, s1) == s1[i])
            
    }
    return(str);
}
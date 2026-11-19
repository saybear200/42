#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    while(lst == NULL)
        return(NULL);
    while(lst != NULL)
        lst = lst->next;
    return(lst);
}
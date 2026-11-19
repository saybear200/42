#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ne;
    
    if(!(*lst))
    {
        *lst = new;
        return;
    }
    ne = *lst;
    while(ne->next != NULL)
        ne = ne->next;
    ne->next = new;
}
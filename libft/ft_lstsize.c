#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while(lst)
    {
        lst = lst->next;
        i++;
    }
    return(i);
}

int main(int argc, char **argv)
{
    (void) argc;
    t_list  *head;
    int i;

    i = 1;
    while(i < argc)
    {
        ft_lstadd_front(&head, ft_lstnew(argv[i]));
        i++;
    }
    printf("%d\n", ft_lstsize(head));
    return(0);
}
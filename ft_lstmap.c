#include <stdlib.h>
#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
    t_list *mapped;
    t_list *tmp;

    while (lst != NULL)
    {
        tmp = ft_lstnew(lst->content);
        tmp->next = lst->next;
        tmp = (*f)(tmp);
        ft_lstadd_back(&mapped, tmp);
    }
    return (mapped);
}

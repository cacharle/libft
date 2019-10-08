#include <stdlib.h>
#include "libft.h"

t_list  *ft_lstnew(void const *content)
{
    t_list  *elem;

    if ((elem = (t_list*)malloc(sizeof(t_list))) == NULL)
        return (NULL);
    /* elem->content = (void*)content; */
    (void)content;
    elem->next = NULL;
    return (elem);
}

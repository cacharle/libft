#include <stdlib.h>
#include "libft.h"

t_list * ft_lstnew(void const *content, size_t content_size)
{
    t_list  *elem;

    if ((elem = (t_list*)malloc(sizeof(t_list))) == NULL)
        return (NULL);
    elem->content = (void*)content;
    elem->content_size = content_size;
    elem->next = NULL;
    return (elem);
}

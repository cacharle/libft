#include <stdlib.h>
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int counter;

    counter = 0;
    while (lst != NULL)
    {
        counter++;
        lst = lst->next;
    }
    return (counter);
}

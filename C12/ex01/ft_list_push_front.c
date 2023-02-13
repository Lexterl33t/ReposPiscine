#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

t_list *ft_create_elem(void *data)
{
    t_list *first = malloc(sizeof(t_list));

    if (first == NULL)
        return (NULL);

    first->next = NULL;
    first->data = data;

    return (first);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *element;

    if (*begin_list) {
        element = ft_create_elem(data);
        element->next = *begin_list;
        *begin_list = element;
    } else {
        *begin_list = ft_create_elem(data);
    }
}

int main()
{
    t_list *list = ft_create_elem("Test");
    ft_list_push_front(&list, "Test2");

    printf("%s\n", (char *)list->next->data);
}
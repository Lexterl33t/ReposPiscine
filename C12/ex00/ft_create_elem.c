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

int main()
{

    t_list *list = ft_create_elem("Hello world");

    printf("%s\n", list->data);
}
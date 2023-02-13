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

int ft_list_size(t_list *begin)
{
    if (begin->next == NULL) {
        return (1);
    } else {
        begin = begin->next;
    }
    return 1 + ft_list_size(begin);
}

t_list *ft_list_last(t_list *begin)
{
    if (begin->next == NULL)
        return (begin);

    return (ft_list_last(begin->next));
}

void ft_list_push_back(t_list **begin, void *data)
{
    t_list *element = *begin;

    if (element)
    {
        while (element->next)
            element = element->next;
        
        element->next = ft_create_elem(data);
    }
    else
    {
        *begin = ft_create_elem(data);
    }
}

int main()
{
    t_list *list = ft_create_elem("Test");
    ft_list_push_front(&list, "Test2");
    ft_list_push_front(&list, "Test3");


    ft_list_push_back(&list, "Issoufre");

    ft_list_push_front(&list, "Kaka");

    t_list *last_elem = ft_list_last(list);

    printf("%d\n", ft_list_size(list));

    printf("%s\n", (char *)last_elem->data);
}
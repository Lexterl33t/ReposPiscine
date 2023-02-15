#include "ft_treeh.h"

t_btree *btree_create_node(void *item)
{

    t_btree *btree = malloc(sizeof(t_btree));

    btree->left = NULL  ;
    btree->right = NULL;
    btree->item = item;
   
}

int main()
{
    t_btree *btree = btree_create_node(1);
}
#pragma once

typedef struct s_btree {
    s_btree *left;
    s_btree *right;
    void *item;
} t_btree;
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Insère un nœud en tant que fils droit d'un nœud parent.
 * @parent: Pointeur vers le nœud parent.
 * @value: Valeur stockée dans le nouveau nœud.
 * Return: Pointeur vers le nouveau nœud, ou NULL en cas d'échec.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    if (!parent)
        return (NULL);

    new = malloc(sizeof(binary_tree_t));
    if (!new)
        return (NULL);

    new->n = value;
    new->parent = parent;
    new->left = NULL;
    new->right = parent->right;

    if (parent->right)
        parent->right->parent = new;

    parent->right = new;

    return (new);
}



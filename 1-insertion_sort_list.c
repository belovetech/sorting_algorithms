#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *temp = *list;
    int value, *current_value;

    if (*list == NULL || (*list)->next == NULL)
        return;
    
    temp = temp->next;
    while(temp)
    {
        value = temp->next

        while (temp->prev != NULL && temp->prev->n > value)
        {
            current_value = &temp->n;
            *current_value = temp->prev->n;
            temp = temp->prev;
        }
        *current_value = value
        
    }
}
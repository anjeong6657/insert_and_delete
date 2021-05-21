#include "playlist.h"

void insertmusic(playlist*list, _node*node)
{
    if(isFull(list))
    {
        printf("List is full!");
    }
    else
    {
        if(isEmpty(list))
        {
            list->first = node;
            list->play = node;
            node->next = NULL;
            node->previous = NULL;
        }
        else
        {
            list->first->previous = node;
            node->next = list->first;
            node->previous = NULL;
            list->first = node;
        }
        list->listSize++;
    }
        
}

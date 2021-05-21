void deletemusic(playlist*list)
{
    if(isEmpty(list))
    {
        printf("List is empty!")
    }
    else
    {
        node->singer = list->play->singer;
        node->song = list->play->song;
        
        if(list->list_size == 1)
        {
            list->play = NULL;
            list->first = NULL;
        }
        
        else if(list->first==list->play)
        {
            list->first = list->play->next;
            list->play = list->play->next;
            list->play->previous = NULL;
        }
        else if(list->play->next == NULL)
        {
            list->play->previous->next = NULL;
            list->play = list->play->previous;
        }
        else
        {
            list->play->previous->next = list->play->next;
            list->play->next->previous = list->play->previous;
            list->play = list->play->next;
        }
        list->listSize--;
        printf("1 song is deleted.")
    }
}

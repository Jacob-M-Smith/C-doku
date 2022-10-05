// test file for linked list

#include "ll.h"
#include <stddef.h>
#include <stdio.h>

void main()
{
    // not recognized
    struct node *head = create(1, NULL);
    display(head);
    
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    display(head);

    // remove in middle (correct)
    eliminate(&head, 2);
    display(head);
    printf("size: %d\n",  list_size(head));

    // remove tail (correct)
    eliminate(&head, 3);
    display(head);
    printf("size: %d\n",  list_size(head));

    // remove head (correct)
    eliminate(&head, 0);
    display(head);
    printf("size: %d\n",  list_size(head));

    // contains check (correct)
    printf("contained at index: %d\n", contains(head, 2));
    printf("contained at index: %d\n", contains(head, 6));

    kill(head);
    // call display in kill function to check

}
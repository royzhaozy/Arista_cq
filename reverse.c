// Copyright (c) 2015 Arista Networks, Inc.  All rights reserved.
// Arista Networks, Inc. Confidential and Proprietary.

#include <stdlib.h>

#include "list.h"

// COPIED FROM list.h FOR REFERENCE
// struct list {
//     struct list *next;
//     struct list *prev;
// };
//
// This is a doubly-linked list which is NULL terminated at either end.


// Write the reverse function which takes a list as defined above, reverses the
// list in place and then returns the new head of the list.

struct list *reverse(struct list *head) {
    if (head == NULL)
        return head;

    struct list *iterator = head;
    while (1) {
        struct list *old_prev = iterator->prev;
        iterator->prev = iterator->next;
        iterator->next = old_prev;
        if (iterator->prev == NULL)
            break;
        iterator = iterator->prev;
    }

    return iterator;
}

// Once that is done insert the call to your reverse() function where
// appropriate.

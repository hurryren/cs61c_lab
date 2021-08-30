#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    node *fast_ptr=head;
    node *slow_ptr=head;
    while(1){
        if(fast_ptr == NULL)
            return 0;
        if(fast_ptr->next == NULL)
            return 0;
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
        if(slow_ptr == fast_ptr){
            return 1;
        }
    }
}

#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
	if(!head) {
		return 0;
	}
	node *slow_ptr = head;
	node *fast_ptr = head -> next;
	while(fast_ptr && fast_ptr != slow_ptr) {
		slow_ptr = slow_ptr -> next;
		fast_ptr = fast_ptr -> next;
		if(fast_ptr) {
			fast_ptr = fast_ptr -> next;
		}else {
			break;
		}
	}
	if(!fast_ptr) {
		return 0;
	}else {
		return 1;
	}
}

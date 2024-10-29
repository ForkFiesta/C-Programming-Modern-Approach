#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/* Structure defintion for linked list */
typedef struct node{
    int data;
    struct node *next;
}node;


/* Prototypes */
void make_empty(node *first);
int is_empty(node *first);
bool push(node *first, int new_data);
int pop(node *first);



/* Takes pointer to first item
 on list and iterates through it using a temp pointer
 freeing up the node on each iteration */
void make_empty(node *first){
    node *q = first->next;
    for(;q != NULL;){
        node *temp = q;
        q = q->next;
        free(temp);
        q++;
    }
    printf("Free'd all items in list\n");
}

/* Looks at first node and checks for memory address
if empty returns 0. if not empty returns 1 */
int is_empty(node *first){
    if (first -> next == NULL){
        return 1;
    }
    return 0;
}

/* Iterates through linkedlist until q is last node,
malloc new node, ensure memory allocation was successful,
assign new data to new_node and finally point q's next to the new node */
bool push(node *first, int new_data){
    node *q = first;
    for (;q->next != NULL; q=q->next);
    //q is now last node on on list
    node *new_node = malloc(sizeof(node));
    if(new_node == NULL){
        return false;
    }
    new_node->data = new_data;
    new_node->next = NULL;
    q->next = new_node;
    return true;
}
/* Iterates through list until we're at n-1 item
assign the int value to a variable then free the last time */
int pop(node *first){
    int popped_value;
    node *curr;
    node *prev;
    if(is_empty(first)){ 
        printf("Cannot pop items from empty list");
        exit(1);

    }

    if(first->next->next == NULL){
        popped_value = first->next->data;
        free(first->next);
        return popped_value;
    }

    for(curr = first; curr->next->next!=NULL; curr = curr->next);
    popped_value = curr->next->data;
    free(curr->next);
    return popped_value;



}

node *create_list(void){
    node *first = malloc(sizeof(node));
    first->next = NULL;
    return first;

}


int main(void){
    node *first = create_list();

    if(is_empty(first)) printf("List is empty\n"); // should print list is empty 
    if(push(first, 12)) printf("Pushed 12\n");
    if(!is_empty(first)) printf("List is not empty\n"); // should print list is empty 
    if(push(first, 8)) printf("Pushed 8\n");
    push(first, 96);
    printf("popped: %d\n", pop(first));
    printf("popped: %d\n", pop(first));
    
    make_empty(first); 
    if(is_empty(first)){
        printf("List was emptied\n");
    }
    return 0;
}




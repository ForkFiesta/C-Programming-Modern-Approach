#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



typedef struct node{
    struct node *next;
    int data;
}node;

/* Function prototypes */
bool isEmpty(node *list);
int pop(node **list);
bool push(node **list, int data);
void empty(node **list);

bool isEmpty(node *list){
    node *first = list;
    if (first == NULL) return true;
    else {
        return false;}
}


bool push(node **list, int data){
    node *new_node = malloc(sizeof(node));
    if(!new_node){
        printf("Failure allocating memory.\n");
        return false;
    }
    new_node->next = *list; // this was my issue on the previous version.
    new_node->data = data;
    *list = new_node;
    printf("Successfully pushed %d\n", data);
    return true;
}

void empty(node **list){
    if(isEmpty(*list)){
        printf("cannot empty an empty list\n");
        exit(1);
    }
    
    for(;(*list)!=NULL;){
        node *temp = (*list);
        (*list) = temp->next;
        free(temp);
    }
    if(isEmpty(*list)){
        printf("Freed all elements in list\n");
    }

}

int pop(node **list){

    if(isEmpty(*list)){
        printf("cannot pop from an empty list\n");
        return -1;
    }
    node *popped_node = *list;
    int return_value = popped_node->data;
    *list = popped_node->next;
    free(popped_node);
    return (return_value);


}





int main(){
    node *first = NULL;
    if(isEmpty(first)){
        printf("List is empty.\n");
    }
    push(&first, 5);
    push(&first, 7);
    push(&first, 9);
    printf("Popped: %d\n", pop(&first));
    printf("Popped: %d\n", pop(&first));
    printf("Popped: %d\n", pop(&first));
    if(isEmpty(first)){
        printf("List is empty after popping values.\n");
    }
    push(&first, 87);
    push(&first, 92);
    push(&first, 63);
    empty(&first);
    
  

    
    







    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "counter.h"
#include <assert.h>

bool push(node **list, int data){
    node *new_node = malloc(sizeof(node));
    if(!new_node){
        printf("Failure allocating memory.\n");
        return false;
    }
    new_node->next = *list; // this was my issue on the previous version.
    new_node->data = data;
    *list = new_node;
    // printf("Successfully pushed %d\n", data);
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
        // printf("Freed all elements in list\n");
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

bool isEmpty(node *list){
    node *first = list;
    if (first == NULL) return true;
    else {
        return false;}
}


int count_occurences(node *list, int n){
    int counter = 0;
    node *p = list;


    while(p!=NULL){
        if((p)->data == n) counter++;

        p = p->next;

           
    }

    return counter;
}



//tests


void do_all_tests(){
    printf("Running all tests...\n");
    check_correct_return_values();
    printf("All tests passed successfully");

}

void check_correct_return_values(){
    printf("Running Test for Return Values...\n");
    node *first = NULL;
    push(&first, 6); // 2
    push(&first, 8); // 2
    push(&first, 9); // 1
    push(&first, 6); // 
    push(&first, 4); // 2
    push(&first, 3); // 3
    push(&first, 2); // 1
    push(&first, 3);
    push(&first, 8);
    push(&first, 4);
    push(&first, 3);
    printf("Pushed all int successfully.\n");
    // count_occurences(first, 3);
    assert(count_occurences(first, 3) == 3);
    assert(count_occurences(first, 6) == 2);
    assert(count_occurences(first, 8) == 2);
    assert(count_occurences(first, 9) == 1);
    assert(count_occurences(first, 4) == 2);
    assert(count_occurences(first, 2) == 1);
    empty(&first);



}
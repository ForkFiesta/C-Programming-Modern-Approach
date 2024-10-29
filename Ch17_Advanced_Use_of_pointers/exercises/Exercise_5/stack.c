#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"


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


//tests

void run_all_tests(){
    printf("\033[1;33mRunning all tests ...\033[0m\n");
    test_isEmpty_init();
    test_push();
    test_isEmpty();
    test_pop();
    test_empty();
    test_list_reusability();
    printf("\033[1;32mAll tests passed successfully!\033[0m\n");
}

void test_isEmpty_init(){
    printf("Running test_isEmpty_init...\n");
    node *first = NULL;
    bool emptyList = isEmpty(first);
    assert(emptyList==true);
}

void test_push(){
    printf("Running test_push...\n");
    node *first = NULL;
    push(&first, 68);
    bool is_empty = isEmpty(first);
    assert(is_empty==false);
    empty(&first);

}

void test_isEmpty(){
    printf("Running test_isEmpty...\n");
    node *first = NULL;
    push(&first, 92);
    push(&first, 93);
    push(&first, 90);
    assert(isEmpty(first)==false);
    empty(&first);
    assert(isEmpty(first)==true);
}

void test_pop(){
    printf("Running test_pop...\n");
    node *first = NULL;
    push(&first, 92);
    push(&first, 93);
    push(&first, 90);
    pop(&first);
    int popped_value = pop(&first);
    assert(popped_value == 93);
    empty(&first);
}

void test_empty(){
    printf("Running test_empty...\n");
    node *first = NULL;
    push(&first, 92);
    push(&first, 93);
    push(&first, 90);
    empty(&first);
    bool is_empty = isEmpty(first);
    assert(is_empty == true);

}

void test_list_reusability(){
    printf("Running test_list_reusability...\n");
    node *first = NULL;
    assert(isEmpty(first)==true);
    push(&first, 92);
    push(&first, 93);
    push(&first, 90);
    assert(isEmpty(first)==false);
    int pop_val = pop(&first);
    assert(pop_val == 90);
    empty(&first);
    assert((isEmpty(first))==true);
    push(&first, 65);
    push(&first, 87);
    assert(pop(&first)==87);
    assert(isEmpty(first)==false);
    empty(&first);
    assert(isEmpty(first)==true);

    
}
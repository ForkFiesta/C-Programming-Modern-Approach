#ifndef COUNTER_H
#define COUNTER_H
#include <stdbool.h>

typedef struct node{
    struct node *next;
    int data;
}node;


/* Function prototypes */
int pop(node **list);
bool push(node **list, int data);
void empty(node **list);
int count_occurences(node *list, int n);
bool isEmpty(node *list);

//Tests

void do_all_tests();
void check_correct_return_values();


#endif
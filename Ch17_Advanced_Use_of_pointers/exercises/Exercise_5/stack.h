#ifndef STACK_H
#define STACK_H
#include "node.h"
#include <assert.h>
/* Function prototypes */
bool isEmpty(node *list);
int pop(node **list);
bool push(node **list, int data);
void empty(node **list);

// tests

void run_all_tests();
void test_isEmpty_init();
void test_isEmpty();
void test_push();
void test_empty();
void test_pop();
void test_list_reusability();

#endif
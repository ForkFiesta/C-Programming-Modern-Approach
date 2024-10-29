#include <stdio.h>
#include <stdlib.h>

void *my_malloc(int n){
    void *p = malloc(n);
    if(p == NULL){
        printf("Memory allocation failure\n");
        exit(EXIT_FAILURE);
    }
    return p;
}

int main(){

    void *p = my_malloc(1000);
    printf("P is stored at address: %p\n", p);
    free(p);
    printf("P memory freed.\n");


    return 0;
}
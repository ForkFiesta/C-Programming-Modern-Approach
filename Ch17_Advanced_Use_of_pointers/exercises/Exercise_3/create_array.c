#include <stdio.h>
#include <stdlib.h>



int *create_array(int n, int initial_value);

int main(){


    int *arr = create_array(100, 7);
    if(arr == NULL){
        exit(EXIT_FAILURE);
    }
    for(int i = 1; i <= 100; i++){
        printf("%d. %d\n", i, arr[i]);
    }

    free(arr);


    return 0;
}

int *create_array(int n, int initial_value){
    int *new_arr = malloc(sizeof(int)*(n+1));
    if(new_arr == NULL){
        return new_arr;
    }
    for(int i = 0; i<n+1;i++){
        new_arr[i] = initial_value;
    }
    return new_arr;
}
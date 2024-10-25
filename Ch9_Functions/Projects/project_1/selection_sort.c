#include <stdio.h>


void selection_sort(int a[], int n);

void selection_sort(int entries[], int size){
    int largest_value=0;
    int largest_index;
    for (int i=0; i < size; i++){
        if (entries[i]> largest_value ){
            largest_value = entries[i];
            largest_index = i;
        }

    }
    // int top_element = entries[size-1];
    entries[largest_index] = entries[size-1];
    entries[size-1] = largest_value;
    if((size - 1) >= 2){
        selection_sort(entries, size-1);

    }
}




int main(void){
    int size;
    printf("How large would you like the array to be? (2-50): ");
    scanf( " %d", &size);
    int entries[size];

    printf("Enter a series of %d numbers in any order: ", size);
    for (int i = 0; i<size; i++){
        scanf("%d", &entries[i]);
    }

    selection_sort(entries, size);
    printf("Your numbers in sorted order: ");
    for(int i = 0; i<size; i++){
        printf("%d ", entries[i]);
    }
    printf("\n");


    return 0;
}
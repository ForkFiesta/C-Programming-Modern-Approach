#include <stdio.h>
#define MAX_SIZE 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);


void find_two_largest(int a[], int n, int *largest, int *second_largest){
    for (int i = 0; i < n-1; i++){
        int min_idx = i;

        for (int j = i+1; j<n;j++){
            if(a[j] < a[min_idx]){
                min_idx = j;
            }
        }


        int temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;
    }

    *largest = a[n-1];
    *second_largest = a[n-2];

}


int main(){
    int series[MAX_SIZE];

    printf("Enter a series of 10 digits: ");
    for (int i = 0; i<MAX_SIZE; i++){
        scanf(" %d", &series[i]);
    }
    // for (int i = 0; i<MAX_SIZE; i++){
    //     printf("%d, ", series[i]);
    // }

    int n = MAX_SIZE;
    int largest, second_largest;
    find_two_largest(series, n, &largest, &second_largest);

    printf("The largest number is: %d\nThe second largest number is %d\n", largest, second_largest);

    return 0;
}
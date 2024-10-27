#include <stdio.h>


int *find_largest(int a[], int n);

int *find_largest(int a[], int n){
    for(int i = 0; i<n-1; i++){
        int smallest_idx = i;

        for(int j=i+1; j<n; j++){
            if (a[j]<a[smallest_idx]){
                smallest_idx = j;
            }
        }

        int temp = a[i];
        a[i] = a[smallest_idx];
        a[smallest_idx] = temp;
    }

    int *largest = &a[n-1];
    return largest;

}

int main(void){

    int series[5] = {0, 56, 123, 53, 23};

    int size = 5;

    int *largest = find_largest(series, size);

    printf("The largest number in the series is %d\n", *largest);
}
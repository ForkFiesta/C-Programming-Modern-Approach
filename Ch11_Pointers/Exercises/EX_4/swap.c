#include <stdio.h>

void swap(int *p, int *q);

void swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;

}


int main(){
    int x, y;
    x = 2;
    y = 4;

    printf("The value of X is %d and the value of Y is %d\n", x, y);

    swap(&x, &y);
    printf("The value of X is %d and the value of Y is %d\n", x, y);


    return 0;
}
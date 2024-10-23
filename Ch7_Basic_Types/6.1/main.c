#include <stdio.h>


int main(void){
    int n;
    short i;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    
    for (i = 1; i<n; i++){
        printf("%15d%15d\n", i, i * i);
    }
}
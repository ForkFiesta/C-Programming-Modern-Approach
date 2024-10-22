#include <stdio.h>

int main(){

    int one, two, three, four;
    int largest, smallest;

    printf("Enter four integers: ");
    scanf(" %d %d %d %d", &one, &two, &three, &four);

    //used no if statements

    largest = one;
    smallest = one;
    
    two > largest ? largest = two : two < smallest ? smallest = two : smallest;
    three > largest ? largest = three : three < smallest ? smallest = three : smallest;
    four > largest ? largest = four : four < smallest ? smallest = four : smallest;




    printf("Largest: %d\nSmallest: %d\n", largest, smallest);







 

}
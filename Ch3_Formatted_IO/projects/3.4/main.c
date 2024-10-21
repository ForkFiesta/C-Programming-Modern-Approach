#include <stdio.h>

int main(){

    int area_code;
    int first_three;
    int last_four;

    printf("Enter phone Number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area_code, &first_three, &last_four);
    printf("You entered %d.%d.%d\n", area_code, first_three, last_four);

    return 0;
}
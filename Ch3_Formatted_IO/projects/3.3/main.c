#include <stdio.h>

int main(){

    int GS_prefix;
    int group_id;
    int publisher_code;
    int item_number;
    int check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS_prefix, &group_id, &publisher_code, &item_number, &check_digit);
    printf("GS1 Prefix: %d\n", GS_prefix);
    printf("Group Identified: %d\n", group_id);
    printf("Publisher Code: %d\n", publisher_code);
    printf("Item Number: %d\n", item_number);
    printf("Check Digit: %d\n", check_digit);

    return 0;
}
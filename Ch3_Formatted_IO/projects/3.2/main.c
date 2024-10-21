#include <stdio.h>


int main(){

    int item_number;
    float item_price;
    int month;
    int day;
    int year;


    printf("Enter Item Number: ");
    scanf(" %d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &item_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%-d\t\t$%6.2f\t\t%.2d/%.2d/%d\n", item_number, item_price, month, day, year);
}
#include <stdio.h>


int main(void){

    float taxable_income, taxes_owed;

    printf("Enter your taxable income: $");
    scanf(" %f", &taxable_income);

    if (taxable_income < 750.00f){
        taxes_owed = .01f*taxable_income;
    }
    else if (750.00f<=taxable_income && taxable_income<2250.00f){
        taxes_owed = 7.50f + (taxable_income-750.00f)*.02f;
    }
    else if (2250.00f<=taxable_income && taxable_income<3750.00f){
        taxes_owed = 37.50f + (taxable_income-2250.00f)*.03f;
    }
    else if (3750.00f<=taxable_income && taxable_income<5250.00f){
        taxes_owed = 82.50f + (taxable_income-3750.00f)*.04f;

    }else if (5250.00f <= taxable_income && taxable_income < 7000.00f){
        taxes_owed = 142.50f + (taxable_income-5250.00f)*.05f;
    }
    else{
        taxes_owed = 230.00f + (taxable_income-7000.00f)*.06f;
    }

    printf("\n\nYou earned $%.2f this year and will pay $%.2f in taxes.\n", taxable_income, taxes_owed);
}
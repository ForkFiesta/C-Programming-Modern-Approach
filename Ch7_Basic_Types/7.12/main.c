#include <stdio.h>


int main(){

    char operator;
    float result;
    printf("enter an expression: (3+2.5*2): ");
    scanf("%f", &result);
    while((operator = getchar()) != '\n'){
        float num2;
        scanf("%f", &num2);
        switch (operator)
        {
        case '+':
            result += num2;
            break;
        case '-':
            result -= num2;
            break;
        case '/':
            result /= num2;
            break;
        case '*':
            result *= num2;
            break;
        default:
            break;
        }
    }

    printf("The resulting value is %.2f\n", result);


    return 0;
}
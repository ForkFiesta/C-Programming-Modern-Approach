#include <stdio.h>


int main(void){
    float commission, share_price, value;
    int num_shares;

    printf("Enter number of shares bought and the price of the shares\n in the following format (24 $12.50): ");
    scanf(" %d $%f", &num_shares, &share_price);
    printf("You entered %d shares priced at $%.2f per share.\n", num_shares, share_price);

    value = num_shares * share_price;
/* Rival Comission Structure as follows:
For fewer than 2000 shares:
    $33 + .03 * share
For more than 2000 shares:
    $33 + .02 * shares
 */

    if (value < 2500.00f){
        commission = 30.00f + .017f * value;
    }
    else if (value < 6250.00f){
        commission = 56.00f + .0066f * value;
    }
    else if (value < 20000.00f){
        commission = 76.00f + .0034f * value;
    }
    else if (value < 50000.00f){
        commission = 100.00f + .0022f * value;
    }
    else if (value < 500000.00f){
        commission = 155.00f + .0011f * value;
    }
    else{
        commission = 255.00f + .0009f * value;
    }

    commission < 39.00f ? commission = 39.00f : commission;

    // Rival Comission

    float rival_comission;

    if (num_shares < 2000){
        rival_comission = 33.3f + .03f*num_shares;
    }
    else{
        rival_comission = 33.3f + .02f*num_shares;
    }

    printf("Our Commission on this trade: $%.2f\n", commission);
    printf("Rival Commission on this trade: $%.2f\n", rival_comission);




}
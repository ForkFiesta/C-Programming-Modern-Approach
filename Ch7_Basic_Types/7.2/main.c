#include <stdio.h>


int main(void){
    int n, counter, i;



    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();
    
    for (i = 1; i<n; i++, counter++){
        if(counter == 24){
            char ch;
            printf("Press Enter to continue.\n");
            do{
                ch = getchar();
            }while(ch != '\n');
            counter = 0;
        }
        printf("%15d%15d\n", i, i * i);
    }
}
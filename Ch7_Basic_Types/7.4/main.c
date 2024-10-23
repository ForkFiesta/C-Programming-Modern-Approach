#include <stdio.h>


int main(){

    char number;
    printf("Enter a phone number: ");
    while(number!='\n'){
        number = getchar();
        if(65<=number && number<=67){
            putchar('2');
        }
        else if(68<=number && number<=70){
            putchar('3');
        }
        else if(71<=number && number<=73){
            putchar('4');
        }
        else if(74<=number && number<=76){
            putchar('5');
        }
        else if(77<=number && number<=79){
            putchar('6');
        }
        else if(80<=number && number<=82){
            putchar('7');
        }
        else if(83<=number && number<=86){
            putchar('8');
        }
        else if(87<=number  && number<=89){
            putchar('9');
        }else{
            putchar(number);
        }
        
    }
   
    
}
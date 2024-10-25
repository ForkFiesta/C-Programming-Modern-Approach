#include <stdio.h>
#include <ctype.h>


int main(){

    char original_message[80];
    char encrypted_message[80];
    char ch;
    int counter = 0;
    int shift;
    printf("Enter the message to be encrypted: ");
    while((ch=getchar())!= '\n' && counter < 80){
        original_message[counter++] = ch;
    }
    printf("Enter shift amount (1-25): ");
    scanf(" %d", &shift);

    printf("Encrypted Message: ");

    for(int i = 0; i<=counter; i++){
        if (original_message[i] <= 'z' && original_message[i] >= 'a'){
            if((original_message[i]+shift) <= 'Z'){
                encrypted_message[i] = original_message[i]+shift;
            }else{
                encrypted_message[i] = ((original_message[i]-'a') + shift) % 26 + 'a';
            }

        }else if(original_message[i] <= 'Z' && original_message[i] >= 'A'){
            if((original_message[i]+shift)<= 'Z'){
                encrypted_message[i] = original_message[i]+shift;
            }else{
                encrypted_message[i] = ((original_message[i]-'A') + shift) % 26 + 'A';
            }

        }else{
            encrypted_message[i] = original_message[i];
        }
        putchar(encrypted_message[i]);
        
    }
    putchar('\n');




    return 0;
}
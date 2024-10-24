#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    char string[200];
    int pointer = 0;
    int exclamation_index_stop = 10;
    printf("Enter a message: ");
    while((ch=getchar()) != '\n'){
        string[pointer] = ch;
        pointer++;
    }
    exclamation_index_stop += pointer;

    for(pointer=pointer+1;pointer<exclamation_index_stop; pointer++){
        string[pointer] = '!';
    }

    for(int i=0; i<=pointer; i++){
        string[i] = toupper(string[i]);
        switch (string[i])
        {
        case 'A':
            string[i]='4';
            break;
        case 'B':
            string[i]='8';
            break;
        case 'E':
            string[i]='3';
            break;
        case 'I':
            string[i] = '1';
            break;
        case 'O':
            string[i] = '0';
            break;
        case 'S':
            string[i] = '5';
            break;
        default:
            break;
        }
        printf("%c", string[i]);
    }
    printf("\n");
}
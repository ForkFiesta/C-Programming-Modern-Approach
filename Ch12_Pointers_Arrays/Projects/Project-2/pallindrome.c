#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


void repeating_function(void){
    char ch;
    char *p, *q;
    int idx;
    bool pallindrome;

    char *message = malloc(sizeof(char)*100);
    if(message == NULL){
        printf("Error allocating memory.\n");

    }
    p = message;
    printf("Enter a message: ");
    while((ch=getchar()) != '\n' && idx<99){
        if (ch == '.' || ch== ',' || ch == '!' || ch == '\'' || ch == '?'|| ch==' '){
            continue;
        }else{
            *p++ = ch;
            idx++;

        }

    }
    *p = '\0';
    q = p;
    p = &message[0];
    q--;

    // if(p<q){
    //     printf("P is less than q\n");
    // }



    for(;p<&message[idx] && q>=&message[0] && p<q;){
        if (tolower(*p) == tolower(*q)){
            // printf("P value: %c\n", *p);
            // printf("Q value: %c\n", *q);
            p++;
            q--;
        }else{
            break;
        }
    }

    if(p >= q){
        pallindrome = true;
    }else{
        pallindrome = false;
    }

    if(pallindrome){
        printf("The message you entered is a pallindrome\n");
    }else{
        printf("Not a pallindrome\n");
    }
    printf("\n\n");

    free(message);
}

int main(){
    for(;;){
        repeating_function();
    }

    

    return 0;
}
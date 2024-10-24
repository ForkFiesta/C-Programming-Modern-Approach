#include <stdio.h>
#include <stdbool.h>



int main(){

    bool weekend[7]={[0]=true,[6]=true};

    for (int i =0; i<7; i++){
        printf("%d\n", weekend[i]);
    }


    return 0 ;
}
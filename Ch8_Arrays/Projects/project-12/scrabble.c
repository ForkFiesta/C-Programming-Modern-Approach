#include <stdio.h>
#include <ctype.h>



int main(){
    int values[26] ={['D'-'A']=2, ['G'-'A']=2, ['B'-'A']=3, ['C'-'A']=3, ['M'-'A']=3,
    ['P'-'A']=3, ['F'-'A']=4, ['H'-'A']=4, ['V'-'A']=4, ['W'-'A']=4, ['Y'-'A']=4,
    ['K'-'A']=5, ['J'-'A']=8, ['X'-'A']=8, ['Q'-'A']=10, ['Z'-'A']=10};

    for (int i =0; i<26; i++){
        if(!values[i]) values[i] = 1;
    }


    int sum = 0;

    char letter;
    printf("Enter a word: ");
    while((letter=getchar())!= '\n'){
        letter = toupper(letter);
        sum+= values[letter-'A'];
    }

    printf("Scrabble value: %d\n", sum);


    return 0;
}
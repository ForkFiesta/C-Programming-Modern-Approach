#include <stdio.h>
#include <ctype.h>

int main(){
    char word;
    int sum = 0;
    printf("Enter a word: ");
    while(word!='\n'){
        word = getchar();
        word = toupper(word);
        if(word == 'A' || word == 'E' || word == 'I' || word == 'L' || word == 'N'
        || word == 'R' || word == 'O' || word == 'S' || word == 'T' || word == 'U'){
            sum++;
        }
        else if (word == 'D' || word == 'G'){
            sum +=2;
        }
        else if (word == 'B' || word == 'C' || word == 'M' || word == 'P'){
            sum += 3;
        }
        else if (word == 'F' || word == 'H' || word == 'V' || word == 'W' || word == 'Y'){
            sum +=4;
        }
        else if (word == 'K') sum +=5;
        else if (word == 'J' || word == 'X') sum +=8;
        else if (word == 'Q' || word == 'Z') sum +=10;
    }

    printf("Scrabble value: %d\n", sum);

    return 0;
}
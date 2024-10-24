#include <stdio.h>


int main(){


    const int segments[10][7]={{1, 1, 1, 1, 1, 1}, {[1]=1, [2]=1}, {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1}, {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};

    // const char representation[7]={'_', '|', '|', '_', '|', '|', '_'};
    // const char indentation[]={' ','_', '\n', '|', '_', '|', '\n', '|', '_', '|'};

    // const char digit_seg_1_on[]={' ','_', '\n'};
    // const char digit_seg_1_off[]={' ',' ', '\n'};

    // const char digit_seg_2_on[] = {'|'};
    // const char digit_seg_2_off[] = {' '};

    // for (int i = 0; i<10; i++){
    //     printf("%c", indentation[i]);
    // }
    return 0;
}
#include <stdio.h>

int main(){

    int one, two, three, four, five, six, seven, eight;
    int nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three,
    &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen,
    &fourteen, &fifteen, &sixteen);

    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", one, two, three, four, five,
    six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen);

    int column_1_sum = one + five + nine + thirteen;
    int column_2_sum = two + six + ten + fourteen;
    int column_3_sum = three + seven + eleven + fifteen;
    int column_4_sum = four + eight + twelve + sixteen;

    int row_1_sum = one + two + three + four;
    int row_2_sum = five + six + seven + eight;
    int row_3_sum = nine + ten + eleven + twelve;
    int row_4_sum = thirteen + fourteen + fifteen + sixteen;

    int diagonal_one = one + six + eleven + sixteen;
    int diagonal_two = thirteen + ten + seven + four;

    printf("Row Sums: %d %d %d %d\n", row_1_sum, row_2_sum, row_3_sum, row_4_sum);
    printf("Column Sums: %d %d %d %d\n", column_1_sum, column_2_sum, column_3_sum, column_4_sum);
    printf("Diagonal Sums: %d %d\n", diagonal_one, diagonal_two);

    return 0;
}
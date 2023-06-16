#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_largest_number(int number) {
    int largest_num = -1;  // Initialize the largest number as -1
    char str_num[5];  // String to hold the number as characters
    sprintf(str_num, "%d", number);  // Convert the number to a string

    int i, j;  // Declare loop variables outside the loop
    for (i = 0; i < 4; i++) {
        // Delete the digit at index i
        int index = 0;
        for (j = 0; j < 4; j++) {
            if (j != i) {
                str_num[index] = str_num[j];
                index++;
            }
        }
        str_num[index] = '\0';
        int current_num = atoi(str_num);

        // Check if the modified number is larger than the current largest number
        if (current_num > largest_num) {
            largest_num = current_num;
        }
    }

    return largest_num;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    int largest_number = find_largest_number(number);
    printf("The largest number by deleting a single digit: %d\n", largest_number);
    return 0;
}


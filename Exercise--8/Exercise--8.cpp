

#include <iostream>
#include <stdio.h>

int main()
{
        int n;
        scanf_s("%d", &n);
        int number;
        int min = INT_MAX; 
        for (int i = 0; i < n; i++) {
            printf("Enter number %d: ", i + 1);
            scanf_s("%d", &number);

            
            if (number < min) {
                min = number; 
            }
        }
        printf("The smallest number is: %d", min);
}
// Program To Perform Basic Calculations
#include<stdio.h>
#include<math.h>

int main(){
    int num1;
    int num2;
    int num3;
    char operation;
    
    printf("Enter First Number : \n");
    scanf("%d", &num1);

    printf("Enter Second Number : \n");
    scanf("%d", &num2);

    printf("Enter an operator (+, -, *, /): \n");
    scanf(" %c", &operation);

    switch(operation)
    {
        case'+':
         num3 = num1 + num2;
            printf("Result: %d\n", num3);
        break;

        case'-':
        num3 = num1 - num2;
            printf("Result: %d\n", num3);
        break;

        case'*':
            num3 = num1 * num2;
                printf("Result: %d\n", num3);
        break;
        
        case'/':
            if (num2 != 0) {
                num3 = num1 / num2;
                printf("Result: %d\n", num3);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid Operation\n");
    }

    printf("Thank You For Using Our Program");

}
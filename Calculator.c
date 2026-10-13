#include<stdio.h>
int main()
{
    double a, b, result;
    char op;
    printf("--------CALCULATOR--------\n");
    printf("Enter the first number : \n");
    scanf("%lf", &a);
    printf("Enter the operation (+, -, *, /) : \n");
    scanf(" %c", &op);
    printf("Enter the second number : \n");
    scanf("%lf", &b);
    switch (op)
    {
        case '+':
            result = a+b;
            printf("The sum of the numbers is : %.2f\n", result);
            break;
        case '-':
            result = a-b;
            printf("The difference of the numbers is : %.2f\n", result);
            break;
        case '*':
            result = a*b;
            printf("The multiplication of the numbers is : %.2f\n", result);
            break;
        case '/':
            if(b!=0)
            {
                result = a/b;
                printf("The division of the numbers is : %.2f\n", result);
            }
            else
            {
                printf("Division by zero is not possible!\n");
          
            }
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }
    printf("--------THANK YOU--------\n");
    return 0;
}

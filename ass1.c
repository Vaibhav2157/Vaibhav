#include<stdio.h>

int main()
{
    int a , b ;
    char oper; 

    printf("Enter the operator amongst (+ , - , * , / ):\n");
    scanf("%c",&oper);

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    
    switch (oper)
    {
    case '+':
       printf("%d + %d = %d",a,b,a + b);
        break;

    case '-':
        printf("%d - %d = %d",a,b,a - b);
        break;
    case '*':
        printf("%d * %d = %d",a,b,a * b);
        break;
    case '/':
        printf("%d / %d = %d",a,b,a / b);
        break;
    default:
        printf("please enter valid operator");
        break;
    }

}
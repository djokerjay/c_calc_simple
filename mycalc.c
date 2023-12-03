#include <stdio.h>

int main()
{
    int num1;
    int num2;
    char op;
    int ans;
    printf("Input Number 1:");
    scanf("%d", &num1);

    printf("Input Number 2:");
    scanf("%d", &num2);

    printf("Enter operation + , - , / , * :");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        ans = num1 / num2;
        break;
    default:
        printf("Invalid Operation");
        return 0;
        break;
    }
    printf("The answer is %d", ans);
    return 0;
}
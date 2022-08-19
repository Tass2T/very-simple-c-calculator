#include <stdio.h>
#include <stdlib.h>

int main() {

    int nb1, nb2, result;
    char operator;

    puts("Enter calculation:\n");
    scanf("%d %c %d", &nb1, &operator, &nb2);

    switch (operator)
    {
    case '+':
        result = nb1 + nb2;
        break;

    case '-':
        result = nb1 - nb2;
        break;

    case '*':
        result = nb1 * nb2;
        break;

    case '/':
        result = nb1 / nb2;
        break;
    
    default:
        puts("Invalid operande :(");
        exit(1);
        break;
    }


    puts("");
    printf("The result is %d", result);

    return 0;
}
// Data: 26.06.2025. 
// Topic: Mini Project 
// Calculator 

#include <stdio.h>
int main() {
    float x, y; char op;
    printf("Birinchi son: ");  scanf("%f", &x);
    printf("Amal (+ - * /): "); scanf(" %c", &op);
    printf("Ikkinchi son: "); scanf("%f", &y);

    if (op == '+')        printf("Natija = %.2f\n", x + y);
    else if (op == '-')   printf("Natija = %.2f\n", x - y);
    else if (op == '*')   printf("Natija = %.2f\n", x * y);
    else if (op == '/') {
        if (y == 0)       printf("0-ga bo‘lib bo‘lmaydi!\n");
        else              printf("Natija = %.2f\n", x / y);
    }
    else                printf("Noto‘g‘ri amal!\n");
    return 0;
}

#include <stdio.h>
int main()
{
    //Crie um programa que le dois numeros e calcula as seguinte operacoes
    // soma, subtracao, multiplicacao, divisao e modulo.
    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    /*
     * Leia doi numeros separados por virgula
        %d stands for decimal and it expects an argument of type int
        (or some smaller signed integer type that then gets promoted).
        Floating-point types float and double both get passed the same way (promoted to double)
        and both of them use %f

    %c char single character

    %d (%i) int signed integer

    %e (%E) float or double exponential format

    %f float or double signed decimal

    %g (%G) float or double use %f or %e as required

    %o int unsigned octal value

    %p pointer address stored in pointer

    %s array of char sequence of characters

    %u int unsigned decimal

    %x (%X) int unsigned hex value
     */
    printf("Digite dois numeros quaisquer separados por virgula: ");
    scanf("%d,%d", &num1, &num2);

    /*
     OPERACOES ARITIMETICAS
     */
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;

    /*
     * Prints the result of all arithmetic operations
     */
    printf("A soma dos numeros eh: %d\n", sum);
    printf("A subtracao dos numeros eh: %d\n", sub);
    printf("A multiplicacao dos numeros e: %d\n", mult);
    printf("A divisao entre os dois numeros eh : %f\n", div);
    printf("modulo entre os dois numeros = %d\n", mod);

    return 0;
}

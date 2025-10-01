#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long fatorial(int n) {
    if (n < 0) return 0; 
    if (n == 0 || n == 1) return 1;
    unsigned long long fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int op, n1, n2;
    double num1, num2, resultado;

    printf("=== CALCULADORA COM 20 OPERACOES ===\n");
    printf("1 - Adicao (+)\n");
    printf("2 - Subtracao (-)\n");
    printf("3 - Multiplicacao (*)\n");
    printf("4 - Divisao (/)\n");
    printf("5 - Potencia (x^y)\n");
    printf("6 - Raiz quadrada\n");
    printf("7 - Raiz cubica\n");
    printf("8 - Seno\n");
    printf("9 - Cosseno\n");
    printf("10 - Tangente\n");
    printf("11 - Logaritmo natural (ln)\n");
    printf("12 - Logaritmo base 10 (log)\n");
    printf("13 - Fatorial (!)\n");
    printf("14 - Valor absoluto\n");
    printf("15 - Modulo (resto da divisao)\n");
    printf("16 - Inverso (1/x)\n");
    printf("17 - Exponencial (e^x)\n");
    printf("18 - Arredondar (round)\n");
    printf("19 - Piso (floor)\n");
    printf("20 - Teto (ceil)\n");

    printf("\nEscolha uma operacao: ");
    scanf("%d", &op);

    if (op >= 1 && op <= 5) {
        printf("Digite o primeiro numero: ");
        scanf("%lf", &num1);
        printf("Digite o segundo numero: ");
        scanf("%lf", &num2);
    } else if (op >= 6 && op <= 20 && op != 15 && op != 13) {
        printf("Digite um numero: ");
        scanf("%lf", &num1);
    } else if (op == 15) {
        printf("Digite o primeiro inteiro: ");
        scanf("%d", &n1);
        printf("Digite o segundo inteiro: ");
        scanf("%d", &n2);
    } else if (op == 13) {
        printf("Digite um inteiro para calcular o fatorial: ");
        scanf("%d", &n1);
    }

    if (op == 1) {
        resultado = num1 + num2;
        printf("Resultado = %.2lf\n", resultado);
    } else if (op == 2) {
        resultado = num1 - num2;
        printf("Resultado = %.2lf\n", resultado);
    } else if (op == 3) {
        resultado = num1 * num2;
        printf("Resultado = %.2lf\n", resultado);
    } else if (op == 4) {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado = %.2lf\n", resultado);
        } else {
            printf("Erro: divisao por zero!\n");
        }
    } else if (op == 5) {
        resultado = pow(num1, num2);
        printf("Resultado = %.2lf\n", resultado);
    } else if (op == 6) {
        if (num1 >= 0) {
            resultado = sqrt(num1);
            printf("Resultado = %.2lf\n", resultado);
        } else {
            printf("Erro: raiz de numero negativo!\n");
        }
    } else if (op == 7) {
        resultado = cbrt(num1);
        printf("Resultado = %.2lf\n", resultado);
    } else if (op == 8) {
        resultado = sin(num1);
        printf("Resultado = %.2lf\n", resultado);
    } else if (op == 9) {
        resultado = cos(num1);
        printf("Resultado = %.2lf\n", resultado);
    } else if (op == 10) {
        resultado = tan(num1);
        printf("Resultado = %.2lf\n", resultado);
    } else if (op == 11) {
        if (num1 > 0) {
            resultado = log(num1);
            printf("Resultado = %.2lf\n", resultado);
        } else {
            printf("Erro: logaritmo de numero nao positivo!\n");
        }
    } else if (op == 12) {
        if (num1 > 0) {
            resultado = log10(num1);
            printf("Resultado = %.2lf\n", resultado);
        } else {
            printf("Erro: logaritmo de numero nao positivo!\n");
        }
    } else if (op == 13) {
        if (n1 >= 0) {
            unsigned long long fat = fatorial(n1);
            printf("Resultado = %llu\n", fat);
        } else {
            printf("Erro: fatorial de numero negativo!\n");
        }
    } else if (op == 14) {
        resultado = fabs(num1);
        printf("Resultado = %.2lf\n", resultado);
    } else if (op == 15) {
        if (n2 != 0) {
            int mod = n1 % n2;
            printf("Resultado = %d\n", mod);
        } else {
            printf("Erro: modulo por zero!\n");
        }
    } else if (op == 16) {
        if (num1 != 0) {
            resultado = 1 / num1;
            printf("Resultado = %.2lf\n", resultado);
        } else {
            printf("Erro: divisao por zero!\n");
        }
    } else if (op == 17) {
        resultado = exp(num1);
        printf("Resultado = %.2lf\n", resultado);
    } else if (op == 18) {
        resultado = round(num1);
        printf("Resultado = %.2lf\n", resultado);
    } else if (op == 19) {
        resultado = floor(num1);
        printf("Resultado = %.2lf\n", resultado);
    } else if (op == 20) {
        resultado = ceil(num1);
        printf("Resultado = %.2lf\n", resultado);
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}

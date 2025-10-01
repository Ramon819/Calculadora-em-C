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

    do {
        printf("\n=== CALCULADORA COM 20 OPERACOES ===\n");
        printf("0 - Sair\n");
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

        if(op == 0) {
            printf("Encerrando a calculadora...\n");
            break;
        }

        if (op >= 1 && op <= 5) {
            printf("Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("Digite o segundo numero: ");
            scanf("%lf", &num2);
        } else if ((op >= 6 && op <= 20 && op != 13 && op != 15)) {
            printf("Digite um numero: ");
            scanf("%lf", &num1);
        } else if (op == 13) {
            printf("Digite um inteiro para calcular o fatorial: ");
            scanf("%d", &n1);
        } else if (op == 15) {
            printf("Digite o primeiro inteiro: ");
            scanf("%d", &n1);
            printf("Digite o segundo inteiro: ");
            scanf("%d", &n2);
        }

        switch(op) {
            case 1: resultado = num1 + num2; printf("Resultado = %.2lf\n", resultado); break;
            case 2: resultado = num1 - num2; printf("Resultado = %.2lf\n", resultado); break;
            case 3: resultado = num1 * num2; printf("Resultado = %.2lf\n", resultado); break;
            case 4: 
                if(num2 != 0) { resultado = num1 / num2; printf("Resultado = %.2lf\n", resultado); }
                else { printf("Erro: divisao por zero!\n"); }
                break;
            case 5: resultado = pow(num1, num2); printf("Resultado = %.2lf\n", resultado); break;
            case 6: 
                if(num1 >= 0) { resultado = sqrt(num1); printf("Resultado = %.2lf\n", resultado); }
                else { printf("Erro: raiz de numero negativo!\n"); }
                break;
            case 7: resultado = cbrt(num1); printf("Resultado = %.2lf\n", resultado); break;
            case 8: resultado = sin(num1); printf("Resultado = %.2lf\n", resultado); break;
            case 9: resultado = cos(num1); printf("Resultado = %.2lf\n", resultado); break;
            case 10: resultado = tan(num1); printf("Resultado = %.2lf\n", resultado); break;
            case 11: 
                if(num1 > 0) { resultado = log(num1); printf("Resultado = %.2lf\n", resultado); }
                else { printf("Erro: logaritmo de numero nao positivo!\n"); }
                break;
            case 12:
                if(num1 > 0) { resultado = log10(num1); printf("Resultado = %.2lf\n", resultado); }
                else { printf("Erro: logaritmo de numero nao positivo!\n"); }
                break;
            case 13: 
                if(n1 >= 0) { printf("Resultado = %llu\n", fatorial(n1)); }
                else { printf("Erro: fatorial de numero negativo!\n"); }
                break;
            case 14: resultado = fabs(num1); printf("Resultado = %.2lf\n", resultado); break;
            case 15:
                if(n2 != 0) { printf("Resultado = %d\n", n1 % n2); }
                else { printf("Erro: modulo por zero!\n"); }
                break;
            case 16:
                if(num1 != 0) { resultado = 1 / num1; printf("Resultado = %.2lf\n", resultado); }
                else { printf("Erro: divisao por zero!\n"); }
                break;
            case 17: resultado = exp(num1); printf("Resultado = %.2lf\n", resultado); break;
            case 18: resultado = round(num1); printf("Resultado = %.2lf\n", resultado); break;
            case 19: resultado = floor(num1); printf("Resultado = %.2lf\n", resultado); break;
            case 20: resultado = ceil(num1); printf("Resultado = %.2lf\n", resultado); break;
            default: printf("Opcao invalida!\n"); break;
        }

    } while(1);

    return 0;
}

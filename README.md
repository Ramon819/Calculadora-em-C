# Calculadora-em-C
Calculadora Científica em C
Este projeto implementa uma calculadora científica em linguagem C, capaz de realizar 20 operações matemáticas diferentes, desde cálculos básicos até funções avançadas como logaritmos, exponenciais e fatoriais.
________________________________________
 Funcionalidades
A calculadora possui as seguintes operações:
1.	Adição (+)
2.	Subtração (−)
3.	Multiplicação (×)
4.	Divisão (/) (com tratamento de divisão por zero)
5.	Exponenciação (x^y)
6.	Raiz Quadrada (√x) (apenas números não negativos)
7.	Seno (sin)
8.	Cosseno (cos)
9.	Tangente (tan) (com verificação de indeterminação)
10.	Logaritmo Natural (ln) (somente x > 0)
11.	Logaritmo Base 10 (log10) (somente x > 0)
12.	Fatorial (n!) (somente inteiros não negativos)
13.	Valor Absoluto (|x|)
14.	Arredondar para cima (ceil)
15.	Arredondar para baixo (floor)
16.	Parte inteira (trunc)
17.	Exponencial de Euler (e^x)
18.	Resto da divisão (fmod)
19.	Inverso (1/x) (exceto para x = 0)
20.	Hipotenusa (√(x² + y²))
________________________________________
 Tecnologias utilizadas
•	Linguagem: C
•	Bibliotecas:
o	<stdio.h> → Entrada e saída
o	<stdlib.h> → Funções utilitárias
o	<math.h> → Funções matemáticas avançadas
________________________________________
Como compilar e executar
1.	Compile o programa utilizando GCC (ou outro compilador C):
2.	gcc calculadora.c -o calculadora -lm
O parâmetro -lm é necessário para incluir a biblioteca math.h.
3.	Execute o programa:
4.	./calculadora
No Windows (MinGW), use:
calculadora.exe
________________________________________
Exemplo de uso
=== CALCULADORA CIENTIFICA ===
1.  Adicao (+)
2.  Subtracao (-)
3.  Multiplicacao (*)
4.  Divisao (/)
...
20. Hipotenusa (sqrt(x^2+y^2))

Escolha a operacao: 5
Insira o primeiro numero: 2
Insira o segundo numero: 
________________________________________
Tratamento de erros
•	Divisão por zero → retorna mensagem de erro.
•	Raiz quadrada de número negativo → inválido.
•	Logaritmos de valores ≤ 0 → inválidos.
•	Fatorial de números negativos → inválido.
•	Inverso de zero → inválido.



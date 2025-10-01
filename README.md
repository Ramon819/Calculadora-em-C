# CALCULADORA CIENTÍFICA EM C (20 Operações - Execução Única)

Este programa implementa uma calculadora em linguagem C que oferece um menu com 20 operações matemáticas, abrangendo desde a aritmética básica até funções trigonométricas e logarítmicas. O programa executa uma única operação por vez e encerra.

## 🚀 Funcionalidades

O programa oferece as seguintes 20 opções:

| # | Operação | Símbolo | Observações |
|:---:|:---|:---:|:---|
| **1** | Adição | `+` | |
| **2** | Subtração | `-` | |
| **3** | Multiplicação | `*` | |
| **4** | Divisão | `/` | Com tratamento de divisão por zero. |
| **5** | Potência | `x^y` | |
| **6** | Raiz Quadrada | `sqrt` | Com tratamento de raiz de número negativo. |
| **7** | Raiz Cúbica | `cbrt` | |
| **8** | Seno | `sin` | |
| **9** | Cosseno | `cos` | |
| **10** | Tangente | `tan` | |
| **11** | Logaritmo Natural | `ln` | Com tratamento de logaritmo de número não positivo. |
| **12** | Logaritmo Base 10 | `log10` | Com tratamento de logaritmo de número não positivo. |
| **13** | Fatorial | `!` | Usa números inteiros (`int`). |
| **14** | Valor Absoluto | `abs` | |
| **15** | Módulo | `%` | Usa números inteiros (`int`). Com tratamento de módulo por zero. |
| **16** | Inverso | `1/x` | Com tratamento de divisão por zero. |
| **17** | Exponencial | `e^x` | |
| **18** | Arredondar | `round` | |
| **19** | Piso | `floor` | Retorna o maior inteiro menor ou igual a `x`. |
| **20** | Teto | `ceil` | Retorna o menor inteiro maior ou igual a `x`. |

---

## 🛠️ Requisitos

* Um compilador C (como **GCC** ou **Clang**).
* As bibliotecas padrão `stdio.h`, `stdlib.h` e, principalmente, a biblioteca matemática `math.h`.

## ⚙️ Compilação e Execução

Para compilar o código (salvo como `calculadora.c`) usando o GCC, você deve incluir a flag **`-lm`** para linkar a biblioteca matemática:

1.  **Compile o arquivo:**

    ```bash
    gcc calculadora.c -o calculadora -lm
    ```

2.  **Execute o programa:**

    ```bash
    ./calculadora
    ```

### Como Usar:

1.  O programa exibirá o menu com as 20 opções.
2.  Digite o número da operação desejada (ex: `4` para Divisão).
3.  O programa solicitará as entradas necessárias (um ou dois números, que podem ser decimais (`double`) ou inteiros (`int`), dependendo da operação).
4.  O resultado será exibido e o programa será **encerrado**.

---

## 📄 Detalhes Técnicos

* **Tipos de Dados:** A maioria das operações usa o tipo `double` para maior precisão em cálculos decimais.
* **Inteiros Específicos:** As operações **Fatorial (13)** e **Módulo (15)** exigem a entrada de números inteiros (`int`).
* **Fatorial:** A função auxiliar `fatorial(int n)` retorna um `unsigned long long` para acomodar resultados grandes.
* **Tratamento de Erros:** O código verifica e notifica o usuário sobre erros comuns como divisão por zero, raiz de número negativo e logaritmo de números não positivos.

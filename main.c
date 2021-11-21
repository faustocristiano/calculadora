#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double valor1,valor2,resultado;


    if (argc==4) {
        valor1 = atof(argv[1]);
        valor2 = atof(argv[3]);

        switch (*argv[2])
        {

            case '+':
                resultado = valor1 + valor2;
                printf("Resultado de %.0f + %.0f é %.0f\n",valor1,valor2, resultado);
                break;
            case '-':
                resultado = valor1 - valor2;
                printf("Resultado de %.0f - %.0f é %.0f\n",valor1,valor2, resultado);
                break;
            case 'x':
                resultado = valor1 * valor2;
                printf("Resultado de %.0f x %.0f é %.0f\n",valor1,valor2, resultado);
                break;
            case '/':
                resultado = valor1 / valor2;
                printf("Resultado de %.0f / %.0f é %.0f\n",valor1,valor2, resultado);
                break;

        }

    }else
    {
        printf("\n calculador: devem ser passados 3 parâmetros!!!\n");
    }

    return 0;
}




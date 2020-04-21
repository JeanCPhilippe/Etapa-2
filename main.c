#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/* O programa foi desenvolvido com o intuito de ajudar a conversão de numeros para outras bases.
   Abordamos as seguintes bases: Octal, Hexadecimal, Binário e Decimal. Tendo como foco, o sistema de conversão
   binário para decimal/decimal para binário.*/

/* Autor : Jean Carlos Philippe
   Disciplina: Hands on Work*/
int main()
{
    int numconv,op;
    int numconvt[100];
    int i, numm ,tam,numbin,potencia;
    numbin=0;
    system("cls");
    do
    {
    tam=0;
    i=0;


    // Menu da calculadora.
    printf("______________________________\n");
    printf("|Conversor de Bases numericas|\n");
    printf("|1 - Decimal para Hexadecimal|\n");
    printf("|2 - Hexadecimal para Decimal|\n");
    printf("|3 - Decimal para Octal      |\n");
    printf("|4 - Octal para Decimal      |\n");
    printf("|5 - Decimal para Binario    |\n");
    printf("|6 - Binario para Decimal    |\n");
    printf("|Digite 0 para encerrar      |\n");
    printf("|____________________________|\n");
    printf("\n\nEscolha : ");
    scanf("%d", &op);
    if (op<0 || op >6) // Verificacao de validade da opcao escolhida.
    {
        system("cls");
        printf("Digite uma opcao valida\n");
        break;//Se digitado uma opção inválida, será interrompido o programa.
    }
    else
    if (op == 1)// Opção 1 e 2 são conversões de decimal e hexadecimal.
    {
        printf("Digite o numero em base DECIMAL : ");
        scanf("%d", &numconv);
        system("cls");
        printf("\n\nO numero %d em HEXADECIMAL eh '%x'\n", numconv, numconv);
    }

    else if (op == 2)
    {
        printf("Digite o numero em base HEXADECIMAL : ");
        scanf("%x", &numconv);
        system("cls");
        printf("\n\nO numero %x em DECIMAL eh '%d'\n", numconv, numconv);
    }


    else if (op == 3)//Opção 3 e 4 são cohttps://github.com/JeanCPhilippe/Etapa-2nversões de Octal e Decimal.
    {
        printf("Digite o numero em base DECIMAL : ");
        scanf("%d", &numconv);
        system("cls");
        printf("\n\nO numero %d em OCTAL eh '%o'\n", numconv, numconv);
    }

    else if (op == 4)
    {
        printf("Digite o numero em base OCTAL : ");
        scanf("%o", &numconv);
        system("cls");
        printf("\n\nO numero %o em DECIMAL eh '%d'\n", numconv, numconv);
    }


    else if (op == 5)//Opção 5 e 6 são conversões de Decimal e Binário.
    {
        printf("Digite seu numero em DECIMAL\n");
        scanf("%d", &numm);
        while (numm>0)
        {
            tam = numm%2; //Retira o resto da divisão
            numm = numm/2;
            numconvt[i] = tam; // Armazena o resto da divisão;

            i++;
        }
    system("cls");
    printf("Numero em Binario: ");
    for (numbin = i-1;numbin >= 0;numbin--) //Irá digitar o número binário.
    {
        printf("%d", numconvt[numbin]);
    }
    printf("\n");
    }
    else if (op == 6)
    {
    char op[100];
    int j, i,convt;
    convt=0;
    j=0;
    i=0;
    {
        printf("Digite seu numero em BINARIO\n");
        scanf("%s", &op);
        j = strlen(op) - 1;//Obtêm o tamanho do número em binário.
        potencia = j;
        convt=0;
            for (i=0; i<strlen(op); i++)
            {
                switch(op[i])
                {
                    case '1':
                    {
                        convt = convt + (1 * pow(2,potencia)); // Calcula o valor relacionado ao bit em que este numero está.
                        potencia--;
                        break;
                    }
                    case '0':
                    {
                        convt = 0 + convt;
                        potencia--;
                        break;
                    }
                    default:
                    {
                        printf("Digite um numero valido\n");
                        return 0;
                        break;
                    }

                }
            }
            system("cls");
            printf("Seu numero em decimal eh %d\n",convt); // Escreve qual o valor do número binário em decimal.
            printf("Seu numero tem %d bits\n",strlen(op));//Escreve quantos bits há neste número.

    }
    }

    }while (op!=0);

}


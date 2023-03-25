#include <stdio.h>
#include <math.h>
int main()
{

    printf("\n   Algaritmo e Logica de Programacao - Aut. Industrial / IFPB");
    printf("\n   Desenvolvido por Isaac G. Veras,       06 de setembro 2022");
    printf("\n   Calculo do Indice de Massa Corporal - IMC");

    printf("\n\n   QUESTAO - Um matematico italiano da idade media conseguiu modelar o ritmo de crescimento da populacao de\n   coelhos atraves de uma sequencia de numeros naturais que passou a ser conhecida como sequencia de Fibonacci.\n   O n-esimo numero da sequencia de Fibonacci Fn eh dado pela seguinte formula de recorrencia:\n");

    printf("\n      F1 = 1\n      F2 = 1\n      Fi = Fi-1 + Fi-2 para i>=3");
    int n,
        fant, fatual, fprox, /* numeros de Fibonacci                            */
        contador;            /* indica qual número de Fibonacci esta' em fatual */

    printf("\n\n   Digite um numero n e click ENTER: ");
    scanf("%d", &n);

    /* inicializacoes */
    fant = 0;
    fatual = 1;
    contador = 1;

    while (contador < n)
    {
        fprox = fatual + fant; /* proximo numero de Fibonacci */
        fant = fatual;
        fatual = fprox;
        contador = contador + 1;
    }
    printf("\n   O numero %d de Finobacci eh %d\n", n, fatual);
    printf("\n\n");
    
    return 0;
}

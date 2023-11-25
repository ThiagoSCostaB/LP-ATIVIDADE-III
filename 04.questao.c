#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>


int main()
{

int i;
int numeros[5];
int impares = 0;
int pares = 0;
int positivo = 0;
int negativo = 0;
int maiorNumero = 0;
int menorNumero = 999999;
float somaPar = 0;
float mediaPar = 0;
float somaNumero = 0;
int quantidade = 0;
float mediaNumeros = 0;

for ( i = 0; i < 5; i++)
{
   do
   {
    printf("Digite o %i° numero : ",i + 1);
    scanf("%i",&numeros[i]);

quantidade++;
somaNumero+= numeros[i];  

  if (numeros[i] % 2 == 0)
    {
       pares++;
       somaPar+= numeros[i];
    }else {
       impares++;
      
    }
    
      if (numeros[i] < 0 )
      {
      negativo++;
      }else{
      positivo++;
      }
 
    maiorNumero = numeros[i] > maiorNumero ? numeros[i] : maiorNumero; 
    menorNumero = numeros[i] < menorNumero ? numeros[i] : menorNumero;

   } while (numeros <= 0);

}

   if (pares > 0)
   {
   mediaPar = somaPar / (float) pares; 
    
   }

mediaNumeros = somaNumero / (float) i; 

for ( i = 0; i < 5; i++)
{
    printf("%i Numero : %i \n",i + 1,numeros[i]);
}

printf("\n-----------------------------------\n");
printf("imPares : %i \n",impares); 
printf("-----------------------------------\n");
printf("Numeros Negativos : %i \n",negativo); 
printf("-----------------------------------\n");
printf("Maior numero : %i \n", maiorNumero);
printf("Menor numero : %i \n", menorNumero);
printf("-----------------------------------\n");
printf("Media Par :%.1f \n",mediaPar);
printf("-----------------------------------\n");
printf("Media de numeros : %.1f \n", mediaNumeros);
printf("\n");




    return 0;
}
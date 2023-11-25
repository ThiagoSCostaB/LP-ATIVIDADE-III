#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

int main()
{
    
char alunos[5][200];
float notas[5][3];
int idade;
int i,j;
float media[5];
float somaNota = 0;


for ( i = 0; i < 5; i++)
{
   printf("Digite seu nome :"); 
   gets(alunos[i]);

fflush(stdin);
   printf("Digite sua idade: ");
   scanf("%i",&idade);


   for ( j = 0; j < 3; j++)
   {
      printf("Digite sua nota : ");
      scanf("%f",&notas[i][j]);

      somaNota+= notas[i][j];
   }
fflush(stdin);
   media[i] = somaNota / (float)j;
   somaNota = 0;
}

printf("\nExibindo resultados... \n");

    for (i = 0; i < 5; i++)
    {

        printf("Aluno: %s \n",alunos[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Nota : %.1f \n", notas[i][j]);
        }
        printf("Media : %.1f \n", media[i]);
        if (media[i] >= 7)
        {
            printf("Aprovado!! \n");
        }
        else if (media[i] >= 5 && media[i] < 7)
        {
            printf("Recuperaçao!! \n");
        }else{
            printf("Reprovado!! \n");
        }
        
    }



    return 0;
}
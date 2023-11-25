#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int  main(){
 setlocale(LC_ALL, "portuguese");
 
int i;
char nomes[5][500];
int idade[5];
float peso[5];
float altura[5];
float alto = 0;
float baixo = 99999;
int velho = 0;
int novo = 99999;
float gordo = 0;
float magro = 99999;
int genteAlta = 0;
int genteBaixa = 0;
int genteVelha= 0;
int genteNova = 0;
int genteGorda = 0;
int genteMagra = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite seu nome: ");
        gets(nomes[i]);

        printf("Digite sua idade: ");
        scanf("%d", &idade[i]);

        printf("Digite seu peso: ");
        scanf("%f", &peso[i]);

        printf("Digite sua altura: ");
        scanf("%f", &altura[i]);

    fflush(stdin);

        if (idade[i] > velho) {
            velho = idade[i];
            genteVelha = i;
        }
        if (idade[i] < novo) {
            novo = idade[i];
            genteNova = i;
        }

        if (peso[i] > gordo) {
            gordo = peso[i];
            genteGorda = i;
        }
        if (peso[i] < magro) {
            magro = peso[i];
            genteMagra = i;
        }

        if (altura[i] > alto) {
            alto = altura[i];
            genteAlta = i;
        }
        if (altura[i] < baixo) {
            baixo = altura[i];
            genteBaixa = i;
        }
    }

    

printf("\n Resultados:\n");

    printf("Pessoa mais alta: %s, Altura: %.2f\n", nomes[genteAlta], alto);
    printf("Pessoa mais baixa: %s, Altura: %.2f\n", nomes[genteBaixa], baixo);
    printf("Pessoa mais pesada: %s, Peso: %.2f\n", nomes[genteGorda], gordo);
    printf("Pessoa mais leve: %s, Peso: %.2f\n", nomes[genteMagra], magro);
    printf("Pessoa mais velha: %s, Idade: %d\n", nomes[genteVelha], velho);
    printf("Pessoa mais nova: %s, Idade: %d\n", nomes[genteNova], novo);





return 0;
}
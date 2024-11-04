#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nascimento.h"
int calcular(data_t nascimento, data_t hoje){
    int diasnascimento;
    diasnascimento = nascimento.ano * 365 + nascimento.mes * 30 + nascimento.dia;
    int diashoje;
    diashoje = hoje.ano * 365+hoje.mes *30 +hoje.dia;
    return diashoje - diasnascimento;
}

int main(){
    data_t nascimento, hoje;
    char nome[100];
    int dias;
    printf("qual o seu nome?\n");
    scanf("%s", nome);
    printf("que ano voce nasceu?\n");
    scanf("%d", &nascimento.ano);
    printf("que mes voce nasceu?\n");
    scanf("%d", &nascimento.mes);
    printf("que dia voce nasceu?\n");
    scanf("%d", &nascimento.dia);
    /////////////////////////////
    printf("digite o ano atual:\n");
    scanf("%d", &hoje.ano);
    printf("digite o mes atual:\n");
    scanf("%d", &hoje.mes);
    printf("digite o dia atual:\n");
    scanf("%d", &hoje.dia);

    dias = calcular(nascimento, hoje);

    printf("%s, voce tem aproximadamente %d dias de vida.\n", nome, dias);

}

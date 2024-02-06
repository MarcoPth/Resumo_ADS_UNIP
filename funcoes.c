#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include <locale.h>

#include "funcoes.h"


int entrada_num(int digitos, char* texto)
{
    int numero;
    int ret;
    int fator = 1;
    //acertando a quantidade de d�gitos
    for(int i = 0; i < digitos; i++)
        fator *= 10;
    do{
        printf("\n\n\t\t\t%s", texto);
        ret = scanf("%d", &numero); // retorna ou 0 se n�o for inteiro ou o n�mero de bytes
        while(getchar() != '\n'); // limpa o buffer - l� e limpa

        if(ret == 0){
            fprintf(stderr,"\n\n\t\tVoce deve informar um numero de %d digito/s\n", digitos);
        }else{
            if(numero < (fator/10) || numero >= fator){
                if(fator == 10 && numero == 0)
                    return numero;
                fprintf(stderr, "\n\n\t\tDigite apenas %d digito/s positivo/s!!!\n", digitos);
            }else{
                return numero;
            }
        }
    }while(1);


    return 0;

}

// fun��o que pausa a tela at� o usu�rio digitar qualquer tecla e depois limpa a tela para a pr�xima impress�o...
void pausar_tela(){
    printf("\n\n\n\n\nPressione qualquer tecla para continuar: ");
    getch();
    system("cls");
}


void frede(int opcoes)
{
    printf("em contru��o - resumo Fundamentos de Rede");
    pausar_tela();
}

void esoftware(int opcoes)
{
    printf("em contru��o - resumo Engenharia de software");
    pausar_tela();
}

void ling_prog(int opcoes)
{
    printf("em contru��o - resumo Linguagem de Programa��o");
    pausar_tela();
}

void matematica(int opcoes)
{
    printf("em contru��o - resumo Matem�tica para computa��o");
    pausar_tela();
}

void etica(int opcoes)
{
    printf("em contru��o - resumo �tica e Legisla��o Profissional");
    pausar_tela();
}

void met_cient(int opcoes)
{
    printf("em contru��o - resumo Metodologia cient�fica");
    pausar_tela();
}

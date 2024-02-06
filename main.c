//bibliotecas de sistemas
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <locale.h>

// biblioteca do programa
#include "funcoes.h"


int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int op;

    do{
        system("cls"); // lçimpa a tela toda a vez que o loop volta
        printf("\n\n\nMaterias do segundo semestre\n");
        printf("\n1 - Fundamentos Redes de dados e Comunicacao\n");
        printf("2 - Engenharia de Software\n");
        printf("3 - Linguagens e Tecnicas de Programacao\n");
        printf("4 - Matematica para computacao\n");
        printf("5 - Etica e Legislacao Profissional\n");
        printf("6 - Metodologia Cientifica\n");
        printf("0 - Sair");

        //função que faz o controle de entrada para permiter somente os valores inteiros de 0 a 9
        op = entrada_num(1, "\n\n\t\tEntre com a opcao: ");
        system("cls");

        switch(op){
            case 1: frede(op); break;
            case 2: esoftware(op); break;
            case 3: ling_prog(op); break;
            case 4: matematica(op); break;
            case 5: etica(op); break;
            case 6: met_cient(op); break;
            case 0: printf("Bye...\n\n\n\n"); pausar_tela(); break;
            default: printf("Opcao Invalida!!!");pausar_tela();


        }
    }while(op != 0);

    return 0;
}

#include <stdio.h>
struct tipoData {
    int dia;
    int mes;
    int ano;
};
struct tipoPessoa{
    char nome[80];
    struct tipoData dt_nascimento;
};


struct tipoPessoa separaInfo(char nome[80], int dt_nascimento){
    struct tipoPessoa retorno;
    for(int i=0;i<80;i++){
        retorno.nome[i]=nome[i];
    }
    
    retorno.dt_nascimento.dia =(dt_nascimento%100);
    retorno.dt_nascimento.mes = (dt_nascimento/100)%100;
    retorno.dt_nascimento.ano = (dt_nascimento/10000)%10000;

    return retorno;
    }

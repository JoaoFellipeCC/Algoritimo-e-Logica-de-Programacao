#include <stdio.h>
#include <stdlib.h>

main(){
    float preco_ingresso, custo_sessao, lucro_sessao, maior_lucro, ingresso_maior_lucro;
    int adicional_pessoas, pessoas, pessoas_maior_lucro;

    preco_ingresso = 5.00;
    pessoas = 120;
    custo_sessao = 200;
    lucro_sessao = (preco_ingresso * pessoas) - custo_sessao;
    maior_lucro = 0;

    system("cls");

    printf("- - - -   Preco dos ingressos   - - - -\n");

    printf("\nInsira o numero adicional de pessoas a cada reducao no ingresso: ");
    scanf("%d", &adicional_pessoas);

    printf("\n- - - - - - - - - - - - - - - - - - -\n");

    while(preco_ingresso >= 1){
        printf("\nPreco ingresso: %.2f\nPessoas: %d\nLucro da sessao: %.2f\n", preco_ingresso, pessoas, lucro_sessao);
        preco_ingresso -= 0.50;
        pessoas += adicional_pessoas;
        lucro_sessao = (preco_ingresso * pessoas) - custo_sessao;

        if(lucro_sessao > maior_lucro){
            maior_lucro = lucro_sessao;
            ingresso_maior_lucro = preco_ingresso;
            pessoas_maior_lucro = pessoas;
        }
    }

    printf("\n- - - - - - - - - - - - - - - - - - -\n");

    printf("\nO valor do ingresso que gerou o maior lucro foi: %.2f\nNessa sessao, %d pessoas compareceram.\nE o lucro liquido foi: %.2f", ingresso_maior_lucro, pessoas_maior_lucro, maior_lucro);

    printf("\n- - - - - - -   Fim   - - - - - - -\n");

    system("PAUSE");
}
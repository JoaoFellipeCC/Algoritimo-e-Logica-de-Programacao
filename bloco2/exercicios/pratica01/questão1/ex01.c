#include <stdio.h>
#include <stdlib.h>

main(){
    float massa_inicial, massa_final, tempo_segundos, tempo_minutos, tempo_horas;
    int repeticao = 0;

    system("cls");

    printf("- - - -   Massa de um material radioativo   - - - -\n");

    printf("\nInsira a massa inicial em gramas: ");
    scanf("%f", &massa_inicial);

    massa_final = massa_inicial;
    while(massa_final > 0.5){
        massa_final /= 2;

        repeticao++;
    }

    printf("\n- - - - - - - -   Massa   - - - - - - - -\n");

    printf("\nMassa inicial: %.2f\nMassa final: %.2f", massa_inicial, massa_final);

    printf("\n\n- - - - - - - -   Tempo   - - - - - - - -\n");

    tempo_segundos = repeticao * 50;
    tempo_minutos = tempo_segundos / 60;
    tempo_horas = tempo_minutos / 60;

    printf("\nRepeticao: %d\nTempo em segundos: %.0f\nTempo em minutos: %.2f\nTempo em horas: %.2f\n", repeticao, tempo_segundos, tempo_minutos, tempo_horas);

    printf("\n- - - - - - - -   Fim   - - - - - - - -\n");

    system("PAUSE");
}
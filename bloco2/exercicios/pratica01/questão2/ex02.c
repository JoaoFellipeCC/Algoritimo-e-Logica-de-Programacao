#include <stdio.h>
#include <stdlib.h>

main(){
    float num, soma_par, soma_geral;
    int resp, cont, teste, par, impar, num_positivo;
    soma_geral=0;
    cont=0;
    par=0;
    impar=0;
    num_positivo=0;
    do
    {
        system("cls");
        printf("- - - - Dados dos numeros - - - -\n");
        printf("\nInsira um numero positivo qualquer: ");
        scanf("%f", &num);
        if (num>=0)
        {
            num_positivo++;
            soma_geral+=num;
            cont++;
            if ((int)(num*10.0)%10==0)
            {
                teste=num;    
                if (teste % 2 ==0)
                {
                    par++;
                    soma_par+=num;
                }else{
                    impar++;
                }
                 
            }else{
                printf("E um numero com casas decimais, portanto, nao ha paricidade.");
            }
            
        }else{
            printf("\nNUMERO INVALIDO DIGITADO\n");
        }
        printf("\nQuer continuar inserindo numeros(sim=1/nao=0)?");
        scanf("%d",&resp);
    } while (resp==1);
    system("cls");
    if (num_positivo>0)
    {
        printf("\nA quantidade de numeros pares digitados foi: %d.\n", par);
        printf("-------------------------------------------------------\n");
        printf("A quantidade de numeros impares digitados foi: %d.\n", impar);
        printf("-------------------------------------------------------\n");
        printf("A media geral dos numeros digitados foi: %.2f.\n", soma_geral/cont);
        printf("-------------------------------------------------------\n");
    }else{
        printf("\nAtencao: nao foram digitados valores validos para obtencao dos dados.\n");
    }
    printf("\n- - - - - - - -   Fim   - - - - - - - -\n");
    system("pause");
}
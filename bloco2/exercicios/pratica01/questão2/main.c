#include <stdio.h>
#include <stdlib.h>

main(){
    float num, soma_par, soma_geral;
    int resp, cont, teste, par, impar;
    soma_geral=0;
    cont=0;
    par=0;
    impar=0;
    do
    {
        system("cls");
        printf("Insira um numero positivo qualquer: ");
        scanf("%f", &num);
        if (num>=0)
        {
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
            printf("NUMERO INVALIDO DIGITADO");
        }
        printf("Quer continuar inserindo numeros(sim=1/nao=0)?");
        scanf("%d",&resp);
    } while (resp==1);
    printf("\nA quantidade de numeros pares digitados foi: %d.\n\n", par);
    printf("A quantidade de numeros impares digitados foi: %d.\n\n", impar);
    printf("A media geral dos numeros digitados foi: %.2f.\n\n", soma_geral/cont);
}
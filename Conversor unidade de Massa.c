#include<stdio.h>
#include<locale.h>

void converterMassa();

int main(){
    setlocale(LC_ALL,"pt_BR.UTF-8");
        converterMassa();
    
}

void converterMassa(){
    int opcao=-1;
    double valor, resultado;
    
    while(opcao!=0){
    printf("------------------------------\n");
    printf("CONVERSOR DE MASSA \n");
    printf("------------------------------\n");
    printf("1. Quilogramas para Gramas.\n");
    printf("2. Quilogramas para Toneladas.\n");
    printf("3. Gramas para Quilogramas.\n");
    printf("4. Gramas para Toneladas.\n");
    printf("5. Toneladas para Quilogramas.\n");
    printf("6. Toneladas para Gramas.\n");
    printf("0. Sair.\n");
    printf("Escolha a conversão que deseja fazer:");
    scanf("%d",&opcao);
    
    
    switch(opcao){
        case 1: printf("Digite o valor que deseja converter (em Quilogramas):");
            scanf("%lf", &valor);
            resultado = valor*1000;
            printf("%.2f Quilogramas são %.2f Gramas.\n",valor, resultado);
            break;
        case 2: printf("Digite o valor que deseja converter (em Quilogramas):");
            scanf("%lf", &valor);
            resultado = valor/1000;
            printf("%.2f Quilogramas são %.2f Toneladas.\n",valor, resultado);
            break;
        case 3: printf("Digite o valor que deseja converter (em Gramas):");
            scanf("%lf", &valor);
            resultado = valor/1000;
            printf("%.2f Gramas são %.2f Quilogramas.\n", valor, resultado);
            break;
        case 4: printf("Digite o valor que deseja converter (em Gramas):");
            scanf("%lf", &valor);
            resultado = valor / 1000000;
            printf("%.2f Gramas são %.2f Toneladas.\n", valor, resultado);
            break;
        case 5: printf("Digite o valor que deseja converter (em Toneladas):");
            scanf("%lf", &valor);
            resultado = valor*1000;
            printf("%.2f Toneladas são %.2f Quilogramas.\n", valor , resultado);

            break;
        case 6: printf("Digite o valor que deseja converter (em Toneladas):");
            scanf("%lf", &valor);
            resultado = valor * 1000000;
            printf("%.2f Toneladas são %.2f Gramas.\n", valor, resultado);

            break;
        case 0: printf("Saindo do programa!\n");
            break;
        default: printf("Opção Inválida!\n");
            break;
        }
        if(opcao!=0){
            printf("Deseja continuar?\n 1. Sim 0. Não\n");
            scanf("%d",&opcao);
        }
    }
}
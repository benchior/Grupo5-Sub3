#include<stdio.h>
#include<locale.h>

void converterMassa();

int main(){
    setlocale(LC_ALL,"pt_BR.UTF-8");
    while(1){
        converterMassa();
    }
}

void converterMassa(){
    int opcao;
    double valor, resultado;
    
    printf("------------------------------\n");
    printf("CONVERSOR DE MASSA \n");
    printf("------------------------------\n");
    printf("1. Quilogramas para Gramas.\n");
    printf("2. Quilogramas para Toneladas.\n");
    printf("3. Gramas para Quilogramas.\n");
    printf("4. Gramas para Toneladas.\n");
    printf("5. toneladas para Quilogramas.\n");
    printf("6. toneladas para Gramas.\n");
    printf("Escolha a conversão que deseja fazer (1-6):");
    scanf("%d",&opcao);
    
    if(opcao>=1 || opcao<=6){
        printf("Digite o valor da massa:");
        scanf("%lf", &valor);

    switch(opcao){
        case 1: resultado = valor*1000;
            printf("%.2f Quilogramas são %.2f Gramas.\n",valor, resultado);
            break;
        case 2: resultado = valor/1000;
            printf("%.2f Quilogramas são %.2f Toneladas.\n",valor, resultado);
            break;
        case 3: resultado = valor/1000;
            printf("%.2f Gramas são %.2f Quilogramas.\n", valor, resultado);
            break;
        case 4: resultado = valor / 1000000;
            printf("%.2f Gramas são %.2f Toneladas.\n", valor, resultado);
            break;
        case 5: resultado = valor*1000;
            printf("%.2f Toneladas são %.2f Quilogramas.\n", valor , resultado);
            break;
        case 6: resultado = valor * 1000000;
            printf("%.2f Toneladas são %.2f Gramas.\n", valor, resultado);
            break;
    }

    }else{
        printf("Opção Invalida!");
        return;
    }


}
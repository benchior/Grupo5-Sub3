#include <stdio.h>

// Funções de conversão de comprimento
void converter_comprimento() {
    float metros, centimetros, milimetros;
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);
    centimetros = metros * 100;
    milimetros = metros * 1000;
    printf("%.2f metros = %.2f centimetros = %.2f milimetros\n", metros, centimetros, milimetros);
}

// Funções de conversão de massa
void converter_massa() {
    float quilogramas, gramas, toneladas;
    printf("Digite o valor em quilogramas: ");
    scanf("%f", &quilogramas);
    gramas = quilogramas * 1000;
    toneladas = quilogramas / 1000;
    printf("%.2f quilogramas = %.2f gramas = %.2f toneladas\n", quilogramas, gramas, toneladas);
}

// Funções de conversão de volume
void converter_volume() {
    float litros, mililitros, metros_cubicos;
    printf("Digite o valor em litros: ");
    scanf("%f", &litros);
    mililitros = litros * 1000;
    metros_cubicos = litros / 1000;
    printf("%.2f litros = %.2f mililitros = %.2f metros cúbicos\n", litros, mililitros, metros_cubicos);
}

// Funções de conversão de temperatura
void converter_temperatura() {
    float celsius, fahrenheit, kelvin;
    printf("Digite o valor em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    kelvin = celsius + 273.15;
    printf("%.2f Celsius = %.2f Fahrenheit = %.2f Kelvin\n", celsius, fahrenheit, kelvin);
}

// Funções de conversão de velocidade
void converter_velocidade() {
    float kmh, ms, mph;
    printf("Digite o valor em km/h: ");
    scanf("%f", &kmh);
    ms = kmh / 3.6;
    mph = kmh / 1.609;
    printf("%.2f km/h = %.2f m/s = %.2f mph\n", kmh, ms, mph);
}

// Função de conversão de potência feita por Leonardo Bonifácio
void converter_potencia() {
    float watts = 0, quilowatts = 0, cavalos_vapor = 0;
    int opcao_origem = 0, opcao_destino = 0;

    printf("Escolha a unidade de entrada:\n");
    printf("1 - Watts\n");
    printf("2 - Quilowatts\n");
    printf("3 - Cavalos-vapor\n");
    printf("Opção: ");
    scanf("%d", &opcao_origem);

    // Recebe o valor baseado na unidade de origem com validação para valores negativos
    switch (opcao_origem) {
        case 1:
            printf("Digite o valor em watts: ");
            scanf("%f", &watts);
            if (watts < 0) {
                printf("Erro: O valor em watts não pode ser negativo.\n");
                return;
            }
            quilowatts = watts / 1000;
            cavalos_vapor = watts / 735.5;
            break;
        case 2:
            printf("Digite o valor em quilowatts: ");
            scanf("%f", &quilowatts);
            if (quilowatts < 0) {
                printf("Erro: O valor em quilowatts não pode ser negativo.\n");
                return;
            }
            watts = quilowatts * 1000;
            cavalos_vapor = watts / 735.5;
            break;
        case 3:
            printf("Digite o valor em cavalos-vapor: ");
            scanf("%f", &cavalos_vapor);
            if (cavalos_vapor < 0) {
                printf("Erro: O valor em cavalos-vapor não pode ser negativo.\n");
                return;
            }
            watts = cavalos_vapor * 735.5;
            quilowatts = watts / 1000;
            break;
        default:
            printf("Opção inválida!\n");
            return;
    }

    // Pergunta para qual unidade deseja converter
    printf("Escolha a unidade de destino ou todas:\n");
    printf("1 - Watts\n");
    printf("2 - Quilowatts\n");
    printf("3 - Cavalos-vapor\n");
    printf("4 - Todas as unidades\n");
    printf("Opção: ");
    scanf("%d", &opcao_destino);

    // Exibe os resultados com base na unidade escolhida
    switch (opcao_destino) {
        case 1:
            printf("Resultado: %.2f watts\n", watts);
            break;
        case 2:
            printf("Resultado: %.2f quilowatts\n", quilowatts);
            break;
        case 3:
            printf("Resultado: %.2f cavalos-vapor\n", cavalos_vapor);
            break;
        case 4:
            printf("Resultado: %.2f watts = %.2f quilowatts = %.2f cavalos-vapor\n", 
                   watts, quilowatts, cavalos_vapor);
            break;
        default:
            printf("Opção inválida!\n");
    }
}


// Funções de conversão de área
void converter_area() {
    float metros_quadrados, centimetros_quadrados;
    printf("Digite o valor em metros quadrados: ");
    scanf("%f", &metros_quadrados);
    centimetros_quadrados = metros_quadrados * 10000;
    printf("%.2f metros quadrados = %.2f centimetros quadrados\n", metros_quadrados, centimetros_quadrados);
}

// Funções de conversão de tempo
void converter_tempo() {
    float segundos, minutos, horas;
    printf("Digite o valor em segundos: ");
    scanf("%f", &segundos);
    minutos = segundos / 60;
    horas = segundos / 3600;
    printf("%.2f segundos = %.2f minutos = %.2f horas\n", segundos, minutos, horas);
}

// Funções de conversão de dados
void converter_dados() {
    float bits, bytes, kilobytes, megabytes, gigabytes, terabytes;
    printf("Digite o valor em bytes: ");
    scanf("%f", &bytes);
    bits = bytes * 8;
    kilobytes = bytes / 1024;
    megabytes = kilobytes / 1024;
    gigabytes = megabytes / 1024;
    terabytes = gigabytes / 1024;
    printf("%.2f bytes = %.2f bits = %.2f KB = %.2f MB = %.2f GB = %.2f TB\n", bytes, bits, kilobytes, megabytes, gigabytes, terabytes);
}

// Interface de usuário
void interface_usuario() {
    int opcao;
    do {
        printf("\nEscolha uma conversão:\n");
        printf("1. Comprimento\n");
        printf("2. Massa\n");
        printf("3. Volume\n");
        printf("4. Temperatura\n");
        printf("5. Velocidade\n");
        printf("6. Potência\n");
        printf("7. Área\n");
        printf("8. Tempo\n");
        printf("9. Dados\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: converter_comprimento(); break;
            case 2: converter_massa(); break;
            case 3: converter_volume(); break;
            case 4: converter_temperatura(); break;
            case 5: converter_velocidade(); break;
            case 6: converter_potencia(); break;
            case 7: converter_area(); break;
            case 8: converter_tempo(); break;
            case 9: converter_dados(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while(opcao != 0);
}

int main() {
    interface_usuario();
    return 0;
}
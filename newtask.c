#include <stdio.h>

void converter_velocidade(double valor, char unidade) {
    double kmh, ms, mph;

    if (unidade == 'k') {  // km/h para m/s e mph
        kmh = valor;
        ms = kmh / 3.6;        // 1 km/h = 1/3.6 m/s
        mph = kmh * 0.621371;  // 1 km/h = 0.621371 mph
    } else if (unidade == 'm') {  // m/s para km/h e mph
        ms = valor;
        kmh = ms * 3.6;        // 1 m/s = 3.6 km/h
        mph = ms * 2.23694;    // 1 m/s = 2.23694 mph
    } else if (unidade == 'p') {  // mph para km/h e m/s
        mph = valor;
        kmh = mph / 0.621371;  // 1 mph = 1/0.621371 km/h
        ms = mph / 2.23694;    // 1 mph = 1/2.23694 m/s
    } else {
        printf("Unidade inválida\n");
        return;
    }

    // Exibe os resultados das conversões
    printf("Valor original: %.2f ", valor);
    if (unidade == 'k') {
        printf("km/h\n");
    } else if (unidade == 'm') {
        printf("m/s\n");
    } else if (unidade == 'p') {
        printf("mph\n");
    }

    printf("Em km/h: %.2f\n", kmh);
    printf("Em m/s: %.2f\n", ms);
    printf("Em mph: %.2f\n", mph);
}

int main() {
    double valor;
    char unidade;

    printf("Escolha a unidade de entrada (k para km/h, m para m/s, p para mph): ");
    scanf(" %c", &unidade);  // O espaço antes de %c ignora qualquer caractere de nova linha residual

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    converter_velocidade(valor, unidade);

    return 0;
}

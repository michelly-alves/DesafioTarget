#include <stdio.h>

int main()
{
    float faturamento[] = {22174.1664, 24537.6698,26139.6134, 0.0, 0.0,26742.6612, 0.0, 42889.2258, 46251.174, 11191.4722, 0.0, 0.0,3847.4823 ,373.7838 , 2659.7563,48924.2448 , 18419.2614, 0.0, 0.0 ,35240.1826 , 43829.1667 ,18235.6852 ,4355.0662 ,13327.1025 , 0.0,0.0 , 25681.8318,1718.1221,13220.495,8414.61 };
    int n = sizeof(faturamento) / sizeof(faturamento[0]);

    // Calcula o menor valor de faturamento diário
    float menor_valor = faturamento[0];
    for (int i = 1; i < n; i++) {
        if (faturamento[i] < menor_valor && faturamento[i] != 0) {
            menor_valor = faturamento[i];
        }
    }
    printf("O menor valor de faturamento foi R$%.2f.\n", menor_valor);

    // Calcula o maior valor de faturamento diário
    float maior_valor = faturamento[0];
    for (int i = 1; i < n; i++) {
        if (faturamento[i] > maior_valor) {
            maior_valor = faturamento[i];
        }
    }
    printf("O maior valor de faturamento foi R$%.2f.\n", maior_valor);

    // Calcula a média mensal de faturamento
    float soma_faturamento = 0;
    int dias_uteis = 0;
    for (int i = 0; i < n; i++) {
         soma_faturamento += faturamento[i];
            if(faturamento[i] != 0){
                dias_uteis++;
            }
    }
    float media_mensal = soma_faturamento / dias_uteis;

    // Calcula o número de dias em que o faturamento diário foi superior à média mensal
    int dias_acima_da_media = 0;
    for (int i = 0; i < n; i++) {
        if (faturamento[i] > media_mensal) {
            dias_acima_da_media++;
        }
    }
    printf("Houve %d dias em que o faturamento diário foi superior à média mensal (R$%.2f).\n", dias_acima_da_media, media_mensal);

    return 0;
}

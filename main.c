#include <stdio.h>

int main() {
    double getiri, risksiz_faiz, standart_sapma, sharpe;

    // Giriþ al
    printf("Yatirim Getirisini girin (%%): ");
    scanf("%lf", &getiri);

    printf("Risksiz Faiz Oranini girin (%%): ");
    scanf("%lf", &risksiz_faiz);

    printf("Portfoyun Standart Sapmasini girin (%%): ");
    scanf("%lf", &standart_sapma);

    // Sharpe oraný hesaplama
    sharpe = (getiri - risksiz_faiz) / standart_sapma;

    // Sonucu göster
    printf("\nSharpe Oraný: %.2lf\n", sharpe);

    if (sharpe < 1.0)
        printf("Bu yatirim risk-getiri oraný zayýf.\n");
    else if (sharpe >= 1.0 && sharpe < 2.0)
        printf("Bu yatirim kabul edilebilir seviyede.\n");
    else if (sharpe >= 2.0 && sharpe < 3.0)
        printf("Bu yatirimm çok iyi.\n");
    else
        printf("Bu yatirim mükemmel!\n");

    return 0;
}

#include <stdio.h>

int main() {
    double getiri, risksiz_faiz, standart_sapma, sharpe;

    // Giri� al
    printf("Yatirim Getirisini girin (%%): ");
    scanf("%lf", &getiri);

    printf("Risksiz Faiz Oranini girin (%%): ");
    scanf("%lf", &risksiz_faiz);

    printf("Portfoyun Standart Sapmasini girin (%%): ");
    scanf("%lf", &standart_sapma);

    // Sharpe oran� hesaplama
    sharpe = (getiri - risksiz_faiz) / standart_sapma;

    // Sonucu g�ster
    printf("\nSharpe Oran�: %.2lf\n", sharpe);

    if (sharpe < 1.0)
        printf("Bu yatirim risk-getiri oran� zay�f.\n");
    else if (sharpe >= 1.0 && sharpe < 2.0)
        printf("Bu yatirim kabul edilebilir seviyede.\n");
    else if (sharpe >= 2.0 && sharpe < 3.0)
        printf("Bu yatirimm �ok iyi.\n");
    else
        printf("Bu yatirim m�kemmel!\n");

    return 0;
}

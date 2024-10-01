#include <stdio.h>

int main(void)
{
    float costodelbiglietto, importodapagare;
    char categoria;
    printf("Inserisci il costo del biglietto: ");
    scanf("%f", &costodelbiglietto);
    printf("Inserisci la tua categoria (s per studente, d per disoccupato, p per pensionato): ");
    scanf(" %c", &categoria);
    if (categoria == 's') {
        importodapagare = costodelbiglietto * 0.85;
    } else if (categoria == 'd') {
        importodapagare = costodelbiglietto * 0.75;
    } else if (categoria == 'p') {
        importodapagare = costodelbiglietto * 0.90;
    }
    printf("L'importo da pagare è di %.2f euro.\n", importodapagare);
    return 0;
}

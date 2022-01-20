#include <stdio.h>
int main()
{
    int b = 1, y, j, w = 0; /*definiowanie zmiennych*/
    long wart_dec = 0, x; /*definiowanie zmiennych za pomoca long w celu przjecia wiekszej liczby znakow*/
    
    printf(" Witaj w kalkulatorze liczb bin->dec \n Czy chcesz przejsc dalej? \n Wpisz 1 (TAK) lub 0 (NIE) \n "); /*komunikat powitalny i zapytanie uzytkownika czy chce przejsc dalej*/
    scanf("%d", &w); /*przyjecie wartosci od uzytkownika i nadpisanie jej w zmiennej "w"*/

    while (w == 1) /*warunek pozytywny*/
    {
        printf("Wpisz liczbe w systemie binarnym: "); /*komunikat proszacy uzytkownika o wpisanie liczby binarnej*/
        scanf("%ld", &x); /*przyjecie od uzytkownika liczby i nadpisanie jej jako zmienna "x"*/
       
        while (x > 0) /*warunek dla przeliczania*/
        {
            y = x % 10; 
            wart_dec = wart_dec + y * b; /*przeliczanie liczby*/
            x = x / 10;
            b = b * 2;
            if (y != 0 && y != 1) /*warunek dla wpisanej liczby gdy nie jest binarna*/
            {
                printf("Uruchom program od poczatku i wpisz poprawnie liczbe"); /*komunikat o blednie wpisanej liczbie*/
                return 1; /*zakonczenie programu*/
                
            }
            j = x / 10; /*przeliczenia dla warunku liczby binarnej*/
            if (j == 0) /*warunek dla wpisanej gdy jest binarna*/
            {
                y = x % 10;
                wart_dec = wart_dec + y * b; /*przeliczanie liczby*/
                x = x / 10;
                b = b * 2;
                printf("Wartosc decymalna twojej liczby: %ld ", wart_dec); /*komunikat wyswietlajacy liczbe po przeliczeniu*/
                
            }
        }
        b = 1; /*resetowanie wartosci*/
        wart_dec = 0; /*resetowanie wartosci*/
        printf("Czy chcesz policzyc nastepna liczbe? \n Wpisz 1 (TAK) lub 0 (NIE) \n"); /*komunikat pytajacy uzytkownika czy chce liczyc kolejna liczbe*/
        scanf("%d", &w); /*przyjecie wartosci od uzytkownika i nadpisanie jej w zmiennej "w"*/
    }
    if (w != 1) /*warunek negatywny*/
    {
        printf("Do widzenia"); /*komunikat koncowy*/   
    }
}
//------------------------------------------------------------------------------------------------------------------------------------------
// Funktion für die Quersumme berechnen

#include <stdio.h>

//Funktionen vor Main einfügen

unsigned int uiQuersumme(unsigned long uiZahl)
{
    unsigned int uiSumme = 0;
    
    while (uiZahl > 0)
    {
        uiSumme += uiZahl % 10;     //uiSumme = uiSumme + (uiZahl % 10);
        uiZahl /= 10;               //uiZahl = uiZahl / 10;
    }
    return (uiSumme);
}

int main()
{
    
    unsigned int uiErgebnis;
    
    uiErgebnis = uiQuersumme(359);    //Wert kann ausgetauscht werden
    printf("Quersumme = %u", uiErgebnis);
    
    return 0;
}
//------------------------------------------------------------------------------------------------------------------------------------------
// Gleiche Funktion nur mit Eingabemöglichkeit

#include <stdio.h>

unsigned int uiQuersumme(unsigned long uiZahl)
{
    unsigned int uiSumme = 0;
    
    while (uiZahl > 0)
    {
        uiSumme += uiZahl % 10;
        uiZahl /= 10;
    }
    return (uiSumme);
}


int main()
{
    
    unsigned int uiErgebnis, uiEingabewert;
    printf("Wert eingeben:");
    scanf("%u", &uiEingabewert);
    
    uiErgebnis = uiQuersumme(uiEingabewert);
    printf("Quersumme = %u", uiErgebnis);
    
    return 0;
}
//------------------------------------------------------------------------------------------------------------------------------------------

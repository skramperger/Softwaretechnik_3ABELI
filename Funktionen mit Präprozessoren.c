//----------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

//------------------------------------------------------------
// Funktionen
//------------------------------------------------------------

// Funktion für Diskriminante berechnen
double dblDiskriminante(double dblP, double dblQ)
{
    return (dblP*dblP/4 - dblQ);
}

// Funktion zur Berechnung von X1 einer quadratischen Gleichung
double dblLoeseQuadratischeGleichungx1(double dblP, double dblQ)
{
    return(-dblP/2 + sqrt(dblDiskriminante(dblP, dblQ)));
}

// Funktion zur Berechnung von X1 einer quadratischen Gleichung
double dblLoeseQuadratischeGleichungx2(double dblP, double dblQ)
{
    return(-dblP/2 - sqrt(dblDiskriminante(dblP, dblQ)));
}


//------------------------------------------------------------
// Hauptprogramm
//------------------------------------------------------------
int main()
{

    double dblx1, dblx2;
    
    dblx1 = dblLoeseQuadratischeGleichungx1(-2, -8);
    dblx2 = dblLoeseQuadratischeGleichungx2(-2, -8);
    
    printf("X1 beträgt %.2f und X2 beträgt %.2f", dblx1, dblx2);
    return 0;
}
//----------------------------------------------------------------------------------------------------------------------------------
//Funktionen für quadratische Gleichung mit Eingabemöglichkeit

#include <stdio.h>
#include <math.h>

//------------------------------------------------------------
// Funktionen
//------------------------------------------------------------
double dblDiskriminante(double dblP, double dblQ)
{
    return (dblP*dblP/4 - dblQ);
}

double dblLoeseQuadratischeGleichungx1(double dblP, double dblQ)
{
    return(-dblP/2 + sqrt(dblDiskriminante(dblP, dblQ)));
}

double dblLoeseQuadratischeGleichungx2(double dblP, double dblQ)
{
    return(-dblP/2 - sqrt(dblDiskriminante(dblP, dblQ)));
}

//------------------------------------------------------------
// Hauptprogramm
//------------------------------------------------------------
int main()
{
    double dblP, dblQ, dblx1, dblx2;
    
    printf("Werte für die quadratische Gleichung eingeben: \nP: ");
    scanf("%lf", &dblP);
    printf("Q: ");
    scanf("%lf", &dblQ);
    dblx1 = dblLoeseQuadratischeGleichungx1(dblP, dblQ);
    dblx2 = dblLoeseQuadratischeGleichungx2(dblP, dblQ);
    
    printf("X1 beträgt %.2f und X2 beträgt %.2f", dblx1, dblx2);
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------
// Programm mit Präprozessor über include
//main.c

#include <stdio.h>
#include <math.h>
#include "quadratischeGleichung.h"


//-----------------------------------------------------------------------
// Hauptprogramm
//-----------------------------------------------------------------------
int main()
{
    double dblP, dblQ, dblx1, dblx2;
    
    printf("Werte für die quadratische Gleichung eingeben: \nP: ");
    scanf("%lf", &dblP);
    printf("Q: ");
    scanf("%lf", &dblQ);
    
    dblx1 = dblLoeseQuadratischeGleichungx1(dblP, dblQ);
    dblx2 = dblLoeseQuadratischeGleichungx2(dblP, dblQ);
    
    printf("X1 beträgt %.2f und X2 beträgt %.2f.", dblx1, dblx2);
    return 0;
}

//-----------------------------------------------------------------------
// quadratischeGleichung.h
//-----------------------------------------------------------------------

extern double dblLoeseQuadratischeGleichungx1(double dblP, double dblQ);
extern double dblLoeseQuadratischeGleichungx2(double dblP, double dblQ);

//-----------------------------------------------------------------------
// quadratischeGleichung.c
//-----------------------------------------------------------------------

#include "quadratischeGleichung.h"
#include <math.h>
double dblDiskriminante(double dblP, double dblQ)
{
    return (dblP*dblP/4 - dblQ);
}

double dblLoeseQuadratischeGleichungx1(double dblP, double dblQ)
{
    return(-dblP/2 + sqrt(dblDiskriminante(dblP, dblQ)));
}

double dblLoeseQuadratischeGleichungx2(double dblP, double dblQ)
{
    return(-dblP/2 - sqrt(dblDiskriminante(dblP, dblQ)));
}

//----------------------------------------------------------------------------------------------------------------------------------

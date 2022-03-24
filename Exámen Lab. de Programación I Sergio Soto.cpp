#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

string seccion;

int seccionn = 25;
int i, notaindividual, suma_notas=0, aprobados=0, reprobados=0;
float promedio;


int contador(int nota)
{
    if(nota>=10 && nota<=20){
        aprobados++;
    }else if(nota>=0 && nota<=9){
        reprobados++;
        }
}

string sumaaprobados(int nota)
{
     if(nota<=20 && nota>=10){
        return "aprobado";
    }else if (nota<=9 && nota>=0){
        return "reprobado";
        }
}

string calificacion(int nota)
{
    if (nota<=20 && nota>=19){
        return "sobresaliente";
    }else if (nota<=18 && nota>=16){
        return "muy buena";
    }else if (nota<=15 && nota>=13){
        return "buena";
    }else if (nota<=12 && nota>=10){
        return "regular";
    }else if (nota<=9 && nota>=6){
        return "mejorable";
    }else if (nota<=5 && nota>=0){
        return "deficiente";
        }
}

int main()
{
    printf("Numero de alumnos: 25\n");
    for(i=1; i<=seccionn; i++)
    {
        if(i==1)
        {
        printf("Ingrese la nota del estudiante\n");
        scanf("%d", &notaindividual);
        if(notaindividual>20 || notaindividual<0)
        {
        printf("Nota invalida");
        return 0;
        }
        cout << "Estudiante " + to_string (i) + ". Este estudiante tiene una calificacion " + calificacion (notaindividual) + " y esta " + sumaaprobados (notaindividual)  << endl;
        }

        else if(i>1 && i<=seccionn)
        {
        printf("Ingrese la nota del siguiente estudiante\n");
        scanf("%d", &notaindividual);
        if (notaindividual>20 || notaindividual<0)
        {
        printf("Nota invalida");
        return 0;
        }
        cout << "Estudiante " + to_string (i) + ". Este estudiante tiene una calificacion " + calificacion (notaindividual) + " y esta " +  sumaaprobados (notaindividual) << endl;
        }
        suma_notas=suma_notas+notaindividual;
        contador(notaindividual);
    }

    printf("\Datos de la seccion\n\n");
    
    promedio=suma_notas/seccionn;
    cout << "Promedio de la seccion:\n" + to_string (promedio) << endl;
    cout << "Numero de Aprobados:\n" + to_string (aprobados) << endl;
    cout << "Numero de Reprobados:\n" + to_string (reprobados) << endl;
    cout << "Estudiantes:\n" + to_string (seccionn) << endl;

    getch();
}

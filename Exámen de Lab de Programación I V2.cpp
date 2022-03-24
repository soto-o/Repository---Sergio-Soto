#include <iostream>
#include <conio.h>

char nombre;
int seccion, notaindividual, aprobados=0, reprobados=0, i=1;
float suma_notas, promedio;

int main(){

    printf("El siguiente programa le ayudara a registrar las notas de estudiantes y obtener los datos de la seccion\n\n");
    printf("Nombre de la seccion?\n");
    scanf("%c", &nombre);
    printf("De cuantos alumnos es la seccion?\n");
    scanf("%d", &seccion);

    while(i<=seccion){

        if(i==1){
            printf("Ingrese la nota del primer estudiante\n");
            scanf("%d", &notaindividual);
            if(notaindividual>20 || notaindividual<0){
                printf("Nota invalida");
                return 0;
            }if(notaindividual>=19 && notaindividual<=20){
                printf("El estudiante es sobresaliente, esta aprobado\n");
                aprobados++;
                suma_notas=notaindividual;
            }else if(notaindividual>=16 && notaindividual<=18){
                printf("El estudiante es muy bueno, esta aprobado\n");
                aprobados++;
                suma_notas=notaindividual;
            }else if(notaindividual>=13 && notaindividual<=15){
                printf("El estudiante es bueno, esta aprobado\n");
                aprobados++;
                suma_notas=notaindividual;
            }else if(notaindividual>=10 && notaindividual<=12){
                printf("El estudiante es regular, esta aprobado\n");
                aprobados++;
                suma_notas=notaindividual;
            }else if(notaindividual>=6 && notaindividual<=10){
                printf("El estudiante es mejorable, esta reprobado\n");
                reprobados++;
                suma_notas=notaindividual;
            }else{
                printf("El estudiante tiene calificaciones deficientes, esta reprobado\n");
                reprobados++;
                suma_notas=notaindividual;
        }
        i++;
        }else if(i>1 && i<=seccion){
           printf("Ingrese la nota del siguiente estudiante\n");
            scanf("%d", &notaindividual);
            if(notaindividual>20 || notaindividual<0){
                printf("Nota invalida");
                return 0;
            }
            if(notaindividual>=19 && notaindividual<=20){
                printf("El estudiante es sobresaliente, esta aprobado\n");
                aprobados++;
                suma_notas=suma_notas+notaindividual;
            }else if(notaindividual>=16 && notaindividual<=18){
                printf("El estudiante es muy bueno, esta aprobado\n");
                aprobados++;
                suma_notas=suma_notas+notaindividual;
            }else if(notaindividual>=13 && notaindividual<=15){
                printf("El estudiante es bueno, esta aprobado\n");
                aprobados++;
                suma_notas=suma_notas+notaindividual;
            }else if(notaindividual>=10 && notaindividual<=12){
                printf("El estudiante es regular, esta aprobado\n");
                aprobados++;
                suma_notas=suma_notas+notaindividual;
            }else if(notaindividual>=6 && notaindividual<=10){
                printf("El estudiante es mejorable, esta reprobado\n");
                reprobados++;
                suma_notas=suma_notas+notaindividual;
            }else{
                printf("El estudiante tiene calificaciones deficientes, esta reprobado\n");
                reprobados++;
                suma_notas=suma_notas+notaindividual;
        }
        i++;
    }
}
    promedio=suma_notas/seccion;

    printf("Ya se han ingresado todos los datos de los alumnos\n\n");
    printf("Datos de la seccion\n\n");
    printf("Seccion %c\n", nombre);
    printf("Hay %d estudiantes", seccion);
    printf("\nCantidad de aprobados: %d", aprobados);
    printf("\nCantidad de reprobados: %d", reprobados);
    printf("\nEl promedio de la seccion es %.2f\n", promedio);

    getch();

}

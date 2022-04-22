#include <iostream>
#include <Windows.h>

int main(){

    int seleccion, rep=1;

    printf("Seleccione una opcion\n1. Determinante e Inversa de una Matriz\n2. Modificar datos del personaje de un videojuego\n");
    scanf("%d", &seleccion);

    if(seleccion==1){
        int Matriz[3][3];
        float det, a, b, c, d, e, f, g, h, i;
        printf("Ha seleccionado Determinante e Inversa de una Matriz\n");
        printf("Esta opcion le permite calcular la determinante y la inversa de una matriz 3x3, ingrese los datos de la matriz\n\nUse como guia esto:\n\n");

        while(rep==1){
           printf("\t|a(0,0)\ta(0,1)\ta(0,2)|\n\t|                     |\n\t|a(1,0)\ta(1,1)\ta(1,2)|\n\t|                     |\n\t|a(2,0)\ta(2,1)\ta(2,2)|\n\n");

            for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
            {
                printf("Valor [%d,%d] = ",i,j);
                scanf("%d", &Matriz[i][j]);
            }
            printf("\nLa matriz ingresada es:\n\n");
            printf("\t|%d\t%d\t%d|\n", Matriz[0][0], Matriz[0][1], Matriz[0][2]);
            printf("\t|%d\t%d\t%d|\n", Matriz[1][0], Matriz[1][1], Matriz[1][2]);
            printf("\t|%d\t%d\t%d|\n", Matriz[2][0], Matriz[2][1], Matriz[2][2]);

            det=Matriz[0][0]*Matriz[1][1]*Matriz[2][2]+Matriz[0][1]*Matriz[1][2]*Matriz[2][0]+Matriz[0][2]*Matriz[1][0]*Matriz[2][1]-(Matriz[0][2]*Matriz[1][1]*Matriz[2][0]+Matriz[0][1]*Matriz[1][0]*Matriz[2][2]+Matriz[0][0]*Matriz[1][2]*Matriz[2][1]);

            printf("\nEl determinante de la matriz es %.0f :)\n\n", det);

            a=Matriz[1][1]*Matriz[2][2]-Matriz[1][2]*Matriz[2][1];
            b=-(Matriz[1][0]*Matriz[2][2]-Matriz[2][0]*Matriz[1][2]);
            c=Matriz[1][0]*Matriz[2][1]-Matriz[1][1]*Matriz[2][0];
            d=-(Matriz[0][1]*Matriz[2][2]-Matriz[2][1]*Matriz[0][2]);
            e=Matriz[0][0]*Matriz[2][2]-Matriz[2][0]*Matriz[0][2];
            f=-(Matriz[0][0]*Matriz[2][1]-Matriz[2][0]*Matriz[0][1]);
            g=Matriz[0][1]*Matriz[1][2]-Matriz[1][1]*Matriz[0][2];
            h=-(Matriz[0][0]*Matriz[1][2]-Matriz[1][0]*Matriz[0][2]);
            i=Matriz[0][0]*Matriz[1][1]-Matriz[1][0]*Matriz[0][1];

            a=a*1/det;
            b=b*1/det;
            c=c*1/det;
            d=d*1/det;
            e=e*1/det;
            f=f*1/det;
            g=g*1/det;
            h=h*1/det;
            i=i*1/det;

            printf("\nCalculando la matriz inversa...");

            Sleep(3000);

            printf("\n\nLa matriz inversa es:\n\n");

            printf("\t|%f\t%f\t%f|\n", a, d, g);
            printf("\t|%f\t%f\t%f|\n", b, e, h);
            printf("\t|%f\t%f\t%f|\n", c, f, i);

            printf("\n\nEn decimales :(\n");
            printf("\nRepetir el programa?1. Si\n");
            scanf("%d", &rep);
            }

    }else if(seleccion==2){
        printf("Ha seleccionado Modificar datos del personaje de un videojuego");

        int Datos[]={100, 50, 0, 0}, seleccion, cambio;

        printf("\nSe tiene un videojuego en donde los datos del personaje son guardados en un arreglo, los datos son los siguientes:\n\n");
        printf("Vida del jugador\nEnergia del jugador\nExperiencia acumulada\nItems guardados\n\n");
        printf("Datos iniciales:\n");
        printf("Vida del jugador: %d\nEnergia del jugador: %d\nExperiencia acumulada: %d\nItems guardados: %d\n", Datos[0], Datos[1], Datos[2], Datos[3]);
        printf("\nEmpieza el juego...\n\n");

    while(rep==1){
        printf("Opciones:\n");
        printf("1. El jugador perdio vida\n2. El jugador gano vida\n3. El jugador perdio energia\n4. El jugador gano energia\n5. El jugador gano experiencia\n6. El jugador guardo objetos\n");
        scanf("%d", &seleccion);
        switch(seleccion){
            case 1: printf("\nEl jugador perdio vida\nCuanta vida perdio el jugador?\n");
                    scanf("%d", &cambio);
                    Datos[0]=Datos[0]-cambio;
                    printf("La vida del jugador es ahora %d", Datos[0]);
                    break;
            case 2: printf("\nEl jugador gano vida\nCuanta vida gano el jugador?\n");
                    scanf("%d", &cambio);
                    Datos[0]=Datos[0]+cambio;
                    printf("La vida del jugador es ahora %d", Datos[0]);
                    break;
            case 3: printf("El jugador perdio energia\nCuanta energia perdio el jugador?\n");
                    scanf("%d", &cambio);
                    Datos[1]=Datos[1]-cambio;
                    printf("La energia del jugador es ahora %d", Datos[1]);
                    break;
            case 4: printf("El jugador gano energia\nCuanta energia gano el jugador?\n");
                    scanf("%d", &cambio);
                    Datos[1]=Datos[1]+cambio;
                    printf("La energia del jugador es ahora %d", Datos[1]);
            case 5: printf("El jugador gano experiencia\nCuanta experiencia?\n");
                    scanf("%d", &cambio);
                    Datos[2]=Datos[2]+cambio;
                    printf("La experiencia del jugador es ahora %d", Datos[2]);
                    break;
            case 6: printf("El jugador consiguio objetos\nCuantos objetos?\n");
                    scanf("%d", &cambio);
                    Datos[3]=Datos[3]+cambio;
                    printf("La experiencia del jugador es ahora %d", Datos[3]);
                    break;
            default: printf("Opcion Invalida");
                    return 0;
    }
        printf("\n\nDatos del jugador:\n\n");
        printf("Vida del jugador: %d\nEnergia del jugador: %d\nExperiencia acumulada: %d\nItems guardados: %d\n", Datos[0], Datos[1], Datos[2], Datos[3]);
        printf("Ingrese 1 para continuar o cualquier otra cosa para finalizar\n");
        scanf("%d", &rep);
    }

    }else{
        printf("Opcion invalida");
        return 0;
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"

int main()
{
    int op=1;
    do
    {
        system("cls");
        printf("RUIZ NICOLAS - TP ARREGLOS\n\n");

        for(int i=1; i<14; i++)
        {
            printf("EJERCICIO %d\n",i);
        }
        printf("\nDigite cero (0) si desea salir");
        printf("\n\nDigite un ejercicio: ");
        scanf("%d",&op);



        switch(op)
        {
        case 1:
            system("cls");
            Ejercicio1();
            printf("\n\n");
            system("PAUSE");
            break;
        case 2:
            system("cls");
            Ejercicio2();
            printf("\n\n");
            system("PAUSE");
            break;
        case 3:
            system("cls");
            Ejercicio3();
            printf("\n\n");
            system("PAUSE");
            break;
        case 4:
            system("cls");
            Ejercicio4();
            printf("\n\n");
            system("PAUSE");
            break;
        case 5:
            system("cls");
            Ejercicio5();
            printf("\n\n");
            system("PAUSE");
            break;
        case 6:
            system("cls");
            Ejercicio6();
            printf("\n\n");
            system("PAUSE");
            break;
        case 7:
            system("cls");
            Ejercicio7();
            printf("\n\n");
            system("PAUSE");
            break;
        case 8:
            system("cls");
            Ejercicio8();
            printf("\n\n");
            system("PAUSE");
            break;
        case 9:
            system("cls");
            Ejercicio9();
            printf("\n\n");
            system("PAUSE");
            break;
        case 10:
            system("cls");
            Ejercicio10();
            printf("\n\n");
            system("PAUSE");
            break;
        case 11:
            system("cls");
            Ejercicio11();
            printf("\n\n");
            system("PAUSE");
            break;
        case 12:
            system("cls");
            Ejercicio12();
            printf("\n\n");
            system("PAUSE");
            break;
        case 13:
            system("cls");
            Ejercicio13();
            printf("\n\n");
            system("PAUSE");
            break;
        case 0:
            break;
        default:
            system("cls");
            printf("La opcion elegida NO EXISTE!!");
            printf("\n\n");
            system("PAUSE");
            break;
        }
    }
    while(op!=0);
    return 0;
}


int cargarArreglo(int A[],int cant)
{
    char op='s';
    int i=0;
    while(i<cant && op=='s'||op=='S')
    {
        printf("Ingrese elemento[%d]:",i);
        scanf("%d",&A[i]);
        i++;
        printf("Desea continuar cargando? Presione s/n: ");
        fflush(stdin);
        scanf("%c",&op);
    }
    return i;
}

void mostrarArreglo(int A[],int val)
{
    for(int i=0; i<val; i++)
    {
        printf("| %d |",A[i]);
    }
}

int sumaDeElementos(int A[],int val)
{
    int suma=0;
    for(int i=0; i<val; i++)
    {
        suma=suma + A[i];
    }
    return suma;
}

void arregloApila(int A[],int val,Pila *B)
{
    for(int i=0; i<val; i++)
    {
        apilar(B,A[i]);
    }
}

int cargarArregloFloat(float A[],int cant)
{
    char op='s';
    int i=0;
    while(i<cant && op=='s')
    {
        printf("Ingrese elemento[%d]:",i);
        scanf("%f",&A[i]);
        i++;
        printf("Desea continuar cargando? Presione s/n: ");
        fflush(stdin);
        scanf("%c",&op);
    }
    return i;
}

void mostrarArregloFloat(float A[],int val)
{
    for(int i=0; i<val; i++)
    {
        printf("%.2f|",A[i]);
    }
}

float sumaFloat(float A[],int val)
{
    float suma=0;
    for(int i=0; i<val; i++)
    {
        suma=suma+A[i];
    }
    return suma;
}

int cargarArregloChar(char A[],int cant)
{
    char op='s';
    int i=0;
    for(i=0; i<cant && op=='s'; i++)
    {
        printf("Ingrese un caracter: ");
        fflush(stdin);
        scanf("%c",&A[i]);

        printf("Desea seguir cargando? Presione s/n: ");
        fflush(stdin);
        scanf("%c",&op);
    }
    return i;
}

int mostrarArregloChar(char A[],int val)
{
    for(int i=0; i<val; i++)
    {
        printf("%c|",A[i]);
    }
}

int busquedaChar(char A[],int val,char buscado)
{
    int flag=0;
    for(int i=0; i<val; i++)
    {
        if(buscado==A[i])
            flag=1;
    }
    return flag;
}

int insertarCaracter(char A[],int val, char caracter)
{
    int ultpos=val-1;

    while(ultpos>=0 && caracter<A[ultpos])
    {
        A[ultpos+1]=A[ultpos];
        ultpos--;
    }
    A[ultpos+1]=caracter;

    return val+1;
}

int busquedaMaximoChar(char A[],int val)
{
    char mayor=A[0];

    for(int i=0; i<val; i++)
    {
        if(mayor<A[i])
        {
            mayor=A[i];
        }
    }
    return mayor;
}

int capicua(int A[],int val)
{
    int aux[val];
    copiarArregloEntero(A,val,aux);
    invertir(aux,val);
    int flag=0;
    for(int i=0; i<val; i++)
    {
        if(A[i]!=aux[i])
        {
            flag=1;
        }
    }
    return flag;
}

void copiarArregloEntero(int A[],int val,int B[])
{
    for(int i=0; i<val; i++)
    {
        B[i]=A[i];
    }
}
void invertir(int A[],int val)
{
    int ppos=0;
    int upos=val-1;
    int aux;
    int tope=val/2;
    while(ppos<tope)
    {
        aux=A[upos];
        A[upos]=A[ppos];
        A[ppos]=aux;
        ppos++;
        upos--;
    }
}

void ordSeleccion(int A[],int val)
{
    int i,j,aux,min;
    for(i=0;i<val;i++)
    {
       min=i;
       for(j=i+1;j<val;j++)
       {
           if(A[j]<A[min])
           {
               min=j;
           }
       }
    aux=A[i];
    A[i]=A[min];
    A[min]=aux;
    }
}

void ordIncersion(int A[], int val)
{
    int i,pos,aux;
    for(i=0;i<val;i++)
    {
        pos=i;
        aux=A[i];

        while(pos>0 && A[pos-1]>aux)
        {
            A[pos]=A[pos-1];
            pos--;
        }
        A[pos]=aux;
    }

}

void ordDosArraysEnUno(char A[],char B[],char C[],int val)
{
    char aux;
    int i=0;
    int j=0;
    int n=0;
    while(n<val)
    {
        if(A[i]<B[j])
        {
            aux=A[i];
            C[n]=aux;
            i++;
        }else
        if(B[j]<A[i])
        {
            aux=B[j];
            C[n]=aux;
            j++;
        }
        n++;
    }
}

void sumaDelAnterior(int A[],int val,int B[])
{
    int suma=0;
    int i;
    int aux;
    for(i=0;i<val;i++)
    {
        if(i==0)
        {
           aux=A[i];
           B[i]=aux;
        }
        else
        {
            suma= A[i] + A[i-1];
            B[i]=suma;
        }
    }
}

int Ejercicio1()
{
    printf("EJERCICIO 1 - TP ARREGLOS\n\n");
    printf("Hacer una funcion que reciba como parametro un arreglo de numeros enteros y permita que el usuario ingrese valores al mismo por teclado. La función debe retornar la cantidad de elementos cargados en el arreglo (o pueden utilizar como puntero validos).\n\n");
    int arreglo[10];
    int val=cargarArreglo(arreglo,10);
    printf("La cantidad de elementos cargados es de: %d",val);
}

int Ejercicio2()
{
    printf("EJERCICIO 2 - TP ARREGLOS\n\n");
    printf("Hacer una funcion que reciba como parametro un arreglo y la cantidad de elementos (validos) cargados en el y los muestre por pantalla. \n\n");
    int arreglo[10];
    int val=cargarArreglo(arreglo,10);
    printf("\nARREGLO: \n");
    mostrarArreglo(arreglo,val);
}

int Ejercicio3()
{
    printf("EJERCICIO 3 - TP ARREGLOS\n\n");
    printf("Hacer una funcion que reciba como parametro un arreglo y la cantidad de elementos (validos) cargados en el y calcule la suma de sus elementos. \n\n");
    int arreglo[10];
    int val=cargarArreglo(arreglo,10);
    int suma=sumaDeElementos(arreglo,val);
    printf("\nLa suma de los elementos es: %d",suma);
}

int Ejercicio4()
{
    printf("EJERCICIO 4 - TP ARREGLOS\n\n");
    printf("Hacer una funcion que reciba como parametro un arreglo, la cantidad de elementos (validos) cargados en el y una Pila. La funcion debe copiar los elementos del arreglo en la pila.\n\n");
    int A[10];
    Pila B;
    inicpila(&B);
    int val=cargarArreglo(A,10);
    printf("\nARREGLO: ");
    mostrarArreglo(A,val);
    arregloApila(A,val,&B);
    printf("\nPILA CARGADA: ");
    mostrar(&B);
}

int Ejercicio5()
{
    printf("EJERCICIO 5 - TP ARREGLOS\n\n");
    printf("Realizar una funcion que sume los elementos de un arreglo de numeros reales (float) de dimension 100. (se recomienda hacer una funcion para cargar y otra para mostrar para este tipo de dato asociado al arreglo)\n\n");
    float A[100];
    int val=cargarArregloFloat(A,100);
    printf("\nARREGLO: \n");
    mostrarArregloFloat(A,val);
    float suma=sumaFloat(A,val);
    printf("\n\nLa suma de los elementos float es de: %.2f",suma);
}

int Ejercicio6()
{
    printf("EJERCICIO 6 - TP ARREGLOS\n\n");
    printf("Realizar una funcion que indique si un elemento dado se encuentra en un arreglo de caracteres.\n\n");
    char buscado;
    char A[]= {'a','b','c','d','e','f','z','l','\0'};
    printf("ARREGLO DADO: ");
    mostrarArregloChar(A,strlen(A));
    printf("\n\nIngrese elemento a buscar: ");
    fflush(stdin);
    scanf("%c",&buscado);
    int flag=busquedaChar(A,strlen(A),buscado);
    if(flag==0)
        printf("\nEl caracter no se encuentra en el arreglo.");
    else
        printf("\nEl caracter se encuentra en el arreglo!!");
}

int Ejercicio7()
{
    printf("EJERCICIO 7 - TP ARREGLOS\n\n");
    printf("Realizar una funcion que inserte un caracter en un arreglo ordenado alfabeticamente, conservando el orden.\n\n");
    char caracter;
    char A[]= {'F','a','e','m','o','y','\0'};
    printf("ARREGLO DADO: ");
    mostrarArregloChar(A,strlen(A));
    printf("\n\nIngrese un caracter al arreglo: ");
    fflush(stdin);
    scanf("%c",&caracter);
    int valchar= insertarCaracter(A,strlen(A),caracter);
    printf("\n\nARREGLO CON CARACTER INSERTADO: ");
    mostrarArregloChar(A,valchar);
}

int Ejercicio8()
{
    printf("EJERCICIO 8 - TP ARREGLOS\n\n");
    printf("Realizar una funcion que obtenga el maximo caracter de un arreglo dado.\n\n");
    char A[100];
    int val=cargarArregloChar(A,100);
    printf("\nARREGLO: ");
    mostrarArregloChar(A,val);
    int mayor= busquedaMaximoChar(A,val);
    printf("\n\nEl caracter mayor es: %c",mayor);
}

int Ejercicio9()
{
    printf("EJERCICIO 9 - TP ARREGLOS\n\n");
    printf("Realizar una funcion que determine si un arreglo es capicua.\n\n");
    int A[10];
    int val=cargarArreglo(A,10);
    printf("\nARREGLO: ");
    mostrarArreglo(A,val);
    printf("\n\n");
    int flag=capicua(A,val);
    if(flag==1)
    {
        printf("El arreglo NO es capicua...");
    }
    else if(flag==0)
    {
        printf("El arreglo ES capicua!!");
    }
}

int Ejercicio10()
{
    printf("EJERCICIO 10 - TP ARREGLOS\n\n");
    printf("Realizar una funcion que invierta los elementos de un arreglo.  (sin utilizar un arreglo auxiliar)\n\n");
    int A[10];
    int val=cargarArreglo(A,10);
    printf("ARREGLO CARGADO: ");
    mostrarArreglo(A,val);
    printf("\n\nARREGLO INVERTIDO: ");
    invertir(A,val);
    mostrarArreglo(A,val);
}

int Ejercicio11()
{
    printf("EJERCICIO 11- TP ARREGLOS\n\n");
    printf("Ordenar un arreglo segun los siguientes metodos: a)Seleccion b)Incersion\n\n");
    srand(time(NULL));
    int A[7]={rand()%1000,rand()%1000,rand()%1000,rand()%1000,rand()%1000,rand()%1000,rand()%1000};
    printf("ARREGLO DADO: ");
    mostrarArreglo(A,7);
    printf("\n\nARREGLO ORDENADO POR SELECCION: ");
    ordSeleccion(A,7);
    mostrarArreglo(A,7);
    printf("\n\nARREGLO ORDENADO POR INSERCION: ");
    ordIncersion(A,7);
    mostrarArreglo(A,7);
}

int Ejercicio12()
{
    printf("EJERCICIO 12 - TP ARREGLOS\n\n");
    printf("Dados dos arreglos ordenados alfabeticamente, crear un tercer arreglo con los elementos de los dos primeros intercalados, de manera que quede un arreglo tambien ordenado alfabeticamente.\n\n");
    char A[10]={'a','c','l','p','\0'};
    char B[10]={'b','f','o','s','\0'};
    char C[10];
    printf("ARREGLO A: ");
    mostrarArregloChar(A,4);
    printf("\nARREGLO B: ");
    mostrarArregloChar(B,4);
    ordDosArraysEnUno(A,B,C,8);
    printf("\nARREGLO C: ");
    mostrarArregloChar(C,8);
}

int Ejercicio13()
{
    printf("EJERCICIO 13 -TP ARREGLOS\n\n");
    printf("Dado un el vector {1,5,6,7,8} escribir un programa que genere otro vector con la suma del contenido de todo los elementos anteriores al indice actual: {1,6,12,19,27}.\n\n");
    int A[]={1,5,6,7,8};
    int B[5];
    printf("ARREGLO A: ");
    mostrarArreglo(A,5);
    sumaDelAnterior(A,5,B);
    printf("\n\nARREGLO B: ");
    mostrarArreglo(B,5);
}



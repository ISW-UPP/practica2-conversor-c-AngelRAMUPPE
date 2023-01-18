// Switch_Prueba.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{/*
//----------------MENU CON INT ---------------------------------
    cout << "Ingrese la Opción a ejecutar: ";
    int opcion = 0;
    cin >> opcion;

    switch (opcion)
    {
    case 1: cout << "Hacer opción 1";
        //Intrucciones
        break;
    case 2: cout << "Hacer opción 2";
        //Intrucciones
        break;
    case 3: cout << "Hacer 3";
        //Intrucciones
        system("pause");//Crea una pausa en la consola
        break;
    system("cls");//Limpiar la pantalla,
    default: cout << "Opción incorrecta";
    }

//----------------MENU CON CHAR ---------------------------------
    cout << "Ingrese la Opción a ejecutar: ";
    char opcion;
    cin >> opcion;

switch(opcion)
{
    case 'a': cout << "Mostrar opcion a";
        //Intrucciones
    break;
    case 'b': cout << "Mostrar opcion b";
        //Intrucciones
    break;
    case 'c': cout << "Mostrar opcion c";
        //Intrucciones
    break;
    default: cout << "Opción incorrecta";
}

* Ejercicio1 De acuerdo al programa realizado "Transformar grados",
* creará un menu donde el usuario pueda elegir que grados prefiere ver
*
* Base Celsius
*
* Menu:
* Celsius
* Farenheit 33.8°F
* Kelvin 274.15°K
* Rankine 493.47°R
*/
    char opcion;
    float celsius = 0;
    cout << ".::Pograma conversor de temperatura::.\n";
    cout << "Introduce los grados:\n";
    cin >> celsius;
    cout << "Elige una opcion:\n||(c)Celsius  ||\n||(f)Farenheit||\n||(k)Kelvin   ||\n||(r)Rankine  ||\n";
    cin >> opcion;
    cout << "\n";

    switch (opcion)
    {
    case 'c': 
         cout << "Celsius: "<<celsius<<endl;
        system("pause");
        break;

    case 'f': 
        cout << "Farenheit";
        
        system("pause");
        break;

    case 'k': 
        cout << "Kelvin";

        system("pause");
        break;

    case 'r': 
        cout << "Rankine";
        
        system("pause");
        break;
    system("cls");
    default: cout << "Opción incorrecta";
    }




}




/* 
* 
* 
* 
* 
* 
* 
* 
* 
* Practica2 Crear un programa conversor con el menu  de monedas, distancia y peso
*
* Base sera MXN, Monedas: Al menos 5 de diferentes paises
* Base serán Kms, Distancia: in, ft, cm, km, nm, ly.
* Base serán Kgs, Peso: Ton, oz, lb, µg, Tg
* 
*/

// Practica2 Conversor.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

int main()
{
    int opcion1,opcion2 ;
	float moneda, distancia, peso;

    cout << "Ingrese que quiere convertir: " << endl;
	cout << " 1- Monedas\n 2- Distancia\n 3- Peso" << endl;
	cin >> opcion1;
	switch (opcion1)
	{
	case 1:
		system("cls");
		cout << "Monedas" << endl;
		cout << "ingrese MXN pesos a converitr: " << endl;
		cin >> moneda;
		cout << "Convertir a:\n1-Dolar USA\n2-Dolar Canada\n3-Peso Argentino\n4- Turkish Lira\n5- Euro" << endl;
		cin >> opcion2;
		switch (opcion2)
		{
		case 1:
			system("cls");
			cout << "Dolar USA" << endl;
			cout << moneda << " pesos mexicano equivale a " << 18.60 * moneda << " Dolar Americanos" << endl;
			break;
		case 2:
			system("cls");
			cout << "Dolar Canada" << endl;
			cout << moneda << " pesos mexicano equivale a " << 13.91 * moneda << " Dolar canadiense" << endl;
			break;
		case 3:
			system("cls");
			cout << "Peso Argentino" << endl;
			cout << moneda << " pesos mexicano equivale a " << 9.83 * moneda << " Pesos Argentinos" << endl;
			break;
		case 4:
			system("cls");
			cout << "Turkish lira" << endl;
			cout << moneda << " pesos mexicano equivale a " << 1.01 * moneda << " Turkish Liras" << endl;
			break;
		case 5:
			system("cls");
			cout << "Euro" << endl;
			cout << moneda << " pesos mexicano equivale a " << 0.049 * moneda << " Euros" << endl;
			break;
		default:
			cout << "Error";
			break;
		}
		break;
	case 2:
		system("cls");
		cout << "Distancia" << endl;
		cout << "ingrese KMs a converitr: " << endl;
		cin >> distancia;
		cout << "Convertir a:\n1- in\n2- ft\n3- cm\n4- nm\n5- ly" << endl;
		cin >> opcion2;
		switch (opcion2)
		{
		case 1:
			system("cls");
			cout << "in (pulgadas)" << endl;
			cout << distancia << " Kilometros equivale a " << distancia * 39370 << " in" << endl;
			break;
		case 2:
			system("cls");
			cout << "ft (Pies)" << endl;
			cout << distancia << " Kilometros equivale a " << distancia * 3281 << " pies" << endl;
			break;
		case 3:
			system("cls");
			cout << "cm (Centimetros)" << endl;
			cout << distancia << " Kilometros equivale a " << distancia * 100000 << " Centimetros" << endl;
			break;
		case 4:
			system("cls");
			cout << "nm (NanoMetros)" << endl;
			cout << distancia << " Kilometros equivale a " << distancia * 1000000000000 << " Nanometros" << endl;
			break;
		case 5:
			system("cls");
			cout << "Ly (Años Luz)" << endl;
			cout << distancia << " Kilometros equivale a " << distancia * 0.00000000000010570 << " Años Luz" << endl;
			break;
		default:
			cout << "Error";
			break;
		}
		break;
	case 3:
		system("cls");
		cout << "Peso"<< endl;
		cout << "Ingrese peso en KG para convertir " << endl;
		cin >> peso;
		cout << "Convertir a:\n1- Ton\n2- oz\n3- lb\n4- µg\n5- Tg" << endl;
		cin >> opcion2;
		switch (opcion2)
		{
		case 1:
			system("cls");
			cout << "Ton (Toneladas)" << endl;
			cout << peso << " Kilogramos equivale a " << peso * 1000 << " Toneladas" << endl;
			break;
		case 2:
			system("cls");
			cout << "OZ (onzas)" << endl;
			cout << peso << " Kilogramos equivale a " << peso * 35.274 << " Onzas" << endl;
			break;
		case 3:
			system("cls");
			cout << "lb (Libras)" << endl;
			cout << peso << " Kilogramos equivale a " << peso * 2.205 << " Libras" << endl;
			break;
		case 4:
			system("cls");
			cout << "µg (Microgramos)" << endl;
			cout << peso << " Kilogramos equivale a " << peso * 1000000000 << " Micorgramos" << endl;
			break;
		case 5:
			system("cls");
			cout << "Tg (Teragramos)" << endl;
			cout << peso << " Kilogramos equivale a " << peso * (pow(10,9)) << " Teragramos" << endl;
			break;
		default:
			cout << "Error";
			break;
		}
		break;
	default:
		cout << "Error";
		break;
	}
}

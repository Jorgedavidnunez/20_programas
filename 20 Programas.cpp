#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Math.h>
#include <windows.h>
#include <stdio.h>
using namespace std;

void operacionesBasicas();
void par ();
void conversionesMedidas ();
void identificarPalindromo ();
bool palindromo(string palabra);
void numerosRomanos ();
void numerosLetras ();
void decimalesLetras ();
void tabla ();
void todasTablas();
void multiplicacion();
void binario();
void hexadecimal();
void figuras();
void mover();
void cajero();
void hipotenusa();
void formula();
void restaurante();
void fibonacci();
void imc();
void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
} 
int main(){
	int seleccion;
	do{
		system ("cls");
		system ("color F0");
		cout<<"Ingrese el numero del programa que desea ejecutar: \n";
		cout<<"1.  Operaciones basicas entre dos numeros\n";
		cout<<"2.  Determinar si un numero es par o impar\n";
		cout<<"3.  Conversiones de medidas\n";
		cout<<"4.  Identificar palabras, frases o numeros palindromos\n";
		cout<<"5.  Convertir numeros arabigos a romanos\n";
		cout<<"6.  Convertir de numeros a letras\n";
		cout<<"7.  Convertir de numeros con decimales a letras\n";
		cout<<"8.  Generar tabla de multiplicar\n";
		cout<<"9.  Mostrar las tablas de multiplicar del 1 al 10\n";
		cout<<"10. Multiplicacion graficada manualmente\n";
		cout<<"11. Convertir de decimal a binario\n";
		cout<<"12. Convertir de decimal a hexadecimal\n";
		cout<<"13. Generar figuras geometricas basicas\n";
		cout<<"14. Mover un punto en toda la pantalla (Prestar atencion a las instrucciones)\n";
		cout<<"15. Simulacion de cajero automatico\n";
		cout<<"16. Calculadora de hipotenusa\n";
		cout<<"17. Calculadora de formula cuadratica\n";
		cout<<"18. Menu de restaurante\n";
		cout<<"19. Serie fibonacci\n";
		cout<<"20. Calculadora de indice de masa corporal\n";
		cout<<"21. Salir\n";
		cin>>seleccion;
		switch (seleccion){
			case 1: operacionesBasicas(); break;
			case 2: par(); break;
			case 3: conversionesMedidas(); break;
			case 4: identificarPalindromo(); break;
			case 5: numerosRomanos(); break;
			case 6: numerosLetras(); break;
			case 7: decimalesLetras(); break;
			case 8: tabla(); break;
			case 9: todasTablas(); break;
			case 10: multiplicacion(); break;
			case 11: binario(); break;
			case 12: hexadecimal(); break;
			case 13: figuras(); break;
			case 14: mover(); break;
			case 15: cajero(); break;
			case 16: hipotenusa(); break;
			case 17: formula();break;
			case 18: restaurante(); break;
			case 19: fibonacci(); break;
			case 20: imc(); break;
			case 21: return 0; break;
		}
	}while((seleccion<1)||(seleccion>21));
}

void operacionesBasicas(){
	float a=0,b=0,sum=0,res=0,multi=0,div=0;
	char continuar;
	system ("color 01");
	do
	{
		system ("cls");
		cout<<"Ingrese el numero con valor a: \n";
		cin>>a;
		cout<<"Ingrese el numero con valor b: \n";
		cin>>b;
		sum = a+b;
		res = a-b;
		multi = a*b;
		div = a/b;
		cout<<"_____________________________________________\n";
		cout<<"La suma de a y b es: "<<sum<<endl;
		cout<<"_____________________________________________\n";
		cout<<"La resta de a y b es: "<<res<<endl;
		cout<<"_____________________________________________\n";
		cout<<"La multiplicacion de a y b es: "<<multi<<endl;
		cout<<"_____________________________________________\n";
		cout<<"La division de a y b es: "<<div<<endl;
		cout<<"_____________________________________________\n";
		cout<<"Presione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main();
}

void par(){
	float num=0, par=0;
	char continuar;
	system ("color 02");
	do{
		system("cls");
		cout<<"Ingrese un numero entero\n";
		cin>>num;
		cout<<"___________________________\n";
		par = abs(num/2);
		if (par == num/2)
		{
			cout<<"El numero es par\n";
		}
		else
		{
			cout<<"El numero es impar\n";
		}
		cout<<"Presione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main ();
}

void conversionesMedidas (){
	int op=0, op2=0;
	float millas =1.609, pulgadas = 39.37, libra = 2.205, a=0, conversion=0;
	system("color 04");
	do{
		system("cls");
		cout<<"Ingrese el numero de la opcion que quiere realizar\n";
		cout<<"___________________________________________________\n";
		cout<<"1. Convertir de millas a kilometros y viceversa\n";
		cout<<"2. Convertir de metros a pulgadas y viceversa\n";
		cout<<"3. Convertir de libras a kilos y viceversa\n";
		cin>>op;
	
		switch (op)
		{
			case 1: 
			do{
				system ("cls");
				cout<<"Ingrese la cantidad a convertir\n";
				cout<<"________________________________\n";
				cin>>a;
				cout<<"1. Millas a kilometros\n";
				cout<<"2. Kilometros a millas\n";
				cin>>op2;
				cout<<"________________________________\n";
				switch (op2)
				{
					case 1: 
					conversion = a*millas;
					cout<<a<<" millas = "<<conversion<<" kilometros\n";
					break;
					case 2: 
					conversion = a/millas;
					cout<<a<<" kilometros = "<<conversion<<" millas\n"; 
					break;
				}
			}while((op2<1)||(op2>2));
			break;
		
			case 2: 
			do{
				system ("cls");
				cout<<"Ingrese la cantidad a convertir\n";
				cin>>a;
				cout<<"1. Metros a pulgadas\n";
				cout<<"2. Pulgadas a metros\n";
				cin>>op2;
		
				switch (op2)
				{
					case 1: 
					conversion = a*pulgadas;
					cout<<a<<" metros = "<<conversion<<" pulgadas\n";
					break;
					case 2: 
					conversion = a/pulgadas;
					cout<<a<<" pulgadas = "<<conversion<<" metros\n"; 
					break;
				}
			}while((op2<1)||(op2>2));
			break;
		
			case 3: 
			do{
				system ("cls");
				cout<<"Ingrese la cantidad a convertir\n";
				cin>>a;
				cout<<"1. Libras a kilos\n";
				cout<<"2. Kilos a libras\n";
				cin>>op2;
		
				switch (op2)
				{
					case 1: 
					conversion = a/libra;
					cout<<a<<" libras = "<<conversion<<" kilos\n";
					break;
					case 2: 
					conversion = a*libra;
					cout<<a<<" kilos = "<<conversion<<" libras\n"; 
					break;
				}
			}while((op2<1)||(op2>2));
			break;	 
		}
	}while((op<1)||(op>3));
	cout<<"Presione cualquier letra para continuar";
	getch();
	main ();
}

void identificarPalindromo (){
	string palabra;
	char continuar;
	system("color 06");
	do{
		fflush (stdin);
		system("cls");
		cout<<"Ingrese una palabra, frase o numero para verificar si es palindromo:\n";
		getline(cin,palabra);
		if (palindromo(palabra))
		{
			cout<<"___________________________________________________________________\n";
			cout<<palabra<<" es un palindromo\n";
		}
		else
		{
			cout<<"___________________________________________________________________\n";
			cout<<palabra<<" no es un palindromo\n";
		} 
		cout<<"Presione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main ();
}

bool palindromo (string palabra)
{
	int con = palabra.length();
	string aux= "";
	for (int i = 0; i<con;i++)
	{
		if (palabra[i] != ' ' &&
			palabra[i] != ',' &&
			palabra[i] != '.' &&
			palabra[i] != ';' &&
			palabra[i] != ':' )
		{
			aux += palabra[i];
		}
	}
	palabra = aux;
	con = palabra.length();
	for (int i = 0; i<con/2;i++)
	{
		if(palabra[i] != palabra[con-i-1])
		{
			return false;
		}
		return true;
	}
}

void numerosRomanos (){
	int valor=0,unidad=0,decena=0,centena=0,millar=0;
	char continuar;
	system ("color 05");
	do{
		system ("cls");
		cout<<"Escriba un numero para convertirlo a numero romano\n";
		cout<<"El numero debe de ser del 1 al 3999\n";
		cin>>valor;
		cout<<"___________________________________________________\n";
		unidad = valor%10;
		valor /= 10;
		decena = valor%10;
		valor /= 10;
		centena = valor%10;
		valor /= 10;
		millar = valor%10;
		valor /= 10;
	
		switch (millar)
		{
			case 1: cout<<"M";break;
			case 2: cout<<"MM";break;
			case 3: cout<<"MMM";break;
		}
		switch (centena)
		{
			case 1: cout<<"C";break;
			case 2: cout<<"CC";break;
			case 3: cout<<"CCC";break;
			case 4: cout<<"CD";break;
			case 5: cout<<"D";break;
			case 6: cout<<"DC";break;
			case 7: cout<<"DCC";break;
			case 8: cout<<"DCCC";break;
			case 9: cout<<"CM";break;
		}
		switch (decena)
		{
			case 1: cout<<"X";break;
			case 2: cout<<"XX";break;
			case 3: cout<<"XXX";break;
			case 4: cout<<"XL";break;
			case 5: cout<<"L";break;
			case 6: cout<<"LX";break;
			case 7: cout<<"LXX";break;
			case 8: cout<<"LXXX";break;
			case 9: cout<<"XC";break;
		}
		switch (unidad)
		{
			case 1: cout<<"I";break;
			case 2: cout<<"II";break;
			case 3: cout<<"III";break;
			case 4: cout<<"IV";break;
			case 5: cout<<"V";break;
			case 6: cout<<"VI";break;
			case 7: cout<<"VII";break;
			case 8: cout<<"VIII";break;
			case 9: cout<<"IX";break;
		}
		cout<<"\nPresione s para volver a ejercutar\n";	
		cin>>continuar;
	}while(continuar == 's' || continuar == 'S');
	main ();
}

void numerosLetras (){
	int valor=0,unidad=0,decena=0,centena=0,millar=0;
	char continuar;
	system ("color 80");
	do{
		system ("cls");
		cout<<"Escriba un numero para verlo en letras\n";
		cout<<"El numero debe de puede ser del 1 al 9,999\n";
		cin>>valor;
		cout<<"___________________________________________________________\n";
		
		unidad = valor%10;
		valor /= 10;
		decena = valor%10;
		valor /= 10;
		centena = valor%10;
		valor /= 10;
		millar = valor%10;
		valor /= 10;
	
		switch (millar){
			case 1: cout<<"Mil "; break;
			case 2: cout<<"Dos mil "; break;
			case 3: cout<<"Tres mil "; break;
			case 4: cout<<"Cuatro mil "; break;
			case 5: cout<<"Cinco mil "; break;
			case 6: cout<<"Seis mil "; break;
			case 7: cout<<"Siete mil "; break;
			case 8: cout<<"Ocho mil "; break;
			case 9: cout<<"Nueve mil "; break;
		}
	
		switch (centena){
			case 1: 
				if (decena > 0 || unidad > 0){
					cout<<"ciento ";
				}
				else{
					cout<<"cien";
				}
				break;
			case 2: cout<<"doscientos "; break;
			case 3: cout<<"trescientos "; break;
			case 4: cout<<"cuatrocientos "; break;
			case 5: cout<<"quinientos "; break;
			case 6: cout<<"seiscientos "; break;
			case 7: cout<<"setecientos "; break;
			case 8: cout<<"ochocientos "; break;
			case 9: cout<<"novecientos "; break;
		}
		
		switch(decena){
			case 1:
				if (unidad == 1){
					cout<<"once";
				}
				else if (unidad == 2){
					cout<<"doce";
				}
				else if (unidad == 3){
					cout<<"trece";
				}
				else if (unidad == 4){
					cout<<"catorce";
				}
				else if (unidad == 5){
					cout<<"quince";
				}
				else if ((unidad>=6)&&(unidad<=9)){
					cout<<"dieci";
				}
				break;
			case 2:
				if (unidad == 0){
					cout<<"veinte";
				} else{
					cout<<"veinti";
				}
				break;
			case 3:
				cout<<"treinta";
				if (unidad > 0){
					cout<<" y ";
				} 
				break;
			case 4:
				cout<<"cuarenta";
				if (unidad > 0){
					cout<<" y ";
				} 
				break;
			case 5:
				cout<<"cincuenta";
				if (unidad > 0){
					cout<<" y ";
				} 
				break;
			case 6:
				cout<<"sesenta";
				if (unidad > 0){
					cout<<" y ";
				} 
				break;
			case 7:
				cout<<"setenta";
				if (unidad > 0){
					cout<<" y ";
				} 
				break;
			case 8:
				cout<<"ochenta";
				if (unidad > 0){
					cout<<" y ";
				} 
				break;
			case 9:
				cout<<"noventa";
				if (unidad > 0){
					cout<<" y ";
				} 
				break;
		}
	
		switch (unidad){
			case 0: 
				if(decena == 0 && centena == 0 && millar == 0){
					cout<<"cero";
				}
			break;
			case 1: 
				if(decena != 1)
				{
					cout<<"uno";
				}
			break;
			case 2: 
				if(decena != 1)
				{
					cout<<"dos";
				}
			break;
			case 3: 
				if(decena != 1)
				{
					cout<<"tres";
				}
			break;
			case 4: 
				if(decena != 1)
				{
					cout<<"cuatro";
				}	
			break;
			case 5: 
				if(decena != 1)
				{
					cout<<"cinco";
				}
			break;
			case 6: cout<<"seis"; break;
			case 7: cout<<"siete"; break;
			case 8: cout<<"ocho"; break;
			case 9: cout<<"nueve"; break;
		}
		cout<<"\nPresione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main ();
}

void decimalesLetras (){
	double decimal=0, parteEntera=0, parteDecimal=0;
	int valor=0, valord=0,unidad=0,decena=0,centena=0,millar=0,du=0,dd=0,dc=0;
	char continuar;
	system ("color 81");
	do{
		system("cls");
		cout<<"Escriba un numero decimal\n";
		cout<<"EL numero puede ser del 1.000 al 9999.999\n";
		cin>>decimal;
		cout<<"________________________________________________________\n";
		parteDecimal = modf(decimal, &parteEntera);
		parteDecimal *= 1000;
		valor = parteEntera;
		valord = parteDecimal;

		unidad = valor%10;
		valor /= 10;
		decena = valor%10;
		valor /= 10;
		centena = valor%10;
		valor /= 10;
		millar = valor%10;
		valor /= 10;
	
		du = valord%10;
		valord /= 10;
		dd = valord%10;
		valord /= 10;
		dc = valord%10;
		valord /= 10;
	
		switch (millar){
			case 1: cout<<"Mil "; break;
			case 2: cout<<"Dos mil "; break;
			case 3: cout<<"Tres mil "; break;
			case 4: cout<<"Cuatro mil "; break;
			case 5: cout<<"Cinco mil "; break;
			case 6: cout<<"Seis mil "; break;
			case 7: cout<<"Siete mil "; break;
			case 8: cout<<"Ocho mil "; break;
			case 9: cout<<"Nueve mil "; break;
		}
		
		switch (centena){
			case 1: 
				if (decena > 0 || unidad > 0){
					cout<<"ciento ";
				}
				else{
					cout<<"cien";
				}
			break;
			case 2: cout<<"doscientos "; break;
			case 3: cout<<"trescientos "; break;
			case 4: cout<<"cuatrocientos "; break;
			case 5: cout<<"quinientos "; break;
			case 6: cout<<"seiscientos "; break;
			case 7: cout<<"setecientos "; break;
			case 8: cout<<"ochocientos "; break;
			case 9: cout<<"novecientos "; break;
		}
	
		switch(decena){
			case 1:
				if (unidad == 1){
					cout<<"once";
				}
				else if (unidad == 2){
					cout<<"doce";
				}
				else if (unidad == 3){
					cout<<"trece";
				}
				else if (unidad == 4){
					cout<<"catorce";
				}
				else if (unidad == 5){
					cout<<"quince";
				}
				else if ((unidad>=6)&&(unidad<=9)){
					cout<<"dieci";
				}
			break;
			case 2:
				if (unidad == 0){
					cout<<"veinte";
				} else{
					cout<<"veinti";
				}
			break;
			case 3:
				cout<<"treinta";
				if (unidad > 0){
					cout<<" y ";
				} 
				break;
			case 4:
				cout<<"cuarenta";
				if (unidad > 0){
					cout<<" y ";
				} 
			break;
			case 5:
				cout<<"cincuenta";
				if (unidad > 0){
					cout<<" y ";
				} 
			break;
			case 6:
				cout<<"sesenta";
				if (unidad > 0){
					cout<<" y ";
				} 
			break;
			case 7:
				cout<<"setenta";
				if (unidad > 0){
					cout<<" y ";
				} 
			break;
			case 8:
				cout<<"ochenta";
				if (unidad > 0){
					cout<<" y ";
				} 
			break;
			case 9:
				cout<<"noventa";
				if (unidad > 0){
					cout<<" y ";
				} 
			break;
		}
	
		switch (unidad){
			case 0: 
				if(decena == 0 && centena == 0 && millar == 0){
					cout<<"cero";
				}
			break;
			case 1: 
				if(decena != 1)
				{
					cout<<"uno";
				}
			break;
			case 2: 
				if(decena != 1)
				{
					cout<<"dos";
				}
			break;
			case 3: 
				if(decena != 1)
				{
					cout<<"tres";
				}
			break;
			case 4: 
				if(decena != 1)
				{
					cout<<"cuatro";
				}
				break;
			case 5: 
				if(decena != 1)
				{
					cout<<"cinco";
				}
			break;
			case 6: cout<<"seis"; break;
			case 7: cout<<"siete"; break;
			case 8: cout<<"ocho"; break;
			case 9: cout<<"nueve"; break;
		}
	
		cout<<" punto ";
	
		switch (dc){
			case 0: cout<<"Cero "; break;
			case 1: 
				if (dd > 0 || du > 0){
					cout<<"ciento ";
				}
				else{
					cout<<"cien";
				}
			break;
			case 2: cout<<"doscientos "; break;
			case 3: cout<<"trescientos "; break;
			case 4: cout<<"cuatrocientos "; break;
			case 5: cout<<"quinientos "; break;
			case 6: cout<<"seiscientos "; break;
			case 7: cout<<"setecientos "; break;
			case 8: cout<<"ochocientos "; break;
			case 9: cout<<"novecientos "; break;
		}
	
		switch(dd){
			case 0: 
				if(dc == 0){
					cout<<"cero ";
				}
			break;
			case 1:
				if (du == 1){
					cout<<"once";
				}
				else if (du == 2){
					cout<<"doce";
				}
				else if (du == 3){
					cout<<"trece";
				}
				else if (du == 4){
					cout<<"catorce";
				}
				else if (du == 5){
					cout<<"quince";
				}
				else if ((du>=6)&&(du<=9)){
					cout<<"dieci";
				}
			break;
			case 2:
				if (du == 0){
					cout<<"veinte";
				} else{
					cout<<"veinti";
				}
			break;
			case 3:
				cout<<"treinta";
				if (du > 0){
					cout<<" y ";
				} 
			break;
			case 4:
				cout<<"cuarenta";
				if (du > 0){
					cout<<" y ";
				} 
			break;
			case 5:
				cout<<"cincuenta";
				if (du > 0){
					cout<<" y ";
				} 
			break;
			case 6:
				cout<<"sesenta";
				if (du > 0){
					cout<<" y ";
				} 
			break;
			case 7:
				cout<<"setenta";
				if (du > 0){
					cout<<" y ";
				} 
			break;
			case 8:
				cout<<"ochenta";
				if (du > 0){
					cout<<" y ";
				} 
			break;
			case 9:
				cout<<"noventa";
				if (du > 0){
					cout<<" y ";
				} 
			break;
		}
	
		switch (du){
			case 0: 
				if(dd == 0 && dc == 0){
					cout<<"cero";
				}
			break;
			case 1: 
				if(dd != 1)
				{
					cout<<"uno";
				}
			break;
			case 2: 
				if(dd != 1)
				{
					cout<<"dos";
				}
			break;
			case 3: 
				if(dd != 1)
				{
					cout<<"tres";
				}
			break;
			case 4: 
				if(dd != 1)
				{
					cout<<"cuatro";
				}
			break;
			case 5: 
				if(dd != 1)
				{
					cout<<"cinco";
				}
			break;
			case 6: cout<<"seis"; break;
			case 7: cout<<"siete"; break;
			case 8: cout<<"ocho"; break;
			case 9: cout<<"nueve"; break;
		}
		cout<<"\nPresione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main ();
}

void tabla (){
	int a=0;
	char continuar;
	system ("color 0B");
	do{
		system ("cls");
		cout<<"Ingrese el numero del cual quiere ver su tabla de multiplicar\n";
		cin>>a;
		cout<<"La tabla del: "<<a<<endl;
		for (int i = 1; i<11;i++)
		{
			cout<<"_______________________________\n";
			cout<<a<<"X"<<i<<"="<<a*i<<endl;
		}
		cout<<"\nPresione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main ();
}

void todasTablas (){
	char continuar;
	system ("color B0");
	do{
		system ("cls");
		cout<<"Todas las tablas de multiplicar del 1 al 10";
		for(int i=1;i<11;i++)
		{
			cout<<"\n\n";
			cout<<"La tabla del: "<<i<<endl;
			for(int j=1;j<11;j++)
			{
				cout<<i<<" X "<<j<<" = "<<i*j<<endl;
			}
		}
		cout<<"\nPresione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main ();
}

void multiplicacion(){
	int a=0,b=0,producto1=0, producto2=0, resultado=0;
	char continuar;
	system ("color 80");
	do{
		system ("cls");
		cout<<"Ingrese un numero de dos digitos\n";
		cin>>a;
		cout<<"Ingrese otro numero de dos digitos\n";
		cin>>b;
		if (a < 10){
			gotoxy(5,7);
			cout<<a;
		}
		else if((a >=10)&&(a < 100)){
			gotoxy(4,7);
			cout<<a;
		}
	
		if(b < 10){
			gotoxy(5,8);
			cout<<b;
		}
		else if((b >=10)&&(b < 100)){
			gotoxy(4,8);
			cout<<b;
		}
		gotoxy(1,9);
		cout<<"_______";
		resultado = a*b;
		producto1 = b%10;
		b /=10;
		producto2 = b%10;
		b /=10;
		producto1 *= a;
		producto2 *= a;
		if (producto1 < 10){
			gotoxy(5,10);
			cout<<producto1;
		}
		else if((producto1 >=10)&&(producto1 <100)){
			gotoxy(4,10);
			cout<<producto1;
		}
		else if((producto1 >= 100)&&(producto1 < 1000)){
			gotoxy(3,10);
			cout<<producto1;
		}
		
		if (producto2 < 10){
			gotoxy(4,11);
			cout<<producto2;
		}
		else if((producto2 >=10)&&(producto2 <100)){
			gotoxy(3,11);
			cout<<producto2;
		}
		else if((producto2 >= 100)&&(producto2 < 1000)){
			gotoxy(2,11);
			cout<<producto2;
		}
		gotoxy(1,12);
		cout<<"_______";
	
		if (resultado < 10){
			gotoxy(5,13);
			cout<<resultado;
		}
		else if((resultado >=10)&&(resultado <100)){
			gotoxy(4,13);
			cout<<resultado;
		}
		else if((resultado >= 100)&&(resultado < 1000)){
			gotoxy(3,13);
			cout<<resultado;
		}
		else if((resultado >= 1000)&&(resultado < 10000)){
			gotoxy(2,13);
			cout<<resultado;
		}
		cout<<"\nPresione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main ();
}

void binario(){
	int decimal=0, binario[999], division=0, i;
	char continuar;
	system ("color 17");
	do{
		i =0;
		system ("cls");
		cout<<"Ingrese un numero\n";
		cin>>decimal;
		cout<<"_______________________________________________________________________\n";
		cout<<"El numero "<<decimal<<" en binario es: ";
		while (decimal != 0)
		{
			binario[i] = decimal%2;
			decimal = decimal/2;
			i++;
		}
		i--;
		while (i>=0)
		{
			printf("%i",binario[i]);
			i--;
		}
		cout<<"\nPresione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main ();
}

void hexadecimal(){
	int hexadecimal[20];
    int decimal, residuo, resultado, i = 0;
	char continuar;
	system ("color 2F");
	do{
		system ("cls");
		i = 0;
    	cout << "Introduce el numero decimal a convertir: " << endl;
	    cin >> decimal;

    	do
	    {
    	    residuo = decimal % 16;
        	resultado = decimal / 16;
	        hexadecimal[i] = residuo;
    	    decimal = resultado;
	        i++;
	    } while (resultado > 15);

	    hexadecimal[i] = resultado;

	    cout << "El equivalente en hexadecimal es: ";

    	for (int j = i; j >= 0; j--)
	    {
    	    if (hexadecimal[j] == 10)
        	{
	            cout << "A";
    	    }
        	else if (hexadecimal[j] == 11)
	        {
    	        cout << "B";
	        }
    	    else if (hexadecimal[j] == 12)
        	{
	            cout << "C";
    	    }
        	else if (hexadecimal[j] == 13)
	        {
    	        cout << "D";
	        }
    	    else if (hexadecimal[j] == 14)
	        {
    	        cout << "E";
        	}
	        else if (hexadecimal[j] == 15)
    	    {
        	    cout << "F";
	        }
    	    else
        	{
	            cout << hexadecimal[j];
    	    }   
	    }
	    cout<<"\nPresione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main ();
}

void figuras (){
	int opc, lado, alto, ancho,fila,radio;
	char continuar;
	system ("color 30");
	do{
		system ("cls");
		cout<<"Generador de formas\n";
		cout<<"Elija la forma que desea generar\n";
		cout<<"1. Cuadrado\n";
		cout<<"2. Rectangulo\n";
		cout<<"3. Marco\n";
		cout<<"4. Triangulo\n";
		cout<<"5. Triangulo rectangulo\n";
		cout<<"6. Circulo (Parece ovalo)\n";
		cin>>opc;
		switch (opc)
		{
			case 1:
				system("CLS");
				cout<<"Ingrese la longitud de los lados\n";
				cin>>lado;
				for(int i=0; i<lado; i++)
				{
					for(int j=0; j<lado; j++)
					{
						cout<<"O";
					}
					cout<<"\n";
				}
			break;
		
			case 2:
				system("CLS");
				cout<<"Ingrese la anchura del rectangulo\n";
				cin>>ancho;
				cout<<"Ingrese el alto del rectangulo\n";
				cin>>alto;
				for(int i=0; i<alto; i++)
				{
					for(int j=0; j<ancho; j++)
					{
						cout<<"H";
					}
					cout<<"\n";
				}
			break;
		
			case 3:
				system("CLS");
				cout<<"Ingrese la longitud de los lados\n";
				cin>>lado;
				for(int i=1;i<=lado;i++)
				{
					for(int j=1;j<=lado;j++)
					{
						if(i==lado||j==lado||i==1||j==1)
						{
							cout<<"°";
						}
						else
						{
							cout<<" ";
						}
					}
					cout<<"\n";
				}
			break;
		
			case 4:
				system("CLS");
				cout<<"Ingrese el alto del triangulo\n";
				cin>>alto;
				ancho = 1;
				fila = alto-1;
				for(int i=1;i<=alto;i++)
				{
					for(int j=1;j<=fila;j++)
						cout<<" ";
						
					for(int k=1;k<=ancho;k++)
						cout<<"V";
						cout<<"\n";
						ancho += 2;
						fila -= 1;
					
				}
			break;
		
			case 5:
				system("CLS");
				cout<<"Ingrese la altura del triangulo\n";
				cin>>alto;
				ancho = 1;
				for(int i=0;i<alto;i++)
				{
					for(int j=0;j<ancho;j++)
					{
						cout<<"\\";
					}
					cout<<"\n";
					ancho += 1;
				}
			break;
		
			case 6:
				system("CLS");
				cout<<"Ingrese el radio del circulo\n";
				cin>>radio;
				for(int i=0;i<=radio*2;i++)
				{
					for(int j=0; j<=radio*2;j++)
					{
						if(pow(i - radio,2)+pow(j - radio,2)<=pow(radio,2))
						cout<<"O";
						else 
						cout<<" ";
					}
					cout<<"\n";
				}
			break; 	
		}
		cout<<"\nPresione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S'|| opc < 4);
	main ();
}

void mover (){
	char opc;
	int x = 1,y = 1;
	system ("cls");
	system ("color 4F");
	cout<<"ATENCION\n";
	cout<<"INSTRUCCIONES\n";
	cout<<"Los controles del punto son: w a s d\n";
	cout<<"Para una mejor experiencia coloca la ventana en pantalla completa\n";
	cout<<"Para salir debes de presionar la tecla q \n";
	cout<<"Presiona cualquier tecla para continuar";
	getch();
	system ("cls");
	while (opc != 'q')
	{
		if(x < 0)
		{
			x = 166;
		}
		if(x > 166)
		{
			x = 0;
		}
		if(y < 0)
		{
			y = 45;
		}
		if(y > 45)
		{
			y = 0;
		}
		system ("cls");
		gotoxy(x,y);
		cout<<"°°_A_°°";
		opc=getch();
		switch(opc)
		{
			case 'w':
				y--;
			break;
			case 's':
				y++;
			break;
			case 'a':
				x--;
			break;
			case 'd':
				x++;
			break;
		}
	}
	main();
}

void cajero (){
	char sn,continuar;
	int opc, opcretiro,pin;
	float saldo = 10000, ingreso; 
	system("color F1");
	do{
		system("cls");
		cout<<"Ingrese su pin (es: 1234)\n";
		cin>>pin;
	}while(pin != 1234);
	do{
		system ("cls");
		cout<<"\t\tBienvenido\n";
		cout<<"\t\tCajero Automatico\n";
		cout<<"\t\tOPCIONES\n";
		cout<<"\t1. Ingresar dinero a la cuenta\n";
		cout<<"\t2. Retirar dinero de la cuenta\n";
		cout<<"\t3. Hacer consulta del saldo de la cuenta\n";
		cout<<"\t4. Salir\n";
		cout<<"\tIngrese el numero de la opcion que desea realizar\n\t\t";
		cin>>opc;
		switch(opc)
		{
			case 1:
				system("cls");
				cout<<"Ingrese la cantidad de dinero a ingresar: \n";
				cin>>ingreso;
				saldo += ingreso;
				cout<<"Quiere ver su recibo? (s/n)\n";
				cin>>sn;
				if(sn == 's')
				{
					cout<<"Ha ingresado el monto de: Q."<<ingreso<<endl;
					cout<<"Su saldo de cuenta actual es: Q."<<saldo<<endl;
					cout<<"Tenga un buen dia "<<endl;
				}
				else
				{
					cout<<"Tenga un buen dia "<<endl;
				} 
			break;
		
			case 2:
				system ("cls");
				cout<<"Cuanto Dinero desea retirar: \n";
				gotoxy(1,2);
				cout<<"1. Q.50.00";
				gotoxy(20,2);
				cout<<"| 2. Q.100.00";
				gotoxy(1,4);
				cout<<"3. Q.200.00";
				gotoxy(20,4);
				cout<<"| 4. Q.300.00";
				gotoxy(1,6);
				cout<<"5. Q.500.00";
				gotoxy(20,6);
				cout<<"| 6. Q.1000.00";
				gotoxy(1,8);
				cout<<"7. Salir";
				gotoxy(1,10);
				cin>>opcretiro;
				switch (opcretiro)
				{
					case 1:
						if (saldo < 50)
						{
							cout<<"Saldo insuficiente \n";
						}
						else
						{
							saldo -= 50;
							cout<<"Su saldo de cuenta actual es: Q."<<saldo<<endl;	
						}
					break;
				
					case 2:
						if (saldo < 100)
						{
							cout<<"Saldo insuficiente \n";
						}
						else
						{
							saldo -= 100;
							cout<<"Su saldo de cuenta actual es: Q."<<saldo<<endl;	
						}
					break;
				
					case 3:
						if (saldo < 200)
						{
							cout<<"Saldo insuficiente \n";
						}
						else
						{
							saldo -= 200;
							cout<<"Su saldo de cuenta actual es: Q."<<saldo<<endl;	
						}
					break;
					
					case 4:
						if (saldo < 300)
						{
							cout<<"Saldo insuficiente \n";
						}
						else
						{
							saldo -= 300;
							cout<<"Su saldo de cuenta actual es: Q."<<saldo<<endl;	
						}
					break;
				
					case 5:
						if (saldo < 500)
						{
								cout<<"Saldo insuficiente \n";
						}
						else
						{
							saldo -= 500;
							cout<<"Su saldo de cuenta actual es: Q."<<saldo<<endl;	
						}
					break;
				
					case 6:
						if (saldo < 1000)
						{
							cout<<"Saldo insuficiente \n";
						}
						else
						{
							saldo -= 1000;
							cout<<"Su saldo de cuenta actual es: Q."<<saldo<<endl;	
						}
					break;	
				}
			break;
		
			case 3:
				cout<<"El saldo de cuenta actual es: Q."<<saldo<<endl;
			break;
			
			case 4:
				main();
			break;
		}
		cout<<"Desea realizar otra transaccion, presione s";
		cin>>continuar;
	}while(continuar == 's' || continuar == 'S');
	main();
}

void hipotenusa (){
	float a,b,c;
	int alto,ancho;
	char continuar;
	system ("color 5F");
	do{
		system ("cls");
		cout<<"Ingrese el valor del cateto a (altura): \n";
		cout<<"_________________________________________\n";
		cin>>a;
		cout<<"Ingrese el valor del cateto b (anchura): \n";
		cout<<"_________________________________________\n";
		cin>>b;
		c = sqrt(pow(a,2)+pow(b,2));
		cout<<"_________________________________________\n";
		cout<<"La hipotenusa tiene el valor de: "<<c<<endl;
		alto = a;
		ancho = 1;
		for(int i=0;i<alto;i++)
		{
			for(int j=0;j<ancho;j++)
			{
				cout<<"\\";
			}
			cout<<"\n";
			ancho += 1;
		}
		cout<<"\nPresione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main ();
}

void formula(){
	float a,b,c,x1,x2,potencia,raiz;
	char continuar;
	system ("color 60");
	do{
		system ("cls");
		cout<<"Ingrese el valor de a\n";
		cin>>a;
		cout<<"Ingrese el valor de b\n";
		cin>>b;
		cout<<"Ingrese el valor de c\n";
		cin>>c;
		cout<<"________________________________________________________\n";
		potencia=(pow(b,2))-(4*a*c);
	 	raiz =(sqrt(potencia));
 		x1 = (-b+raiz) / (2*a);
 		x2 = (-b-raiz) / (2*a);
 		cout<<"x1 = -"<<b<<"+ v"<<b<<"^2-4("<<a<<")("<<c<<")/2("<<a<<")"<<endl;
 		cout<<"\n";
		cout<<"Resultado de x1 = "<<x1<<endl;
		cout<<"________________________________________________________\n";
		cout<<"x2 = -"<<b<<"- v"<<b<<"^2-4("<<a<<")("<<c<<")/2("<<a<<")"<<endl;
		cout<<"\n";
		cout<<"Resultado de x2 = "<<x2<<endl;
		cout<<"________________________________________________________\n";
		cout<<"\nPresione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main ();	
}

void restaurante (){
	int menu, cantidad;
	float total,pago,vuelto;	
	char continuar;
	system ("color C0");
	do
	{
		system ("cls");
		cout<<"\n";
		cout<<"Bienvenido a Mc Burger Hut TM \n";
		cout<<"Que desea ordenar hoy? (Elija el numero de la opcion que desea ordenar) \n";
		cout<<"________________________________________________________________________\n";
		cout<<"1----------Menu de 2 piezas de pollo, papas y refresco-----------Q.31.00\n";
		cout<<"2----------Menu de una pizza grande + un litro de gaseosa--------Q.50.00\n";
		cout<<"3----------Menu de hamburguesa, aros de cebolla y refresco-------Q.37.50\n";
		cout<<"4----------Menu infantil de nuggets de pollo + juguete-----------Q.25.75\n";
		cout<<"5----------Creo que ya no ordenare nada\n";
		cin>>menu;
		if((menu>=1 )&&(menu<=4))
		{
			cout<<"Cantidad de menus seleccionados a ordenar?\n";
  			 cin>>cantidad;
		}

		switch(menu)
		{
		case 1:
			total += 31*cantidad;
		break;
		case 2:
			total += 50*cantidad;
		break;
		case 3:
			total += 37.5*cantidad;
		break;
		case 4:
			total += 25.75*cantidad;
		break;
		case 5:
			cout<<"Ok, tenga un buen dia\n";
			cout<<"Presione cualquier tecla para continuar\n";
			getch();
			main();
		break;
		
		}
		cout<<"Para ordenar algo mas presiones s";
		cin>>continuar;
	}
	while (continuar == 's' || continuar == 'S');
	cout<<"________________________________________________________________________\n";
	cout<<"El total a pagar es de: Q."<<total<<endl;
	do
	{
		cout<<"Ingrese la cantidad de dinero con la que va a pagar: \n";
		cin>>pago;
		vuelto = pago- total;
		if(vuelto < 0)
		{
			cout<<"El pago es insuficiente para pagar la cuenta\n";
		}
	}
	while(vuelto < 0);
	cout<<"________________________________________________________________________\n";
	cout<<"Su cambio es de: Q."<< vuelto<<endl;
	cout<<"Gracias por su compra, tenga un buen dia\n";
	cout<<"Presione cualquier tecla para continuar\n";
	getch();
	main();
}

void fibonacci(){
	int n,a=0,b=1,c=1;
	char continuar;
	system ("color 90");
	do{
		system ("cls");
		cout<<"Cuanto numeros quiere ver de la serie fibonacci?\n";
		cin>>n;
		cout<<"1 - ";
		for (int i=1;i<n;i++)
		{
			c = a+b;
			a = b;
			b = c;
			cout<<c<<" - ";		
		}
		cout<<"\nPresione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main ();
}

void imc (){
	float imc, peso, altura;
	char continuar;
	system ("color A0");
	do{
		system ("cls");
		cout<<"Ingrese su peso en Kilogramos\n";
		cin>>peso;
		cout<<"Ingrese su altura en Metros\n";
		cin>>altura;
		imc = peso/pow(altura,2);
		cout<<"____________________________________\n\n";
		cout<<"Su imc es de: "<<imc<<" kg/m^2\n";
		if(imc < 16)
		{
			cout<<"Entra en la clasifiacion de Peso inferior o bajo, delgadez severa";
		}
		else if((imc>=16)&&(imc<17))
		{
			cout<<"Entra en la clasificacion de peso inferior o bajo, delgadez moderada";
		}
		else if((imc>=17)&&(imc<18.5))
		{
			cout<<"Entra en la clasificacion de peso inferiro o bajo, delgadez leve";
		}
		else if((imc>=18.5)&&(imc<25))
		{
			cout<<"Entra en la clasificacion de peso normal";
		}
		else if((imc>=25)&&(imc<30))
		{
			cout<<"Entra en la clasificacion de sobrepeso o preobeso";
		}
		else if((imc>=30)&&(imc<35))
		{
			cout<<"Entra en la clasificacion de obesidad leve";
		}
		else if((imc>=35)&&(imc<40))
		{
			cout<<"Entra en la clasificacion de obesidad media";
		}
		else if(imc>=40)
		{
			cout<<"Entra en la clasificacion de obesidad morbida";
		}
		cout<<"\n\nPresione s para volver a ejercutar\n";	
		cin>>continuar;
	}while (continuar == 's' || continuar == 'S');
	main ();
}

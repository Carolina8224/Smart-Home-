//-----------------------------------------------------
trabajo para entregar 

//---------------------------------------------------
#include <iostream>
#include <string>
#include <studio.h>
#define TAX_MAX 45
#define TAX_MIN 1

using namespace std;

//----PROTOTIPOS---------------
int leer_notas(float notas[][5],string nombre[]);
void mostrar(int n, float notas[][5],string nombre[]);
void calcularEstad(int n,float notas[][5],string nombre[]);
void calculoDefi(int n,float notas[][5]);

//-------PROGRAMA PRINCIPAL----------

int main()
{
	string nombre[TAM_MAX];
	float notas[TAM_MAX][5];
	int n,
	
	n= leer_notas(notas,nombre);
	//mostrar(n,notas,nombre);
	//calcularDefi(n,notas);
	//mostrar(n, notas,nombre);
	//calcularEstado(n,notas,nombre);
	return 0;
}
//---------------------------------
int leer_notas(float notas[][5],string nombre[])
{
	int n;
	int i,j;
	
	do{
		cout<<"Ingrese el numero de estudiantes(1-45)";
		cin>>n;
	}while(n>45 or n<1);
	
	for(i=0;i<=n;i++)
	{
		cout<<"ingrese nombre del estudiante"<<i+1<<":";
	    cin.ignore();
	    getline(cin,nombre[i]);
		for(j=0;j<4;j++)
		{
			do
			{
				cout<<"ingrese nota del estudiante " <<nombre[i];
				cin>>notas[i][j];
			}while(notas[i][j]<0.0 or notas[i][j]>5.0);
		}
	}
	return n;
}
//------------------------------------------------
void mostrar(int n, float notas[][5],string nombre[])
{
	int i;
	int j;
	system("cls");
	cout<<"N° nombre \tNota1 \tNota2 \tNota3 \tNota4 \tDefinitiva";
	for (i=0;n;i++)
    {
    	cout << i+1<<nombre[i];
    	
    	for(j=0;5;j++)
    	{
    		cout << notas [i][j];
		}
	}
}

//-----------------------------------------------------
void calcularEstad(int n,float notas[][5],string nombre[])
{
	int i;
	int ganaron;
	int perdieron;
	int spromedio;
	int bpromedio;
	float suma=0.0;
	float promedio;
}



//-------------------------------------------------------
void calculoDefi(int n,float notas[][5])
{
	int i,j;
	float suma;
	
	for(i=0;i<=n;i++)
	{
		suma=0
		for(j=0;j<4;j++)
		{
			suma=suma+notas[i][j];
		}
		noas[i][4]=suma/4;
	}
}

//-----------------------------------------------------





#include<iostream>
#include <windows.h>
using namespace std;
main()
{
	int elementos, fila,columna, auxiliar;
	int vector[50];
	int suma=0;
	int promedio;
	setlocale (LC_CTYPE, "spanish");

do
{
do
{

	do
	{
	
		cout<<"Ingrese la cantidad de elementos ";
		cin>>elementos;
			for (int i=1;i<=elementos;i++)
			{
				cin>>vector[i];
					if (vector[i]==3) 
					{
						char patos[] ={'Q','U','E',' ','B','O','N','I','T','O',' ','E','S',' ','E','S','T','A','R',' ','E','N',' ','T','R','E','S'};
							for (int i=0; i<=27; i++)
							{
								cout<< patos [i];
								Sleep(80);
							}
					}
						
			}
			for (fila=1;fila<=elementos-1;fila++)
			{
				for(columna=1;columna<=elementos-1;columna++)
				{
					if(vector[columna]>vector[columna+1])
					{
						auxiliar=vector[columna+1];
						vector[columna+1]=vector[columna];
						vector[columna]=auxiliar;
					}
				}
			}
					for (int i=1;i<=elementos;i++)
					{
						cout<<vector[i]<<" , ";
					}

	} while ( elementos<=2);
}while (elementos>8);
}while (elementos<4);

cout<<"Ingrese la cantidad de elementos que se tomarán encuenta para el promedio, tenga encuenta que esta cantidad no puede superar la de los elementos ingresados originalmente. ";
		cin>>elementos;
 for (fila=1;fila<=elementos-1;fila++)
			{
				for(columna=1;columna<=elementos-1;columna++)
				{
					if(vector[columna]<vector[columna+1])
					{
						auxiliar=vector[columna+1];
						vector[columna+1]=vector[columna];
						vector[columna]=auxiliar;
					}
				}
			}
			for (int i=1;i<=elementos;i++)
					{
						suma=suma+vector[i];
						cout<<vector[i]<<" , ";
					}
			promedio=suma/elementos;
			cout<<"el promedio es:"<<promedio;
}

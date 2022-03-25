#include<iostream>
using namespace std;
void suma();
void resta();
void mama();

void resta()
{
	int a=5, b=9, c;
	c= b - a;
	cout<<"la resta es: "<<c;
}

main(){

	for(int i=1;i<=2;i++)
	{
		suma();
		resta();
		mama();
	}
}
void suma()
{
	int uno=1, dos=15, resp;
	resp=uno + dos;
	cout << "la suma es: "<<resp;
}
void mama()
{
	cout<<"hola mama";
}

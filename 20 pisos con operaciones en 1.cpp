/*10 pisos, con 10 oficinas, cada vez q se ingrese a un menu nuevo el anterior debe desparecer y con poder salir cuando se quiera*/

#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
main ()
{
int piso, local;
int a;
do
{


	cout << "Por favor ingrese el numero del piso del 1 al 10 al que quiere ingresar \n";
		cout << "1 para estoy en el piso uno" << endl;
		cout << "2 para estoy en el piso dos" << endl;
		cout << "3 para estoy en el piso tres" << endl;
		cout << "4 para estoy en el piso cuatro" << endl;
		cout << "5 para estoy en el piso cinco" << endl;
		cout << "6 para estoy en el piso seis" << endl;
		cout << "7 para estoy en el piso siete" << endl;
		cout << "8 para estoy en el piso ocho" << endl;
		cout << "9 para estoy en el piso nueve" << endl;
		cout << "10 para estoy en el piso diez" << endl;
			cin >> piso; 
				system("cls");
				switch (piso)
				{
						case 1: cout << "�Estoy en el piso uno, que local desea visitar? \n";
							cout << "1 para entrar en el local 1" << endl;
							cout << "2 para entrar en el local 2" << endl;
							cout << "3 para entrar en el local 3" << endl;
							cout << "4 para entrar en el local 4" << endl;
							cout << "5 para entrar en el local 5" << endl;
							cout << "6 para entrar en el local 6" << endl;
							cout << "7 para entrar en el local 7" << endl;
							cout << "8 para entrar en el local 8" << endl;
							cout << "9 para entrar en el local 9" << endl;
							cout << "10 para entrar en el local 10" << endl;
								cin >> local;
							default: cout << "el piso no coincide con el edificio";
								system("cls");
									switch (local)
									{
										case 1: cout << "Bienvenido al local numero 1";
											cout << "�Bienvenido al local de las operaciones!"<<endl;
												double n1, n2, r;
												int o;
												cout << "Si quieres ver la suma ingresa el 1"<<endl;
												cout << "Si quieres ver la resta ingresa el 2"<<endl;
												cout << "si quieres ver la multiplicacion ingresa el 3"<<endl;
												cout << "Si quieres ver la division ingresa el 4"<<endl;
												cout << "Si quieres ver la potencia ingresa el 5"<<endl;
												cout << "Si quieres ver la raiz cuadrada ingresa el 6"<<endl;
													cin >> o;
													system("cls");
														switch (o)
														{
															case 1: cout << "Bienvenido a la suma \n";
																cout << "Ingrese el primer numero para la suma \n";
																	cin >> n1;
																cout << "Ingrese el segundo numero para la suma \n";
																	cin >> n2;
															r = n1 + n2;
																cout << "La suma de "<<n1<<" y "<<n2<< "es igual a "<<r; 
															break;
															
															case 2: cout << "Bienvenido a la resta \n";
															cout << "Ingrese el primer numero para la resta \n";
																	cin >> n1;
																cout << "Ingrese el segundo numero para la resta \n";
																	cin >> n2;
															r = n1 - n2;
																cout << "La resta de "<<n1<<" y "<<n2<< "es igual a "<<r; 
															break;
															
															case 3: cout << "Bienvenido a la multiplicacion \n";
															cout << "Ingrese el primer numero para la multiplicacion \n";
																	cin >> n1;
																cout << "Ingrese el segundo numero para la multiplicacion \n";
																	cin >> n2;
															r = n1 * n2;
																cout << "La multiplicacion de "<<n1<<" y "<<n2<< "es igual a "<<r; 
															break;
															
															case 4: cout << "Bienvenido a la division \n";
															cout << "Ingrese el primer numero para la division \n";
																	cin >> n1;
																cout << "Ingrese el segundo numero para la division \n";
																	cin >> n2;
															r = n1 / n2;
																cout << "La division de "<<n1<<" y "<<n2<< "es igual a "<<r; 
															break;
															
															case 5: cout << "Bienvenido a la potencia \n";
															cout << "Ingrese la base  de la potencia \n";
																	cin >> n1;
																cout << "Ingrese el exponente de la potencia \n";
																	cin >> n2;
															r = pow (n1, n2);
																cout << "La potencia de base "<<n1<<" y exponente "<<n2<< "es igual a "<<r; 
															break;
															
															case 6: cout << "Bienvenido a la raiz cuadrada \n";
															cout << "Ingrese la base  de la raiz \n";
																	cin >> n1;
															r = sqrt (n1);
																cout << "La raiz de base "<<n1<<" y exponente "<<n2<< "es igual a "<<r << " \n";
															break;
														}
											break;
										case 2: cout << "Bienvenido al local numero 2";
											break;
										case 3: cout << "Bienvenido al local numero 3";
											break;
										case 4: cout << "Bienvenido al local numero 4";
											break;
										case 5: cout << "Bienvenido al local numero 5";
											break;
										case 6: cout << "Bienvenido al local numero 6";
											break;
										case 7: cout << "Bienvenido al local numero 7";
											break;
										case 8: cout << "Bienvenido al local numero 8";
											break;
										case 9: cout << "Bienvenido al local numero 9";
											break;
										case 10: cout << "Bienvenido al local numero 10";
											break;
								}
								break;
								
								case 2: cout << "�Estoy en el piso dos, que local desea visitar? \n";
							cout << "1 para entrar en el local 1" << endl;
							cout << "2 para entrar en el local 2" << endl;
							cout << "3 para entrar en el local 3" << endl;
							cout << "4 para entrar en el local 4" << endl;
							cout << "5 para entrar en el local 5" << endl;
							cout << "6 para entrar en el local 6" << endl;
							cout << "7 para entrar en el local 7" << endl;
							cout << "8 para entrar en el local 8" << endl;
							cout << "9 para entrar en el local 9" << endl;
							cout << "10 para entrar en el local 10" << endl;
								cin >> local;
								system("cls");
									switch (local)
									{
										case 1: cout << "Bienvenido al local numero 1";
											break;
										case 2: cout << "Bienvenido al local numero 2";
											break;
										case 3: cout << "Bienvenido al local numero 3";
											break;
										case 4: cout << "Bienvenido al local numero 4";
											break;
										case 5: cout << "Bienvenido al local numero 5";
											break;
										case 6: cout << "Bienvenido al local numero 6";
											break;
										case 7: cout << "Bienvenido al local numero 7";
											break;
										case 8: cout << "Bienvenido al local numero 8";
											break;
										case 9: cout << "Bienvenido al local numero 9";
											break;
										case 10: cout << "Bienvenido al local numero 10";
											break;
									default: cout << "el local no coincide con el edificio";
								}
								break;
								
								case 3: cout << "�Estoy en el piso tres, que local desea visitar? \n";
							cout << "1 para entrar en el local 1" << endl;
							cout << "2 para entrar en el local 2" << endl;
							cout << "3 para entrar en el local 3" << endl;
							cout << "4 para entrar en el local 4" << endl;
							cout << "5 para entrar en el local 5" << endl;
							cout << "6 para entrar en el local 6" << endl;
							cout << "7 para entrar en el local 7" << endl;
							cout << "8 para entrar en el local 8" << endl;
							cout << "9 para entrar en el local 9" << endl;
							cout << "10 para entrar en el local 10" << endl;
								cin >> local;
								system("cls");
									switch (local)
									{
										case 1: cout << "Bienvenido al local numero 1";
											break;
										case 2: cout << "Bienvenido al local numero 2";
											break;
										case 3: cout << "Bienvenido al local numero 3";
											break;
										case 4: cout << "Bienvenido al local numero 4";
											break;
										case 5: cout << "Bienvenido al local numero 5";
											break;
										case 6: cout << "Bienvenido al local numero 6";
											break;
										case 7: cout << "Bienvenido al local numero 7";
											break;
										case 8: cout << "Bienvenido al local numero 8";
											break;
										case 9: cout << "Bienvenido al local numero 9";
											break;
										case 10: cout << "Bienvenido al local numero 10";
											break;
									default: cout << "el local no coincide con el edificio";
								}
								break;
								
								case 4: cout << "�Estoy en el piso cuatro, que local desea visitar? \n";
							cout << "1 para entrar en el local 1" << endl;
							cout << "2 para entrar en el local 2" << endl;
							cout << "3 para entrar en el local 3" << endl;
							cout << "4 para entrar en el local 4" << endl;
							cout << "5 para entrar en el local 5" << endl;
							cout << "6 para entrar en el local 6" << endl;
							cout << "7 para entrar en el local 7" << endl;
							cout << "8 para entrar en el local 8" << endl;
							cout << "9 para entrar en el local 9" << endl;
							cout << "10 para entrar en el local 10" << endl;
								cin >> local;
								system("cls");
									switch (local)
									{
										case 1: cout << "Bienvenido al local numero 1";
											break;
										case 2: cout << "Bienvenido al local numero 2";
											break;
										case 3: cout << "Bienvenido al local numero 3";
											break;
										case 4: cout << "Bienvenido al local numero 4";
											break;
										case 5: cout << "Bienvenido al local numero 5";
											break;
										case 6: cout << "Bienvenido al local numero 6";
											break;
										case 7: cout << "Bienvenido al local numero 7";
											break;
										case 8: cout << "Bienvenido al local numero 8";
											break;
										case 9: cout << "Bienvenido al local numero 9";
											break;
										case 10: cout << "Bienvenido al local numero 10";
											break;
									default: cout << "el local no coincide con el edificio";
								}
								break;
								
								case 5: cout << "�Estoy en el piso cinco, que local desea visitar? \n";
							cout << "1 para entrar en el local 1" << endl;
							cout << "2 para entrar en el local 2" << endl;
							cout << "3 para entrar en el local 3" << endl;
							cout << "4 para entrar en el local 4" << endl;
							cout << "5 para entrar en el local 5" << endl;
							cout << "6 para entrar en el local 6" << endl;
							cout << "7 para entrar en el local 7" << endl;
							cout << "8 para entrar en el local 8" << endl;
							cout << "9 para entrar en el local 9" << endl;
							cout << "10 para entrar en el local 10" << endl;
								cin >> local;
								system("cls");
									switch (local)
									{
										case 1: cout << "Bienvenido al local numero 1";
											break;
										case 2: cout << "Bienvenido al local numero 2";
											break;
										case 3: cout << "Bienvenido al local numero 3";
											break;
										case 4: cout << "Bienvenido al local numero 4";
											break;
										case 5: cout << "Bienvenido al local numero 5";
											break;
										case 6: cout << "Bienvenido al local numero 6";
											break;
										case 7: cout << "Bienvenido al local numero 7";
											break;
										case 8: cout << "Bienvenido al local numero 8";
											break;
										case 9: cout << "Bienvenido al local numero 9";
											break;
										case 10: cout << "Bienvenido al local numero 10";
											break;
									default: cout << "el local no coincide con el edificio";
								}
								break;
								
								case 6: cout << "�Estoy en el piso seis, que local desea visitar? \n";
							cout << "1 para entrar en el local 1" << endl;
							cout << "2 para entrar en el local 2" << endl;
							cout << "3 para entrar en el local 3" << endl;
							cout << "4 para entrar en el local 4" << endl;
							cout << "5 para entrar en el local 5" << endl;
							cout << "6 para entrar en el local 6" << endl;
							cout << "7 para entrar en el local 7" << endl;
							cout << "8 para entrar en el local 8" << endl;
							cout << "9 para entrar en el local 9" << endl;
							cout << "10 para entrar en el local 10" << endl;
								cin >> local;
								system("cls");
									switch (local)
									{
										case 1: cout << "Bienvenido al local numero 1";
											break;
										case 2: cout << "Bienvenido al local numero 2";
											break;
										case 3: cout << "Bienvenido al local numero 3";
											break;
										case 4: cout << "Bienvenido al local numero 4";
											break;
										case 5: cout << "Bienvenido al local numero 5";
											break;
										case 6: cout << "Bienvenido al local numero 6";
											break;
										case 7: cout << "Bienvenido al local numero 7";
											break;
										case 8: cout << "Bienvenido al local numero 8";
											break;
										case 9: cout << "Bienvenido al local numero 9";
											break;
										case 10: cout << "Bienvenido al local numero 10";
											break;
									default: cout << "el local no coincide con el edificio";
								}
								break;
								
								case 7: cout << "�Estoy en el piso siete, que local desea visitar? \n";
							cout << "1 para entrar en el local 1" << endl;
							cout << "2 para entrar en el local 2" << endl;
							cout << "3 para entrar en el local 3" << endl;
							cout << "4 para entrar en el local 4" << endl;
							cout << "5 para entrar en el local 5" << endl;
							cout << "6 para entrar en el local 6" << endl;
							cout << "7 para entrar en el local 7" << endl;
							cout << "8 para entrar en el local 8" << endl;
							cout << "9 para entrar en el local 9" << endl;
							cout << "10 para entrar en el local 10" << endl;
								cin >> local;
								system("cls");
									switch (local)
									{
										case 1: cout << "Bienvenido al local numero 1";
											break;
										case 2: cout << "Bienvenido al local numero 2";
											break;
										case 3: cout << "Bienvenido al local numero 3";
											break;
										case 4: cout << "Bienvenido al local numero 4";
											break;
										case 5: cout << "Bienvenido al local numero 5";
											break;
										case 6: cout << "Bienvenido al local numero 6";
											break;
										case 7: cout << "Bienvenido al local numero 7";
											break;
										case 8: cout << "Bienvenido al local numero 8";
											break;
										case 9: cout << "Bienvenido al local numero 9";
											break;
										case 10: cout << "Bienvenido al local numero 10";
											break;
									default: cout << "el local no coincide con el edificio";
								}
								break;
								
								case 8: cout << "�Estoy en el piso ocho, que local desea visitar? \n";
							cout << "1 para entrar en el local 1" << endl;
							cout << "2 para entrar en el local 2" << endl;
							cout << "3 para entrar en el local 3" << endl;
							cout << "4 para entrar en el local 4" << endl;
							cout << "5 para entrar en el local 5" << endl;
							cout << "6 para entrar en el local 6" << endl;
							cout << "7 para entrar en el local 7" << endl;
							cout << "8 para entrar en el local 8" << endl;
							cout << "9 para entrar en el local 9" << endl;
							cout << "10 para entrar en el local 10" << endl;
								cin >> local;
								system("cls");
									switch (local)
									{
										case 1: cout << "Bienvenido al local numero 1";
											break;
										case 2: cout << "Bienvenido al local numero 2";
											break;
										case 3: cout << "Bienvenido al local numero 3";
											break;
										case 4: cout << "Bienvenido al local numero 4";
											break;
										case 5: cout << "Bienvenido al local numero 5";
											break;
										case 6: cout << "Bienvenido al local numero 6";
											break;
										case 7: cout << "Bienvenido al local numero 7";
											break;
										case 8: cout << "Bienvenido al local numero 8";
											break;
										case 9: cout << "Bienvenido al local numero 9";
											break;
										case 10: cout << "Bienvenido al local numero 10";
											break;
									default: cout << "el local no coincide con el edificio";
								}
								break;
								
								case 9: cout << "�Estoy en el piso nueve, que local desea visitar? \n";
							cout << "1 para entrar en el local 1" << endl;
							cout << "2 para entrar en el local 2" << endl;
							cout << "3 para entrar en el local 3" << endl;
							cout << "4 para entrar en el local 4" << endl;
							cout << "5 para entrar en el local 5" << endl;
							cout << "6 para entrar en el local 6" << endl;
							cout << "7 para entrar en el local 7" << endl;
							cout << "8 para entrar en el local 8" << endl;
							cout << "9 para entrar en el local 9" << endl;
							cout << "10 para entrar en el local 10" << endl;
								cin >> local;
								system("cls");
									switch (local)
									{
										case 1: cout << "Bienvenido al local numero 1";
											break;
										case 2: cout << "Bienvenido al local numero 2";
											break;
										case 3: cout << "Bienvenido al local numero 3";
											break;
										case 4: cout << "Bienvenido al local numero 4";
											break;
										case 5: cout << "Bienvenido al local numero 5";
											break;
										case 6: cout << "Bienvenido al local numero 6";
											break;
										case 7: cout << "Bienvenido al local numero 7";
											break;
										case 8: cout << "Bienvenido al local numero 8";
											break;
										case 9: cout << "Bienvenido al local numero 9";
											break;
										case 10: cout << "Bienvenido al local numero 10";
											break;
									default: cout << "el local no coincide con el edificio";
								}
								break;
								
								case 10: cout << "�Estoy en el piso diez, que local desea visitar? \n";
							cout << "1 para entrar en el local 1" << endl;
							cout << "2 para entrar en el local 2" << endl;
							cout << "3 para entrar en el local 3" << endl;
							cout << "4 para entrar en el local 4" << endl;
							cout << "5 para entrar en el local 5" << endl;
							cout << "6 para entrar en el local 6" << endl;
							cout << "7 para entrar en el local 7" << endl;
							cout << "8 para entrar en el local 8" << endl;
							cout << "9 para entrar en el local 9" << endl;
							cout << "10 para entrar en el local 10" << endl;
								cin >> local;
								system("cls");
									switch (local)
									{
										case 1: cout << "Bienvenido al local numero 1";
											break;
										case 2: cout << "Bienvenido al local numero 2";
											break;
										case 3: cout << "Bienvenido al local numero 3";
											break;
										case 4: cout << "Bienvenido al local numero 4";
											break;
										case 5: cout << "Bienvenido al local numero 5";
											break;
										case 6: cout << "Bienvenido al local numero 6";
											break;
										case 7: cout << "Bienvenido al local numero 7";
											break;
										case 8: cout << "Bienvenido al local numero 8";
											break;
										case 9: cout << "Bienvenido al local numero 9";
											break;
										case 10: cout << "Bienvenido al local numero 10";
											
									
								}
								break;
								
					}
	cout << "si desea continuar oprima 1, y si no, oprima otra tecla \n";
	cin >> a;
	system ("cls");
} while ( a==1 );


}

#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
using namespace std;

int ramdomtotal = 0;
int a = 1;
int op = 1;
int b, i, n, g, o, s;
int cantidadB = 0, cantidadI = 0, cantidadN = 0, cantidadG = 0, cantidadO = 0;

int main()
{
    int seguir = 1;
    do
    {
        int m;
        cout<<"\n";
        cout<<"\tBINGO VIRTUAL\n\n";
        cout<<"Elija una opcion\n\n";
        cout<<"1 Jugar Full House\n";
        cout<<"2 Jugar Linea\n";
        cout<<"3 Salir\n";
        cout<<"Ingrese el digito: ";
        cin>>m;

        switch(m)
        {
            case 1:
            {
                cout<<" Full House "<<endl;
                cout<<" Completar todo el carton para ganar."<<endl;

                srand(time(NULL));

                int arreglot[75];
                int arregloB[15];
                int arregloi[15];
                int arreglon[14];
                int arreglog[15];
                int arregloo[15];

                cout<<"---------------------------------"<<endl;
                cout<<"B   |  " "I   |  " "N   | " " G   |  " "O   |  "<<endl;
                srand(time(NULL));

                for(i=0; i<5; i++)
                {
                    //COLUMNA B
                    int ramdom = 0;
                    ramdom = 1+rand ()%(16 - 1);
                    int ramdom2 = 0;
                    while(ramdom2 < i)
                    {
                        if(ramdom != arregloB[ramdom2])
                            ramdom2++;
                        else
                        {
                            ramdom = 1+rand ()%(16 - 1);
                            ramdom2 = 0;
                        }
                    }

                    arregloB[i] = ramdom;
                    int x = arregloB[i];
                    if(x<10)
                    {
                        cout<<"---------------------------------"<<endl;
                        cout<<arregloB[i]<<" "<<"  |  ";

                    }
                    else
                    {
                        cout<<"---------------------------------"<<endl;
                        cout<<arregloB[i];
                        cout<<"  |  ";
                    }

                    //COLUMNA I//
                    int ramdomi = 0;
                    ramdomi = 16+rand ()%(31 - 16);
                    int ramdomi2 = 0;
                    while(ramdomi2 < i)
                    {
                        if(ramdomi != arregloi[ramdomi2])
                            ramdomi2++;
                        else
                        {
                            ramdomi = 16+rand ()%(31 - 16);
                            ramdomi2 = 0;
                        }
                    }

                    arregloi[i] = ramdomi;
                    cout << arregloi[i]<<"  |  ";

                    //COLUMNA N//
                    int ramdomn = 0;
                    ramdomn = 31+rand ()%(46 - 31);
                    int ramdomn2 = 0;
                    while(ramdomn2 < i)
                    {
                        if(ramdomn != arreglon[ramdomn2])
                            ramdomn2++;
                        else
                        {
                            ramdomn = 31+rand ()%(46 - 31);
                            ramdomn2 = 0;
                        }
                    }

                    arreglon[i] = ramdomn;
                    if(i == 2)
                    {
                        arreglon[i]=0;
                        cout<<"--  |  ";
                    }
                    else
                        cout<<arreglon[i]<<"  |  ";

                    //COLUMNA G//
                    int ramdomg = 0;
                    ramdomg = 46+rand ()%(61 - 46);
                    int ramdomg2 = 0;
                    while(ramdomg2 < i)
                    {
                        if(ramdomg != arreglog[ramdomg2])
                            ramdomg2++;
                        else
                        {
                            ramdomg = 46+rand ()%(61 - 46);
                            ramdomg2 = 0;
                        }
                    }

                    arreglog[i] = ramdomg;
                    cout<<arreglog[i]<<"  |  ";

                    //COLUMNA O//
                    int ramdomo = 0;
                    ramdomo = 61+rand ()%(76 - 61);
                    int ramdomo2 = 0;
                    while(ramdomo2 < i)
                    {
                        if(ramdomo != arregloo[ramdomo2])
                            ramdomo2++;
                        else
                        {
                            ramdomo = 61+rand ()%(76 - 61);
                            ramdomo2 = 0;
                        }
                    }

                    arregloo[i] = ramdomo;
                    cout << arregloo[i]<< "  |  " <<endl;
                }

                //GENERAR BOLAS DEL 1 A 75//
                do
                {
                    ramdomtotal = 1+rand()%(76 - 1);
                    int ramdomtotal2 = 0;
                    while(ramdomtotal2 < a)
                    {
                        if(ramdomtotal != arreglot[ramdomtotal2])
                            ramdomtotal2++;
                        else
                        {
                            ramdomtotal = 1+rand ()%(76 - 1);
                            ramdomtotal2 = 0;
                        }
                    }

                    arreglot[a] = ramdomtotal;
                    if(arreglot[a]<10)
                        cout<<arreglot[a]<<"  ";
                    else
                        cout <<endl<< arreglot[a]<<" = Numero Resultante / ";

                    //COMPARAR COLUMNA B//
                    for(int c=0; c<=5; c++)
                    {
                        if(arregloB[c] == arreglot[a])
                            arregloB[c] = 00;
                    }

                    for(int d=0; d<=4; d++)
                        cantidadB += arregloB[d];

                    //COMPARAR COLUMNA I//
                    for(int c=0; c<=5; c++)
                    {
                        if(arregloi[c] == arreglot[a])
                            arregloi[c] = 00;
                    }

                    for(int d=0; d<=4; d++)
                        cantidadI = cantidadI + arregloi[d];

                    //COMPARAR LA COLUMNA DE N//
                    for(int c=0; c<=5; c++)
                    {
                        if(arreglon[c] == arreglot[a])
                            arreglon[c] = 00;
                    }

                    for(int d=0; d<=4; d++)
                        cantidadN = cantidadN + arreglon[d];

                    //COMPARAR COLUMNA G//
                    for(int c=0; c<=5; c++)
                    {
                        if(arreglog[c] == arreglot[a])
                            arreglog[c] = 00;
                    }

                    for(int d=0; d<=4; d++)
                        cantidadG = cantidadG + arreglog[d];

                    //COMPARAR COLUMNA O//
                    for(int c=0; c<=5; c++)
                    {
                        if(arregloo[c] == arreglot[a])
                            arregloo[c] = 00;
                    }

                    for(int d=0; d<=4; d++)
                        cantidadO = cantidadO + arregloo[d];

                    //COMPARAR CARTON LLENO
                    if(cantidadB == 0 && cantidadI == 0 && cantidadN == 0 && cantidadG == 0 && cantidadO == 0)
                    {
                        cout<<" "<<endl;
                        cout<<"HA LLENADO EL CARTON"<<endl;
                        cout<<"FELICIDADES"<<endl;
                        break;
                    }

                    cantidadB = 0;
                    cantidadI = 0;
                    cantidadN = 0;
                    cantidadG = 0;
                    cantidadO = 0;

                    a++;
                    cout<<"Presione 1 para sacar otra bola = ";
                    cin>> op;
                }while(op == 1);

                break;
            }

            case 2:
            {
                cout<<" "<<endl;
                cout<<"\t Jugar linea "<<endl;
                cout<<"El jugador ganara hasta completar una columna.\n"<<endl;

                srand(time(NULL));

                int arreglot[75];
                int arregloB[15];
                int arregloi[14];
                int arreglon[14];
                int arreglog[14];
                int arregloo[14];

                cout<<"---------------------------------"<<endl;
                cout<<"B   |  " "I   |  " "N   | " " G   |  " "O   |  "<<endl;
                srand(time(NULL));

                for(i=0; i<5; i++)
                {
                    //COLUMNA B
                    int ramdom = 0;
                    ramdom = 1+rand ()%(16 - 1);
                    int ramdom2 = 0;
                    while(ramdom2 < i)
                    {
                        if(ramdom != arregloB[ramdom2])
                            ramdom2++;
                        else
                        {
                            ramdom = 1+rand ()%(16 - 1);
                            ramdom2 = 0;
                        }
                    }

                    arregloB[i] = ramdom;
                    int x = arregloB[i];
                    if(x<10)
                    {
                        cout<<"---------------------------------"<<endl;
                        cout<<arregloB[i]<<" "<<"  |  ";

                    }
                    else
                    {
                        cout<<"---------------------------------"<<endl;
                        cout<<arregloB[i];
                        cout<<"  |  ";
                    }

                    //COLUMNA I//
                    int ramdomi = 0;
                    ramdomi = 16+rand ()%(31 - 16);
                    int ramdomi2 = 0;
                    while(ramdomi2 < i)
                    {
                        if(ramdomi != arregloi[ramdomi2])
                            ramdomi2++;
                        else
                        {
                            ramdomi = 16+rand ()%(31 - 16);
                            ramdomi2 = 0;
                        }
                    }

                    arregloi[i] = ramdomi;
                    cout << arregloi[i]<<"  |  ";

                    //COLUMNA N//
                    int ramdomn = 0;
                    ramdomn = 31+rand ()%(46 - 31);
                    int ramdomn2 = 0;
                    while(ramdomn2 < i)
                    {
                        if(ramdomn != arreglon[ramdomn2])
                            ramdomn2++;
                        else
                        {
                            ramdomn = 31+rand ()%(46 - 31);
                            ramdomn2 = 0;
                        }
                    }

                    arreglon[i] = ramdomn;
                    if(i == 2)
                    {
                        arreglon[i]=0;
                        cout<<"--  |  ";
                    }
                    else
                        cout<<arreglon[i]<<"  |  ";

                    //COLUMNA G//
                    int ramdomg = 0;
                    ramdomg = 46+rand ()%(61 - 46);
                    int ramdomg2 = 0;
                    while(ramdomg2 < i)
                    {
                        if(ramdomg != arreglog[ramdomg2])
                            ramdomg2++;
                        else
                        {
                            ramdomg = 46+rand ()%(61 - 46);
                            ramdomg2 = 0;
                        }
                    }

                    arreglog[i] = ramdomg;
                    cout<<arreglog[i]<<"  |  ";

                    //COLUMNA O//
                    int ramdomo = 0;
                    ramdomo = 61+rand ()%(76 - 61);
                    int ramdomo2 = 0;
                    while(ramdomo2 < i)
                    {
                        if(ramdomo != arregloo[ramdomo2])
                            ramdomo2++;
                        else
                        {
                            ramdomo = 61+rand ()%(76 - 61);
                            ramdomo2 = 0;
                        }
                    }

                    arregloo[i] = ramdomo;
                    cout << arregloo[i]<< "  |  " <<endl;
                }

                //GENERAR BOLAS DEL 1 A 75//
                do
                {
                    ramdomtotal = 1+rand()%(76 - 1);
                    int ramdomtotal2 = 0;
                    while(ramdomtotal2 < a)
                    {
                        if(ramdomtotal != arreglot[ramdomtotal2])
                            ramdomtotal2++;
                        else
                        {
                            ramdomtotal = 1+rand ()%(76 - 1);
                            ramdomtotal2 = 0;
                        }
                    }

                    arreglot[a] = ramdomtotal;
                    if(arreglot[a]<10)
                        cout<<arreglot[a]<<"  ";
                    else
                        cout <<endl<< arreglot[a]<<" = Numero Resultante / ";

                    //COMPARAR COLUMNA B//
                    for(int c=0; c<=5; c++)
                    {
                        if(arregloB[c] == arreglot[a])
                            arregloB[c] = 00;
                    }

                    for(int d=0; d<=4; d++)
                        cantidadB += arregloB[d];

                    if(cantidadB == 0)
                    {
                        cout<<" "<<endl;
                        cout<<"Ganador en la fila B"<<endl;
                        cout<<"FELICIDADES"<<endl;
                        break;
                    }

                    cantidadB = 0;

                    //COMPARAR COLUMNA I//
                    for(int c=0; c<=5; c++)
                    {
                        if(arregloi[c] == arreglot[a])
                            arregloi[c] = 00;
                    }

                    for(int d=0; d<=4; d++)
                        cantidadI = cantidadI + arregloi[d];

                    if(cantidadI == 0)
                    {
                        cout<<" "<<endl;
                        cout<<"Ganador en la fila I"<<endl;
                        cout<<"FELICIDADES"<<endl;
                        break;
                    }

                    cantidadI = 0;

                    //COMPARAR LA COLUMNA DE N//
                    for(int c=0; c<=5; c++)
                    {
                        if(arreglon[c] == arreglot[a])
                            arreglon[c] = 00;
                    }

                    for(int d=0; d<=4; d++)
                        cantidadN = cantidadN + arreglon[d];

                    if(cantidadN == 0)
                    {
                        cout<<" "<<endl;
                        cout<<"Ganador en la Fila N"<<endl;
                        cout<<"FELICIDADES"<<endl;
                        break;
                    }


                    cantidadN = 0;

                    //COMPARAR COLUMNA G//
                    for(int c=0; c<=5; c++)
                    {
                        if(arreglog[c] == arreglot[a])
                            arreglog[c] = 00;
                    }

                    for(int d=0; d<=4; d++)
                        cantidadG = cantidadG + arreglog[d];

                    if(cantidadG == 0)
                    {
                        cout<<" "<<endl;
                        cout<<"Ganador en la Fila G"<<endl;
                        cout<<"FELICIDADES"<<endl;
                        break;
                    }

                    cantidadG = 0;

                    //COMPARAR COLUMNA O//
                    for(int c=0; c<=5; c++)
                    {
                        if(arregloo[c] == arreglot[a])
                            arregloo[c] = 00;
                    }

                    for(int d=0; d<=4; d++)
                        cantidadO = cantidadO + arregloo[d];

                    if(cantidadO == 0)
                    {
                        cout<<" "<<endl;
                        cout<<"Ganador en la Fila O"<<endl;
                        cout<<"FELICIDADES"<<endl;
                        break;
                    }

                    cantidadO = 0;

                    a++;
                    cout<<"Presione 1 para sacar otra bola = ";
                    cin>> op;
                }while(op ==1);

                break;
            }

            case 3:
            {
                cout<<"Gracias por entrar."<<endl;
                exit(0);
                break;
            }

            default: cout<<"El valor ingresado no esta en el menu."<<endl;
        }
        if (seguir!=0)
        {
            cout << "DESEA CONTINUAR? 1 - SI , 0 - NO ";
            cin >> seguir;
        };
    }while(seguir == 1);
    system("pause");

    cin.ignore();
    return 0;
}

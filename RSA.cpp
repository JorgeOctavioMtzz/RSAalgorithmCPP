#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h> 
using namespace std;

void ReadTxt(int &P1, int &P2, int &nXd)
{
    int sum = 0;
    int x;
    int Mult, p1, p2;
    ifstream inFile;
    
    
    inFile.open("/Users/octavio/Desktop/CPP/RSAalgorithm/Primos1y2.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    inFile >> P1;    // Read the first item from the file into an integer variable x.
    inFile >> P2;  // Read the next item from the file into a string variable str.
    inFile.close();
    nXd=(P1*P2);
}

void phiGen(int P1, int P2, int &phin)
{
    int phip1, phip2;
    phip1 = P1 - 1;
    phip2 = P2 - 1;
    phin = phip1 * phip2;
}

void Receptor(int n, int eXD, int &cXD)
{
    int mensaje, power;
    cout << "Ingresa el mensaje a enviar: "; cin >> mensaje;
    while (mensaje < 0)
    {
        cout << "Ingresa el mensaje a enviar: "; cin >> mensaje;
    }
    power=pow(mensaje, eXD);
    cXD=power%n;
}

// void d(int phinum, int e, int &d)
// {
//     int k=1, mult, d_int;
//     mult=k*phinum+1;
//     d=mult/e;
//     d_int=
// }

// void llave(int c, int &mensR)
// {

// }

int main()
{
    int Primo1, Primo2, Num, PhiNum, e=17, c, MensajeRecibido;
    cout << "Corre el Archivo de python Primero" << "\n";
    cout << "Press Enter to Continue";
    cin.ignore();
    ReadTxt(Primo1, Primo2, Num);
    while (Primo1 == Primo2)
    {
        cout << "Corre el Archivo de python Primero" << "\n";
        cout << "Press Enter to Continue";
        cin.ignore();
        ReadTxt(Primo1, Primo2, Num);
    }
    phiGen(Primo1, Primo2, PhiNum);
    cout << Num << "\n";
    Receptor(Num, e, c);
    cout << c << "\n";
    cout << PhiNum << "\n";
}
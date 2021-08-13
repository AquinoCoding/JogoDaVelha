#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

int voce;

// BOT aqui
int bot = (rand() % 2);
string lista[] = {" ","Pedra", "Papel", "Tesoura"};

// Você AQUI
cout << "Pedra[1]\nPapel[2]\nTesoura[3]: " << endl;
cin >> voce;

cout << "Bot = " << lista[bot] << " X "<< "Você = " << lista[voce] << endl;
}

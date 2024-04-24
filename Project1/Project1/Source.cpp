#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdint>
#include <fstream>
#include <bitset>
#include <stdio.h>
#include "read.h"
#include "write.h"
using namespace std;
#include <cstdio>


int main()
{
	srand(time(0));
	int arrayCounter = 0;
	cout << "Podaj ile liczb: ";
	int rozmiar; cin >> rozmiar;
	short* tablica = new short[rozmiar + 1];
	tablica++;
	tablica[-1] = (rozmiar<<8) | arrayCounter++;
	for (int i = 0; i < rozmiar; i += 1)
	{
		tablica[i] =0;
		cout << i << ": " << tablica[i] << endl;
	}
	cout << "Rozmiar tablicy: " << (tablica[-1] >> 8) << endl;
	cout << "Numer tablicy: " << (tablica[-1] & 0xFF) << endl;
    saveArrayToFile(tablica);
	readArrayFromFile();
	delete[](tablica - 1);
	tablica = nullptr;

}
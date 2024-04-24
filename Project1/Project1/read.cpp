#define _CRT_SECURE_NO_WARNINGS
#include "read.h"
#include <cassert>
#include <iostream>
#include <cstdint>
#include <fstream>
#include <bitset>
#include <stdio.h>
using namespace std;
#include <cstdio>

void readArrayFromFile() {
	FILE* plik = nullptr;
	plik = fopen("privet.txt", "r");
	char tekst[100] = {};
	while (true)
	{
		fgets(tekst, 100, plik);
		if (feof(plik)) break;
	}
	cout << tekst;
}

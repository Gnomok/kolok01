#define _CRT_SECURE_NO_WARNINGS
#include "write.h"
#include <cassert>
#include <iostream>
#include <cstdint>
#include <fstream>
#include <bitset>
#include <stdio.h>
using namespace std;
#include <cstdio>
void saveArrayToFile(short* array) {
	FILE* desPliku = nullptr;
	uint16_t sasi = (int)array;
	bitset<16> prikol(sasi);
	char buf[200] = "";
	desPliku = fopen("privet.txt", "w");
	if (desPliku != nullptr) {
		sprintf(buf, "%s", prikol.to_string().c_str());
		fputs(buf, desPliku);
		fclose(desPliku);
	}
}
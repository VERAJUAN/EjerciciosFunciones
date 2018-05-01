// ConsoleApplication1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

void selectionSort(int p[],int n) {
	int aux = 0, j = 0;
	for (int i = 0; i < n - 1; i++) {

		for (j = i + 1; j < n; j++) {
			if (p[i] > p[j]) {
				aux = p[i];
				p[i] = p[j];
				p[j] = aux;
			}
		}

	}
	for (int i = 0; i<68; i++) {
		printf("%d\n", (p + i));
	}
}


int main() {
	int n = 68;
	int* p = new int[n];

	std::cout << sizeof(&p);


	std::cout << "Enteros sin ordenar:\n";
	for (int i = 0; i<68; i++) {
		printf("%d\n", (p + i));
	}
	std::cout << "Enteros ordenados:\n";
	selectionSort(p,n);
	system("pause");
}
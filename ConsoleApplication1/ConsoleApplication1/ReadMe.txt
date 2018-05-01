========================================================================
    APLICACIÓN DE CONSOLA: Ejercicios de Funciones
========================================================================

1) La respuesta es la d), no compila porque la función se encuentra
con sobrecarga con la misma cantidad de argumentos para el mismo tipo.

2) La salida es "f(double)".

3) Da error de compilación, la función no acepta 0 argumentos.

4) La respuesta es la c), llamada ambigüa.

5) La respuesta es b), salida "AB".

6) Error de compilación, porque no se pueden sobrecargar funciones solo
distinguiendolos del valor retornado.

7) La respuesta es a), salida "int".

8) 
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
	
}

9) No se puede intentar cambiar su valor, no compilará y dirá que este
"debe ser modificable".

void f(const int a) {
	a = 3;
	std::cout << a;
}


10)

int suma(int a, int b) {
	return a + b;
}

int main() {
	int a = 1;
	int b = 2;
	int(*funcion) (int a, int b) = suma;
	funcion(a, b);
}

11)

float f2(char a) {
	float num = 2.1;
	return num;
}

char f1(int b) {
	char a = 'a';
	float(*funcion2) (char a) = f2;	
	return funcion2(a);
}

int main() {

	int b = 1;
	char(*funcion) (int b) = f1;
	funcion(b);
	return 0;
}
#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {

	float a[1000];
	int i, Q_elem_a;

	for (i = 1; i < argc; i++) {
		a[i - 1] = atof(argv[i]);
		fprintf(stderr, "%.2f ", a[i - 1]);
	}
	fprintf(stderr, "\n");
	Q_elem_a = argc - 1;

	// N�o modifique o c�digo acima

	// Encontre os tr�s maiores elementos do vetor de 
	// float a[] e os imprima em ordem descrescente 
	// arredondado com duas casas decimais de precis�o
	// na sa�da padr�o (stdout) no formato:
	// <maior1>< ><maior2>< ><maior3><\n>
	//
	// Crie suas vari�veis aqui
	
	


	// Crie o corpo do seu c�digo aqui
	
	



	// A sa�da deve ser para a stdout e deve ser na forma de 
	// uma string contendo os 3 maiores elementos em ordem
	// decrescente, serados por um espa�o entre eles.
	// O �ltimo caractere da string deve ser o
	// pula linha '\n'. 
	// Exemplo: "<maior1>< ><maior2>< ><maior3><\n>"
	// <  > servem para representar os componentes da string
	// e n�o devem ser impressos.
	// Os valores devem ser arredondados com 2 casas decimais.
	// Crie a sa�da para o programa de testes autom�tico aqui




	// N�o modifique o c�digo abaixo

	
	return 0;
}


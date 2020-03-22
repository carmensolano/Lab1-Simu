#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(void) {

	Matrix example_matrix;

	zeroes(example_matrix, 2);

	example_matrix.at(0).at(0) = 1; example_matrix.at(0).at(1) = 2;
	example_matrix.at(1).at(0) = 3; example_matrix.at(1).at(1) = 4;

	showMatrix(example_matrix);

	/* MATRIZ DE CEROS
	Matrix zeroes_matrix;
	zeroes(zeroes_matrix, 5);
	showMatrix(zeroes_matrix);
	*/
	return 0;
}
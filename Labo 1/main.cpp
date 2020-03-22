#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(void) {

	Matrix zeroes_matrix;
	zeroes(zeroes_matrix, 5);
	showMatrix(zeroes_matrix);

	return 0;
}
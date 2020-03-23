#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(void) {

	Vector example_vector, copy_vector; 

	zeroes(example_vector, 4);

	example_vector.at(0) = 3;
	example_vector.at(1) = 6;
	example_vector.at(2) = 9;
	example_vector.at(3) = 12;

	copyVector(example_vector, copy_vector);

	showVector(copy_vector);
	
	
	
	/* Matriz 3x3
	Matrix example_matrix;

	zeroes(example_matrix, 3);

	example_matrix.at(0).at(0) = 1; example_matrix.at(0).at(1) = 2; example_matrix.at(0).at(2) = 3;
	example_matrix.at(1).at(0) = 4; example_matrix.at(1).at(1) = 5; example_matrix.at(1).at(2) = 6;
	example_matrix.at(2).at(0) = 7; example_matrix.at(2).at(1) = 8; example_matrix.at(2).at(2) = 9;

	showMatrix(example_matrix);
	 */

	/* MATRIZ DE CEROS
	Matrix zeroes_matrix;
	zeroes(zeroes_matrix, 5);
	showMatrix(zeroes_matrix);
	*/
	return 0;
}
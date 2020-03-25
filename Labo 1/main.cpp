#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(void) {


	Matrix example_matrix, cof_matrix, adjunta,inverse_matrix;

	zeroes(example_matrix, 3);

	example_matrix.at(0).at(0) = 2; example_matrix.at(0).at(1) = 2; example_matrix.at(0).at(2) = 3;
	example_matrix.at(1).at(0) = 4; example_matrix.at(1).at(1) = 5; example_matrix.at(1).at(2) = 6;
	example_matrix.at(2).at(0) = 7; example_matrix.at(2).at(1) = 8; example_matrix.at(2).at(2) = 9;

	cofactors(example_matrix, cof_matrix);
	cout << "Matriz de cofactores\n";
	showMatrix(cof_matrix);
	cout << endl; 
	transpose(cof_matrix, adjunta);
	cout << "Matriz adjunta\n"; 

	showMatrix(adjunta);

	determinant(example_matrix);
	cout << endl; 
	cout <<"Matriz inversa\n"; 
	inverseMatrix(example_matrix, inverse_matrix);
	showMatrix(inverse_matrix);



	/******Matriz transpuesta

	Matrix example_matrix ,transpose_matrix, ex_2;

	zeroes(example_matrix,3);

	example_matrix.at(0).at(0) = 1; example_matrix.at(0).at(1) = 2; example_matrix.at(0).at(2) = 3;
	example_matrix.at(1).at(0) = 4; example_matrix.at(1).at(1) = 5; example_matrix.at(1).at(2) = 6;
	example_matrix.at(2).at(0) = 7; example_matrix.at(2).at(1) = 8; example_matrix.at(2).at(2) = 9;

	transpose(example_matrix, transpose_matrix);

	showMatrix(transpose_matrix );

	transpose(transpose_matrix, ex_2);

	cout << endl; 
	
	showMatrix(ex_2);

	******/

	/* SUMAR VECTORES
	Vector a, b;

	zeroes(a,5);
	zeroes(b,5);

	a.at(0) = 1;
	a.at(1) = 2;
	a.at(2) = 3;
	a.at(3) = 4;
	a.at(4) = 5;

	b.at(0) = 1;
	b.at(1) = 2;
	b.at(2) = 3;
	b.at(3) = 4;
	b.at(4) = 5;

	showVector(sumVector(a, b, 5));
	*/
	
	/* Matriz por Real
	Matrix example_matrix, answer_matrix;

	float real = 2.5;

	zeroes(example_matrix, 3);
	
	example_matrix.at(0).at(0) = 1; example_matrix.at(0).at(1) = 1; example_matrix.at(0).at(2) = 1;
	example_matrix.at(1).at(0) = 1; example_matrix.at(1).at(1) = 1; example_matrix.at(1).at(2) = 1;
	example_matrix.at(2).at(0) = 1; example_matrix.at(2).at(1) = 1; example_matrix.at(2).at(2) = 1;

	productRealMatrix(real , example_matrix, answer_matrix);

	showMatrix(answer_matrix);
	
	*/
	
	
	/* MATRIZ POR VECTOR
	Vector example_vector, answer_vector;
	Matrix example_matrix;

	zeroes(example_vector, 3);

	example_vector.at(0) = 2;
	example_vector.at(1) = 2;
	example_vector.at(2) = 2;

	zeroes(example_matrix, 3);

	example_matrix.at(0).at(0) = 1; example_matrix.at(0).at(1) = 1; example_matrix.at(0).at(2) = 1;
	example_matrix.at(1).at(0) = 1; example_matrix.at(1).at(1) = 1; example_matrix.at(1).at(2) = 1;
	example_matrix.at(2).at(0) = 1; example_matrix.at(2).at(1) = 1; example_matrix.at(2).at(2) = 1;

	zeroes(answer_vector, 3);

	productMatrixVector(example_matrix, example_vector, answer_vector);

	showVector(answer_vector);
	*/

	/* MOSTRANDO VECTOR
	Vector example_vector, copy_vector; 

	zeroes(example_vector, 4);

	example_vector.at(0) = 3;
	example_vector.at(1) = 6;
	example_vector.at(2) = 9;
	example_vector.at(3) = 12;

	copyVector(example_vector, copy_vector);

	showVector(copy_vector);
	
	*/
	
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
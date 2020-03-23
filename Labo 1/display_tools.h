void showVector(Vector b) {
	cout << "[\t";
	for (int i = 0; i < b.size(); i++)
		cout << b.at(i) << "\t";
	cout << "]\n";
		
}

void showMatrix(Matrix k){
	for(int i=0; i<k.at(0).size(); i++){
		cout<< "[\t";
		for(int j=0; j<k.size(); j++)
			cout << k.at(i).at(j) << "\t";
			cout << "]\n";
	}

}


void copyVector(Vector v, Vector &copy){
	zeroes(copy, v.size());
	for(int i=0; i<v.size(); i++){
		copy.at(i) = v.at(i);
	}
}


void copyMatrix(Matrix A, Matrix &copy){
	zeroes(copy, A.size());
	for (int i = 0; i<A.size(); i++){
		for (int j=0; j<A.at(0).size(); j++)
		{
			copy.at(i).at(j)= A.at(i).at(j);	
		}
		
	}
}


void productMatrixVector(Matrix A, Vector v, Vector &R){
	for (int fila=0; fila<A.size(); fila++){
		float cell = 0.0;
		for(int col=0; col<v.size(); col++)
			cell+= A.at(fila).at(col) * v.at(col);
		R.at(fila) += cell;	

		
	}

}	
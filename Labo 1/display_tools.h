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


void productRealMatrix(float real, Matrix M, Matrix &R){
	zeroes(R, M.size());
	for(int i=0; i<M.size(); i++)
		for(int j=0;j<M.at(0).size(); j++)
			R.at(i).at(j) = real * M.at(i).at(j); 
}

Vector sumVector(Vector A, Vector B, int n){
	Vector R;
	zeroes(R, n);
	for(int i=0; i<n; i++)
		R.at(i) = A.at(i) + B.at(i);
	return R;	
}

Matrix sumMatrix(Matrix A, Matrix B, int n, int m){
	Matrix R;
	zeroes(R, n);
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			R.at(i).at(j) = A.at(i).at(j) + B.at(i).at(j);

}


void transpose(Matrix M, Matrix &T){
    zeroes(T,M.size());
    for(int i=0;i<M.size();i++)
        for(int j=0;j<M.at(0).size();j++)
            T.at(j).at(i) = M.at(i).at(j);
}

void getMinor(Matrix &M, int i, int j){
	M.erase(M.begin()+i);
	for(int i=0; i<M.size(); i++)
		M.at(i).erase(M.at(i).begin()+j);

}



float determinante(Matrix M){
	if(M.size() ==1)
		return M.at(0).at(0);
	else{
		float det = 0.0;
		for(int i=0; i<M.at(0).size(); i++){
			Matrix minor;
			copyMatrix(M, minor);
			getMinor(minor, 0, i);
			det += pow(-1, i)* M.at(0).at(i)* determinante(minor);
		}
		return det;
	}	
}
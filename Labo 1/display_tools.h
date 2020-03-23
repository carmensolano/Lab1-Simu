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


void copyMatrix(Matrix k, Matrix &copy){
	
}

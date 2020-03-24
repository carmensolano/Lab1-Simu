#include <vector>
#include "math.h"
using namespace std;

typedef vector<float> Vector;
typedef vector<Vector> Matrix;

void zeroes(Vector &v, int n) {
	for (int i = 0; i < n; i++)
		v.push_back(0.0);
}

void zeroes(Matrix &M, int n){
	for(int i=0; i<n; i++){
		Vector row(n, 0.0);
		M.push_back(row);
	}
}


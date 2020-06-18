#include <iostream>
using namespace std;

class Matrix{
	private:
		
	public:
		int N[3][3];
		Matrix();
		Matrix(int(*)[3]);
		void getMatrix();
		Matrix operator+(Matrix);
		Matrix transpose();
};

//plus two Matrix eachother
Matrix Matrix::operator+(Matrix addMatris){
	Matrix newMatrix;
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			newMatrix.N[i][k] = N[i][k] + addMatris.N[i][k];
		}
	}
	return(newMatrix);
}

//default const
Matrix::Matrix(){	
}

//const
Matrix::Matrix(int data[3][3]){
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			N[i][k] = data[i][k];
		}
	}
}

//take transpose of matrix
Matrix Matrix::transpose(){
	Matrix trMatrix;
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			trMatrix.N[i][k] = N[k][i];
		}
	}
	return(trMatrix);
	
}

//it apply printing matrix with operator <<
ostream& operator<< (ostream& ekran, Matrix Mat){
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			cout << Mat.N[i][k] << " ";
		}
		cout << endl;
	}
}


int main(){
	int data1[3][3];
	int data1_elements = 1;
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			data1[i][k] = data1_elements;
			data1_elements++;
		}
	}	
	
	int data2[3][3];
	int data2_elements = 10;
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			data2[i][k] = data2_elements;
			data2_elements+=10;
		}
	}	
	
	Matrix A(data1);
	Matrix B(data2);
	Matrix C;
	Matrix T;
	cout << "A matrix =" << endl;
	cout << A << endl;
	cout << "B matrix =" << endl;
	cout << B << endl;
	C=A+B;
	cout << "C = A+B" << endl;
	cout << C << endl;
 	T = A.transpose();
 	cout << "T = A'" << endl;
	cout << T << endl;
	system("pause");
}

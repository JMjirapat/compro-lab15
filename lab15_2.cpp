#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool M[][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
}

void inputMatrix(double M[][N]){
	for(int i = 0; i < N; i++){
		cout << "Row " << i+1 << ": ";
		for(int j = 0; j < N; j++){
			cin >> M[i][j];
		}
	}
}

void findLocalMax(const double M[][N], bool B[][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(i == 0 || i == N-1 || j == 0 || j == N-1)
				B[i][j] = false;
			else if(M[i][j] >= M[i-1][j] && M[i][j] >= M[i+1][j] && M[i][j] >= M[i][j-1] && M[i][j] >= M[i][j+1])
				B[i][j] = true;
			else
				B[i][j] = false;
		}
	}
}
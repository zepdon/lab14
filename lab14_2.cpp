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

void inputMatrix(double A[][N]){
	for(int a = 0 ; a < N ; a++){
		cout << "Row " << a+1 << ": ";
		for (int b = 0; b < N ; b++) cin >> A[a][b];
	}
}

void findLocalMax(const double matrix[][N], bool value[][N])
{
	for(int i = 0; i < N; i++){
	for(int j = 0; j < N; j++){
	    value[i][j] = 0;
	    if(i == 0 || j == 0|| i == N - 1|| j == N-1) continue;
	    
	    int count = 0;
	    if(matrix[i][j] >= matrix[i-1][j]) count++;
	    if(matrix[i][j] >= matrix[i+1][j]) count++;
	    if(matrix[i][j] >= matrix[i][j+1]) count++;
	    if(matrix[i][j] >= matrix[i][j-1]) count++;
	    if(count == 4) value[i][j] = 1;
	}
	}
}

void showMatrix(const bool metrix[][N]){
	for(int i = 0 ; i < N ; i ++){
		for(int j = 0; j < N ; j++) cout << metrix[i][j] << " ";
		cout << endl;
	}
}
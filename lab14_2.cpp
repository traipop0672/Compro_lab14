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

//Do not modify source code above this line 
void showMatrix(const bool A[N][N]){
	int round = 0;
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < N ; j++){
			if(round >= N){
				cout << "\n";
				round = 0;
			}
			cout << A[i][j] << " ";
			round++;
		}
	}
}

void inputMatrix(double A[N][N]){
	for(int i = 0 ; i < N ; i++){
		cout << "Row " << i+1 << ": ";
		for(int j = 0 ; j < N ; j++){
			cin >> A[i][j];
	
		}
	}
}


void findLocalMax(const double data[N][N], bool B[N][N]){
	for(int i = 1 ; i< N-1 ; i++){
		for(int j = 1 ; j < N-1;j++){
			if((data[i][j]>=data[i-1][j])&&(data[i][j]>=data[i][j-1])&&(data[i][j]>=data[i][j+1])&&(data[i][j]>=data[i+1][j])){
				B[i][j] = 1;
			}
			else {
				B[i][j] = 0;
			}
    	}
    }
}



/*
rotate matrix 90 degrees Anti-clockwise
Steps:
1. Reverse each row using reverse(begin index, ending index)
2. Find transpose of matrix
*/
#include<bits/stdc++.h>
using namespace std;
#define N 4

void rotateAntiClockwise90(int a[N][N]){
	//reverse each row
	for(int i=0; i<N; i++){
		reverse(a[i],a[i]+N);
	}
	//transpose
	for(int i=0; i<N;i++){
		for(int j=0; j<N; j++){
			swap(a[i][j], a[j][i]);
		}
	}
}
void printMatrix(int arr[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}

int main(){
    int arr[N][N] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
    rotateAntiClockwise90(arr);
    printMatrix(arr);
	return 0;
}

/*
Rotate matrix 90 degrees clockwise

Solution explanation:
Consider a 3 x 3 matrix having indici (i, j) as follows.

00 01 02
10 11 12
20 21 22

After rotating the matrix by 90 degrees in clockwise direction,
indici transform into
20 10 00  currentRowIndex = 0, i = 2, 1, 0
21 11 01 currentRowIndex = 1, i = 2, 1, 0
22 12 02  currentRowIndex = 2, i = 2, 1, 0

Observation: In any row, for every decreasing row index i,
there exists a constant column index j, such that j = currentRowIndex.
*/
#include<bits/stdc++.h>
using namespace std;
#define N 4
vector<int>res;

void rotate90Clockwise(int a[N][N]){
    for(int i=0; i<N/2; i++){
        for(int j=i; j<N-i-1; j++){
            int temp = a[i][j];
            a[i][j] = a[N-1-j][i];
            a[N-1-j][i] = a[N-1-i][N-1-j];
            a[N-1-i][N-1-j] = a[j][N-1-i];
            a[j][N-1-i] = temp;
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
    rotate90Clockwise(arr);
    printMatrix(arr);
	return 0;
}

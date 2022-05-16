/*
if an element in an MxN matrix is 0, its entire row and
column is set to 0
*/
#include<bits/stdc++.h>
using namespace std;
#define N 4

void setIndexAsZero(int a[N][N]){
    int row[N], col[N];
    for(int i=0; i<N; i++){
        row[i] = INT_MIN;
        col[i] = INT_MIN;
    }
    //set row and col array value as zero
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(a[i][j] == 0){
                row[i] = col[i] = 0;
            }
        }
    }
    //set the matrix row/column as zero
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(row[i] || col[j]) a[i][j] = 0;
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
                      { 5, 6, 0, 8 },
                      { 9, 10, 11, 12 },
                      { 0, 14, 15, 16 } };
    setIndexAsZero(arr);
    printMatrix(arr);
	return 0;
}

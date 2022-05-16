/*
PROBLEM DESCRIPTION
*/
#include<bits/stdc++.h>
using namespace std;
#define N 4

void transpose(int a[N][N],int a2[N][N]){

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            a2[i][j] = a[j][i];
        }
    }
}

void printMatrix(int arr2[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << arr2[i][j] << " ";
        cout << '\n';
    }
}

int main(){
    int arr2[N][N];
    int arr[N][N] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
    transpose(arr,arr2);
    printMatrix(arr2);
	return 0;
}

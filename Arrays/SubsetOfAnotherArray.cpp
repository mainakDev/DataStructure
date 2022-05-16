#include<iostream>
#include<set>
using namesapce std;

bool isSubset(int arr1[], int arr2[], int m, int n){ //m is size of 1st array & n is size of 2nd array
    set<int> hashset;
    for(itn i = 0; i< m ; i++){
        hashset.insert(arr1[i]);
    }
    for(int i =0; i<n; i++){
          if(hashset.find(arr2[i]) == hashset.end())
            return false;
    }
    return true;
}


int main()
{
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, m, arr2, n))
        cout << "arr2[] is subset of arr1[] "
             << "\n";
    else
        cout << "arr2[] is not a subset of arr1[] "
             << "\n";
    return 0;
}

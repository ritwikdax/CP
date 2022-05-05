/*
* Problem: Find the maximum and minimum element in an array
* Topic: Array
* Function: pair<int, int> findMinMax(int*, int);
* Sample Input: [5,6,1,3]
* Sample Output: 1,6
* Complexity: O(n)
* Learning: Passing Array as ref.
*
=========================================================
* Author: Ritwik Das - (dasritwik16@gmail.com)
* Github: @devritwik
=========================================================
*/

#include <bits/stdc++.h>
using namespace std;

pair<int, int> findMinMax(int*, int);

int main(){

    int arr[4] = {5,6,1,3}; //IP
    int size = sizeof(arr)/sizeof(arr[0]); //Calculating Size

    pair<int, int> p;
    p = findMinMax(arr, size);

    cout << p.first << " " << p.second;
    return 0;
}



pair<int, int> findMinMax(int *arr, int size){
    int min=0, max =0;

    if(arr[0]>arr[1]){
        min = arr[1];
        max = arr[0];
    }else{
        min = arr[0];
        max = arr[1];
    }

    for(int i=2; i<size-1; i++){

        if(arr[i]>max){
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }
    }

    return make_pair(min,max);

    
}
/*
* Q. Problem: Reverse the array
* Function: void reverseArray(int*, int)
* Sample Input: [5,6,1,3]
* Sample Input: [3,1,6,5]
* Functionality: reverseArray(int*, int)
* Complexity: O(n/2) == O(n)
* Learning: Passing Array as ref.
* Tested in: 

=========================================================
* Author: Ritwik Das - (dasritwik16@gmail.com)
=========================================================

*/

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int*, int); //Can also be written as: void reverseArray(int[], int);
void display(int*, int); //Can also be written as: void display(int[], int);


int main(){
	int arr[4] = {5,6,1,3}; //IP
	int size = sizeof(arr)/sizeof(arr[0]); //Calculating Size
	reverseArray(arr, size);
	display(arr, size);
	return 0;
}

void reverseArray(int *arr, int size){
	
	int start = 0;
	int end = size-1;
	int tmp=0;
	
	while(start<end){
		tmp = arr[start];
		arr[start] = arr[end];
		arr[end] = tmp;
		start++;
		end--;
	}
}


//Utility Function
void display(int *arr, int size){
	
	for(int i=0; i<=(size-1 ); i++){
		cout << arr[i] << " ";
	}

}





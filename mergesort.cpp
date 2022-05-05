#include<bits/stdc++.h>
using namespace std;

void merge(int &arr, int start_1, int end_1, int start_2, int end_2){
	
	int size = (end_1 - start_1) + (end_2 - start_2);
	int temp = 0;
	while(start_1 != end1 || start_2 != end_2){
		if(arr[start_1]<arr[start_2]){
			start_1++;
		}
		else{
			temp = arr[start_1];
			arr[start_1] = arr[start_2];
			arr[start_2] = temp;
			start_2++;
		}
	}
	

}


void mergeSort(int &arr, int start, int end){
	
	int mid = (start+end)/2;
	
	mergeSort(arr, start, mid);
	mergeSort(arr, mid+1, end);
	merge(arr, start, mid, mid+1, end);

}




int main(){
	
	int arr[] = {5,4,1,8,6,9,3,7};
	cout << "Hello World";
	
	return 0;
	
}



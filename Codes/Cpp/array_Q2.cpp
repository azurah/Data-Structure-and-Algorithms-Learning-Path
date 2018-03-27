/*
	Search an element in a sorted(ascending) and rotated array.
	Asuming array elements are distinct
*/

#include <bits/stdc++.h>
using namespace std;

int elementSearch(int *arr,int item, int n);
void printArr(int *arr, int n);

int main(){
	int n,item,res;
	cout<<"Enter No of elements in array: ";
	cin>>n;

	int arr[n];
	cout<<"Enter sorted and rotated array elements: ";
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<"Enter item to be searched: ";
	cin>>item;

	printArr(arr,n);
	res = elementSearch(arr,item,n);
	if(res != -1) cout<<"Found at index "<<res;
	else cout<<"Not Found";

	return 0;
}

void printArr(int *arr, int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int elementSearch(int *arr, int item , int n){
	int a = arr[0],b = arr[n-1];

	while(a<b){
		//code
	}
}
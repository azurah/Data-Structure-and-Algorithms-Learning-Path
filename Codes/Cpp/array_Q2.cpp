/*
	Search an element in a sorted(ascending) and rotated array.
	Asuming array elements are distinct
*/

#include <bits/stdc++.h>
using namespace std;

int pivotBS(int arr[], int n, int key);
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
	res = pivotBS(arr,n,item);
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

int binarySearch(int arr[], int l, int h, int item){
	if(h<l) return -1;
	int mid = (l+h)/2;
	if(item == arr[mid]) return mid;
	if(item>arr[mid]) return binarySearch(arr,mid+1,h,item);
	return binarySearch(arr,l,mid-1,item);
}

int pivotPointIndex(int arr[], int low,int high){
	if(high < low) return -1;
	if(high == low) return low;

	int mid = (low+high)/2;
	if(mid<high && arr[mid]>arr[mid+1]) return mid;
	if(mid>low && arr[mid]<arr[mid-1]) return mid-1;
	if(arr[low]>=arr[mid]) return pivotPointIndex(arr,low,mid-1);
	return pivotPointIndex(arr,mid+1,high);
}

int pivotBS(int arr[], int n, int key)
{
   int pivot = pivotPointIndex(arr, 0, n-1);
   if (pivot == -1)
       return binarySearch(arr, 0, n-1, key);
   if (arr[pivot] == key)
       return pivot;
   if (arr[0] <= key)
       return binarySearch(arr, 0, pivot-1, key);
   return binarySearch(arr, pivot+1, n-1, key);
}
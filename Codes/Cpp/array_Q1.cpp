#include <bits/stdc++.h>
using namespace std;

void rotate_n2_time_cmplx_1_space_cmplx(int *arr,int d, int n);
void rotate_n_time_cmplx_n_space_cmplx(int *arr,int d, int n);
void rotate_n_time_cmplx_1_space_cmplx(int *arr,int d, int n);
void printArr(int *arr, int n);

int main(){
	int n,d;
	cout<<"Enter No of elements in array: ";
	cin>>n;

	int arr[n];
	cout<<"Enter array elements: ";
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<"Enter rotation factor: ";
	cin>>d;

	printArr(arr,n);
	// rotate_n2_time_cmplx_1_space_cmplx(arr,d,n);
	// rotate_n_time_cmplx_n_space_cmplx(arr,d,n);
	rotate_n_time_cmplx_1_space_cmplx(arr,d,n);
	printArr(arr,n);

	return 0;
}

void printArr(int *arr, int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void rotate_n2_time_cmplx_1_space_cmplx(int *arr,int d, int n){
	int cary;
	for (int i = 0; i < d; ++i)
	{
		cary = arr[0];
		for (int j = 0; j < n-1; ++j)
		{
			arr[j] = arr[j+1];
		}
		arr[n-1] = cary;
	}
}

void rotate_n_time_cmplx_n_space_cmplx(int *arr,int d, int n){
	
	if(d>n) d=d%n;	//To check condition when d is greater than n
	if(d==0) return;
	int aux[d];
	for (int i = 0; i < d; ++i)
	{
		aux[i] = arr[i];
	}
	for (int j = 0; j < n-d; ++j)
		{
			arr[j] = arr[j+d];
		}
	for (int i = n-d,j = 0; i < n; ++i,j++)
	{
		arr[i] = aux[j];
	}
}

int gcd(int a, int b){	//time complexity Big-O(log(a) + log(b))
	if(b==0) return a;
	else return gcd(b,a%b);
}

void rotate_n_time_cmplx_1_space_cmplx(int *arr,int d, int n){
	int g,carry,j,k;

	if(d>n) d=d%n;	//To check condition when d is greater than n
	if(d==0) return;

	g = gcd(d,n);//time complexity Big-O(log(d) + log(n))

	for (int i = 0; i < g; ++i)	// run for g time
	{
		carry = arr[i];
		j = i;
		while(1){				// run for n/g times
			k = j + d;
			if (k >= n) k = k-n;
			if(k==i) break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = carry;
	}

	// total time complexity is Big-O( (log(d) + log(n))*n/(log(d) + log(n)) ) = Big-O(n)
}
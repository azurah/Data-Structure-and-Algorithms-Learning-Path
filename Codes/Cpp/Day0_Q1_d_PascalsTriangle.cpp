#include <bits/stdc++.h>

using namespace std;

// Question 1 part d Pascal's Triangle
// Hint - Binomial Coefficients

int Coeficient_Recursive(int n , int k){
	if(n==k || k==0){
		return 1;
	}
	return Coeficient_Recursive(n-1,k-1)+Coeficient_Recursive(n-1,k);
}

int Coeficient_Multiplicative(int n , int k){
	int result = 1;
	for(int i = 0; i<k;i++){
		result*=(n-i);
		result/=(i+1);
	}
	return result;
}
// A O(n^3) time and O(1) extra space function for Pascal's Triangle
void n3_time_1_space_complexity(){
	for (int n = 0; n <= 5; ++n)
		{

		for (int p = 0; p < (5-n); p++)
		{
				cout<<" ";
		}

		for (int k = 0; k < n+1 ; k++)
		{
				cout<<Coeficient_Multiplicative(n,k)<<" ";	// complexity O(n3)
			//  cout<<Coeficient_Recursive(n,k)<<" ";		// complexity O()
		}

		cout<<endl;
	}
}
//-----------------------------------------------------------------
// A O(n^2) time and O(n^2) extra space function for Pascal's Triangle
void n2_time_n2_Space_Complexity(){
	int arr[6][6];							// O(n2) space complexity
	for (int n = 0; n <= 5; ++n)
		{

		for (int p = 0; p < (5-n); p++)		//padding
		{
				cout<<" ";
		}

		for (int k = 0; k < n+1 ; k++)
		{
			if(n==k || k==0){
				arr[n][k] = 1;
			}
			else{
				arr[n][k] = arr[n-1][k-1]+arr[n-1][k];
			}
			cout<<arr[n][k]<<" ";
		}

		cout<<endl;
	}
}
//-----------------------------------------------------------------
// A O(n^2) time and O(n) extra space function for Pascal's Triangle
// void n2_time_n_Space_Complexity(){
// 	int arr[6]={0};
// 	for (int n = 0; n <= 5; ++n)
// 		{

// 		for (int p = 0; p < (5-n); p++)		//padding
// 		{
// 				cout<<" ";
// 		}

// 		for (int k = 0; k < n+1 ; k++)
// 		{
// 			if(n==k || k==0){
// 				arr[k] = 1;
// 				cout<<arr[k]<<" ";
// 			}
// 			else{
// 				arr[k] = arr[k-1]+arr[k];
// 				cout<<arr[k-1]<<" ";
// 			}
// 			//cout<<arr[k]<<" ";
// 		}

// 		cout<<endl;
// 	}
// }
//-----------------------------------------------------------------
// A O(n^2) time and O(1) extra space function for Pascal's Triangle
void n2_time_1_Space_Complexity()
{
  for (int n = 1; n <= 6; n++)
  {
  	for (int p = 0; p < (6-n); p++)		//padding
		{
			cout<<" ";
		}
    int C = 1;  // used to represent C(line, i)
    for (int i = 1; i <= n; i++)  
    {
      cout<<C<<" ";  // The first value in a line is always 1
      C = C * (n - i) / i;  
    }
    cout<<endl;
  }
}
/* So method n2_time_1_Space_Complexity() is the best method among all, but it may cause integer overflow for large values of n as it multiplies two integers to obtain values.*/
//-----------------------------------------------------------------
// Main function
int main(){
	cout<<endl<<"Solution - Question 1 part d Pascal's Triangle:"<<endl;
	n3_time_1_space_complexity();
	n2_time_n2_Space_Complexity();
	n2_time_1_Space_Complexity();

	return 0;
}
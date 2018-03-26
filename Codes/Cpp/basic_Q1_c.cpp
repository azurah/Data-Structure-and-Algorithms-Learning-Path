#include <bits/stdc++.h>

using namespace std;

// // Question 1 part c
void q1c(){
  
	for (int i = 0; i < 5; ++i){
		for (int p = 0; p < 2*(4-i); ++p){  //loop for padding
			cout<<" ";
		}
		for (int j = i+1; j <= 2*i+1; ++j){ //loop to print first triangle elements
			cout<<j<<" ";
		}
		for (int k = 2*i;k >=i+1; k--){     //loop to print second triangle elements
			cout<<k<<" ";
		}		
		cout<<endl;
	}
  
}
// Main function
int main(){
	cout<<endl<<"Solution - Question 1 part c:"<<endl;
	q1c();
	return 0;
}
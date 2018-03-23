#include <bits/stdc++.h>

using namespace std;

// Question 1 part a
void q1a(){
	for (int i = 0; i < 5; ++i){
		for (int j = 1; j < i+2; ++j){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
// Question 1 part b
void q1b(){
	int letter = 'E';
	for (int i = 0; i < 5; ++i){
		for (int j = letter; j > letter-(i+1); --j){
			cout<<char(j)<<" ";
		}
		cout<<endl;
	}
}
// // Question 1 part c
void q1c(){
	for (int i = 0; i < 5; ++i){
		for (int p = 0; p < 2*(4-i); ++p){
			cout<<" ";
		}
		for (int j = i+1; j <= 2*i+1; ++j){
			cout<<j<<" ";
		}
		for (int k = 2*i;k >=i+1; k--){
			cout<<k<<" ";
		}		
		cout<<endl;
	}
}
// // Question 1 part d
void q1d(){
	
}

// Main function
int main(){
	cout<<endl<<"Solution - Question 1 part a:"<<endl;
	q1a();
	cout<<endl<<"Solution - Question 1 part b:"<<endl;
	q1b();
	cout<<endl<<"Solution - Question 1 part c:"<<endl;
	q1c();
	cout<<endl<<"Solution - Question 1 part d:"<<endl;
	q1d();
	return 0;
}
//Q1a a#include <bits/stdc++.h>

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

// Main function
int main(){
	cout<<endl<<"Solution - Question 1 part a:"<<endl;
	q1a();
	return 0;
}
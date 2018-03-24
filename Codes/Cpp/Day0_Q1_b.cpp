#include <bits/stdc++.h>

using namespace std;

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

// Main function
int main(){
	cout<<endl<<"Solution - Question 1 part b:"<<endl;
	q1b();
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

void f(int x){
	if(x == 0) return;
	x--;
	cout << x << endl;
	f(x);
	cout << x << endl; 
}

int main(){
	f(3);
}

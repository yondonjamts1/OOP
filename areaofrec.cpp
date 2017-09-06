#include<iostream>
using namespace std;

int area(int a,int b){
	
	int x = a * b;
	return x;

}

int main(){
	int a,b,c;
	cin>>a;
	cin>>b;
	c = area(a,b);
	cout<<c;
}

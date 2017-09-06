#include<iostream>

using namespace std;

int main(){
        int i,n,min,max;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
        cin>>a[i];
        }

	for(i=s-2;i>=0;i--){
	      for(j=0;j<=i;j++){
        	   if(a[j]>a[j+1]){
        	       temp=a[j];
        	      a[j]=a[j+1];
        	      a[j+1]=temp;
        	   }
     		 }
 	 }

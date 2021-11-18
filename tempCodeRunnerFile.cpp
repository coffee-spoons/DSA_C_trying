#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int arr[100000],n,rem[100000],total=0;
	cin>>n;
	for(int i =0 ; i< n;i++){
		cin>>arr[i];
		rem[i]=arr[i]%10;
	}
	for(int i =0 ; i< n;i++){
		total+=rem[i]*pow(10,n-i-1);
	}
	cout<<total;
	if(total%10==0){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}

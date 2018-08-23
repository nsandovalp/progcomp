#include <bits/stdc++.h>
using namespace std;

int main(){
	int num=100000;
	do{
		cin>>num;
	}while(abs(num)>10000);
	if(num>0){
		int resp=0;
		for(int i=0;i<=num;i++){
			resp=resp+i;
		}
		cout<<resp;
	}else if(num<0){
		int resp=0;
		for(int i=num;i<=1;i++){
			resp=resp+i;
		}
		cout<<resp;
	}
	if(num==0)cout<<1;
	return 0;
}


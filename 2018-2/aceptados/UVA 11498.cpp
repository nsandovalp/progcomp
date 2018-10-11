#include <bits/stdc++.h>
using namespace std;

int main(){
	int K=0,N=0,M=0;
	int X,Y;
	string palabra;
	vector<string> frase;
	do{
		cin>>K;
		if(K==0)break;
		cin>>N;
		cin>>M;
		for(int i=0;i<K;i++){
			cin>>X;
			cin>>Y;
			if(N>X && M>Y){
				palabra="SO";
			}
			if(N<X && M>Y){
				palabra="SE";
			}
			if(N>X && M<Y){
				palabra="NO";
			}
			if(N<X && M<Y){
				palabra="NE";
			}
			if(N==X || M==Y){
				palabra="divisa";
			}
			frase.push_back(palabra);
		}
		
	}while(K!=0);
	for(int i=0;i<frase.size();i++){
		cout<<frase[i]<<endl;
	}
	return 0;
}

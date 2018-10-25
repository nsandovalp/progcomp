#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> numeros,respuesta,sumando;
	int num,aux,suma=0;
	do{
		cin>>num;
		if(num==0)break;
		for(int i=0;i<num;i++){
			cin>>aux;
			numeros.push_back(aux);
		}
		//cout<<"numros ingresados"<<endl;
		while(numeros.size()!=1){
			sort(numeros.begin(),numeros.end());
			//cout<<"ordenados"<<endl;
			suma=numeros[0]+numeros[1];
			numeros.erase(numeros.begin(),numeros.begin()+2);
			numeros.push_back(suma);
			sumando.push_back(suma);
		}
		suma=0;
		for(int i=0;i<sumando.size();i++){
			suma=suma+sumando[i];
		}
		respuesta.push_back(suma);
		sumando.clear();
		numeros.clear();
		suma=0;
	}while(num!=0);
	for(int i=0;i<respuesta.size();i++){
		cout<<respuesta[i]<<endl;
	}
	return 0;
}

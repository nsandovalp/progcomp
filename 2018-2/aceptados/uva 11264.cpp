#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,Q,aux,contador=2;
	vector<int> arreglo;
	vector<int> respuesta;
	cin>>N;
	do{
		cin>>Q;
		for(int i=0;i<Q;i++){
			cin>>aux;
			arreglo.push_back(aux);
		}
		//fase de desarrollo
		int x=0,candidato;
		candidato=arreglo[x];
		x++;
		while(x<arreglo.size()-1){
			if(candidato+arreglo[x]<arreglo[x+1]){
				contador++;
				candidato=candidato+arreglo[x];
			}
			x++;
		}
		respuesta.push_back(contador);
		candidato=0;
		contador=2;
		arreglo.clear();
		N--;
	}while(N>0);
	for(int i=0;i<respuesta.size();i++){
		cout<<respuesta[i]<<endl;
	}
	return 0;
}

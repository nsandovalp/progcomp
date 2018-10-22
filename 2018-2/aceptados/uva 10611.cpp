#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,Q,aux1=0,aux2=0;
	vector<int> tamano;
	vector<int> consulta;
	vector<int> respuesta;
	cin>>N;
	tamano.push_back(0);
	for(int i=0;i<N;i++){
		cin>>aux1;
		tamano.push_back(aux1);
	}
	tamano.push_back(INT_MAX);
	cin>>Q;
	for(int i=0;i<Q;i++){
		cin>>aux2;
		consulta.push_back(aux2);
	}
	//proceso de busqueda
	int buscar,IZ=0,DER=INT_MAX;
	int ind=0;
	while(Q>0){//agregar q--
		buscar=consulta[ind];
		//cout<<"buscar= "<<buscar<<endl;
		for(int i=0;i<tamano.size();i++){
			if(buscar>tamano[i]){
				IZ=tamano[i];
			}else if(buscar<tamano[i]){
				DER=tamano[i];
				break;
			}
		}
		//cout<<"IZ= "<<IZ<<endl;
		//cout<<"DER= "<<DER<<endl;
		respuesta.push_back(IZ);
		respuesta.push_back(DER);
		ind++;
		Q--;
		IZ=0;
		DER=INT_MAX;
	}
	for(int i=0;i<respuesta.size()-1;i++){
		if(respuesta[i]==0){
			cout<<"X ";
		}else{
			cout<<respuesta[i]<<" ";
		}
		if(respuesta[i+1]==INT_MAX){
			cout<<"X"<<endl;
		}else{
			cout<<respuesta[i+1]<<endl;
		}
		i++;
	}

	return 0;
}

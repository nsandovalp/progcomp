#include <bits/stdc++.h>
using namespace std;

int main(){
	int casos,marcador,contador;
	string url;
	cin>>casos;
	pair<string,int> pagina;
	vector< pair<string,int> > web;
	vector<string> respuesta;
	vector<int> numeros;
	vector<int> respuesta2;
	
	for(int i=0;i<casos;i++){
		web.clear();
		numeros.clear();
		contador=0;
		for(int j=0;j<10;j++){
			cin>>url;
			cin>>marcador;
			pagina.first = url;
			pagina.second = marcador;
			numeros.push_back(marcador);
			web.push_back(pagina);
		}
		sort(numeros.begin(),numeros.end());
		marcador=numeros[9];
		for(int j=0;j<10;j++){
			if(web[j].second == marcador){
				respuesta.push_back(web[j].first);
				contador++;
			}
		}
		respuesta2.push_back(contador);
		
	}
	for(int i=0;i<casos;i++){
		cout<<"Case #"<<i+1<<":"<<endl;
		for(int j=0;j<respuesta2[i];j++){
			cout<<respuesta[j]<<endl;
		}
		respuesta.erase(respuesta.begin(),respuesta.begin()+respuesta2[i]);
	}
	return 0;
}

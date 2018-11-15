#include <bits/stdc++.h>
using namespace std;

int main(){
	int casos;
	cin>>casos;
	vector<int> respuesta;
	while(casos>0){
		vector<int> calles;
		vector<int> avenidas;
		int calle,avenida;
		int amigos,aux=0;
		cin>>calle;
		cin>>avenida;
		cin>>amigos;
		for(int i=0;i<amigos;i++){
			cin>>aux;
			calles.push_back(aux);
			cin>>aux;
			avenidas.push_back(aux);
		}
		sort(calles.begin(),calles.end());
		sort(avenidas.begin(),avenidas.end());
		
		if(calles.size()%2==0){
			respuesta.push_back(calles[amigos/2 - 1] );
			respuesta.push_back(avenidas[amigos/2 - 1]);
			//cout<<"Street: "<<calles[calles.size()/2]<<", Avenue: "<<avenidas[avenidas.size()/2]<<endl;
		}else{
			respuesta.push_back(calles[amigos/2]);
			respuesta.push_back(avenidas[amigos/2]);
			//cout<<"Street: "<<calles[1+calles.size()/2]<<", Avenue: "<<avenidas[1+avenidas.size()/2]<<endl;
		}
		calles.clear();
		avenidas.clear();
		casos--;
	}
	for(int i=0;i<respuesta.size()-1;i++){
		cout<<"(Street: "<<respuesta[i]<<", Avenue: "<<respuesta[i+1]<<")"<<endl;
		i++;
	}
	return 0;
}

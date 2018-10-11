#include <bits/stdc++.h>
using namespace std;

int main(){
	int T=0,alumnos=0;
	vector<string> frase;
	int aux=0;
	int MAX=0;
	cin>>T;
	vector<int> velocidad;
	for(int i=0;i<T;i++){
		cin>>alumnos;
		//velocidad.push_back(alumnos);
		for(int j=0;j<alumnos;j++){
			cin>>aux;
			velocidad.push_back(aux);
		}
		sort(velocidad.begin(),velocidad.end());
		MAX=velocidad[velocidad.size()-1];
		//cout<<"Case "<<i+1<<": "<<MAX<<endl;
		string palabra="Case ";
		string result;
		ostringstream convert;
		convert << i+1;
		result=convert.str();
		palabra=palabra + result + ":";
		convert.str(" ");
		convert << (MAX);
		result=convert.str();
		palabra=palabra + " " + result;
		frase.push_back(palabra);
		
		
		MAX=0;
		velocidad.clear();
	}
	for(int i=0;i<frase.size();i++){
		cout<<frase[i]<<endl;
	}
	return 0;
}

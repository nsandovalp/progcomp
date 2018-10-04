#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> copia;
	vector <int> autos;
	stack <int> pila;
	vector <int> binario;
	int inicial=0;
	do{
		//cout<<"ingrese un numero"<<endl;
		cin>>inicial;
		if(inicial==0)break;
		int inicial2=inicial;
		while(inicial2!=0){
			for(int i=0;i<inicial;i++){
				int ncarro=0;
				cin>>ncarro;
				if(ncarro==0){
					inicial2=0;
					//cout<<"break1"<<endl;
					break;
				}
				autos.push_back(ncarro);
				copia.push_back(ncarro);
			}
			if(inicial2==0){
				binario.push_back(-1);
				break;
			}
			//cout<<"ordenamiento"<<endl;
			sort(autos.begin(),autos.end());
			for(int i=0;i<inicial;i++){
				pila.push(autos[i]);
				//cout<<"a"<<endl;
				while(pila.top()==copia[0]){
				//	cout<<"aa"<<endl;			
					pila.pop();
					copia.erase(copia.begin());
					if(pila.empty())break;
				}
				//cout<<"sale"<<endl;
			}
			/*for(int i=0;i<inicial<i++){
				cout<<"pila top"<<pila.top()<<endl;

			}*/
			if(pila.empty()){
				binario.push_back(1);
				//cout<<"YES"<<endl;
			}else{
				binario.push_back(0);
				//cout<<"NO"<<endl;
			}
			copia.erase(copia.begin(),copia.end());
			autos.erase(autos.begin(),autos.end());
			while(pila.empty()==false){
				pila.pop();
			}

			
		}
		
	}while(inicial!=0);
	for(int i=0;i<binario.size();i++){
		if(binario[i]==1)cout<<"Yes"<<endl;
		if(binario[i]==0)cout<<"No"<<endl;
		if(binario[i]==-1)cout<<""<<endl;
		
	}

	
	
	
	return 0;
}

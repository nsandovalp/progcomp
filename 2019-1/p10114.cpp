#include <bits/stdc++.h>
using namespace std;

int main(){
	int numMeses,registros,mes,tam;
	double long montoI,prestamo,deprecio,precioCar;
	vector<pair<int,double long> > arreglo;
	vector<double long> newArr;
	vector<int> answer;
	do{
		//cout<<"num meses"<<endl;
		cin>>numMeses;
		//cout<<"montoI"<<endl;
		cin>>montoI;
		//cout<<"nprestamo"<<endl;
		cin>>prestamo;
		//cout<<"registros"<<endl;
		cin>>registros;
		if(numMeses<0)break;
		for(int i=0;i<registros;i++){
		//	cout<<"mes"<<endl;
			cin>>mes;
		//	cout<<"deprecio"<<endl;
			cin>>deprecio;
			pair<int,double long> aux=make_pair(mes,deprecio);
			arreglo.push_back(aux);
			//if(i==registros-1)tam=arreglo[i].first;
		}
		int j=0;
		for(int i=0;i<101;i++){
			if(arreglo[j].first==i){
				newArr.push_back(arreglo[j].second);
				j++;
			}else{
				newArr.push_back(arreglo[j-1].second);
			}
		}
		arreglo.clear();
		precioCar=montoI+prestamo;
		double long descuento=prestamo/numMeses;
		int resp=0;
		for(int i=0;i<newArr.size();i++){
			precioCar=precioCar-precioCar*newArr[i];
			if(i!=0){
				prestamo=prestamo-descuento;
			}
			if(prestamo<precioCar){
				resp=i-1;
				answer.push_back(resp);
				break;
			}
		}
		newArr.clear();
		
	}while(numMeses>0);
	for(int i=0;i<answer.size();i++){
		if(answer[i]==0){
		cout<<answer[i]+1<<" month"<<endl;
		}else{
			cout<<answer[i]+1<<" months"<<endl;
		}
	}
	return 0;
}

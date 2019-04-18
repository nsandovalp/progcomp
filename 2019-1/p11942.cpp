#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,x,barba,contador1,contador2;
	cin>>N;
	vector<int> arreglo;
	vector<string> respuesta;
	for(int i=0;i<N;i++){
		x=10;
		contador1=0;
		contador2=0;
		while(x>0){
			cin>>barba;
			arreglo.push_back(barba);
			x--;
		}
		x=10;
		while(x>1){
			if(arreglo[x-2]<arreglo[x-1])contador1++;
			if(arreglo[x-2]>arreglo[x-1])contador2++;
			x--;
		}
		if(contador1 ==9 || contador2 ==9){
			respuesta.push_back("Ordered");
		}else{
			respuesta.push_back("Unordered");
		}
		arreglo.clear();
	}
	cout<<"Lumberjacks:"<<endl;
	for(int i=0;i<respuesta.size();i++ ){
		cout<<respuesta[i]<<endl;
	}
	return 0;
	
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arreglo;
	vector<int> resp;
	int casos;
	int a,b,c;
	cin>>casos;
	for(int i=0;i<casos;i++){
		cin>>a;
		cin>>b;
		cin>>c;
		arreglo.push_back(a);
		arreglo.push_back(b);
		arreglo.push_back(c);
		sort(arreglo.begin(),arreglo.end());
		arreglo.pop_back();
		arreglo.erase(arreglo.begin() );
		resp.push_back(arreglo[0]);
		arreglo.clear();
	}
	for(int i=0;i<casos;i++){
		cout<<"Case "<<i+1<<": "<<resp[i]<<endl;	
	}
	return 0;
}

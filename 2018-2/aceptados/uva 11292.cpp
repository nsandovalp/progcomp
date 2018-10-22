#include <bits/stdc++.h>
using namespace std;

int main(){
	int D,K,aux;
	vector<int> head;
	vector<int> knight;
	vector<int> resp;
	do{
		cin>>D;
		cin>>K;
		if(D==0 && K==0)break;
		for(int i=0;i<D;i++){
			cin>>aux;
			head.push_back(aux);
		}
		sort(head.begin(),head.end());
		for(int i=0;i<K;i++){
			cin>>aux;
			knight.push_back(aux);
		}
		sort(knight.begin(),knight.end());
		//CASOS
		int contador=0;
		int limite=head.size();
		if(D>K){
			resp.push_back(-1);
		}else{
			for(int i=0;i<head.size();i++){
				for(int j=0;j<knight.size();j++){
					if(knight[j]<head[i]){
						knight.erase(knight.begin()+j);
						j--;
						//cout<<"knight<head"<<endl;
					}else{
						contador=contador+knight[j];
						knight.erase(knight.begin()+j);
						j--;
						limite--;
						//cout<<"contrario"<<endl;
						break;
					}
				}
			}
			if(limite!=0 ){
				resp.push_back(-1);
			}else{
				resp.push_back(contador);
			}
			//if(knight.size()==0){
			//	resp.push_back(-1);
			//}
			contador=0;
		}
		head.clear();
		knight.clear();
		contador=0;
		
	}while(D!=0 && K!=0);
	for(int i=0;i<resp.size();i++){
		if(resp[i]==-1){
			cout<<"Loowater is doomed!"<<endl;
		}else{
			cout<<resp[i]<<endl;
		}
	}
	return 0;
}

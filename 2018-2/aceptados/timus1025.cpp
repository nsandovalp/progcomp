#include <bits/stdc++.h>
using namespace std;
int main(){
	int grupos,aux=0;
	cin>>grupos;
	float votantes[grupos];
	for(int i=0;i<grupos;i++){
		cin>>votantes[i];
	}
	float mayoria=(grupos/2)+0.5;
	for (int i=0;i<grupos-1;i++){
        for (int j=0; j<grupos-1;j++){
            if (votantes[j]>votantes[j+1]){
                aux=votantes[j];
                votantes[j]=votantes[j+1];
                votantes[j+1]=aux;
            }
        }
    }
    float tranfugos=0;
    for(int i=0;i<mayoria;i++){
		tranfugos=tranfugos+(votantes[i]/2);
		if(tranfugos!=(int)tranfugos){
			tranfugos=tranfugos+0.5;
		}else{
			tranfugos=tranfugos+1;
		}
	}
	cout<<tranfugos;
	return 0;
}

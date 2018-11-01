#include <bits/stdc++.h>
using namespace std;

int main(){
	string key,val, str,aux;
	stringstream ss,ss2;
	map<string,string> mymap;
	vector<string> pal;

	while(getline(cin, str) && str.size()){
        ss.clear();
        ss << str;
        ss >> val;
        ss >> key;
        mymap.insert ( std::pair<string,string>(key,val) );
	}
	while(getline(cin, str) && str.size()){
        ss.clear();
        ss << str;
        ss >> aux;
        pal.push_back(aux);
	}
	
	std::map<string,string>::iterator it = mymap.begin();
	for(int i=0;i<pal.size();i++){
		int cont=0;
		for (it=mymap.begin(); it!=mymap.end(); ++it){
			if(it->first==pal[i]){
				cout<<it->second<<endl;
				cont=1;
			}
		}
		if(cont==0){
			cout<<"eh"<<endl;
		}
	}
	return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main(){
	int L=0;
	vector<string> answer,instructions;
	do{
		cin>>L;
		if(L==0)break;
		int numInstructions=L-1;
		string direct="+x";
		for(int i=0;i<numInstructions;i++){
			string a;
			cin>>a;
			instructions.push_back(a);
		}
		for(int i=0;i<instructions.size();i++){
			if(instructions[i]=="No"){
				direct=direct;
			}else if(instructions[i]=="+y"){
				if(direct=="+x"){
					direct="+y";
				}else if(direct=="-x"){
					direct="-y";
				}else if(direct=="+y"){
					direct="-x";
				}else if(direct=="-y"){
					direct="+x";
				}else if(direct=="+z"){
					direct="+z";
				}else if(direct=="-z"){
					direct="-z";
				}
			}else if(instructions[i]=="-y"){
				if(direct=="+x"){
					direct="-y";
				}else if(direct=="-x"){
					direct="+y";
				}else if(direct=="+y"){
					direct="+x";
				}else if(direct=="-y"){
					direct="-x";
				}else if(direct=="+z"){
					direct="+z";
				}else if(direct=="-z"){
					direct="-z";
				}
			}else if(instructions[i]=="+z"){
				if(direct=="+x"){
					direct="+z";
				}else if(direct=="-x"){
					direct="-z";
				}else if(direct=="+y"){
					direct="+y";
				}else if(direct=="-y"){
					direct="-y";
				}else if(direct=="+z"){
					direct="-x";
				}else if(direct=="-z"){
					direct="+x";
				}
			}else if(instructions[i]=="-z"){
				if(direct=="+x"){
					direct="-z";
				}else if(direct=="-x"){
					direct="+z";
				}else if(direct=="+y"){
					direct="+y";
				}else if(direct=="-y"){
					direct="-y";
				}else if(direct=="+z"){
					direct="+x";
				}else if(direct=="-z"){
					direct="-x";
				}
			}
		}
		answer.push_back(direct);
		instructions.clear();
	}while(L!=0);
	for(int i=0;i<answer.size();i++){
		cout<<answer[i]<<endl;
	}
	return 0;
}

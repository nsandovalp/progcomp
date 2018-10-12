#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
ll num;
map<string,ll> collection;
while(true){  //bucle principal donde se trabaja
collection.clear();
cin>>num;
ll popular_course=-1;
if(num==0) break;
string courses[5];
for(ll i=0;i<num;i++){   //bucle secundario donde  se insertan los valores en el arreglo string
cin>>courses[0]>>courses[1]>>courses[2]>>courses[3]>>courses[4];
sort(courses,courses+5);  //se ordena y se insertan en ordered_courses ordenados
string ordered_courses;
for(ll i=0;i<5;i++){
ordered_courses+=courses[i];
}
if(!collection.count(ordered_courses)){  //si no encuentra el numero en ordered_courses se agrega 1
collection[ordered_courses]=1;
popular_course=max(popular_course,(ll)1); //y en popular corse se guarda el numero maximo repetido
}
else {    //si es encontrado el numero se suma 1
ll help=collection[ordered_courses]+1;
collection[ordered_courses]=help;
popular_course=max(popular_course,help); //se guarda el numero maxiño de repetidos
}
}
ll students=0;
for(map<string , ll> ::iterator it=collection.begin();it!=collection.end();it++){
if(it->second==popular_course) students+=it->second;   //se recorre el mapa y se guarda en students la cantidad de 
														//veces que se encuentra el numero mas popular
}
printf("%lld\n",students); //imprime
}
 
return 0;
}
 

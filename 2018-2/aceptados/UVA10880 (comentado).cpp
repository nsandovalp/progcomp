#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main() {
	int cases; cin >> cases;
	for (int C, R, c = 1; cases--; ++c) {   //ciclo para cada caso
		cin >> C >> R;
		set<int> res; 
		int diff = C - R;    //la diferencia entre las galletas y las que sobran
		cout << "Case #" << c << ":";
		if (diff == 0) {   
			cout << " 0" << endl;
			continue;
		}
		for (int i = 1; i * i <= diff; ++i) //ciclo para encontrar los divisores de la diferencia
			if (diff % i == 0) {
				res.insert(diff / i);   //se almacena en el set el divisor y el numero por el cual es divisible
				res.insert(i);
			}
		for (set<int>::iterator it = res.begin(); it != res.end(); it++)
			if (*it > R) cout << " " << *it; //si el numero en el set es superior a las galletas que sobran se imprimen
		cout << endl;
	}
	return 0;
}

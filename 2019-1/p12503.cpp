#include <iostream>
#include <string>
#include <vector>
//sacado de https://github.com/ajahuang/UVa/blob/master/UVa%2012503%20-%20Robot%20Instructions.cpp 
using namespace std;
int main()
{  
    size_t T;
    cin >> T;
    vector<int> respuesta; //vector que guarda las posiciones finales de cada caso
    while ( T-- ) //loop que se encarga de la cantidad de casos
    {
        size_t n;
        cin >> n;
        vector<int> instructions;
        int position = 0; //variable donde se almacenara la respuesta de cada caso
        while ( n-- ) //loop que se encarga del numero de instrucciones
        {
            string instruction;
            cin >> instruction;
            if (instruction == "LEFT") //si la instruccion es LEFT se resta 1 y al vector instructions se le inserta -1
            {
                --position; //de esta forma cuando exista un SAME AS se puede acceder a este vector en la posicion indicada y utilizar el valor almacenado
                instructions.push_back(-1); 
            }
            else if (instruction == "RIGHT")//si la instruccion es RIGHT se suma 1 y al vector instructions se le inserta 1
            {
                ++position;//de esta forma cuando exista un SAME AS se puede acceder a este vector en la posicion indicada y utilizar el valor almacenado
                instructions.push_back(1);
            }
            else//si la instruccion es SAME AS
            {
                 int i;
                 cin >> instruction >> i; //variable i se le asigna el valor numerico del string
                 position += instructions[i - 1];//position = position mas el numero almacenado en la posicion del valor numerico del string - 1
                 instructions.push_back(instructions[i - 1]);//al vector instructions se le inserta el valor numerico (-1 o 1) igual al que se le sumo a position
            }
        }
        respuesta.push_back(position);//position se almacena en vector respuesta
    }
    for(int i=0;i<respuesta.size();i++){//se imprimen las respuestas
    	cout << respuesta[i] << endl;
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void registrarLecutras(vector<double> &r)
{
    int tiempo;
    cout << "Tiempo estimado: ";
    cin >> tiempo;
    for (int i = 0; i < tiempo; i++)
    {
        double randomNum = rand() % 10;
        r.push_back(randomNum);
    }
}

void mostrarVector(vector<double> &r)
{
    cout << "V: { ";
    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i] << " ";
    }
    cout << "}" << endl;
}

void estadisticas(vector<double> &r)
{
    // PROMEDIO
    double promedio = 0, max = 0, min = 0;
    for (int i = 0; i < r.size(); i++)
    {
        promedio += r[i];
    }
    promedio = promedio / r.size();
    cout << "Promedio: " << promedio << endl;

    // MAX MIN
    max = r[0];
    min = r[0];
    for (int i = 1; i < r.size(); i++)
    {
        if (r[i] > max)
            max = r[i];
        if (r[i] < min)
            min = r[i];
    }
    cout << "Maximo: " << max << endl;
    cout << "Minimo: " << min << endl;
}

int main()
{
    vector<double> lecturas;
    srand(time(0));
    registrarLecutras(lecturas);
    mostrarVector(lecturas);
    estadisticas(lecturas);
    return 0;
}
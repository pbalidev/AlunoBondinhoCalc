#include <cstdlib>
#include <cstdio>
#include <locale>
#include <Windows.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	SetConsoleOutputCP (CP_UTF8);
    int alunos, monitores;

    cout << "Digite o número de alunos: ";
    cin >> alunos;
    cout << "Digite o número de monitores: ";
    cin >> monitores;

    if (alunos + monitores <= 50) {
        cout << "S" << endl;  // É possível levar todos
    } else {
        cout << "N" << endl;  // Não é possível levar todos
    }

    return 0;
}

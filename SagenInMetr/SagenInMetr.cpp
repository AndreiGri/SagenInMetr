#include <iostream>
#include <cstdlib>

using namespace std;

double SagenInMetr(int sag) {
    const double metrInSagen = 2.16;
    double metr = sag * metrInSagen;
    return metr;
}

int main()
{
    //Изменение кодировки консоли:
    system("chcp 1251 > nul");
    int sagen;
    cout << "Введите кол-во саженей: ";
    cin >> sagen;
    cout << "В " << SagenInMetr(sagen) << " метрах " << sagen << " саженей." << endl;
    //Задержка консольного окна:
    system("pause > nul");
    return 0;
}

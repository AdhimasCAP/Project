#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    string kata;
    int i;
    int jml_huruf;
    int huruf1, huruf2;
    string acak = kata;
    char temp;
    srand((unsigned)time(0));

    cout << "Masukkan Kata : ";
    cin >> kata;

    jml_huruf = kata.size();
    cout << "Jumlah Huruf : " << jml_huruf;

    for (i = 0; i < jml_huruf; i++) {
        huruf1 = (rand()% jml_huruf);
        huruf2 = (rand()% jml_huruf);
        temp = acak[huruf1];
        acak[huruf1] = acak[huruf2];
        acak[huruf2] = temp;
    }
    cout << "\nAcak Kata : " << acak;
    return 0;
}

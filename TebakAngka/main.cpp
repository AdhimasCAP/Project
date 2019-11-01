#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int maks_nilai = 0;
    int nilai_tebak = 0;
    int tebak = 0;
    char jawaban = 'y';

    while (jawaban == 'y'){
        int kesempatan = 3;
        srand((unsigned)time(0));

        cout << "Masukkan Nilai Dari 10 Sampai 100 : ";
        cin >> maks_nilai;

        if (maks_nilai < 10){
            maks_nilai = 10;
        }
        else if (maks_nilai > 100) {
            maks_nilai = 100;
        }

        nilai_tebak = rand() %maks_nilai + 1;
        cout << "Masukkan Nilai Dari 1 Sampai " << maks_nilai << " :" << endl;
        cout << "\n";

        while (tebak != nilai_tebak && kesempatan != 0){
            cout << "Tebak Nilai : ";
            cin >> tebak;

            if (tebak == nilai_tebak){
                cout << "Benar !!!" << endl;
            }
            else if (tebak < nilai_tebak) {
                cout << "Nilai Terlalu Kecil" << "\nKesempatan : " << kesempatan - 1 << endl;
            }
            else if (tebak > nilai_tebak) {
                cout << "Nilai Terlalu Besar" << "\nKesempatan : " << kesempatan - 1 << endl;
            }
            kesempatan -= 1;
        }
        cout << "\nMain Lagi? (y/n) : ";
        cin >> jawaban;
        cout << "\n";
    }
    return 0;
}

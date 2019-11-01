#include <iostream>
#include <string>

using namespace std;

int main()
{
    string item = "";
    string item_sebelum = "";
    string item_kuat = "";
    string item_lemah = "";
    int status = 0;
    int status_sebelum = 0;
    int status_kuat = 0;
    int status_lemah = 0;
    char tambah = 'y';
    bool item_awal = true;

    while (tambah == 'y') {
        cout << "Masukkan Item : ";
        cin >> item;
        cout << "Masukkan Status Item : ";
        cin >> status;
        cout << "Item : " << item;
        cout << "\nStatus Item : " << status;

        if (item_awal == true) {
            item_sebelum = "Kosong";
            item_kuat = item;
            item_lemah = item;
            status_kuat = status;
            status_lemah = status;
        }
        else {
            if (status >= status_kuat) {
            status_kuat = status;
            item_kuat = item;
            }
            else {
                if (status <= status_lemah) {
                    status_lemah = status;
                    item_lemah = item;
                }
            }
        }
        cout << "\nItem Sebelumnya : " << item_sebelum;
        cout << "\nItem Kuat : " << item_kuat;
        cout << "\nItem Lemah : " << item_lemah;

        item_sebelum = item;
        status_sebelum = status;
        item_awal = false;

        cout << "\nTambah? (y/n) : ";
        cin >> tambah;
    }
    return 0;
}

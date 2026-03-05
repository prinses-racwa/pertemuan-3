#include <ionstream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variabe global array a dengan ukuran 20
int n; // Deklarasi variabel global n untuk menyimpan banyaknya elemen

void input() { // procedur untuk input
    while (true) {
        cout << "Masukkan banyaknya elemen pada array :"
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";
        }
    }

}
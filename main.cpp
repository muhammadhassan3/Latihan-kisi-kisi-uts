#include <iostream>

using namespace std;

int main() {
    char pil;
    cout << "Silahkan pilih opsi dibawah :" << endl;
    cout << "1. D3" << endl;
    cout << "2. D4" << endl;
    cout << "Silahkan masukkan pilihan anda : " << endl;
    cin >> pil;
    if (pil == '1' || pil == '2') {
        cout << "Silahkan pilih jalur masuk anda" << endl;
        cout << "A. Jalur SNMPN" << endl;
        cout << "B. Jalur SBMPN" << endl;
        cout << "C. Jalur Mandiri" << endl;
        cout << "Silahkan masukkan pilihan anda : ";
        cin >> pil;
        pil = toupper(pil);
        if (pil == 'A') {
            cout << "Jalur prestasi menggunakan Nilai Rapot";
        } else if (pil == 'B') {
            cout << "jalur Ujian dengan Sistem dari pusat";
        } else if (pil == 'C') {
            cout << "Jalur Ujian dengan Sistem internal";
        } else cout << "Salah memasukkan pilihan";
    } else cout << "Salah input pilihan";
    return 0;
}

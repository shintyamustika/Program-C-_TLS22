// Program: User Defined Function
// Nama : Shintya Tri Mustika
// NIM  : 22/494025/TK/54159
// Deskripsi: Program ini mendemonstrasikan penggunaan fungsi 
// yang didefinisikan pengguna (User Defined Function) untuk 
// perhitungan sederhana.

#include <iostream>
using namespace std;

// Fungsi find
// Menghitung nilai berdasarkan input num
int find(int num)
{
    int first, second;
    first = num * num;
    second = first + num;

    if (second > 100)
        num = first / 10;
    else
        num = first / 20;

    return num + 2;
}

// Fungsi discover
// Menghitung jumlah kuadrat dari semua angka antara one dan two-1
int discover(int one, int two)
{
    int secret = 0;
    for (int i = one; i < two; i++)
        secret = secret + i * i;
    return secret;
}

int main()
{
    // Contoh pemanggilan fungsi
    cout << "find(15) = " << find(15) << endl;
    cout << "discover(3, 9) = " << discover(3, 9) << endl;

    cout << "find(10) = " << find(10) 
         << ", discover(10, find(10)) = " << discover(10, find(10)) << endl;

    int x = 12, y = 8;
    cout << "discover(" << y << ", " << x << ") = " << discover(y, x) << endl;

    return 0;
}
// Program: User Defined Function
// Nama : Shintya Tri Mustika
// NIM  : 22/494025/TK/54159
// Deskripsi: Program ini mendemonstrasikan penggunaan fungsi 
// yang didefinisikan pengguna (User Defined Function) untuk 
// perhitungan sederhana.

#include <iostream>
using namespace std;

// Fungsi find
// Menghitung nilai berdasarkan input num
int find(int num)
{
    int first, second;
    first = num * num;
    second = first + num;

    if (second > 100)
        num = first / 10;
    else
        num = first / 20;

    return num + 2;
}

// Fungsi discover
// Menghitung jumlah kuadrat dari semua angka antara one dan two-1
int discover(int one, int two)
{
    int secret = 0;
    for (int i = one; i < two; i++)
        secret = secret + i * i;
    return secret;
}

int main()
{
    // Contoh pemanggilan fungsi
    cout << "find(15) = " << find(15) << endl;
    cout << "discover(3, 9) = " << discover(3, 9) << endl;

    cout << "find(10) = " << find(10) 
         << ", discover(10, find(10)) = " << discover(10, find(10)) << endl;

    int x = 12, y = 8;
    cout << "discover(" << y << ", " << x << ") = " << discover(y, x) << endl;

    return 0;
}

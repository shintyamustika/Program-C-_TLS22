#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Membuat struct untuk menyimpan data setiap mahasiswa
struct studentType {
    string studentFName; // nama depan
    string studentLName; // nama belakang
    int testScore;       // nilai ujian (0–100)
    char grade;          // huruf mutu (A, B, C, D, F)
};

// Fungsi untuk menginput data mahasiswa (nama depan, belakang, dan nilai)
void getData(studentType students[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Masukkan nama depan mahasiswa ke-" << i + 1 << ": ";
        cin >> students[i].studentFName;
        cout << "Masukkan nama belakang mahasiswa ke-" << i + 1 << ": ";
        cin >> students[i].studentLName;
        cout << "Masukkan nilai ujian (0 - 100): ";
        cin >> students[i].testScore;
        cout << endl;
    }
}

// Fungsi untuk menentukan grade berdasarkan nilai ujian
void assignGrade(studentType students[], int size) {
    for (int i = 0; i < size; i++) {
        int score = students[i].testScore;

        if (score >= 90)
            students[i].grade = 'A';
        else if (score >= 80)
            students[i].grade = 'B';
        else if (score >= 70)
            students[i].grade = 'C';
        else if (score >= 60)
            students[i].grade = 'D';
        else
            students[i].grade = 'F';
    }
}

// Fungsi untuk mencari nilai tertinggi di antara semua mahasiswa
int highestScore(const studentType students[], int size) {
    int highest = students[0].testScore;

    for (int i = 1; i < size; i++) {
        if (students[i].testScore > highest)
            highest = students[i].testScore;
    }

    return highest;
}

// Fungsi untuk menampilkan semua data mahasiswa dalam bentuk tabel
void printAll(const studentType students[], int size) {
    cout << left << setw(25) << "Nama"
         << setw(15) << "Nilai"
         << "Grade" << endl;
    cout << "----------------------------------------------\n";

    for (int i = 0; i < size; i++) {
        // Menampilkan nama dengan format: nama belakang, nama depan
        cout << left << setw(25)
             << (students[i].studentLName + ", " + students[i].studentFName)
             << setw(15) << students[i].testScore
             << students[i].grade << endl;
    }
}

// Fungsi untuk menampilkan mahasiswa dengan nilai tertinggi
void printHighest(const studentType students[], int size, int highest) {
    cout << "\nMahasiswa dengan nilai tertinggi (" << highest << "):" << endl;
    for (int i = 0; i < size; i++) {
        if (students[i].testScore == highest) {
            cout << students[i].studentLName << ", "
                 << students[i].studentFName << endl;
        }
    }
}

int main() {
    const int size = 20; // jumlah mahasiswa
    studentType students[size];

    // Pemanggilan fungsi sesuai urutan proses
    getData(students, size);             // input data mahasiswa
    assignGrade(students, size);         // tentukan grade tiap mahasiswa
    printAll(students, size);            // tampilkan semua data
    int highest = highestScore(students, size); // cari nilai tertinggi
    printHighest(students, size, highest);      // tampilkan siapa yang nilainya paling tinggi

    return 0;
}

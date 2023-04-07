//1. Jelaskan, mengapa suatu algorithma dibutuhkan untuk menyelesaikan suatu masalah.
//karena aloritma dapat mengurutan instruksi yang terstruktur dan sistematis yang menggambarkan cara menyelesaikan suatu masalah
//menguraikan masalah yang kompleks menjadi tugas yang lebih sederhana dan terorganisir

//2. Dalam algorithma, di klassifikasikan menjadi 2 data struktur. Sebutkan 2 data struktur tersebut
//Struktur data linear dan Struktur data non-linear

//3. Sebutkan faktor-faktor yang mempengaruhi mempengaruhi efisiensi suatu program algorithma!
//Kompleksitas algoritma,Struktur data,Bahasa pemrograman,RAM,ukuran data/input

//4. Dari 6 algorithma yang sudah dipelajari. Algortihma manakah yang paling efisien untuk mengurutkan data yang ukurannya kecil.Jelaskan kenapa anda memilih itu.
// Insertion Sort, karena kompleksitas waktu O(n^2)

//5. Sebutkan dari algorithma yang telah dipelajari mana yang termasuk kedalam Quadratic dan mana yang termasuk kedalam Loglinear
// Quadratic ada Bubble Sort, Insertion Sort, Selection Sort sedangkan Loglinear ada merge sort dan quick sort

//6. Buatlah sebuah program yang mengimplementasikan selection sort menggunakan bahasan c++.Berikut merupakan algortithma selection sort

#include <iostream>
using namespace std;


int main() {
    const int max_data = 22; //The maximum number of data is the sum of the last two digits of your student number (07) + 20 -2 x 15 + 10 + 20
    int fakhri[max_data]; // Change "arr" with your nickname
    int n;
    cout << "Masukkan Jumlah Data: ";
    cin >> n;
}


//Code must have input
void input(int arr[], int n) {
    cout << "Masukkan " << n << " angka:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


}
//Code must have Algorithm 
void selectionSort(int fakhri[], int n) {
    for (int FA = 0; FA < n - 1; FA++) {                 //Repeat steps 2 and 3 varying j from 0 to n – 2
        int min_index = FA;                              //Change the "j" in the algorithm to the two initials of your name.(Fakhri Abdillah)
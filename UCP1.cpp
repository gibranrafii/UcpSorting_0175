// Soal Tipe 1

// 1. Metode Algoritma Insertion Sort menggunakan metode menukar data 
//	dengan cara sebagai berikut 
//	1. Membandingkan dan mengurutkan dua data pertama pada array, dimulai pada data array 1
//	2. Membandingkan data pada array berikutnya apakah sudah berada di tempat semestinya.
//	3. Mengurutkan secara berurutan pada setiap item dalam array 
//	4. Menempatkan elemen pada tempat yang sesuai dengan urutan nya.
//		ulangi langkah diatas sampai tidak ada elemen yang tersisa pada array yang belum diurutkan

// 2. Metode Algoritma Selection Sort menggunakan metode menukar data
//	dengan cara berikut
//	1. Mengecek seluruh data dari data ke-0 sampai ke-n
//	2. Cari data terkecil dalam interval j=0 sampai dengan j=n-1
//	3. Jika ditemukan data yang terkecil, tukarkan pada posisi pos dengan data di posisi temp, lalu tukarkan data pada temp di letak yang seharusnya.
//	4. Lalu ulangi langkah tersebut hingga data menjadi urut

// 3. Cara mengetahui jumlah langkah yang dilakukan adalah dengan mengetahui data elemen pada array.

// 4. Konversi algoritma :

#include <iostream>
using namespace std;

int gibran[75];
int n;

void input() {
	while (true) {
		cout << "Masukkan Banyaknya Elemen Pada Array : ";
		cin >> n;
		if (n <= 75)
			break;
		else {
			cout << "\nArray dapat mempunyai max 20 Elemen.\n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> gibran[i];
	}
}

void selectionsort() {
	for (int i = 0; i < n - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (gibran[j] < gibran[min_index]) {
				min_index = j;
			}
		}
		if (min_index != i) {
			swap(gibran[i], gibran[min_index]);
		}
	}
}

void display() {
	cout << endl;
	cout << "================================" << endl;
	cout << "Elemen array yang telah tersusun" << endl;
	cout << "================================" << endl;

	for (int j = 0; j < n; j++) {
		cout << gibran[j] << " ";
	}
}

int main()
{
	input();
	selectionsort();
	display();
}
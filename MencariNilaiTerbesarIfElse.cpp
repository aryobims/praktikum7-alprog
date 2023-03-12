#include <iostream>
using namespace std;

int main(){
	//mendeklarasikan variabel a adalah bilangan pertama, b adalah bilangan ke 2, c adalah bilangan ke3, saya menggunakan tipe data int untuk menyimpan bil.bulat
	int a,b,c;
	//mendeklarasikan soal 
	cout << "masukkan 3 nilai bilangan untuk mencari nilai bilangan yang terbesar" <<endl;
	cout << "masukkan bilangan pertama: "; cin >> a;
	cout << "masukkan bilangan kedua:   "; cin >> b;
	cout << "masukkan bilangan ketiga:  "; cin >> c;
	
	//menggunakan percabangan kondisi if else untuk menyambung beberapa perintah, jika kondisi pertama tidak terpenuhi maka kode program akan lanjut ke kondisi if di bawahnya 
	if (a > b && a > c)
		cout << "nilai terbesar adalah bilangan pertama: " << a << endl;
	else if (b > a && b > c)
		cout << "nilai terbesar adalah bilangan kedua : " << b << endl;
	else if (c > a && c > b)
		cout << "nilai terbesar adalah bilangan ketiga: " << c << endl;
	 
}
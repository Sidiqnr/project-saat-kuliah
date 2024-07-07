#include <iostream>
#include <conio.h>

using namespace std; 
	main() {   
	int angka, jumlah, max, min;
     
       cout << "===== Program Mencari nilai Max Min ===== " << endl;
       cout << endl;
       cout << "masukkan jumlah angka: "; cin >> jumlah;
       cout << endl;
    
       for (int i = 1; i <= jumlah; i++) {
     
       cout << "Masukkan Angka       : "; cin >> angka;
   
       if ( i == 1 ) {
             min = angka;
             max = angka;
            }
            else if ( min > angka ) {
               min = angka;
            }
            else if ( max < angka) {
               max = angka;
           }
           else {}
           }
    
       cout << endl;
       cout << "Nilai terkecil           : " <<  min << endl;
       cout << "Nilai terbesar           : " <<  max << endl;
    
       getch();
       }
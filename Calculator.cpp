#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define nl cout<<endl;

void sederhana () {
    cout<<endl<<"----------------Calculator Sederhana----------------"<<endl;
    int pilihan;
	float nilai1, nilai2, hasil=0;
    cout<<"1. Penjumlahan"<<endl<<"2. Pengurangan"<<endl<<"3. Perkalian"<<endl<<"4. Pembagian"; nl;
    cout<<"Tentukan pilihan : "; cin>>pilihan;
    switch (pilihan) {
        case 1 :
            nl; cout<<"Penjumlahan"; nl;
            cout<<"Masukan bilangan pertama : "; cin>>nilai1;
            cout<<"Masukan bilangan kedua   : "; cin>>nilai2;
            hasil=(nilai1+nilai2);
            break;
        case 2 :
            nl; cout<<"Pengurangan"; nl;
            cout<<"Masukan bilangan pertama : "; cin>>nilai1;
            cout<<"Masukan bilangan kedua   : "; cin>>nilai2;
            hasil=(nilai1-nilai2);
            break;
        case 3 :
            nl; cout<<"Perkalian"; nl;
            cout<<"Masukan bilangan pertama : "; cin>>nilai1;
            cout<<"Masukan bilangan kedua   : "; cin>>nilai2;
            hasil=(nilai1*nilai2);
            break;
        case 4 :
            nl; cout<<"Pembagian"; nl;
            cout<<"Masukan bilangan pertama : "; cin>>nilai1;
            cout<<"Masukan bilangan kedua   : "; cin>>nilai2;
            hasil=(nilai1/nilai2);
            break;
        default : 
            cout<<"Tidak ada dalam pilihan\n";
    }
    cout<<"Hasil : "<<hasil;
}
void Luas() {
    cout<<endl<<"----------------Calculator Luas & Volume Bidang----------------";
    cout<<endl<<"|                       1. Luas Persegi Panjang               |";
    cout<<endl<<"|                       2. Luas Segitiga                      |";
	cout<<endl<<"|                       3. Luas Lingkaran                     |";
	cout<<endl<<"|                       4. Volume Kubus                       |";
	cout<<endl<<"|                       5. Volume Prisma                      |";
	cout<<endl<<"|                       6. Volume Limas                       |";
	cout<<endl<<"---------------------------------------------------------------";
	cout<<"\n Catatan : bentuk alas prisma dan limas hanya dapat membuat 3 bentuk 2D pada opsi diatas (persegi panjang, segitga, dan lingkaran)";
	int pilihan; cout<<endl<<"Silahkan pilih (1,2,3,4,5,6) : "; cin>>pilihan;
	float panjang, lebar, tinggi, luas, volume, radius, pi=3.14;
	switch (pilihan) {
		case 1 : {
			cout<<"\nPanjang : "; cin>>panjang;
			cout<<"Lebar : "; cin>>lebar;
			luas=panjang*lebar;
			if (panjang==lebar) {
				cout<<"Luas Persegi : "<<luas;
			}
			else {
				cout<<"Luas Persegi Panjang : "<<luas;
			}
			break;
		}
		case 2 : {
			cout<<"\nAlas : ";cin>>panjang;
			cout<<"Tinggi : ";cin>>tinggi;
			luas=panjang*tinggi/2;
			cout<<"Luas Segitiga : "<<luas;
			break;
		}
		case 3 : {
			cout<<"\nRadius : ";cin>>radius;
			luas=pi*(radius*radius);
			cout<<"Luas Lingkaran : "<<luas;
			break;
		}
		case 4 : {
			cout<<"\nRusuk kubus : ";cin>>panjang;
			volume=panjang*panjang*panjang;
			cout<<"Volume Kubus : "<<volume;
			break;
		}
		case 5 : {
			string bentukalas; cout<<"\nBentuk Alas : "; cin>>bentukalas;
			for (int i=0; i<=bentukalas.size(); i++) {
				bentukalas[i]=tolower(bentukalas[i]);
			}
			if (bentukalas=="persegi" || bentukalas=="persegi panjang") {
				cout<<"panjang   : ";cin>>panjang;
				cout<<"lebar     : ";cin>>lebar;
				luas=panjang*lebar;
				cout<<"Luas alas : "<<luas;
			}
			else if (bentukalas=="segitiga") {
				cout<<"panjang   : ";cin>>panjang;
				cout<<"tinggi    : ";cin>>tinggi;
				luas=panjang*tinggi/2;
				cout<<"Luas alas : "<<luas;
			}
			else if (bentukalas=="lingkaran") {
				cout<<"Radius : ";cin>>radius;
				luas=pi*(radius*radius);
				cout<<"Luas alas : "<<luas;
			}
			else {
				cout<<"bentuk alas tidak valid";
			}
			cout<<"\nTinggi : ";cin>>tinggi;
			volume=luas*tinggi;
			cout<<"Volume Prisma : "<<volume;
			break;
		}
		case 6 : {
			string bentukalas; cout<<"\nBentuk Alas : "; cin>>bentukalas;
			for (int i=0; i<=bentukalas.size(); i++) {
				bentukalas[i]=tolower(bentukalas[i]);
			}
			if (bentukalas=="persegi" || bentukalas=="persegi panjang") {
				cout<<"panjang   : ";cin>>panjang;
				cout<<"lebar     : ";cin>>lebar;
				luas=panjang*lebar;
				cout<<"Luas alas : "<<luas;
			}
			else if (bentukalas=="segitiga") {
				cout<<"panjang   : ";cin>>panjang;
				cout<<"tinggi    : ";cin>>tinggi;
				luas=panjang*tinggi/2;
				cout<<"Luas alas : "<<luas;
			}
			else if (bentukalas=="lingkaran") {
				cout<<"Radius : ";cin>>radius;
				luas=pi*(radius*radius);
				cout<<"Luas alas : "<<luas;
			}
			else {
				cout<<"bentuk alas tidak valid";
			}
			cout<<"\nTinggi : ";cin>>tinggi;
			volume=luas*tinggi/3;
			cout<<"Volume Limas : "<<volume;
			break;
		}
		default : {
			cout<<"\nPilihan tidak valid";
		}
	}
}
void Konversi () {
	cout<<"\n---------------------Konversi Satuan---------------------";
	cout<<"\n|          1. Suhu (Contoh : Celcius -> Kelvin)         |";
	cout<<"\n|          2. Konversi Satuan (Contoh : Kilo -> Mili)   |";
	cout<<"\n|          3. Konversi kecepatan (M/S -> KM/H)          |";
	cout<<"\n|          4. Konversi tekanan (atm -> mmHg)            |";
	cout<<"\n---------------------------------------------------------";
	cout<<"\nSilahkan pilih (1,2,3,4) : "; int pilihan; cin>>pilihan;
	string input; float awal;
	double konverted;
	switch (pilihan) {
		case 1 : {
			cout<<"Suhu (Celcius) : "; cin>>awal;
			cout<<"Satuan suhu yang diiginkan (Fahrenheit, Kelvin, Reamur): "; cin>>input;
			for (int i=0; i<=input.size(); i++) {
				input[i]=tolower(input[i]);
			}
			if (input=="fahrenheit") {
				konverted=(awal*9/5)+32;
				cout<<"Suhu konverted : "<<konverted<<" Fahrenheit";
			}
			else if (input=="kelvin") {
				konverted=awal+273;
				cout<<"Suhu konverted : "<<konverted<<" Kelvin";
			}
			else if (input=="reamur") {
				konverted=awal*4/5;
				cout<<"Suhu konverted : "<<konverted<<" Reamur";
			}
			else {
				cout<<"Satuan tidak valid";
			}
			break;
		}
		case 2 : {
			string output; int check=0;
			cout<<"Input awal : ";cin>>awal;
			cout<<"Satuan awal (Nano/Micro/Mili/Centi/Deci/Dasar/Deca/Hecta/Kilo/Mega/Giga) : "; cin>>input;
			cout<<"Satuan akhir (Nano/Micro/Mili/Centi/Deci/Dasar/Deca/Hecta/Kilo/Mega/Giga) : "; cin>>output;
			for (int i=0; i<=5; i++) {
				input[i]=tolower(input[i]);
				output[i]=tolower(output[i]);
			}
			string satuan[19]={"nano","buffer1","buffer2","micro","buffer3","buffer4","mili","centi","deci","base","deca","hecta","kilo","buffer5","buffer6","mega","buffer7","buffer8","giga"};
			int place1,place2;
			for (int i=0; i<=19; i++) {
				if (input==satuan[i]) {
					place1=i;
					check++;
				}
			}
			for (int i=0; i<=19; i++) {
				if (output==satuan[i]) {
					place2=i;
					check++;
				}
			}
			if (check==2) {
				int distance=place1-place2;
				konverted=awal*pow(10, distance);
				cout<<endl<<"Output konverted : "<<konverted<<" "<<output;
			}
			else {
				cout<<"Satuan tidak valid";
			}
			break;
		}
		case 3 : {
			cout<<"Input Kecepatan : "; cin>>awal;
			cout<<"Satuan Kecepatan (Km/H , M/s) : "; cin>>input;
			for (int i=0; i<=input.size(); i++) {
				input[i]=tolower(input[i]);
			}
			if (input=="km/h") {
				konverted=awal/3.6;
				cout<<"Kecepatan : "<<konverted<<"M/s";
			}
			else if (input=="M/s") {
				konverted=awal*3.6;
				cout<<"Kecepatan : "<<konverted<<"Km/H";
			}
			else {
				cout<<"Satuan tidak valid";
			}
			break;
		}
		case 4 : {
			cout<<"Input Tekanan : "; cin>>awal;
			cout<<"Satuan Tekanan (atm, mmHg) : "; cin>>input;
			for (int i=0; i<=input.size(); i++) {
				input[i]=tolower(input[i]);
			}
			if (input=="atm") {
				konverted=awal*760;
				cout<<"Tekanan : "<<konverted<<" mmHg";
			}
			else if (input=="M/s") {
				konverted=awal/760;
				cout<<"Teakan : "<<konverted<<" Km/H";
			}
			else {
				cout<<"Satuan tidak valid";
			}
			break;
		}
		case 5 : {
			cout<<"Pilihan tidak valid";
			break;
		}
	}
}
void PH(){
	int choice;
	double MolAs, MolBas, ValAs, ValBas, Ka, Kw = 1e-14, Kb, pH, pOH;
	double mMolAs, mMolBas;
	cout<<"----------------Calculator pH----------------\n";
    cout<<"|(Semua angka menggunakan notasi scientific)|\n";
    cout<<"|              1. pH Lar. Asam Kuat         |\n";
    cout<<"|              2. pH Lar. Basa Kuat         |\n";
    cout<<"|              3. pH Garam                  |\n";
    cout<<"|              4. pH Lar. Penyangga         |\n";
    cout<<"---------------------------------------------\n";
    cout<<"Silahkan pilih (1,2,3,4,5) : "; 
	cin >> choice;
	switch(choice){
		case 1 : {
            cout<<"Nama Senyawa Asam : ";
            string asam; cin>>asam;
            for (int i=0; i<=asam.size(); i++) {
                if (asam[i]=='H') {
                    if (asam[i+1]>57) {
                        ValAs=1;
                        break;
                    }
                    else {
                        ValAs=(asam[i+1]-48);
                        break;
                    }
                }
            }
			cout << "Molaritas Asam : ";
			cin >> MolAs;
			pH = -log10(MolAs*ValAs);
			cout << "pH = " << pH;
			break;
        }
		case 2 : {
            cout<<"Nama Senyawa Basa: ";
            string basa; cin>>basa;
            for (int i=0; i<=basa.size(); i++) {
                if (basa[i]==')') {
                    if (basa[i+1]='2') {
                        ValBas=2;
                        break;
                    }
                    else {
                        ValBas=1;
                        break;
                    }
                }
            }
            cout<<"Valensi Basa : "<<ValBas<<endl;
			cout << "Molaritas Basa : ";
			cin >> MolBas;
			pH = 14 + log10(MolBas*ValBas);
			cout << "pH = " << pH;
			break;
        }
		case 3 : {
			cout << "Molaritas Asam : ";
			cin >> MolAs;
			cout << "Ka (Jika Kuat = 1) : ";
			cin >> Ka;
			if(Ka == 1){
				cout << "Valensi Asam : ";
				cin >> ValAs;
			}
			else{
				ValAs = 1;
			}
			cout << "Molaritas Basa : ";
			cin >> MolBas;
			cout << "Kb (Jika Kuat = 1): ";
			cin >> Kb;
				if(Kb == 1){
				cout << "Valensi Basa : ";
				cin >> ValBas;
			}
			else{
				ValBas = 1;
			}
				if(MolAs*ValAs == MolBas*ValBas){
					cout << "Bukan reaksi hidrolisis !";
					break;
				}
			else if(Ka==Kb){
					pH = 7;
			}
			else if(Ka >= Kb){
				pH = -log10(sqrt(Kw / Kb * Ka * MolAs * ValAs));
			}
			else if(Kb >= Ka){
				pH = 14 + log10(sqrt(Kw / Ka * Kb * MolBas * ValAs));
			}
			else{
				cout << "Error";
				pH = 00;
			}
			cout << "pH = " << pH;
			break;
        }
		case 4 : {
			cout << "Molaritas Asam : ";
			cin >> MolAs;
			cout << "Ka (Jika Kuat = 1) : ";
			cin >> Ka;
			if(Ka == 1){
				cout << "Valensi Asam : ";
				cin >> ValAs;
			}
			else{
				ValAs = 1;
			}
				cout << "Molaritas Basa : ";
			cin >> MolBas;
			cout << "Kb (Jika Kuat = 1): ";
			cin >> Kb;
				if(Kb == 1){
				cout << "Valensi Basa : ";
				cin >> ValBas;
			}
			else{
				ValBas = 1;
			}
			if(Ka >= Kb){
				if(MolAs*ValAs >= MolBas){
					cout << "Bukan larutan penyangga ! ";
					break;
				}
				else{
					pH = 14 - log10((Kb * (MolBas - (MolAs*ValAs))) / MolAs*ValAs);
				}
			}
			else if(Ka <= Kb){
				if(MolBas*ValBas >= MolAs){
					cout << "Bukan larutan penyangga ! ";
					break;
				}
				else{
					pH = -log10((Ka * (MolAs - (MolBas*ValBas))) / MolBas*ValBas);
				}
			}
			cout << "pH = " << pH;
			break;
			default : 
			cout << "Tolong pilih angka dari 1 - 4";
			break;
        }
	}
}
void graphing(){
   	char blnk = char(176), fill = char(219), tran = char(177);
	float scale, EQa, EQb, EQc, itlw, diff, xtemp;
	int range, Yrepeat;
	bool repeat;
	// deklarasi values
	cout<<"\n----------------Calculator Grafik----------------";
	cout << "\n Range (Menentukan besar kecil X Axis)= "; cin >> range;
	cout << "Scale (Menentukan Besar kecil skala grafik)= "; cin >> scale;
	cout << "Formula = ax^2 + bx + c \n a = "; cin >> EQa;
	cout << " b = "; cin >> EQb;
	cout << " c = "; cin >> EQc;
	// input formula dari user
	int Res[range][2], xfilled[range];
	for(int i = 0; i <= range; i++){
		itlw = i * scale;
		Res[i][0] = ((EQa*itlw*itlw) + (EQb*itlw) + EQc)/scale;
		Res[i][1] = i;
	}
	// perhitungan setiap x hasil ynya berapa
	// Res[n][0] = nomor sumbu y
	// Res[n][1] = nomor sumbu x
	qsort(Res, range, sizeof(*Res),
        [](const void *Resg1, const void *Resg2)->int
        {
            int const *lhs = static_cast<int const*>(Resg1);
            int const *rhs = static_cast<int const*>(Resg2);
            return (lhs[0] < rhs[0]) ? -1
                :  ((rhs[0] < lhs[0]) ? 1
                :  (lhs[1] < rhs[1] ? -1
                :  ((rhs[1] < lhs[1] ? 1 : 0))));
        });
    // mengurutkan array hasil berdasarkan sumbu y
	for(int j = range; j >= scale; j--){
		cout << Res[j-1][0] << "  ";
		cout << Res[j-1][1] << " \n";
	}
	// mengeluarkan hasil array dari y paling tinggi 
	// mostly for testing, you can get rid of it
	for(int ychk = range-1; ychk >=0; ychk--){
		repeat = true;
		Yrepeat = 0;
		while(repeat == true){
			if(Res[ychk-Yrepeat-1][0] == Res[ychk][0]){
				Yrepeat++;
			}
			else{
				repeat = false;
			}
		}
		// checks if there are multiple x points at the same y value
		// basically, if the line crosses y = n more than once, it records it here
		// Yrepeat is the amount of times it repeats
		for(int aa = 0; aa <= range; aa++){
			xfilled[aa] = 0;
		}
		for(int xchk = 0; xchk < range; xchk++){
			for(int genchk = 0; genchk <= Yrepeat; genchk++){
				if(Res[ychk-genchk][1] == xchk){
					xfilled[xchk] = 1;
				}
			}
		}
		// xfilled is an array recording every xpoint on a certain y value
		// so its basically one line of the graph
		for(int x = 0; x < range; x++){
			if(xfilled[x] == 1){
				cout << fill << fill;
			}
			else{
				cout << blnk << blnk;
			}
		}
		// this prints out a line of the graph where there are x points
		cout  << "\n";
		ychk -= Yrepeat;
		// ychk is reduced by Yrepeat because those values are already accounted for
		diff = Res[ychk][0] - Res[ychk-1][0] -1;
		for(int shad = 0; shad <= diff; shad++){
			for(int shad2 = 0; shad2 < range; shad2++){
				if(xfilled[shad2] == 1){
				cout << tran << tran;
			}
			else{
				cout << blnk << blnk;
			}
			}
			cout << diff << "\n";
		}
		// for every y value WITHOUT  any x points, it prints out a blank line
		// however there are half filled-in blocks for the x values above it
		// this is so it looks like a cohesive line

	}
	//NOTE : IF THERE IS AN ERROR "Cannot open output file, permission denied"  THAT MEANS THE PROGRAM IS STILL RUNNING
	// CHECK TASK MANAGER OR JUST CLOSE ANY WINDOWS LEFT OPEN

}
void matrix(){
	cout<<"\n--------------Calculator Perkalian Matriks--------------";
	int MtrLen1, MtrHgt1, MtrLen2, MtrHgt2, x, y, res = 0;
	cout << "\nPanjang Matrix 1 : ";
	cin >> MtrLen1;
	cout << "Tinggi Matrix 1 : ";
	cin >> MtrHgt1;
	int Arr1[MtrHgt1][MtrLen1];
	for(int i = 0; i < MtrHgt1; i++){
		for(int k = 0; k < MtrLen1; k++){
			cout <<  "__   ";
		}
		cout << "\n";
	}
	for(int i = 0; i < MtrHgt1; i++){
		for(int k = 0; k < MtrLen1; k++){
			cin >> Arr1[i][k];
		}
	}
	for(int i = 0; i < MtrHgt1; i++){
		for(int k = 0; k < MtrLen1; k++){
			cout << Arr1[i][k] << " ";
		}
		cout << "\n";
	}
	cout << "Panjang Matrix 2 : ";
	cin >> MtrLen2;
	cout << "Tinggi Matrix 2 : ";
	cin >> MtrHgt2;
	x = MtrLen2;
	if(MtrLen1 != MtrHgt2){
		cout << "Ukur perkalian invalid !!!";
		return;
	}
	int Arr2[MtrHgt2][MtrLen2];
	for(int i = 0; i < MtrHgt2; i++){
		for(int k = 0; k < MtrLen2; k++){
			cout << "__  ";
		}
		cout << "\n";
	}
	for(int i = 0; i < MtrHgt2; i++){
		for(int k = 0; k < MtrLen2; k++){
			cin >> Arr2[i][k];
		}
	}
	for(int i = 0; i < MtrHgt2; i++){
		for(int k = 0; k < MtrLen2; k++){
			cout << Arr2[i][k] << " ";
		}
		cout << "\n";
	}
	cout << "Hasil  = \n";
	int ArrRes[MtrHgt1][MtrLen2];
	for(int i = 0; i < MtrHgt1; i++){
		for(int k = 0; k < MtrLen2; k++){
			for(int g = 0; g < MtrLen1; g++){
				res += Arr1[i][g]*Arr2[g][k];
			}
			ArrRes[i][k] = res;
			res = 0;
			cout << ArrRes[i][k] << " ";
		}
		cout << "\n";
	}
}

int main () {
    int pilihan; char lagi;
    do {
        cout<<"----------------Calculator MAFIA (MAtematika, FIsika, kimiA)----------------"<<endl;
        cout<<"|                     1. Calculator sederhana                                |"<<endl;
        cout<<"|                     2. Calculator Luas Bidang (Matematika)                 |"<<endl;
        cout<<"|                     3. Calculator konversi unit (Fisika)                   |"<<endl;
        cout<<"|                     4. Calculator perhitungan PH (Kimia)                   |"<<endl;
        cout<<"|                     5. Calculator Graphing (Matematika)                    |"<<endl;
		cout<<"|                     6. Calculator Matrix(Matematika)                       |"<<endl;
        cout<<"|                     7. Quit Program                                        |"<<endl;
        cout<<"-----------------------------------------------------------------------------"<<endl;
        cout<<"Silahkan pilih (1,2,3,4,5,6,7) : "; cin>>pilihan;
        switch (pilihan) {
            case 1 : {
                sederhana(); break;
            }
            case 2 : {
                Luas(); break;
            }
            case 3 : {
                Konversi(); break;
            }
            case 4 : {
                PH(); break;
            }
            case 5 : {
                graphing(); break;
            }
            case 6 : {
                matrix(); break;
            }
			case 7 : {
				cout<<"Terimakasih telah menggunakan kalkulator MAFIA";
				exit(0);
			}
            default : {
                cout<<"Silahkan pilih angka yang valid";
            }
        }
        cout<<"\nApakah anda ingin menghitung lagi (y/n) : "; cin>>lagi;
    }
    while (lagi=='Y' || lagi=='y');
	cout<<"Terimakasih telah menggunakan kalkulator MAFIA";
}
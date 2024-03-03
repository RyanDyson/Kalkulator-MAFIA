#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void PH(){
	int choice;
	double MolAs, MolBas, ValAs, ValBas, Ka, Kw = 1e-14, Kb, pH, pOH;
	double mMolAs, mMolBas;
	cout << "----------------Calculator pH---------------- \n (Semua angka menggunakan notasi scientific) \n \n \n \n 1. pH Lar. Asam \n 2. pH Lar. Basa \n 3. pH Garam \n 4. pH Lar. Penyangga \n "; 
	cin >> choice;
	switch(choice){
		case 1 :
			cout << "Molaritas Asam : ";
			cin >> MolAs;
			cout << "Valensi Asam : ";
			cin >> ValAs;
			pH = -log10(MolAs*ValAs);
			cout << "pH = " << pH;
			break;
		case 2 :
			cout << "Molaritas Basa : ";
			cin >> MolBas;
			cout << "Valensi Basa : ";
			cin >> ValBas;
			pH = 14 + log10(MolBas*ValBas);
			cout << "pH = " << pH;
			break;
		case 3 : 
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
		case 4 : 
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
	cin.get();

}

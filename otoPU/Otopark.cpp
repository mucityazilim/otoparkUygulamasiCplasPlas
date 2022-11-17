#include <iostream >
#include "Otopark.h"

using namespace std; 



void Otopark :: hesapla()
{
	cout<<"Saat : "; cin>>saat; 
	
	if( aracCinsi== 1   ) 
		toplamUcret = 10 + saat *3; 
	else if( aracCinsi== 2   ) 
		toplamUcret = 14 + saat *5;
	else if( aracCinsi== 3   ) 
		toplamUcret = 18 + saat *7;
	
	system("cls") ; 
	cout<<"Toplam Ucret : " << toplamUcret << " TL"<< endl<< endl;
	
	system("pause") ; 
	
	
}
void Otopark :: menu()
{
	
	while ( true )
	{
		system("cls") ; 
	
		cout<<"Otopark uygulamasi "<< endl<< endl; 
		cout<<"Arac cinsleri "<< endl;    // taksi 10, minibüs 14, ticari arac 18 tl 
		cout<<"[1] Taksi "<< endl; 
		cout<<"[2] Minibus "<< endl; 
		cout<<"[3] Ticari Arac "<< endl;
		cout<<"[0] CIKIS "<< endl;
		cout<<"Seciminiz  :  "; cin>> secim; 
		if( secim == 0 ) 
		{
			cout<<"Cikis yaptiniz..."; 
			 break; 		
		}
		else if( secim >0 && secim <4 )
		{
			aracCinsi = secim; 
			hesapla(); 
		} 
	}
}



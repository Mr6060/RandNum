#include <iostream>
#include <math.h>
#include <ctime>
#include <time.h>
#include <stdlib.h>
using namespace std;
int continente,paese,sesso;
string nome;
int GenCont(){	//genera un numero casuale da 1 a 7 per ogni contintente
	srand(time(NULL));
	continente=rand() % 5 + 1;
		//genera un numero da 1 a n paesi per ogni continente
	if(continente==1){ 		//Africa
		srand(time(NULL));
		paese=rand()%54+1;
		switch (paese){
			case 1:
				cout<<"Algeria"<<endl;
				break;
			case 2:
				cout<<"Angola"<<endl;
				break;
			case 3:
				cout<<"Benin"<<endl;
				break;
			case 4:
				cout<<"Botswana"<<endl;
				break;
			case 5:
				cout<<"Burkina Faso"<<endl;
				break;
			case 6:
				cout<<"Burundi"<<endl;
				break;
			case 7:
				cout<<"Camerun"<<endl;
				break;
			case 8:
				cout<<"Capo Verde"<<endl;
				break;
			case 9:
				cout<<"Ciad"<<endl;
				break;
			case 10:
				cout<<"Comore"<<endl;
				break;
			case 11:
				cout<<"Congo"<<endl;
				break;
			case 12:
				cout<<"Costa d'Avorio"<<endl;
				break;
			case 13:
				cout<<"Egitto"<<endl;
				break;
			case 14:
				cout<<"Eritrea"<<endl;
				break;
			case 15:
				cout<<"Etiopia"<<endl;
				break;
			case 16:
				cout<<"Gabon"<<endl;
				break;
			case 17:
				cout<<"Gambia"<<endl;
				break;
			case 18:
				cout<<"Ghana"<<endl;
				break;
			case 19:
				cout<<"Gibuti"<<endl;
				break;
			case 20:
				cout<<"Guinea"<<endl;
				break;
			case 21:
				cout<<"Guinea Equitoriale"<<endl;
				break;
			case 22:
				cout<<"Guinea-Bissau"<<endl;
				break;
			case 23:
				cout<<"Kenya"<<endl;
				break;
			case 24:
				cout<<"Lesotho"<<endl;
				break;
			case 25:
				cout<<"Liberia"<<endl;
				break;
			case 26:
				cout<<"Libia"<<endl;
				break;
			case 27:
				cout<<"Madagascar"<<endl;
				break;
			case 28:
				cout<<"Malawi"<<endl;
				break;
			case 29:
				cout<<"Mali"<<endl;
				break;
			case 30:
				cout<<"Marocco"<<endl;
				break;
			case 31:
				cout<<"Mauritania"<<endl;
				break;
			case 32:
				cout<<"Mauritius"<<endl;
				break;
			case 33:
				cout<<"Mozambico"<<endl;
				break;
			case 34:
				cout<<"Namibia"<<endl;
				break;
			case 35:
				cout<<"Niger"<<endl;
				break;
			case 36:
				cout<<"Nigeria"<<endl;
				break;
			case 37:
				cout<<"Repubblica Centafricana"<<endl;
				break;
			case 38:
				cout<<"Repubblica Democratica del Congo"<<endl;
				break;
			case 39:
				cout<<"Ruanda"<<endl;
				break;
			case 40:
				cout<<"Sao Tome e Principe"<<endl;
				break;
			case 41:
				cout<<"Senegal"<<endl;
				break;
			case 42:
				cout<<"Sevchelles"<<endl;
				break;
			case 43:
				cout<<"Sierra Leone"<<endl;
				break;
			case 44:
				cout<<"Somalia"<<endl;
				break;
			case 45:
				cout<<"Sudafrica"<<endl;
				break;
			case 46:
				cout<<"Sudan"<<endl;
				break;
			case 47:
				cout<<"Sudan del Sud"<<endl;
				break;
			case 48:
				cout<<"Swaziland"<<endl;
				break;
			case 49:
				cout<<"Tanzania"<<endl;
				break;
			case 50:
				cout<<"Togo"<<endl;
				break;
			case 51:
				cout<<"Tunisia"<<endl;
				break;
			case 52:
				cout<<"Uganda"<<endl;
				break;
			case 53:
				cout<<"Zambia"<<endl;
				break;
			case 54:
				cout<<"Zimbabwe"<<endl;
			}
		}
		if(continente==2){ 		//America
			srand(time(NULL));
			paese=rand()%34+1;
			switch(paese){
				case 1:
					cout<<"Antigua e Barbuda"<<endl;
					break;
				case 2:
					cout<<"Argentina"<<endl;
					break;
				case 3:
					cout<<"Bahamas"<<endl;
					break;
				case 4:
					cout<<"Barbados"<<endl;
					break;
				case 5:
					cout<<"Belize"<<endl;
					break;
				case 6:
					cout<<"Bolivia"<<endl;
					break;
				case 7:
					cout<<"Brasile"<<endl;
					break;
				case 8:
					cout<<"Canada"<<endl;
					break;
				case 9:
					cout<<"Cile"<<endl;
					break;
				case 10:
					cout<<"Colombia"<<endl;
					break;
				case 11:
					cout<<"Costa Rica"<<endl;
					break;
				case 12:
					cout<<"Cuba"<<endl;
					break;
				case 13:
					cout<<"Dominica"<<endl;
					break;
				case 14:
					cout<<"Ecuador"<<endl;
					break;
				case 15:
					cout<<"El Salvador"<<endl;
					break;
				case 16:
					cout<<"Giamaica"<<endl;
					break;
				case 17:
					cout<<"Grenada"<<endl;
					break;
				case 18:
					cout<<"Guatemala"<<endl;
					break;
				case 19:
					cout<<"Guyana"<<endl;
					break;
				case 20:
					cout<<"Haiti"<<endl;
					break;
				case 21:
					cout<<"Honduras"<<endl;
					break;
				case 22:
					cout<<"Messico"<<endl;
					break;
				case 23:
					cout<<"Nicaragua"<<endl;
					break;
				case 24:
					cout<<"Panama"<<endl;
					break;
				case 25:
					cout<<"Paraguay"<<endl;
					break;
				case 26:
					cout<<"Peru"<<endl;
					break;
				case 27:
					cout<<"Repubblica Dominicana"<<endl;
					break;
				case 28:
					cout<<"Saint Kitts e Nevis"<<endl;
					break;
				case 29:
					cout<<"Santa Lucia"<<endl;
					break;
				case 30:
					cout<<"Stati Uniti"<<endl;
					break;
				case 31:
					cout<<"Suriname"<<endl;
					break;
				case 32:
					cout<<"Trinidad e Tobago"<<endl;
					break;
				case 33:
					cout<<"Uruguay"<<endl;
					break;
				case 34:
					cout<<"Venezuela"<<endl;
					break;
				}
			}
			if(continente==3){			//Asia
				srand(time(NULL));
				paese=rand()%47+1;
				switch(paese){
					case 1:
						cout<<"Afghanistan"<<endl;
						break;
					case 2:
						cout<<"Arabia Saudita"<<endl;
						break;
					case 3:
						cout<<"Armenia"<<endl;
						break;
					case 4:
						cout<<"Azerbaigian"<<endl;
						break;
					case 5:
						cout<<"Bahrein"<<endl;
						break;
					case 6:
						cout<<"Bangladesh"<<endl;
						break;
					case 7:
						cout<<"Bhutan"<<endl;
						break;
					case 8:
						cout<<"Birmania"<<endl;
						break;
					case 9:
						cout<<"Brunei"<<endl;
						break;
					case 10:
						cout<<"Cambogia"<<endl;
						break;
					case 11:
						cout<<"Cina"<<endl;
						break;
					case 12:
						cout<<"Corea del Nord"<<endl;
						break;
					case 13:
						cout<<"Corea del Sud"<<endl;
						break;
					case 14:
						cout<<"Emirati Arabi Uniti"<<endl;
						break;
					case 15:
						cout<<"Filippine"<<endl;
						break;
					case 16:
						cout<<"Georgia"<<endl;
						break;
					case 17:
						cout<<"Giappone"<<endl;
						break;
					case 18:
						cout<<"Giordania"<<endl;
						break;
					case 19:
						cout<<"India"<<endl;
						break;
					case 20:
						cout<<"Indonesia"<<endl;
						break;
					case 21:
						cout<<"Iran"<<endl;
						break;
					case 22:
						cout<<"Iraq"<<endl;
						break;
					case 23:
						cout<<"Israele"<<endl;
						break;
					case 24:
						cout<<"Kazakistan"<<endl;
						break;
					case 25:
						cout<<"Kirghizistan"<<endl;
						break;
					case 26:
						cout<<"Kuwait"<<endl;
						break;
					case 27:
						cout<<"Laos"<<endl;
						break;
					case 28:
						cout<<"Libano"<<endl;
						break;
					case 29:
						cout<<"Maldive"<<endl;
						break;
					case 30:
						cout<<"Malesia"<<endl;
						break;
					case 31:
						cout<<"Mongolia"<<endl;
						break;
					case 32:
						cout<<"Nepal"<<endl;
						break;
					case 33:
						cout<<"Oman"<<endl;
						break;
					case 34:
						cout<<"Pakistan"<<endl;
						break;
					case 35:
						cout<<"Palestina"<<endl;
						break;
					case 36:
						cout<<"Qatar"<<endl;
						break;
					case 37:
						cout<<"Singapore"<<endl;
						break;
					case 38:
						cout<<"Siria"<<endl;
						break;
					case 39:
						cout<<"Sri Lanka"<<endl;
						break;
					case 40:
						cout<<"Tagikistan"<<endl;
						break;
					case 41:
						cout<<"Taiwan"<<endl;
						break;
					case 42:
						cout<<"Thailandia"<<endl;
						break;
					case 43:
						cout<<"Turchia"<<endl;
						break;
					case 44:
						cout<<"Turkmenistan"<<endl;
						break;
					case 45:
						cout<<"Uzbekistan"<<endl;
						break;
					case 46:
						cout<<"Vietnam"<<endl;
						break;
					case 47:
						cout<<"Yemen"<<endl;
						break;
				}
			}
			if(continente==4){		//Europa
				srand(time(NULL));
				paese=rand()%46+1;
				switch(paese){
					case 1:
						cout<<"Albania"<<endl;
						break;
					case 2:
						cout<<"Andorra"<<endl;
						break;
					case 3:
						cout<<"Austria"<<endl;
						break;
					case 4:
						cout<<"Belgio"<<endl;
						break;
					case 5:
						cout<<"Bielorussia"<<endl;
						break;
					case 6:
						cout<<"Bosnia ed Erzegovina"<<endl;
						break;
					case 7:
						cout<<"Bulgaria"<<endl;
						break;
					case 8:
						cout<<"Cipro"<<endl;
						break;
					case 9:
						cout<<"Croazia"<<endl;
						break;
					case 10:
						cout<<"Danimarca"<<endl;
						break;
					case 11:
						cout<<"Estonia"<<endl;
						break;
					case 12:
						cout<<"Finlandia"<<endl;
						break;
					case 13:
						cout<<"Francia"<<endl;
						break;
					case 14:
						cout<<"Germania"<<endl;
						break;
					case 15:
						cout<<"Grecia"<<endl;
						break;
					case 16:
						cout<<"Irlanda"<<endl;
						break;
					case 17:
						cout<<"Islanda"<<endl;
						break;
					case 18:
						cout<<"Italia"<<endl;
						break;
					case 19:
						cout<<"Kosovo"<<endl;
						break;
					case 20:
						cout<<"Lettonia"<<endl;
						break;
					case 21:
						cout<<"Liechtenstein"<<endl;
						break;
					case 22:
						cout<<"Lituania"<<endl;
						break;
					case 23:
						cout<<"Lussemburgo"<<endl;
						break;
					case 24:
						cout<<"Macedonia"<<endl;
						break;
					case 25:
						cout<<"Malta"<<endl;
						break;
					case 26:
						cout<<"Moldavia"<<endl;
						break;
					case 27:
						cout<<"Monaco"<<endl;
						break;
					case 28:
						cout<<"Montenegro"<<endl;
						break;
					case 29:
						cout<<"Norvegia"<<endl;
						break;
					case 30:
						cout<<"Paesi Bassi"<<endl;
						break;
					case 31:
						cout<<"Polonia"<<endl;
						break;
					case 32:
						cout<<"Portogallo"<<endl;
						break;
					case 33:
						cout<<"Regno Unito"<<endl;
						break;
					case 34:
						cout<<"Repubblica Ceca"<<endl;
						break;
					case 35:
						cout<<"Romania"<<endl;
						break;
					case 36:
						cout<<"Russia"<<endl;
						break;
					case 37:
						cout<<"San Marino"<<endl;
						break;
					case 38:
						cout<<"Serbia"<<endl;
						break;
					case 39:
						cout<<"Slovacchia"<<endl;
						break;
					case 40:
						cout<<"Slovenia"<<endl;
						break;
					case 41:
						cout<<"Spagna"<<endl;
						break;
					case 42:
						cout<<"Svezia"<<endl;
						break;
					case 43:
						cout<<"Svizzera"<<endl;
						break;
					case 44:
						cout<<"Ucraina"<<endl;
						break;
					case 45:
						cout<<"Ungheria"<<endl;
						break;
					case 46:
						cout<<"Vaticano"<<endl;
						break;
				}
			}
			if(continente==5){			//Oceania
				srand(time(NULL));
				paese=rand()%15+1;
				switch(paese){
					case 1:
						cout<<"Australia"<<endl;
						break;
					case 2:
						cout<<"Figi"<<endl;
						break;
					case 3:
						cout<<"Isole Marshall"<<endl;
						break;
					case 4:
						cout<<"Isole Salomone"<<endl;
						break;
					case 5:
						cout<<"Kiribati"<<endl;
						break;
					case 6:
						cout<<"Micronesia"<<endl;
						break;
					case 7:
						cout<<"Nauru"<<endl;
						break;
					case 8:
						cout<<"Nuova Zelanda"<<endl;
						break;
					case 9:
						cout<<"Palau"<<endl;
						break;
					case 10:
						cout<<"Papua Nuova Guinea"<<endl;
						break;
					case 11:
						cout<<"Samoa"<<endl;
						break;
					case 12:
						cout<<"Timor Est"<<endl;
						break;
					case 13:
						cout<<"Tonga"<<endl;
						break;
					case 14:
						cout<<"Tavalu"<<endl;
						break;
					case 15:
						cout<<"Vanuatu"<<endl;
						break;
				}
			}
		}
	void Sesso(){
		srand(time(NULL));
		int sesso=rand()%2+1;
		if(sesso==1)
			cout<<"maschio"<<endl;
		else
			cout<<"femmina"<<endl;
	}
	void Eta(){
		srand(time(NULL));
		int eta=rand()%100+1;
		cout<<eta<<endl;
	}
	int main(){
		int sc,c;
		cin>>sc;
		cout<<"Inserire nome"<<endl;
		cin>>nome;
		c=0;
		while(sc==0){	
		
		
		Sesso();
		Eta();
		GenCont();
		c=c+1;
		if((continente==5)&&(paese==15)){
			cout<<"bingo!!"<<endl;
			cout<<c<<endl;
			sc=1;
		}
		else
			sc=0;
		}
		return(0);
	}



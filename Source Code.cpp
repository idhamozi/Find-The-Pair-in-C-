#include <iostream>
#include <windows.h>

using namespace std;

class Pair
	{
		public:	
		
		char yui [4][4];
		char key [4][4];
		char abjad1,abjad2;	
		
		void gotoxy(int x, int y)
			{
				COORD k = {x,y};
 				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), k);
			}
		
		void header()
			{
				//Looping tampilkan Border Vertikal
				for(int x_=0; x_<80; x_++){
					for (int y_=0; y_<7; y_+=6){
						gotoxy (x_,y_); cout<<"=";
					}
				}
				//Looping tampilkan Border Horizontal
				for (int y_=0; y_<21; y_++){
					for (int x_=0; x_<80; x_+=79){
						gotoxy (x_,y_); cout<<"I";
					}
				}
				
				gotoxy (34,2); cout<<"PAIR GAME";
				gotoxy (18,3); cout<<"FINAL PROJECT PEMROGRAMAN BERORIENTASI OBJEK";
				gotoxy (17,4); cout<<"DOSEN PENGAMPU : WAHYU S.J SAPUTRA S.KOM M.KOM";
			}
			
		void garis()
			{
				//Looping tampilkan border badan
				for(int x_=1; x_<79; x_++){
					for(int y_=7; y_<21; y_+=13){
						gotoxy (x_,y_); cout<<"=";
					}
				}
			}
		
		void inisialisasi()
			{
				    yui[0][0]='X';
				    yui[0][1]='X';
				    yui[0][2]='X';
				    yui[0][3]='X';
				    yui[1][0]='X';
				    yui[1][1]='X';
				    yui[1][2]='X';
				    yui[1][3]='X';
				    yui[2][0]='X';
				    yui[2][1]='X';
				    yui[2][2]='X';
				    yui[2][3]='X';
				    yui[3][0]='X';
				    yui[3][1]='X';
				    yui[3][2]='X';
				    yui[3][3]='X';
				
				    key[0][0]='a';
				    key[0][1]='b';
				    key[0][2]='c';
				    key[0][3]='d';
				    key[1][0]='e';
				    key[1][1]='f';
				    key[1][2]='g';
				    key[1][3]='h';
				    key[2][0]='i';
				    key[2][1]='j';
				    key[2][2]='k';
				    key[2][3]='l';
				    key[3][0]='m';
				    key[3][1]='n';
				    key[3][2]='o';
				    key[3][3]='p';
			}	
			
		void mulai()
			{
				int x,z;
					//Loopping tampilkan array yui
					for( x=0;x<=3;x++)
					{
				        for( z=0;z<=3;z++)
						{
					        if (z == 0) {
					        	gotoxy(z+4 , 12+x);
					        	cout<<"["<<yui[x][z]<<"]";
							}
							if (z == 1) {
					        	gotoxy(z+3+4 , 12+x);
					        	cout<<"["<<yui[x][z]<<"]";
							}
							if (z == 2) {
					        	gotoxy(z+6+4 , 12+x);
					        	cout<<"["<<yui[x][z]<<"]";
							}
							if (z == 3) {
					        	gotoxy(z+9+4 , 12+x);
					        	cout<<"["<<yui[x][z]<<"]";
							}
        				}
    				}
    				//Looping array key
    				for( x=0;x<=3;x++)
					{
				        for( z=0;z<=3;z++)
						{
					        if (z == 0) {
					        	gotoxy(z+25 , 12+x);
					        	cout<<"["<<key[x][z]<<"]";
							}
							if (z == 1) {
					        	gotoxy(z+3+25 , 12+x);
					        	cout<<"["<<key[x][z]<<"]";
							}
							if (z == 2) {
					        	gotoxy(z+6+25 , 12+x);
					        	cout<<"["<<key[x][z]<<"]";
							}
							if (z == 3) {
					        	gotoxy(z+9+25 , 12+x);
					        	cout<<"["<<key[x][z]<<"]";
							}
        				}
    				}

			}
			
			void pilih()
			{
				int x,y;
				
			   	gotoxy(45,12); cout<<"Kartu 1 yang ingin dilihat : ";
			    gotoxy(45,15); cout<<"Kartu 2 yang ingin dilihat : ";
						
				gotoxy(74,12); cin>>abjad1;
			    gotoxy(74,15); cin>>abjad2;
					    
					switch (abjad1)
				{
						case 'a' : yui[0][0]=char(1); break;
						case 'd' : yui[0][3]=char(1); break;
						case 'b' : yui[0][1]=char(2); break;
						case 'c' : yui[0][2]=char(2); break;
						case 'g' : yui[1][2]=char(3); break;
						case 'j' : yui[2][1]=char(3); break;
						case 'e' : yui[1][0]=char(4); break;
						case 'l' : yui[2][3]=char(4); break;
						case 'h' : yui[1][3]=char(5); break;
						case 'k' : yui[2][2]=char(5); break;
						case 'f' : yui[1][1]=char(6); break;
						case 'i' : yui[2][0]=char(6); break;
				        case 'm' : yui[3][0]='*'; break;
						case 'p' : yui[3][3]='*'; break;
						case 'n' : yui[3][1]='-'; break;
						case 'o' : yui[3][2]='-'; break;
						default  : gotoxy(29,17);cout<<" Abjad NOT FOUND!"; break;
				}
				
			        switch (abjad2)
				{
						case 'a' : yui[0][0]=char(1); break;
						case 'd' : yui[0][3]=char(1); break;
						case 'b' : yui[0][1]=char(2); break;
						case 'c' : yui[0][2]=char(2); break;
						case 'g' : yui[1][2]=char(3); break;
						case 'j' : yui[2][1]=char(3); break;
						case 'e' : yui[1][0]=char(4); break;
						case 'l' : yui[2][3]=char(4); break;
						case 'h' : yui[1][3]=char(5); break;
						case 'k' : yui[2][2]=char(5); break;
						case 'f' : yui[1][1]=char(6); break;
						case 'i' : yui[2][0]=char(6); break;
				        case 'm' : yui[3][0]='*'; break;
						case 'p' : yui[3][3]='*'; break;
						case 'n' : yui[3][1]='-'; break;
						case 'o' : yui[3][2]='-'; break;
						default  : gotoxy(29,17);cout<<" Abjad NOT FOUND!"; break;
				}
			}
			
			void tampil()
			{	int x,z;
				
        		//Looping tampil hint
        		for( x=0;x<=3;x++){
					for( z=0;z<=3;z++){
					{
				        if (z == 0) {
				        	gotoxy(z+4 , 12+x);
				        	cout<<"["<<yui[x][z]<<"]";
						}
						if (z == 1) {
				        	gotoxy(z+3+4 , 12+x);
				        	cout<<"["<<yui[x][z]<<"]";
						}
						if (z == 2) {
				        	gotoxy(z+6+4 , 12+x);
				        	cout<<"["<<yui[x][z]<<"]";
						}
						if (z == 3) {
				        	gotoxy(z+9+4 , 12+x);
				        	cout<<"["<<yui[x][z]<<"]";
						}
        			}
        			}
    			}
			}
			
			void seleksi()
			{	
				int x,y;
				//Kondisi Menang
				if( yui[0][0]!='X'&&yui[0][1]!='X'&&yui[0][2]!='X'&&yui[0][3]!='X'&&
					yui[1][0]!='X'&&yui[1][1]!='X'&&yui[1][2]!='X'&&yui[1][3]!='X'&&
					yui[2][0]!='X'&&yui[2][1]!='X'&&yui[2][2]!='X'&&yui[2][3]!='X'&&
					yui[3][0]!='X'&&yui[3][1]!='X'&&yui[3][2]!='X'&&yui[3][3]!='X')
				{
			        gotoxy(37,17);cout<<"YOU WIN!!!";
			        gotoxy(1,22);cout<<" ";
			        exit(0);
			    } 
				else{ //Kondisi Seleksi
					if(yui[0][0]=='X'&&yui[0][3]==char(1)||yui[0][0]==char(1)&&yui[0][3]=='X'){cout<<endl; yui[0][0]='X';yui[0][3]='X'; }
			        if(yui[0][1]=='X'&&yui[0][2]==char(2)||yui[0][1]==char(2)&&yui[0][2]=='X'){cout<<endl; yui[0][1]='X';yui[0][2]='X'; }
			        if(yui[2][1]=='X'&&yui[1][2]==char(3)||yui[2][1]==char(3)&&yui[1][2]=='X'){cout<<endl; yui[2][1]='X';yui[1][2]='X'; }
			        if(yui[1][0]=='X'&&yui[2][3]==char(4)||yui[1][0]==char(4)&&yui[2][3]=='X'){cout<<endl; yui[1][0]='X';yui[2][3]='X'; }
			        if(yui[1][3]=='X'&&yui[2][2]==char(5)||yui[1][3]==char(5)&&yui[2][2]=='X'){cout<<endl; yui[1][3]='X';yui[2][2]='X'; }
			        if(yui[1][1]=='X'&&yui[2][0]==char(6)||yui[1][1]==char(6)&&yui[2][0]=='X'){cout<<endl; yui[1][1]='X';yui[2][0]='X'; }
			        if(yui[3][0]=='X'&&yui[3][3]=='*'||yui[3][0]=='*'&&yui[3][3]=='X'){cout<<endl; yui[3][0]='X';yui[3][3]='X'; }
			        if(yui[3][1]=='X'&&yui[3][2]=='-'||yui[3][1]=='-'&&yui[3][2]=='X'){cout<<endl; yui[3][1]='X';yui[3][2]='X'; }
			
			    	cout<<endl;
				}
			}	
	};
	
int main()
{
	Pair objek;
	
	objek.inisialisasi();
	here:
	objek.mulai();	
	objek.header();	
	objek.garis();		
	objek.pilih();
	objek.tampil();
	objek.seleksi();
	Sleep(2000);	
	system("CLS");
	
	goto here;
}

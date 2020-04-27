#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main(){

	int array2d[10][10], array3d[10][10];
	int a,b,c,d,e;
   int pilih, jmlbarisa, jmlkoloma;
   int jmlbarisb, jmlkolomb;
   kembali:
   clrscr();


   cout<<"===MENU==="<<endl;
   cout<<"1. Input Baris Matriks A : "<<endl;
   cout<<"2. Input Kolom Matriks A : "<<endl;
   cout<<"3. Isi Data  Matriks A : "<<endl;
   cout<<"4. Tampilkan Data Matriks A : "<<endl;
   cout<<"5. Input Baris Matriks B : "<<endl;
   cout<<"6. Input Kolom Matriks B : "<<endl;
   cout<<"7. Isi Data  Matriks B : "<<endl;
   cout<<"8. Tampilkan Data Matriks B : "<<endl;
   cout<<"Pilih Menu :  "; cin>>pilih;

   switch(pilih){
   	case 1 : //Input Baris Mat A
      			cout<<"Masukkan Jumlah Baris A : ";
               cin>>jmlbarisa;
      			if (jmlbarisa > 10){
               	cout<<"Jumlah Baris Maksimal 10!";
                  }
      			getch();
               goto kembali;
       			break;

      case 2 : //Input Kolom Mat A
      			cout<<"Masukkan Jumlah Kolom A : ";
               cin>>jmlkoloma;
      			if (jmlkoloma > 10){
               	cout<<"Jumlah Kolom Maksimal 10!"<<jmlkoloma;
                  }
      			getch();
               goto kembali;
               break;
   	case 3 : //isi data Matriks A
      			for(a=0;a<=jmlbarisa;a++){
               	for(b=0;b<=jmlkoloma;b++){
                  cout<<"Inputkan Data Matriks Baris "<<a<<" Kolom "<<b<<" = ";
                  cin>>array2d[a][b];
                  }
                  cout<<endl;
               }
      			getch();
               goto kembali;
               break;
   	case 4 : //Tampilkan Matriks A
      			cout<<"Isi Data Matriks"<<endl;
      			for(a=0;a<=jmlbarisa;a++){
               	for(b=0;b<=jmlkoloma;b++){
                  cout<<array2d[a][b]<<"  ";
                  }
                  cout<<endl;
               }
      			getch();
               goto kembali;
               break;
		case 5 : //input Kolom matriks b
      			cout<<"Input Kolom Matriks B : ";
               cin>>jmlbarisb;
               if(jmlbarisb > 10){
               	cout<<"Jumlah Kolom Maksimal 10!";
               }
   				getch();
               goto kembali;
               break;
      case 6 : //input baris matriks b
      			cout<<"Input Baris Matriks B : ";
               cin>>jmlkolomb;
               if(jmlkoloma > 10){
               	cout<<"Jumlah Baris Matriks 10!";
               }
   				getch();
               goto kembali;
               break;
      case 7 : //isi data matriks b
      			for(c=0;c<=jmlbarisb;c++){
               	for(d=0;d<=jmlkolomb;d++){
                  	cout<<"Input Data Matriks B Baris "<<c<<" Kolom "<<d;
                     cin>>array3d[c][d];
                     }
                     cout<<endl;
               }
   				getch();
               goto kembali;
               break;
      case 8 : //Tampilkan matriks b
      			cout<<"Isi Data Matriks B";
               for(c=0;c<=jmlbarisb;c++){
               	for(d=0;d<=jmlkolomb;d++){
                  	cout<<array3d[c]<<" "<<array3d[d];
                     }
                     cout<<endl;
                  }
   				getch();
               goto kembali;
               break;
      case 9 : //Cek Dulu Ordonya Jika sama bisa di jumlah, Jika Tdk sama berikan pesan
      			//Operasi Penambahkan

      case 10 ://



      default :
      			cout<<" Menu Tidak Tersedia ";
               getch();
               goto kembali;
               break;
      	}
      getch();
}


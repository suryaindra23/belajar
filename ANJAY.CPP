#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main(){

	int Data[10];
	int a, b, c, d, e, f, g, i, j, n;
   float rata, total=0;
   int max, min;
   int pilih;
   kembali:
   clrscr();

   cout<<"1.  Input Data Otomatis"<<endl;
   cout<<"2.  Input Data Manual"<<endl;
   cout<<"3.  Tampilkan Data Array"<<endl;
   cout<<"4.  Cari Data Dari Terbesar"<<endl;
   cout<<"5.  Cari Data Dari Terkecil"<<endl;
   cout<<"6.  Cari Rata Rata"<<endl;
   cout<<"7.  Cari Total Data"<<endl;
   cout<<"8.  Cari Data Dengan Buble Sort"<<endl;
   cout<<"9.  Cari Data Dengan Inserting Sort"<<endl;
   cout<<"10. Cari Data Dengan Selection Sort"<<endl;
   cout<<"11. Cari Data Dengan Quick Sort"<<endl;

   cout<<"Masukkan Nomer : ";
   cin>>pilih;

   switch (pilih){
   	case 1 :
      	srand(time(NULL));
         int y;
      		for(y=0; y<10;y++){
  				Data[y] = rand()%100+1;
  				}
  				for(y=0; y<10; y++){
  				cout<<"array "<<y+1<<" nilai :"<<Data[y]<<endl;
  				}
         getch();
      	goto kembali;
      	break;

      case 2 :
   		for(a=0;a<10;a++){
         	cout<<"Inputkan Data Array Manual = ";
            cin>>Data[a];
            }
         getch();
         goto kembali;
         break;

      case 3 :
      	for(b=0;b<10;b++){
         	cout<<"Tampilkan Data Array = "<<Data[b]<<endl;
            total = total + Data[b];
            }
         getch();
         goto kembali;
         break;

      case 4 :
      	max = Data[c];
      	for(c=0;c<10;c++){
         	if(max < Data[c]){
            	max = Data[c];
               }
            }
         cout<<"Data Terbesar Array = "<<max<<endl;
			getch();
         goto kembali;
         break;

      case 5 :
      	for(d=0;d<10;d++){
         	if(min > Data[d]){
            	min = Data[d];
               }
            }
         cout<<"Data Terkecil Array = "<<min<<endl;
         getch();
         goto kembali;
         break;

      case 6 :
      	rata = total / 10;
      	cout<<"Rata Rata Data Array = "<<rata<<endl;
         getch();
         goto kembali;
         break;

      case 7 :
      	cout<<"Total Data Dari Array = "<<total<<endl;
         getch();
         goto kembali;
         break;

      case 8 :
         //BUBLE SORT

      	for(b=0;b<10;b++){
         	cout<<"Data = "<<Data[b]<<endl;
            }
         cout<<endl;
      	for(b=0;b<10;b++){
         	for(c=b;c<10;c++){
            	if(Data[b] > Data[c]){
               	g=Data[b];
                  Data[b]=Data[c];
                  Data[c]=g;
               }
            }
         }
         cout<<"Data Setelah Di Urutkan = "<<endl;
         for(b=0;b<10;b++){
         	cout<<"Data = "<<Data[b]<<endl;
            }

         getch();
         goto kembali;
         break;

      case 9 :
         //INSERTING SORT

      	cout<<"\n\n data Sebelum diurutkan :";
   		for(a=0;a<10;a++)
   		{
    		cout<<"  "<<Data[a];
   		}
   		cout<<endl;
   		for(a=0;a<10;a++)
   		{
         for(b=0;b<=a;b++)
    		{
         	if(Data[a]>Data[b])
         		{
          			g=Data[a];
            		Data[a]=Data[b];
            		Data[b]=g;
         		}
         }
   		cout<<"\n # "<<a<<" : ";
      	for(c=0;c<a;c++)
      	{
       	cout<<"  "<<Data[c];
      	}
   		}
         cout<<"\n\n data Setelah diurutkan secara descending : ";
   		for(a=0;a<10;a++)
         {
         cout<<"  "<<Data[a];
   		}
         getch();
         goto kembali;
         break;

      case 10 :

      	//SELECTION SORT
      	for(a=0;a<10-1;a++)
    		{
    		c=a;
         for(d=a+1;d<10;d++)
         {
            if(Data[d]<Data[c])
            {
                c=d;
            }
        			}
               g=Data[c];
        			Data[c]=Data[a];
       	 		Data[a]=g;
    			}
         cout<<"\n setelah diurutkan akan menjadi : \n";
         for(a=0;a<10;a++)
    		{
         cout<<Data[a]<<" \n";
    		}
         getch();
         goto kembali;
         break;

      default :
      	cout<<"Tidak Ada Yang Di Pilih ";
         getch();
         goto kembali;
         break;
         end;
      }
   getch();

}






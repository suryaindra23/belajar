#include <iostream.h>
#include <conio.h>
void tampilkan_data(int data[], int k)
{
 int i;
 for (i=1;i<=k;i++)
 cout<<data[i]<<" ";
 cout<<"\n";
}
int partisi (int data[], int awal, int akhir)
{
 int x,i,j,simpan;
 i=awal;
 j=akhir;
   while(1)
   {
   while(data[i]<data[awal])
   i=i+1;
    while(data[j]>data[awal])
     j=j-1;
    if (i<j)
    {
    //Penukar data
   simpan=data[i];
    data[i]=data[j];
   data[j]=simpan;
    }
   else
      return j;
   }
}
void quick_sort(int data[], int awal, int akhir)
{
 int q;
 if(awal<akhir)
 {
  q=partisi(data,awal,akhir);
  quick_sort(data,awal,q);
  quick_sort(data, q+1,akhir);
 }
}
int main()
{
 int i,j,k,data[100];
   cout<<"Masukkan banyak data = ";cin>>k;
   for(i=1;i<=k;i++)
   {
    cout<<"Data ke "<<i<<" = ";cin>>data[i];
   }
 cout<<"Data sebelum diurut: "<<endl;
 for(j=1;j<=k;j++)
 {
  cout<<data[j]<<" ";
 }
 quick_sort(data,1,k);
 //Hasil Pengurutan
 cout<<endl;
 cout<<endl;
 cout<<"Hasil pengurutan:\n";
 tampilkan_data(data,k);
 getch();
}
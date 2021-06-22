#include<iostream>
using namespace std;
int main()
{
int c=0,c1=0;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];
//jenniffer Katherine Mina Preciado 
cout<<"primera matriz:"<<endl;
do{
cout<<matriz1[c]<<endl;
c=c+1;
}
while(c<10);
cout<<"\n";
  c=0;
cout<<"segunda matriz:"<<endl;
do{
cout<<matriz2[c1]<<endl;
c1=c1+1;
}
while(c1<10);
cout<<"\n";
  c=0;
return 0;
}



//Zambrano Zambrano Arely Tatiana
 //resta de la matriz1 y matriz2 
 
  cout<<"la matriz resta es:"<<endl<<"resta[10]=";
 do{
 cout<<matriz1[c]-matriz2[c];
 c=c+1;
 if(c<10){
    cout<<"  - ";
 }
     
 }while(c<10);
 cout<<endl;
 c=0;

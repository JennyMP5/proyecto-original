#include <iostream>
using namespace std;
///Suma, Resta, Multiplicación y división de dos matrices de diez números 
int main() {
 int c=0; 
 float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1}; 
 float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1}; 
 float suma[10],resta[10],producto[10],division[10]; 

 //presentar primera matriz 
 //jennyffer Katherine Mina Preciado
cout<<"La matriz1 es: "<<endl;
 do{
 cout<<matriz1[c];
 c=c+1;
 if(c<10){
    cout<<" - ";
 }
     
 }while(c<10);
 cout<<endl;
 c=0;
 
 cout<<"la matriz2 es: "<<endl;
 do{
 cout<<matriz2[c];
 c=c+1;
 if(c<10){
    cout<<"  - ";
 }
     
 }while(c<10);
 cout<<endl;
 c=0;
 //Rosa Antonella Posso Becerra
 //Suma de la matriz1 y matriz2 
 
  cout<<"la matriz suma es:"<<endl<<"suma[10]=";
 do{
 cout<<matriz1[c]+matriz2[c];
 c=c+1;
 if(c<10){
    cout<<"  - ";
 }
     
 }while(c<10);
 cout<<endl;
 c=0;
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
 //Jenniffer Katherine Mina Preciado 
 //El compañero que le toco esta parte no se presento, ni mando mensajes con respecto al tema.
 //producto de la matriz1 y matriz2 
 
  cout<<"la matriz producto es:"<<endl<<"producto[10]=";
 do{
 cout<<matriz1[c]*matriz2[c];
 c=c+1;
 if(c<10){
    cout<<"  - ";
 }
     
 }while(c<10);
 cout<<endl;
 c=0;
 //Andrea Palacios Becerra
 //división de la matriz1 para la matriz2 
 
  cout<<"la matriz division es:"<<endl<<"division[10]=";
 do{
 cout<<matriz1[c]/matriz2[c];
 c=c+1;
 if(c<10){
    cout<<"  - ";
 }
     
 }while(c<10);
 cout<<endl;
 c=0;
    return 0;
}

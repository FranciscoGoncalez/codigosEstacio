#include <iostream>
using namespace std;

    
void lerVetor (int v[],int n){
    int i;     
   
    for(i=0;i<n;i++){
      cout<<"Digite o numero da posicao "<<i<<" do vetor: ";
      cin>>v[i];
}     
}

void exibeVetor (int v[],int n){

int i;         

cout<<"Vetor Recebido:\n";
    for(i=0;i<n;i++){
      cout<<v[i]<<"\n";
}
}

int main(void){

int v[5]; 

lerVetor (v,5);

exibeVetor (v,5);

system("pause");
return 0;
}

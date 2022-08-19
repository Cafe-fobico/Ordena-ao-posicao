#include <iostream>
using namespace std;

void exibe_vetor(int *vet, int qtd);
void ordena_isertion(int *vet, int qtd);
int main(int argc, char** argv){
int qtd;
cout<<"Insira a quantidade de elementos: \n";
cin>>qtd;
int *vet=new int[qtd];
for (int s=0; s<qtd; s++){
cout<<"Informe o "<<s+1<<" elemento:\n";
cin >> vet[s];
}
cout<<"Valores informados: \n ";
exibe_vetor(vet, qtd);
ordena_isertion(vet, qtd);
delete[] vet;
return 0;
}
void exibe_vetor(int *vet, int qtd){
for(int s=0; s< qtd; s++){
cout << "|"<< vet[s] <<"|\n";
}
}
void ordena_isertion(int *vet, int qtd){
int j, atual;
for(int s=1; s< qtd; s++){
atual=vet[s];
j = s - 1;
while( (j>= 0) && (atual<vet[j]) ){
vet[j+1]=vet[j];
j--;
}
vet[j+1]=atual;
}
cout<<"\nValores ordenados em ordem crescente: \n";
exibe_vetor(vet, qtd);
}


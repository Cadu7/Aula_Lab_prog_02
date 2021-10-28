#include <iostream>

using namespace std;

/*
int main(){
     
    int *pt, x;

    cout << "Endereço de pt: "<< pt << endl; 
    cin >> x;

    pt = &x;

    cout << "Conteudo de pt: "<< *pt << endl; 
    cout << "Endereço de x: "<< &x << endl; 

    *pt *= 10;
    cout << "Conteudo de pt: "<< *pt << endl; 
    return 0;
}*/
/*
void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){

    int x, y;
    cin >> x >> y;

    troca(&x, &y);

    cout << "Variaveis x e y " << x << " e " << y << endl;

    return 0;
}*/
/*
bool func(int tam, int vet[], int *par, int *impar, int *negativo){
    for (int i = 0; i < tam; i++){
        if(ver[i]%2==0){
            *par++;
        }else{
            *impar++;
        }
        if (ver[i]<0){
            *negativo++;
        }       
    }
    if (negativo>0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int p,im,neg;
    int vet[8]= {1,2,3,4,5,6,7,8,}, vet2[8]={1,-2,3,-4,5,-6,7,-8};
    
    if(func(8,vet,*p,*im,*neg)){
        cout << "Possui"<< neg << "elementos negativos;"<< endl;
    }else{
        cout << "Não possui numeros negativos" << endl ;
    }
    cout << "Possui" << p << "elementos negativos"<< endl;
}*/
/*
int main(){
    int n, soma = 0;
    float media = 0;

    cout << "Qual o tamanho do vetor? " << endl;
    cin >> n;

    int *vet = new int[n];

    for (int i = 0; i < n; i++){
        cout << "Digite um númeto: " << endl;
        cin >> vet[i];
        soma += vet[i];
    }

    media = (float) soma/n;

    cout <<"A média é de " << media << endl;

    delete[] vet;
}*/

float podEscalar(int n, float v[], float c[]){
    float prod = 0;
    for(int i =0 ; i<n ; i++){
        prod += (v[i]*c[i]);
    }
    return prod;
}

int main(){
    int n=0;
    cin >> n;
    float *v = new float[n], *c = new float[n];

     for (int i = 0; i < n; i++){
        cout << "Digite um númeto: " << endl;
        cin >> v[i];
    }
      for (int i = 0; i < n; i++){
        cout << "Digite um númeto: " << endl;
        cin >> c[i];
    }

    cout << "Produto escalar é " << prodEscalar(n,v,c) << endl;

    delete [] v, [] c;

}
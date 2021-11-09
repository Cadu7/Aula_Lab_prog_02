#include <iostream>

using namespace std;

int* alocacaoVet(int n){

    int *vet = new int[n];
    *(vet + 1 ) = 9 ;    
    *(vet + 2 ) = 8 ;
    *(vet + 3 ) = 7 ;

    return vet;
}

void troca( int *vet, int i, int j){

    *(vet + 0 ) = *(vet + i );    
    *(vet + i ) = *(vet + j );
    *(vet + j ) = *(vet + 0 );

}

void ordena(int *vet){

    if(*(vet+1)>*(vet+2)){
        troca(vet,1,2);
    }
     if(*(vet+2)>*(vet+3)){
        troca(vet,2,3);
    }
     if(*(vet+1)>*(vet+2)){
        troca(vet,1,2);
    }

}

int main(){
    int *vet = alocacaoVet(4);

    ordena(vet);

    int *pv = vet+1;
    cout << *pv << endl;
    
    pv++;
    cout << *pv << endl;
    
    pv++;
    cout << *pv << endl;

    return 0;
}




















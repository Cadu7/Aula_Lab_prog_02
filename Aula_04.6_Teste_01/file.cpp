#include <iostream>

using namespace std;

int totalConsoante(char str[], int n){

    if (n < 0){
        return 0;
    }else if (str[n] != 'a' && str[n] != 'e' && str[n] != 'i' && str[n] != 'o' && str[n] != 'u'){
        cout << "opa  " << str[n] << endl;
        int var = 1 + totalConsoante(str,n-1);
        cout << "Valor de var " << var << endl;
        return var;
    }else{
        return totalConsoante(str,n-1);
    }
}

int main(){

    int n;
    cout << "Digite o tamanho " << endl;
    cin >> n;

    char s[n];
    for(int i = 0 ; i < n ; i++){
        cin >> s[i];
    }

//    for(int i = 0 ; i <n ; i++){
//        cout << s[i];
//    }

    cout << totalConsoante( s , n) - 1;

    return 0;
}



// Atividade 01
//
//int* retornaMenor(int vet[], int n){
//    int *pt;
//    int aux = 10000000;
//
//    for (int i = 0 ; i < n ; i++) {
//        if(vet[i] < aux){
//            aux = vet[i];
//        }
//    }
//    *(vet+n-1) = aux;
//
//    return pt = &aux;
//
//}
//
//int main(){
//
//    int n;
//
//    cout << "Digite o tamanho do vetor " << endl;
//    cin >> n ;
//
//    int *vet = new int[n];
//
//    for (int i = 0 ; i < n ; i++) {
//        cout << "Digite um numero " << endl;
//        cin >> vet[i];
//    }
//
//    cout << "O valor do menor numero do vetor é "<<*retornaMenor(vet,n) << endl;
//
//    cout << "Os valores do vetor são : " << endl;
//     for (int i = 0 ; i < n ; i++) {
//        cout << vet[i] << " ";
//    }
//
//    delete[] vet;
//    return 0;
//}







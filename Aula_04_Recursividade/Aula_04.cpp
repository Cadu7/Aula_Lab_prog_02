#include <iostream>

using namespace std;

/*
int fatorial(int n){

    if (n== 0 || n == 1){
        return 1; 
    }else{
        return n* fatorial(n-1);
    } 
    

}

int main(){
    int n;
    cout << "Digite um valor" << endl;
    cin >> n;
    cout << "Fatorial de " << n << " = " << fatorial(n) << endl;

    return 0;
}*/
/*
void imprimeIntIter(int a, int b, int c){

    for (int i = a; i <= b; i+=c){
        cout << i << " ";
    }
    cout << endl;
}

void imprimeIntRec(int a, int b, int c){

    if(a <= b){
        cout << a << " ";
        imprimeIntRec(a+1,b,c);
    }

}    

int main(){

    imprimeIntIter(0,20,2);
    imprimeIntRec(0,20,1);

    return 0;
}*/

int mdc( int m, int n){

    if(m<n){
        return mdc(n,m);
    }else if( m%n == 0 ){
        return n;
    }else{
        return mdc(n, m%m);
    }

}

int main(){
    cout << mdc(14,5);
}














//#include "iostream"
//#include "ArvBin.h"
//#include "NoArv.h"
//
//using namespace std;
//
//ArvBin::ArvBin() {
//    raiz = NULL;
//}
//ArvBin::~ArvBin() {
//
//    libera(raiz);
//
//}
//
//void ArvBin::libera(NoArv *p) {
//
//    if ( p != NULL){
//        libera(p->getEsq());
//        libera(p->getDir());
//        delete p;
//    }
//}
//
//int ArvBin::getRaiz() {
//
//    if(raiz!=NULL){
//        return raiz->getInfo();
//    }else{
//        cout << "Árvore vazia" << endl;
//        exit(1);
//    }
//
//}
//
//bool ArvBin::vazia() {
//
//    return raiz == NULL;
//
//}
//
//void ArvBin::cria(int valor, ArvBin *sae, ArvBin *sad) {
//
//    NoArv *p = new NoArv();
//    p->setInfo(valor);
//    p->setEsq(sae->raiz);
//    p->setDir(sad->raiz);
//    raiz = p;
//
//}
//
//void ArvBin::imprime() {
//
//    auxImprime(raiz);
//
//}
//void ArvBin::auxImprime(NoArv *raiz){
//
//    if ( raiz != NULL){
//        cout<< raiz->getInfo() << "   ";
//        auxImprime(raiz->getEsq());
//        auxImprime(raiz->getDir());
//
//    }
//
//}
//
//bool ArvBin::busca(int valor) {
//
//    return auxBusca( raiz , valor);
//
//}
//
//bool ArvBin::auxBusca(NoArv *p ,int valor) {
//
//    if (p == NULL){
//        return false;
//    }else if(p->getInfo() == valor){
//        return true;
//    } else if(auxBusca(p->getEsq(),valor)){
//        return true;
//    } else{
//        return auxBusca(p->getEsq(),valor);
//    }
//
//}
//
//void ArvBin::anulaRaiz()
//{
//    raiz = NULL;
//}
//
//void ArvBin::montaArvore()
//{
//    if(!vazia())
//        cout << "Arvore jah montada. So eh possivel a insercao de nos." << endl;
//    else
//    {
//        cout << "Montagem da arvore em pre-ordem:" << endl;
//        raiz = auxMontaArvore();
//    }
//}
//
////NoArv* ArvBin::auxMontaArvore()
////{
////    string linha;
////    cout << "Valor: ";
////    cin >> linha;
////    if(linha != "NULL" && linha != "null")
////    {
////        istringstream ent(linha);
////        int valor;
////        ent >> valor;
////        NoArv *p = new NoArv();
////        p->setInfo(valor);
////        cout << "Esquerda" << endl;
////        p->setEsq(auxMontaArvore());
////        cout << "Volta no noh " << p->getInfo() << endl;
////        cout << "Direita" << endl;
////        p->setDir(auxMontaArvore());
////        cout << "Volta no noh " << p->getInfo() << endl;
////        return p;
////    }
////    else
////        return NULL;
////}
//
//void ArvBin::insere(int x)
//{
//    raiz = auxInsere(raiz, x);
//}
//
//NoArv* ArvBin::auxInsere(NoArv *p, int x)
//{
//    if(p == NULL)
//    {
//        p = new NoArv();
//        p->setInfo(x);
//        p->setEsq(NULL);
//        p->setDir(NULL);
//    }
//    else
//    {
//        char direcao;
//        cout << x << " a esquerda (e) ou direita (d) de " << p->getInfo() << ": ";
//        cin >> direcao;
//        if(direcao == 'e' || direcao == 'E')
//            p->setEsq(auxInsere(p->getEsq(), x));
//        else
//            p->setDir(auxInsere(p->getDir(), x));
//    }
//    return p;
//}
//
//bool ArvBin::vazia()
//{
//    return (raiz == NULL);
//}
//
//bool ArvBin::busca(int x)
//{
//    return auxBusca(raiz, x);
//}
//
//bool ArvBin::auxBusca(NoArv *p, int x)
//{
//    if (p == NULL)
//        return false;
//    else if (p->getInfo() == x)
//        return true;
//    else if (auxBusca(p->getEsq(), x))
//        return true;
//    else
//        return auxBusca(p->getDir(), x);
//}
//
//
//NoArv* ArvBin::libera(NoArv *p)
//{
//    if (p != NULL)
//    {
//        p->setEsq(libera(p->getEsq()));
//        p->setDir(libera(p->getDir()));
//        delete p;
//        p = NULL;
//    }
//    return NULL;
//}
//
//void ArvBin::preOrdem()
//{
//    cout << "Arvore Binaria em Pre-Ordem: ";
//    auxPreOrdem(raiz);
//}
//
//void ArvBin::auxPreOrdem(NoArv *p)
//{
//    if (p != NULL)
//    {
//        cout << p->getInfo() << " ";
//        auxPreOrdem(p->getEsq());
//        auxPreOrdem(p->getDir());
//    }
//}
//
//int ArvBin::contaNos()
//{
//    return auxContaNos(raiz);
//}
//
//int ArvBin::auxContaNos(NoArv *p)
//{
//    if(p == NULL)
//        return 0;
//
//    return auxContaNos(p->getEsq()) + auxContaNos(p->getDir()) + 1;
//}
//
//int ArvBin::contaNosFolhas()
//{
//    return auxContaNosFolhas(raiz);
//}
//
//int ArvBin::auxContaNosFolhas(NoArv *p)
//{
//    if(p == NULL)
//        return 0;
//
//    int total = auxContaNosFolhas(p->getEsq()) + auxContaNosFolhas(p->getDir());
//    if(p->getEsq() == NULL && p->getDir() == NULL)
//        total++;
//    return total;
//}
//
//int ArvBin::altura()
//{
//    return auxAltura(raiz);
//}
//
//int ArvBin::auxAltura(NoArv *p)
//{
//    if(p == NULL)
//        return -1;
//
//    int he = auxAltura(p->getEsq());
//    int hd = auxAltura(p->getDir());
//    if(he > hd)
//        return he+1;
//    else
//        return hd+1;
//}
//
//int ArvBin::contaImpar()
//{
//    return auxContaImpar(raiz);
//}
//
//int ArvBin::auxContaImpar(NoArv *p)
//{
//    if(p == NULL)
//        return 0;
//
//    int total = auxContaImpar(p->getEsq()) + auxContaImpar(p->getDir());
//    if(p->getInfo() % 2 == 1)
//        total++;
//    return total;
//}
//
//void ArvBin::imprimeNivel(int k)
//{
//    auxImpNivel(raiz, k);
//}
//
//void ArvBin::auxImpNivel(NoArv *p, int k)
//{
//    if(p != NULL && k >= 0)
//    {
//        if(k == 0)
//            cout << p->getInfo() << " ";
//
//        auxImpNivel(p->getEsq(), k-1);
//        auxImpNivel(p->getDir(), k-1);
//    }
//}
//
//float ArvBin::mediaNivel(int k)
//{
//    int soma = 0, cont = 0;
//    auxMediaNivel(raiz, k, &soma, &cont);
//    if(cont > 0)
//        return soma / (float)cont;
//    else
//        return 0;
//}
//
//void ArvBin::auxMediaNivel(NoArv *p, int k, int *soma, int *cont)
//{
//    if(p != NULL && k >= 0)
//    {
//        if(k == 0)
//        {
//            *soma = *soma + p->getInfo();
//            (*cont)++;
//        }
//
//        auxMediaNivel(p->getEsq(), k-1, soma, cont);
//        auxMediaNivel(p->getDir(), k-1, soma, cont);
//    }
//}
//
//int ArvBin::min()
//{
//    if(raiz == NULL)
//    {
//        cout << "Arvore vazia!";
//        exit(1);
//    }
//
//    int menor = raiz->getInfo();
//    auxMin(raiz, &menor);
//    return menor;
//}
//
//void ArvBin::auxMin(NoArv *p, int *menor)
//{
//    if(p != NULL)
//    {
//        if(p->getInfo() < *menor)
//            *menor = p->getInfo();
//
//        auxMin(p->getEsq(), menor);
//        auxMin(p->getDir(), menor);
//    }
//}
//
//
//
//
//
//
//
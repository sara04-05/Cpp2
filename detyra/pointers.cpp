// // Të shkruhet kodi sipas kërkesave në vijim:

// // Të deklarohet një numër jo i plotë me emrin a.
// // Të deklarohet një pointer, i cili si vlerë merr adresën e variablës a.
// // Të deklarohet një pointer i dyfishtë, i cili në fillim është i pa-inicializuar.
// // Përmes pointerit të dyfishtë t'i caktohet vlera variablës a, duke u nisur nga pikat paraprake të detyrës.
// // Të printohet vlera e variablës a.

#include <iostream>
using namespace std;

int main(){
  
    int a;
    int* ptr_a = &a;
    int** ptr2;

    ptr2 = &ptr_a;

    **ptr2 = 2;
   

    cout<< "Vlera e variables a eshte:" << a;

    return 0;    
}

// Të shkruhet programi sipas kërkesave në vijim:

// Të definohet funksioni faktorieli, i cili kalkulon faktorielin e një numri të pranuar si parametër.
// Funksioni i definuar në pikën a, të kthej rezultatin për numrin e dhënë përmes një parametri pointer.
// Brenda funksionit main, të thirret funksioni faktorieli me parametrat e nevojshëm.
// Brenda funksionit main, të printohet rezultati për faktorielin e kalkuluar.

#include <iostream>
using namespace std;

void faktorieli(int n, int *ptr_f){
    int faktorieli = 1;

    for(int i = 1; i<=n; i++){
        faktorieli *=i;

        *ptr_f = faktorieli;
    };
};

int main(){
    int rezultati;

   faktorieli(5, &rezultati);

   cout<< rezultati;
    return 0;    
}


// Të definohet funksioni katrori, i cili kalkulon katrorin e një numri të pranuar si parametër.
// Funksioni duhet ta kthejë rezultatin përmes një parametri pointer.
// Brenda funksionit main, të thirret funksioni katrori me parametrat e nevojshëm.
// Brenda funksionit main, të printohet rezultati.

#include <iostream>
using namespace std;

void katrori(int numri, int katrori, int *ptr_f){
        int rezultati=1;
    for(int i=1; i <= katrori; i++){
        rezultati *=numri;
    };
    *ptr_f = rezultati;
}

int main(){

    int rez;

    katrori(2,2,&rez);

    cout<< rez;

    return 0;
}

// Të definohet funksioni shuma, i cili kalkulon shumën e numrave nga 1 deri në n.
// Numri n pranohet si parametër.
// Funksioni duhet ta kthejë rezultatin përmes një parametri pointer.
// Brenda funksionit main, të thirret funksioni shuma.
// Brenda funksionit main, të printohet rezultati.

#include <iostream>
using namespace std;

void shuma(int n, int *ptr_r){
    int rez=0;
    for(int i=1; i<=n;i++){
        rez+=i;
    }
    *ptr_r = rez;
};

int main(){

 int sum;
 shuma(5, &sum);

cout<< sum;

 return 0;
}

// Të definohet funksioni maksimumi, i cili pranon dy numra si parametra.
// Funksioni duhet të gjejë numrin më të madh.
// Rezultati duhet të kthehet përmes një parametri pointer.
// Brenda funksionit main, të thirret funksioni maksimumi.
// Brenda funksionit main, të printohet numri më i madh.

#include <iostream>
using namespace std;

void maks(int n, int m, int *ptr_m){
    int maks_num;
    if(n<m){
        maks_num=m;
    }else{
        maks_num=n;
    };   
    *ptr_m = maks_num;
;}

int main(){

    int rezultati;

    maks(1,2,&rezultati);
    cout<<rezultati;
 
 return 0;
}
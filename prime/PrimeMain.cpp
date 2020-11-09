//
//  main.cpp
//  EsInClasse
//
//  Created by Roberto Ceola on 09/11/2020.
// sup che chide un numero all'utente e determina se è primo o no

#include <iostream>
#include "prime.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cout <<"inserisci il numero "<<endl;
    cin >> n;
    bool check;
    check= primeEvolution (n);
    if(check==true)
        cout<<"il numero è primo"<<endl;
    else cout<<"il numero non è primo"<<endl;
    
    return 0;
}

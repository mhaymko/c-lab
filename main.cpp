//
//  main.cpp
//  429
//
//  Created by Hayman Ko on 3/5/25.
//

#include <iostream>
using namespace std;

int main() {
//    for ( int i = 1 ; i <= 8 ; i++ ) {
//        for ( int j = 1 ; j <= 8 ; j++ ) {
//            cout << "* " ;
//            
//        } cout << endl;
//        if ( i % 2){
//            cout << " ";
//        }
//    }
    
    
    for ( int i = 1 ; i <= 8 ; i++) {
        if (i % 2)
            cout << " ";
        for ( int j = 1 ; j <= 8 ; j++){
            cout << "* ";
        }cout << endl;
    }
    
}

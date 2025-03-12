//
//  main.cpp
//  425
//
//  Created by Hayman Ko on 3/4/25.
//

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 8;
    
    //a
    
if ( y == 8){
    if ( x == 5){
        cout << "@@@@@" << endl;
    }
    else {
        cout << "#####" << endl;
        }
cout << "$$$$$" << endl;
cout << "&&&&&" << endl;
    }

    
    
    
    cout << '\n' ;
    
    // b
    
    if ( y == 8)
        if ( x == 5) {
            cout << "@@@@@" << endl;
        } else {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
            cout << "&&&&&" << endl;
        }
    
    cout << '\n';
    
    // c
    
    if ( y == 8)
        if ( x == 5) {
            cout << "@@@@@" << endl;
            
        } else {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
        }
    cout << "&&&&&" << endl;
        
            
    cout << '\n';
            
    // d
         
    x = 5;
    y = 7;
            
    if ( y == 8){
        if ( x == 5)
            cout << "@@@@@" << endl;
        }
    else
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
        cout << "&&&&&" << endl;
            
        
}

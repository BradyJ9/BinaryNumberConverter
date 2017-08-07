//
//  main.cpp
//  Binary Number Converter
//
//  Created by Brady Bess on 7/23/17.
//  Copyright © 2017 Brady Bess. All rights reserved.
//
#include "BinaryConverter.h"
#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

int main() {
    
    BinaryConverter instance;
    
    
    int menuOption;
    
    do {
        
        cout << "Binary Converter" << endl;
        cout << endl;
        cout << "1- Convert To Binary" << endl;
        cout << "2- Convert From Binary" << endl;
        cout << "3- Quit" << endl;
        cin >> menuOption;
        cout << endl;
        
        if (menuOption < 1 || menuOption > 3) {
            cout << "Invalid Selection, try again" << endl;
            cout << endl;
        }
        
        if (menuOption == 1) {
            
            int numToConv;
            
            cout << "CONVERT NUMBER TO BINARY" << endl;
            cout << endl;
            cout << "Enter positive integer to convert" << endl;
            cin >> numToConv;
            cout << endl;
            
            while (numToConv < 0) {
                cout << "Please enter a positive integer" << endl;
                cin >> numToConv;
            }
            
            cout << "BINARY CONVERSION: " << endl;
            cout << instance.decimalToBinary(numToConv) << endl;
            cout << endl;
        }
        
        if (menuOption == 2) {
            
            bool legalNum = true;
            string binaryToConv;
            
            cout << "CONVERT BINARY TO INTEGER" << endl;
            cout << endl;
            cout << "Enter Binary to convert, 1s and 0s only" << endl;
            cin >> binaryToConv;
            cout << endl;
            
            for (unsigned int i = 0; i < binaryToConv.length(); i++) {
                if (binaryToConv[i] != '1' && binaryToConv[i] != '0') {
                    cout << "ILLEGAL CHARACTER DETECTED, PLEASE ONLY ENTER 1s AND 0s" << endl;
                    cout << endl;
                    cout << "Returning to Main Menu" << endl;
                    cout << endl;
                    legalNum = false;
                    break;
                }
            }
            
            if (legalNum) {
                cout << "DECIMAL CONVERSION: " << endl;
                cout << instance.binaryToDecimal(binaryToConv) << endl;
                cout << endl;
            }
            
        }
        
    } while (menuOption != 3);
    
    cout << "Quit" << endl;
    return 0;
    
    
}

//
//  BinaryConverter.cpp
//  Binary Number Converter
//
//  Created by Brady Bess on 7/23/17.
//  Copyright © 2017 Brady Bess. All rights reserved.
//
#include "BinaryConverter.h"
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

BinaryConverter::BinaryConverter() {
    
}

string BinaryConverter::decimalToBinary(int numToConvert) {
    string convertedBinaryNumber;
    int numLength = findBinaryNumberLength(numToConvert); //numLength is how many binary digits will be in conversion
    int numCopy = numToConvert;
    
    for (unsigned int i = numLength; i > 0; --i) {

        if (numCopy >= pow(2.0, i - 1)) {
            
            numCopy -= pow(2.0, i - 1);
            convertedBinaryNumber += "1";
        } else {
            convertedBinaryNumber += "0";
        }
    }
    
    return convertedBinaryNumber;
    
}

int BinaryConverter::findBinaryNumberLength(int num) { //finds how many binary digits will be in conversion
    
    int compare = 0;
    int length = 0;
    
    while (num >= compare) {
        ++length;
        compare = pow(2.0, length);
    }
    
    return length;
    
}

string BinaryConverter::binaryToDecimal(string numToConvert) {
    int convertedDecimal = 0;
    for (unsigned int i = 0; i < numToConvert.length(); ++i) {
       if (numToConvert[i] == '1') {
            convertedDecimal += pow(2.0, numToConvert.length() - 1 - i);
       }
        
    }
    return to_string(convertedDecimal);
}

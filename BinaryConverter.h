//
//  BinaryConverter.h
//  Binary Number Converter
//
//  Created by Brady Bess on 7/23/17.
//  Copyright © 2017 Brady Bess. All rights reserved.
//

#ifndef BinaryConverter_h
#define BinaryConverter_h
#include <string>
using namespace std;

class BinaryConverter {
private:
public:
    BinaryConverter();
    string decimalToBinary(int numToConvert);
    int findBinaryNumberLength(int num);
    string binaryToDecimal(string numToConvert);
};


#endif /* BinaryConverter_h */

//
//  main.cpp
//  Practice_code
//
//  Created by hambarkh on 22/03/15.
//  Copyright (c) 2015 Akola. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    if (argc != 2) {
        cout << "Give filenmae! Exiting\n" ;
    }
    
    string data;
    ifstream inFile;
    //inFile.open("/Users/hambarkh/Desktop/hitesh/XCode/Count_lines/Count_lines/sample.txt");
    inFile.open(argv[1]);
    unsigned int lCount;
    char c;
    while (inFile.get(c)) {
        lCount++;
    }
    cout << "File size = " << lCount << endl;
    // get length of file:
    long begin, end;
    inFile.close();
    
    //inFile.open("/Users/hambarkh/Desktop/hitesh/XCode/Count_lines/Count_lines/sample.txt");
    inFile.open(argv[1]);
    begin = inFile.tellg();
    inFile.seekg (0, ios::end);
    end = inFile.tellg();
    cout << "File size = " << end-begin << " begin = "<< begin << " end = " << end << endl ;
    inFile.close();
    
    //inFile.open("/Users/hambarkh/Desktop/hitesh/XCode/Count_lines/Count_lines/sample.txt");
    inFile.open(argv[1]);
    inFile.seekg (0, inFile.end);
    long length = inFile.tellg();
    cout << "File size = " << length << endl;
    inFile.close();
    
    return 0;
}

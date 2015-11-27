//
//  main.cpp
//  Prep
//
//  Created by Saber Shokat Fadaee on 2/26/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class HashEntry {
private:
    int key;
    int value;
public:
    HashEntry(int key, int value) {
        this->key = key;
        this->value = value;
    }
    
    int getKey() {
        return key;
    }
    
    int getValue() {
        return value;
    }
};

typedef struct node                                                
{                                                               
    int data;               // will store information
    node *next;             // the reference to the next node
};

vector<string> SS;


int main()
{
    HashEntry hs(2,3);
    cout << hs.getValue() << endl;
    node *temp;
   // temp->data = 5;
    
    SS.push_back("The number is 10");

    for(int ii=0; ii < SS.size(); ii++)       
    {
        cout << SS[ii] << endl;
    }
    cout << endl << "Reverse Iterator:" << endl;
    
    vector<string>::reverse_iterator rii;
    for(rii=SS.rbegin(); rii!=SS.rend(); ++rii)
    {
        cout << *rii << endl;
    }
    
    cout << endl << "Constant Iterator:" << endl;
    vector<string>::const_iterator cii;
    for(cii=SS.begin(); cii!=SS.end(); cii++)
    {
        cout << *cii << endl;
    }
    
    vector< vector<int> > vI2Matrix(3, vector<int>(2,0));   
    
    cout << (1 << 10) << endl;

    return 0;
}

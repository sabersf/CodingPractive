//
//  main.cpp
//  Internship Prep
//
//  Created by Saber Shokat Fadaee on 2/11/13.
//  Copyright (c) 2013 Saber Shokat Fadaee. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>  
#include <vector>
#include <queue>
#include <stack>
#include <sstream>
#define swap(x,y) (x^=y,y^=x,x^=y)

using namespace std;
const int MAXN = 4;
int m[MAXN], cnt;


void print(){
    cnt++;
    for (int i=0;i<MAXN;i++)
        cout << m[i] << " ";
    cout << endl;
}

void recurse(int num){
    //cout << num << endl;
    if (num == MAXN){
        print();
    }
    else{
        recurse(num+1);
        for (int j=num+1;j<MAXN;j++){
            swap(m[num],m[j]);
            recurse(num+1);
            swap(m[num],m[j]);
        }
    }
}

int main(int argc, const char * argv[])
{
    cnt = 0;
    for (int i=0;i<MAXN;i++)
        m[i] = i;
    //recurse(0);
    swap(m[0],m[2]);
    cout << m[0] << endl;
    cout << "HI THIS IS SABER" << endl;
    //cout << j + " s " << endl;
    int test[10][20];
    cout << "SIZE" << sizeof(test)/sizeof(test[0][0]) << endl;
    // insert code here...
    cout << cnt << endl;
    return 0;
}

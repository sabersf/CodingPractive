//
//  main.cpp
//  Prep 2
//
//  Created by Saber Shokat Fadaee on 12/20/12.
//  Copyright (c) 2012 Saber Shokat Fadaee. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
#include <queue>
using namespace std;
int main(int argc, const char * argv[])
{
    cout << (1<<10) << endl;
    vector<vector<int>> v(3, vector<int>(2,5));
    v[2].push_back(3);
    for (int i=0;i<3;i++){
        cout << v[i].size();
        cout << endl;
    }
    string s;
    s= "Saber";
    cout << " HI " <<  (10 << 1) << endl;

    int ii = 5;
    string str = to_string(ii);
    str = str + str;
    cout << str<< endl;
    stringstream ss;
    ss << str;
    ss >> ii;
    cout << ii+10 << endl;
    cout << ss.str() << endl;
    return 0;
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tmiller
 *
 * Created on November 7, 2017, 1:25 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int a = 8, b = 0, c = 0; 
    cin >> b;
    try {
        if(b == 0.0)
        {
            throw string("Your input is not valid, you can't divide by zero.");
        }
    c = a / b; }
    catch(string &problem)
    {
        cout << problem << endl;
    }
    cout << c << endl;
    return 0;
}


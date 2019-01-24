//
//  Controller.cpp
//  FirstClass
//
//  Created by Mumford, Ethan on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    this-> specialNumber = 80;
}
void Controller:: start()
{
    cout << "This is in the start method" << endl;
    cout << "Peanut butter Jelly Time" << specialNumber<< " Aye yeaah" << endl;
    string input;
    cout << "Type your name"<< endl;
    getline(cin, input);
    cout << input << endl;
    cout << "Isn't it weird that the program exit code line pops up before??"<< endl;
    cout << "Type in a number"<< endl;
    cin >> specialNumber;
    cout << "Here is the number you typed: "<< specialNumber<< endl;
}

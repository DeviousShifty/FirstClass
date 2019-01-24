//
//  Runner.cpp
//  FirstClass
//
//  Created by Mumford, Ethan on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//
#include "Controller.hpp"
int main()
{
  //  Controller myFirstController;
 //   myFirstController.start();
 
    //Pointer version
    Controller * myPointer = new Controller();
    myPointer->start();

    
    return 0;
}

//
//  runner.cpp
//  vector
//
//  Created by Thomas, Gavin on 6/3/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

int main()
{
    // Controller app;
    //app.start();
    
    //pointer version
    Controller * app = new Controller();
    app -> start();
    return 0;
}

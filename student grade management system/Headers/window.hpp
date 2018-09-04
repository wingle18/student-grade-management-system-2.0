//
//  window.hpp
//  student grade management system
//
//  Created by 常镇南 on 2018/8/22.
//  Copyright © 2018年 常镇南. All rights reserved.
//

#ifndef window_hpp
#define window_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class window
{
protected:
    string welcome;
    string menu[5];
public:
    window();
    window(string choose);
    ~window();
    void Display();
};


#endif /* window_hpp */

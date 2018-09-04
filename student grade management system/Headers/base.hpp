//
//  base.hpp
//  student grade management system
//
//  Created by 常镇南 on 2018/8/22.
//  Copyright © 2018年 常镇南. All rights reserved.
//

#ifndef base_hpp
#define base_hpp

#include <stdio.h>
#include <string>
using namespace std;
class base
{
public:
    base();
    ~base();
    virtual void Display() const = 0;
    virtual string Get_number() const = 0;
    virtual string Get_info() const = 0;
};

#endif /* base_hpp */

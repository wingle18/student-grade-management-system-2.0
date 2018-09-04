//
//  grade.hpp
//  student grade management system
//
//  Created by 常镇南 on 2018/8/22.
//  Copyright © 2018年 常镇南. All rights reserved.
//

#ifndef grade_hpp
#define grade_hpp

#include <stdio.h>
#include <string>
using namespace std;

string Get_grade(const string &score);
string Get_gp(const string &score);
bool string_is_number(const string &a);
bool yes_or_no();

#endif /* grade_hpp */

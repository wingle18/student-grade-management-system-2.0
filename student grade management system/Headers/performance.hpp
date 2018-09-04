//
//  performance.hpp
//  student grade management system
//
//  Created by 常镇南 on 2018/8/22.
//  Copyright © 2018年 常镇南. All rights reserved.
//

#ifndef performance_hpp
#define performance_hpp

#include <stdio.h>
#include "course.hpp"
#include "student.hpp"
#include "grade.hpp"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class performance :
public course, public student
{
protected:
    string score, grade, gp;
public:
    performance();
    performance(const course &c, const student &stu, const string &s);
    ~performance();
    void Set(const string &score);
    void Set(const course &c, const string &score);
    void Set(const student &s, const string &score);
    void Display() const;
    void Display_by_course() const;
    void Display_by_student() const;
    string Get_number() const;
    string Get_info() const;
    performance operator =(const performance &p1);
    friend bool operator ==(const performance &p1, const performance &p2);
};

#endif /* performance_hpp */

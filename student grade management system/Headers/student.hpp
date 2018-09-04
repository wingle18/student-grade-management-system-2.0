//
//  student.hpp
//  student grade management system
//
//  Created by 常镇南 on 2018/8/22.
//  Copyright © 2018年 常镇南. All rights reserved.
//

#ifndef student_hpp
#define student_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "base.hpp"
#include "template.h"
using namespace std;
class student :
virtual public base
{
protected:
    string student_name;
    string student_id;
public:
    student();
    student(const string &id, const string &name);
    student(const student &s);
    virtual ~student();
    void Set_student(const string &name, const string &id);
    void Display() const;
    string Get_number() const;
    string Get_name() const;
    string Get_info() const;
    student operator =(const student &s);
    friend bool operator == (const student &c1, const student &c2);
};

#endif /* student_hpp */

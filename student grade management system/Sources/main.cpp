//
//  main.cpp
//  student grade management system
//
//  Created by 常镇南 on 2018/8/22.
//  Copyright © 2018年 常镇南. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "base.hpp"
#include "course.hpp"
#include "student.hpp"
#include "grade.hpp"
#include "performance.hpp"
#include "window.hpp"
#include "template.h"
#include "tree.hpp"
using namespace std;
int main()
{
    vector<course>cour;
    vector<student>stu;
    vector<performance>per;
    string choose = "0";
    
    f_0(cour, stu, per, choose);
    //system("pause");
    return 0;
}


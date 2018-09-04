//
//  tree.hpp
//  student grade management system
//
//  Created by 常镇南 on 2018/8/22.
//  Copyright © 2018年 常镇南. All rights reserved.
//

#ifndef tree_hpp
#define tree_hpp

#include <stdio.h>
#include<iostream>
#include<string>
#include"course.hpp"
#include"student.hpp"
#include"performance.hpp"
#include"window.hpp"
#include"template.h"
using namespace std;

inline void returnMenu(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);

void f_0(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_01(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_02(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_03(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_04(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_011(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_012(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_013(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_0131(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_0132(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_021(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_022(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_023(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_031(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_032(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_033(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_041(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_042(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);
void f_043(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose);

#endif /* tree_hpp */

//
//  performance.cpp
//  student grade management system
//
//  Created by 常镇南 on 2018/8/22.
//  Copyright © 2018年 常镇南. All rights reserved.
//

#include "performance.hpp"
performance::performance()
{
}

performance::performance(const course &c, const student &stu, const string &s) : course(c), student(stu)
{
    score = s;
    grade = Get_grade(score);
    gp = Get_gp(score);
}

performance::~performance()
{
}

void performance::Set(const string & score)
{
    this->score = score;
    grade = Get_grade(score);
    gp = Get_gp(score);
}

void performance::Set(const course & c, const string & score)
{
    course_number = c.course_number;
    course_name = c.course_name;
    credit = c.credit;
    teacher_name = c.teacher_name;
    this->score = score;
    grade = Get_grade(score);
    gp = Get_gp(score);
}

void performance::Set(const student & s, const string & score)
{
    student_name = s.Get_number();
    student_id = s.Get_name();
    this->score = score;
    grade = Get_grade(score);
    gp = Get_gp(score);
}

void performance::Display() const
{
    std::cout << "课程序号：" << course_number << endl
    << "课程名：" << course_name << endl
    << "学分：" << credit << endl
    << "教师姓名：" << teacher_name << endl << endl
    << "学生学号：" << student_id << endl
    << "学生姓名：" << student_name << endl << endl
    << "课程分数：" << score << endl
    << "等第：" << grade << endl
    << "绩点：" << gp << endl;
}

void performance::Display_by_course() const
{
    std::cout<<endl;
    cout.width(4);
    std::cout<<course_number;
    cout.width(8);
    std::cout<<course_name;
    cout.width(5);
    std::cout<<credit;
    cout.width(6);
    std::cout<<score;
    cout.width(4);
    std::cout<<grade;
    cout.width(5);
    std::cout<<gp;
}

void performance::Display_by_student() const
{
    std::cout<<endl;
    cout.width(4);
    std::cout<<student_id;
    cout.width(6);
    std::cout<<student_name;
    cout.width(6);
    std::cout<<score;
    cout.width(4);
    std::cout<<grade;
    cout.width(5);
    std::cout<<gp;
}

string performance::Get_number() const
{
    return (course_number + student_id);
}

string performance::Get_info() const
{
    return course::Get_info() + ',' + student::Get_info();
}

performance performance::operator=(const performance & p1)
{
    return performance(p1);
}

bool operator==(const performance & p1, const performance & p2)
{
    if (p1.Get_info() == p2.Get_info())
        return 1;
    else
        return 0;
}

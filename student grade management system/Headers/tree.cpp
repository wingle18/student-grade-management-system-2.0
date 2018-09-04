//
//  tree.cpp
//  student grade management system
//
//  Created by 常镇南 on 2018/8/22.
//  Copyright © 2018年 常镇南. All rights reserved.
//

#include "tree.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "course.hpp"
#include "student.hpp"
#include "performance.hpp"
#include "window.hpp"
#include "template.h"
#include "grade.hpp"

using namespace std;

inline void returnMenu(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    std::string temp;
    std::cout << "Press 'R' to return to menu. ";
    std::cin >> temp;
    while (std::cin.fail() || (temp != "r"&&temp != "R"))
    {
        std::cout << "请重新输入：";
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cin >> temp;
    }
    choose = "0";
    f_0(cour, stu, per, choose);
}

void f_0(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    window win(choose);
    win.Display();
    std::string temp;
    std::cin >> temp;
    while (std::cin.fail() || (temp != "1"&&temp != "2"&&temp != "3"&&temp != "4"&&temp != "5"))
    {
        std::cout << "请重新输入：";
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cin >> temp;
    }
    choose = choose + temp;
    if (temp == "1")
        f_01(cour, stu, per, choose);
    else if (temp == "2")
        f_02(cour, stu, per, choose);
    else if (temp == "3")
        f_03(cour, stu, per, choose);
    else if (temp == "4")
        f_04(cour, stu, per, choose);
    else
        exit(0);
}

void f_01(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    window win(choose);
    win.Display();
    std::string temp;
    std::cin >> temp;
    while (std::cin.fail() || (temp != "1"&&temp != "2"&&temp != "3"&&temp != "4"&&temp != "5"))
    {
        std::cout << "请重新输入：";
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cin >> temp;
    }
    choose = choose + temp;
    if (temp == "1")
        f_011(cour, stu, per, choose);
    else if (temp == "2")
        f_012(cour, stu, per, choose);
    else if (temp == "3")
        f_013(cour, stu, per, choose);
    else if (temp == "4")
    {
        choose = "0";
        f_0(cour, stu, per, choose);
    }
}

void f_02(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    window win(choose);
    win.Display();
    std::string temp;
    std::cin >> temp;
    while (cin.fail() || (temp != "1"&&temp != "2"&&temp != "3"&&temp != "4"&&temp != "5"))
    {
        std::cout << "请重新输入：" ;
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cin >> temp;
    }
    choose = choose + temp;
    if (temp == "1")
        f_021(cour, stu, per, choose);
    else if (temp == "2")
        f_022(cour, stu, per, choose);
    else if (temp == "3")
        f_023(cour, stu, per, choose);
    else if (temp == "4")
    {
        choose = "0";
        f_0(cour, stu, per, choose);
    }
    
}

void f_03(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    window win(choose);
    win.Display();
    std::string temp;
    std::cin >> temp;
    while (std::cin.fail() || (temp != "1"&&temp != "2"&&temp != "3"&&temp != "4"&&temp != "5"))
    {
        std::cout << "请重新输入：" ;
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cin >> temp;
    }
    choose = choose + temp;
    if (temp == "1")
        f_031(cour, stu, per, choose);
    else if (temp == "2")
        f_032(cour, stu, per, choose);
    else if (temp == "3")
        f_033(cour, stu, per, choose);
    else if (temp == "4")
    {
        choose = "0";
        f_0(cour, stu, per, choose);
    }
}

void f_04(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    window win(choose);
    win.Display();
    std::string temp;
    std::cin >> temp;
    while (std::cin.fail() || (temp != "1"&&temp != "2"&&temp != "3"&&temp != "4"&&temp != "5"))
    {
        std::cout << "请重新输入：";
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cin >> temp;
    }
    choose = choose + temp;
    if (temp == "1")
        f_041(cour, stu, per, choose);
    else if (temp == "2")
        f_042(cour, stu, per, choose);
    else if (temp == "3")
        f_043(cour, stu, per, choose);
    else if (temp == "4")
    {
        choose = "0";
        f_0(cour, stu, per, choose);
    }
}

void f_011(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    for(;;)
    {
        system("cls");
        string course_num, course_name, credit, teacher_name;
        std::cout << "请输入课程序号：";
        std::cin >> course_num;
        while (std::cin.fail() || !string_is_number(course_num))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> course_num;
        }
        std::cout << "请输入课程名：";
        std::cin >> course_name;
        while (std::cin.fail())
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> course_name;
        }
        std::cout << "请输入学分：";
        std::cin >> credit;
        while (std::cin.fail() || !string_is_number(credit))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> credit;
        }
        std::cout << "请输入教师姓名：";
        std::cin >> teacher_name;
        while (std::cin.fail())
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> teacher_name;
        }
        cour.push_back(course(course_num, course_name, credit, teacher_name));
        std::cout << "录入成功！是否继续录入？[Y/N]";
        if (!yes_or_no())
            break;
    }
    Sync(cour, "course.txt");
    returnMenu(cour, stu, per, choose);
}

void f_012(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    for(;;)
    {
        system("cls");
        std::string student_id, student_name;
        std::cout << "请输入学号：";
        std::cin >> student_id;
        while (std::cin.fail() || !string_is_number(student_id))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> student_id;
        }
        std::cout << "请输入学生姓名：";
        std::cin >> student_name;
        while (std::cin.fail())
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> student_name;
        }
        stu.push_back(student(student_id, student_name));
        std::cout << "录入成功！是否继续录入？[Y/N]";
        if (!yes_or_no())
            break;
    }
    Sync(stu, "student.txt");
    returnMenu(cour, stu, per, choose);
}

void f_013(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    window win(choose);
    win.Display();
    std::string temp;
    std::cin >> temp;
    while (std::cin.fail() || (temp != "1"&&temp != "2"&&temp != "3"))
    {
        std::cout << "请重新输入：";
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cin >> temp;
    }
    if (temp == "1")
    {
        choose = "0131";
        f_0131(cour, stu, per, choose);
    }
    else if (temp == "2")
    {
        choose = "0132";
        f_0132(cour, stu, per, choose);
    }
    
    else if (temp == "3")
    {
        choose = "01";
        f_01(cour, stu, per, choose);
    }
}

void f_0131(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    int i = -1;
    bool flag = 1;
    for(;;)
    {
        std::string course_number;
        std::cout << "请输入课程序号：";
        std::cin >> course_number;
        while (std::cin.fail() || !string_is_number(course_number))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> course_number;
        }
        i = Exist(cour, course_number);
        if (i < 0)
        {
            cout << "Sorry, cannot find course '" << course_number
                 << "'. Continue? [Y/N]" << endl;
            if(!yes_or_no())
            {
                flag = 0;
                break;
            }
        }
        else
            break;
    }
    if(flag == 1)
    {
        for(;;)
        {
            std::string stu_id, stu_name, score;
            std::cout << "请输入学号：";
            std::cin >> stu_id;
            while (std::cin.fail() || !string_is_number(stu_id))
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> stu_id;
            }
            std::cout << "请输入学生姓名：";
            std::cin >> stu_name;
            while (std::cin.fail())
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> stu_name;
            }
            std::cout << "请输入学生成绩：";
            std::cin >> score;
            while (std::cin.fail() || !string_is_number(score))
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> score;
            }
            student *sp = new student(stu_id, stu_name);
            stu.push_back(*sp);
            per.push_back(performance(cour[i], *sp, score));
            delete sp;
            std::cout << "录入成功！是否继续录入？[Y/N]";
            if (!yes_or_no())
                break;
        }
        Sync(cour, "course.txt");
        Sync(stu, "student.txt");
        Sync(per, "performance.txt");
    }
    returnMenu(cour, stu, per, choose);
}

void f_0132(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    string course_num, course_name, credit, teacher_name;
    string stu_id, stu_name, score;
    bool flag = 0;
    for(;;)
    {
        if(flag == 0)
        {
            system("cls");
            std::cout << "请输入课程序号：";
            std::cin >> course_num;
            while (std::cin.fail() || !string_is_number(course_num))
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> course_num;
            }
            std::cout << "请输入课程名：";
            std::cin >> course_name;
            while (std::cin.fail())
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> course_name;
            }
            std::cout << "请输入学分：";
            std::cin >> credit;
            while (std::cin.fail() || !string_is_number(credit))
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> credit;
            }
            std::cout << "请输入教师姓名：";
            std::cin >> teacher_name;
            while (std::cin.fail())
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> teacher_name;
            }
        }
        std::cout << "请输入学号：";
        std::cin >> stu_id;
        while (std::cin.fail() || !string_is_number(stu_id))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> stu_id;
        }
        std::cout << "请输入学生姓名：";
        std::cin >> stu_name;
        while (std::cin.fail())
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> stu_name;
        }
        std::cout << "请输入成绩：";
        std::cin >> score;
        while (std::cin.fail() || !string_is_number(score))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> score;
        }
        course *cp = new course(course_num, course_name, credit, teacher_name);
        student *sp = new student(stu_id, stu_name);
        cour.push_back(*cp);
        stu.push_back(*sp);
        per.push_back(performance(*cp, *sp, score));
        delete cp;
        delete sp;
        std::cout << "录入成功！是否继续录入？[Y/N]";
        if (!yes_or_no())
            break;
        else
        {
            std::cout << "是否切换课程？[Y/N]";
            if(yes_or_no())
                flag = 0;
            else
                flag = 1;
        }
    }
    Sync(cour, "course.txt");
    Sync(stu, "student.txt");
    Sync(per, "performance.txt");
    returnMenu(cour, stu, per, choose);
}

void f_021(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    std::string old_number, new_number, new_courseName, new_credit, new_teacherName;
    int i = 1;
    for(;;)
    {
        for(;;)
        {
            std::cout <<endl<< "请输入要修改的课程序号：";
            std::cin >> old_number;
            while (std::cin.fail() || !string_is_number(old_number))
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> old_number;
            }
            i = Exist(cour, old_number);
            if (i < 0)
                cout << "Sorry, cannot find course '" << old_number << "'. Please input again." << endl;
            else
            {
                std::cout << "提示：您将要修改课程'" << old_number << ": " << cour[i].Get_name() << "'的信息，是否继续？[Y/N]";
                if (yes_or_no())
                    break;
            }
        }
        std::cout << "请输入新的课程序号：";
        std::cin >> new_number;
        while (std::cin.fail() || !string_is_number(new_number))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> new_number;
        }
        std::cout << "请输入新的课程名：";
        std::cin >> new_courseName;
        while (std::cin.fail())
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> new_courseName;
        }
        std::cout << "请输入新的学分：";
        std::cin >> new_credit;
        while (std::cin.fail() || !string_is_number(new_credit))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> new_credit;
        }
        std::cout << "请输入新的教师姓名：";
        std::cin >> new_teacherName;
        while (std::cin.fail())
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> new_teacherName;
        }
        cour[i].Set_course(new_number, new_courseName, new_credit, new_teacherName);
        std::cout << "修改成功！是否继续？[Y/N]";
        if (!yes_or_no())
            break;
    }
    Sync(cour, "course.txt");
    returnMenu(cour, stu, per, choose);
}

void f_022(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    std::string old_id, new_id, new_name;
    int i = 1;
    for(;;)
    {
        for(;;)
        {
            std::cout << "请输入要修改的学号：";
            std::cin >> old_id;
            while (std::cin.fail() || !string_is_number(old_id))
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> old_id;
            }
            i = Exist(stu, old_id);
            if (i < 0)
                cout << "Sorry, cannot find student '" << old_id << "'. Please input again." << endl;
            else
            {
                std::cout << "提示：你将要修改学生'" << old_id << ": " << stu[i].Get_name() << "'的信息，是否继续？[Y/N]";
                if (yes_or_no())
                    break;
            }
        }
        std::cout << "请输入新的学号：";
        std::cin >> new_id;
        while (std::cin.fail() || !string_is_number(new_id))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> new_id;
        }
        std::cout << "请输入新的学生姓名：";
        std::cin >> new_name;
        while (std::cin.fail())
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> new_name;
        }
        stu[i].Set_student(new_id, new_name);
        std::cout << endl<<"修改成功！是否继续？[Y/N]";
        if (!yes_or_no())
            break;
    }
    Sync(stu, "student.txt");
    returnMenu(cour, stu, per, choose);
}

void f_023(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    int i = 1;
    bool flag = 0;
    std::string course_number, student_id, new_score;
    for(;;)
    {
        std::cout << "请输入要修改的课程序号：";
        std::cin >> course_number;
        while (std::cin.fail() || !string_is_number(course_number))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> course_number;
        }
        i = Exist(cour, course_number);
        if (i < 0)
        {
            std::cout << "Sorry, cannot find course '" << course_number << "'. Continue? [Y/N]"
                 << endl;
            if(!yes_or_no())
            {
                flag = 1;
                break;
            }
        }
        else
            break;
    }
    if(flag == 0)
        for(;;)
        {
            std::cout << "请输入学号：";
            std::cin >> student_id;
            while (std::cin.fail() || !string_is_number(student_id))
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> student_id;
            }
            i = Exist(stu, student_id);
            if (i < 0)
            {
                std::cout << "Sorry, cannot find student '" << student_id << "'. Continue? [Y/N]" << endl;
                if(!yes_or_no())
                {
                    flag = 1;
                    break;
                }
            }
            else
                break;
        }
    if(flag == 0)
    {
        std::cout << "请输入新的成绩：";
        std::cin >> new_score;
        while (std::cin.fail() || !string_is_number(new_score))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> new_score;
        }
        int k = Exist(per, course_number + ',' + student_id);
        if(k >= 0)
        {
            per[k].Set(new_score);
            std::cout<<"提示：修改成功！"<<endl;
            Sync(per, "performance.txt");
        }
        else
            std::cout<<"提示：修改失败！"<<endl;
    }
    returnMenu(cour, stu, per, choose);
}

void f_031(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    int i = -1;
    bool flag = 0;
    for(;;)
    {
        system("cls");
        while (i < 0)
        {
            std::string course_number;
            std::cout << "请输入课程序号：";
            std::cin >> course_number;
            while (std::cin.fail() || !string_is_number(course_number))
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> course_number;
            }
            i = Exist(cour, course_number);
            if (i < 0)
            {
                std::cout << "Sorry, cannot find course '" << course_number << "'. Continue? [Y/N]" << endl;
                if (!yes_or_no())
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
        {
            cour[i].Display();
            for(int j=0; j<per.size(); j++)
                if(per[j].course::Get_number() == cour[i].Get_number())
                    flag = 1;
            if(flag == 1)
            {
                std::cout<<endl;
                std::cout.width(8);
                std::cout<<"学号";
                std::cout.width(8);
                std::cout<<"姓名";
                std::cout.width(8);
                std::cout<<"分数";
                std::cout.width(8);
                std::cout<<"等第";
                std::cout.width(8);
                std::cout<<"绩点";
                for(int j=0; j<per.size(); j++)
                    if(per[j].course::Get_number() == cour[i].Get_number())
                        per[j].Display_by_student();
            }
            std::cout << endl << "是否继续查询？[Y/N]";
            if (!yes_or_no())
                break;
            i = -1;
        }
        else
            break;
    }
    returnMenu(cour, stu, per, choose);
}

void f_032(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    int i = -1;
    bool flag = 0;
    for(;;)
    {
        system("cls");
        while (i < 0)
        {
            std::string stu_id;
            std::cout << "请输入学号：";
            std::cin >> stu_id;
            while (std::cin.fail() || !string_is_number(stu_id))
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> stu_id;
            }
            i = Exist(stu, stu_id);
            if (i < 0)
            {
                std::cout << "Sorry, cannot find student '" << stu_id << "'. Continue? [Y/N]" << endl;
                if (!yes_or_no())
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
        {
            stu[i].Display();
            for(int j=0; j<per.size(); j++)
                if(per[j].student::Get_number() == stu[i].Get_number())
                    flag = 1;
            if(flag == 1)
            {
                std::cout<<endl;
                std::cout.width(8);
                std::cout<<"课程序号";
                std::cout.width(10);
                std::cout<<"课程名";
                std::cout.width(8);
                std::cout<<"学分";
                std::cout.width(8);
                std::cout<<"分数";
                std::cout.width(8);
                std::cout<<"等第";
                std::cout.width(8);
                std::cout<<"绩点";
                for(int j=0; j<per.size(); j++)
                    if(per[j].student::Get_number() == stu[i].Get_number())
                        per[j].Display_by_course();
            }
            std::cout << endl << "是否继续查询？[Y/N]";
            if (!yes_or_no())
                break;
            i = -1;
        }
        else
            break;
    }
    returnMenu(cour, stu, per, choose);
}

void f_033(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    std::string course_number;
    std::string stu_id;
    int i = -1;
    bool flag = 0;
    while (i < 0)
    {
        std::cout << "请输入课程序号：";
        std::cin >> course_number;
        while (std::cin.fail() || !string_is_number(course_number))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> course_number;
        }
        i = Exist(cour, course_number);
        if (i < 0)
        {
            std::cout << "Sorry, cannot find course '" << course_number << "'. Continue? [Y/N]" << endl;
            if (!yes_or_no())
            {
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0)
    {
        int j = -1;
        while (j < 0)
        {
            std::cout << "请输入学号：";
            std::cin >> stu_id;
            while (std::cin.fail() || !string_is_number(stu_id))
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> stu_id;
            }
            j = Exist(stu, stu_id);
            if (j < 0)
            {
                std::cout << "Sorry, cannot find student '" << stu_id << "'. Continue? [Y/N]" << endl;
                if (!yes_or_no())
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
            for (int k = 0; k < per.size(); k++)
            {
                if (per[k].Get_number() == (course_number + stu_id))
                {
                    per[k].Display();
                    break;
                }
            }
    }
    returnMenu(cour, stu, per, choose);
}

void f_041(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    window win(choose);
    win.Display();
    std::string course_number;
    int i = -1;
    bool flag = 0;
    for(;;)
    {
        std::cout << "请输入要删除的课程序号：";
        std::cin >> course_number;
        while (std::cin.fail() || !string_is_number(course_number))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> course_number;
        }
        i = Exist(cour, course_number);
        if (i < 0)
        {
            std::cout << "Sorry, cannot find course '" << course_number << "'. Continue? [Y/N]" << endl;
            if (!yes_or_no())
            {
                flag = 1;
                break;
            }
        }
        else
            break;
    }
    if(flag == 0)
    {
        std::cout << "提示：你将要删除课程'" << course_number << " " << cour[i].Get_name() << "'  的相关信息，是否继续？[Y/N]" << endl;
        if (yes_or_no())
        {
            if(cour.size() > 1 || i > 0)
            {
                for (int j = i; j < cour.size() - 1; j++)
                    cour[j] = cour[j + 1];
                cour.pop_back();
            }
            else if(cour.size() == 1)
                cour.pop_back();
            int m = -1;
            std::string temp1;
            if(stu.size() > 0)
                for (int j = 0; j < stu.size(); j++)
                {
                    temp1 = course_number + ',' + stu[j].Get_number();
                    for (int k = 0; k < per.size(); k++)
                    {
                        m = Exist(per, temp1);
                        if (m >= 0)
                            break;
                    }
                    if (m >= 0)
                    {
                        if(per.size() >= 2)
                        {
                            for (int k = m; k < per.size() - 1; k++)
                                per[k] = per[k + 1];
                            per.pop_back();
                        }
                        else if(per.size() == 1)
                            per.pop_back();
                        break;
                    }
                }
            std::cout<<"提示：删除成功！"<<endl;
        }
        Sync(cour, "course.txt");
        Sync(per, "performance.txt");
    }
    returnMenu(cour, stu, per, choose);
}

void f_042(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    window win(choose);
    win.Display();
    std::string stu_id;
    int i = -1;
    bool flag = 0;
    for(;;)
    {
        std::cout << "请输入要删除的学生学号：";
        std::cin >> stu_id;
        while (std::cin.fail() || !string_is_number(stu_id))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> stu_id;
        }
        i = Exist(stu, stu_id);
        if (i < 0)
        {
            std::cout << "Sorry, cannot find course '" << stu_id << "'. Continue? [Y/N]" << endl;
            if (!yes_or_no())
            {
                flag = 1;
                break;
            }
        }
        else
            break;
    }
    if(flag == 0)
    {
        std::cout << "提示：你将要修改学生'" << stu_id << " " << stu[i].Get_name() << "' 的相关信息，是否继续？[Y/N]" << endl;
        if (yes_or_no())
        {
            if(stu.size() > 1)
            {
                for (int j = i; j < stu.size() - 1; j++)
                    stu[j] = stu[j + 1];
                stu.pop_back();
            }
            else if(stu.size() == 1)
                stu.pop_back();
            if(cour.size() > 0)
            {
                int m = -1;
                std::string temp1;
                for (int j = 0; j < cour.size(); j++)
                {
                    temp1 = cour[j].Get_number() + "," + stu_id;
                    for (int k = 0; k < per.size(); k++)
                    {
                        m = Exist(per, temp1);
                        if (m >= 0)
                            break;
                    }
                    if (m >= 0)
                    {
                        if(per.size() > 1)
                        {
                            for (int k = m; k < per.size() - 1; k++)
                                per[k] = per[k + 1];
                            per.pop_back();
                        }
                        else if(per.size() == 1)
                            per.pop_back();
                        break;
                    }
                }
            }
            std::cout<<"提示：修改成功！"<<endl;
            Sync(cour, "student.txt");
            Sync(per, "performance.txt");
        }
    }
    returnMenu(cour, stu, per, choose);
}

void f_043(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
    system("cls");
    window win("043");
    win.Display();
    std::string course_number, stu_id;
    int i = -1, j = -1;
    bool flag = 0;
    for(;;)
    {
        std::cout << "请输入要删除的课程序号：";
        std::cin >> course_number;
        while (std::cin.fail() || !string_is_number(course_number))
        {
            std::cout << "请重新输入：";
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cin >> course_number;
        }
        i = Exist(cour, course_number);
        if (i < 0)
        {
            std::cout << "Sorry, cannot find course '" << course_number << "'. Continue? [Y/N]" << endl;
            if(!yes_or_no())
            {
                flag = 1;
                break;
            }
        }
        else
            break;
    }
    if(flag == 0 && i >= 0)
    {
        std::cout << "course No."<<i<<endl;
        for(;;)
        {
            std::cout << "请输入要删除的学生学号：";
            std::cin >> stu_id;
            while (std::cin.fail() || !string_is_number(stu_id))
            {
                std::cout << "请重新输入：";
                std::cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cin >> stu_id;
            }
            j = Exist(stu, stu_id);
            if (j < 0)
            {
                std::cout << "Sorry, cannot find student '" << stu_id << "'. Continue? [Y/N]" << endl;
                if(!yes_or_no())
                {
                    flag = 1;
                    break;
                }
            }
            else
                break;
        }
        if(flag == 0 && j>= 0)
        {
            std::cout << "student No."<<j<<endl;
            std::cout << "提示：你将要删除学生'" << stu_id << " " << stu[i].Get_name()
            << "'的课程'" << course_number << " " << cour[j].Get_name() << "'的相关信息，是否继续？[Y/N]" << endl;
            if (yes_or_no())
            {
                int m = Exist(per, cour[j].Get_number() + "," + stu[i].Get_number());
                if (m < 0)
                    std::cout << "提示：删除失败"<<endl;
                else
                {
                    if(per.size() > 1)
                    {
                        for (i = m; i < per.size() - 1; i++)
                            per[i] = per[i + 1];
                        per.pop_back();
                        
                    }
                    else if(per.size() == 1)
                        per.pop_back();
                    std::cout<<"提示：修改成功！";
                    Sync(per, "performance.txt");
                }
            }
        }
    }
    returnMenu(cour, stu, per, choose);
}

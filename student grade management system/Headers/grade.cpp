//
//  grade.cpp
//  student grade management system
//
//  Created by 常镇南 on 2018/8/22.
//  Copyright © 2018年 常镇南. All rights reserved.
//

#include "grade.hpp"
#include <string>
#include <iostream>

using namespace std;

string Get_grade(const string &score)
{
    if ((score >= "95"&&score <= "99") || score == "95.5" || score == "96.5" || score == "97.5" || score == "98.5" || score == "99.5" || score == "99" || score == "100")
        return "A";
    else if ((score >= "90"&&score <= "94") || score == "90.5" || score == "91.5" || score == "92.5" || score == "93.5" || score == "94.5")
        return "A-";
    else if ((score >= "85"&&score <= "89") || score == "85.5" || score == "86.5" || score == "87.5" || score == "88.5" || score == "89.5")
        return "B+";
    else if ((score >= "80"&&score <= "84") || score == "80.5" || score == "81.5" || score == "82.5" || score == "83.5" || score == "84.5")
        return "B";
    else if ((score >= "77"&&score <= "79") || score == "77.5" || score == "78.5" || score == "79.5")
        return "B-";
    else if ((score >= "73"&&score <= "76") || score == "73.5" || score == "74.5" || score == "75.5" || score == "76.5")
        return "C+";
    else if ((score >= "70"&&score <= "72") || score == "70.5" || score == "71.5" || score == "72.5")
        return "C";
    else if ((score >= "67"&&score <= "69") || score == "67.5" || score == "68.5" || score == "69.5")
        return "C-";
    else if ((score >= "63"&&score <= "66") || score == "63.5" || score == "64.5" || score == "65.5" || score == "66.5")
        return "D+";
    else if ((score >= "60"&&score <= "62") || score == "60.5" || score == "61.5" || score == "62.5")
        return "D";
    else
        return "F";
}

string Get_gp(const string &score)
{
    if ((score >= "95"&&score <= "99") || score == "95.5" || score == "96.5" || score == "97.5" || score == "98.5" || score == "99.5" || score == "100")
        return "4.0";
    else if ((score >= "90"&&score <= "94") || score == "90.5" || score == "91.5" || score == "92.5" || score == "93.5" || score == "94.5")
        return "3.7";
    else if ((score >= "85"&&score <= "89") || score == "85.5" || score == "86.5" || score == "87.5" || score == "88.5" || score == "89.5")
        return "3.3";
    else if ((score >= "80"&&score <= "94") || score == "80.5" || score == "81.5" || score == "82.5" || score == "83.5" || score == "84.5")
        return "3.0";
    else if ((score >= "77"&&score <= "79") || score == "77.5" || score == "78.5" || score == "79.5")
        return "2.7";
    else if ((score >= "73"&&score <= "76") || score == "73.5" || score == "74.5" || score == "75.5" || score == "76.5")
        return "2.3";
    else if ((score >= "70"&&score <= "72") || score == "70.5" || score == "71.5" || score == "72.5")
        return "2.0";
    else if ((score >= "67"&&score <= "69") || score == "67.5" || score == "68.5" || score == "69.5")
        return "1.7";
    else if ((score >= "63"&&score <= "66") || score == "63.5" || score == "64.5" || score == "65.5" || score == "66.5")
        return "1.3";
    else if ((score >= "60"&&score <= "62") || score == "60.5" || score == "61.5" || score == "62.5")
        return "1.0";
    else
        return "0";
}

bool string_is_number(const string &a)
{
    for (int i = 0; i < a.size(); i++)
        if (a[i]<'0' || a[i]>'9')
            return false;
    return true;
}

bool yes_or_no()
{
    std::string temp;
    std::cin >> temp;
    while (std::cin.fail() || (temp != "y"&&temp != "Y"&&temp != "n"&&temp != "N"))
    {
        std::cout << "Try again! " << endl;
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cin >> temp;
    }
    if (temp == "y" || temp == "N")
        return 1;
    else
        return 0;      
}

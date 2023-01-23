#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

class school
{

public:
    std::map <int, std::vector<std::string>> school_class;
    void add(std::string name, int grade);
    std::map <int, std::vector<std::string>> roster() const;
    std::vector<std::string> grade(int number) const;
};

void school::add(std::string name, int grade)
{
    bool found_grade = false;
    //bool found_name = false;
    for(auto &i : school_class)
    {
        if(i.first == grade)
        {
            found_grade = true;
            i.second.push_back(name);
            for(auto &j : i.second)
            {
                if(j == name)
                {
                    //found_name = true;
                }
            }
        }
    }


    if(!found_grade)
    {
        std::vector<std::string> rosters;
        rosters.push_back(name);
        school_class.insert({grade,rosters});
    }
}
std::map <int, std::vector<std::string>> school::roster() const
{
    std::map<int, std::vector<std::string>> tmp = school::school_class;
    for(auto &i : tmp)
    {
        i.second = grade(i.first);
    }
    return tmp;
}
std::vector<std::string> school::grade(int number) const
{
    if(school::school_class.find(number) != school::school_class.end())
    {
        std::vector<std::string> names = school::school_class.at(number);
        sort(names.begin(), names.end(),
             [](std::string a, std::string b) -> bool{return a < b;});
        std::cout << names[0];
        return names;
    }
    else
    {
        return std::vector<std::string> ();
    }
}

int main()
{
    school school_;
    school_.add("Jennifer", 4);
    school_.add("Kareem", 6);
    school_.add("Christopher", 4);
    school_.add("Kyle", 3);
    const auto actual = school_.roster();

    return 0;
}

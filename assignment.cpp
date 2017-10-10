// File: assignment.cpp
// Created by Anna Ek on 10/10/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;
//Class, Construct
    class Counter
    {
    private:
        unsigned int count; // count

    public:
        Counter():count(0)  //constructor
        {};

        unsigned int get_count() //return count
        {
            return count;
        }
        /*The operator keyword is used to overload the operator in hand*/
        Counter operator ++()   //increment prefix
        {
            ++count;
            Counter temp;
            temp.count = count;
            return temp;

        }
    };
//Prototypes
//main program
    int main()
    {
        Counter c1, c2, c3;

        cout<<"c1 = "<<c1.get_count()<<endl;
        cout<<"c2 = "<<c2.get_count()<<endl;
        ++c1;
        ++c2;
        cout<<"c1 = "<<c1.get_count()<<endl;
        cout<<"c2 = "<<c2.get_count()<<endl;
        c3 = ++c1;
        cout<<"c3 = "<<c3.get_count()<<endl;

        return 0;

    }
//Function definitions

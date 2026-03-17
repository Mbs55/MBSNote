#pragma once
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<ctime>
#include<fstream>
using namespace std;
class note{
        public:
        static int count;
        time_t creation_date;
        string text;
        string title;
        note();
        note(string T,string txt);
};

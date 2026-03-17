#pragma once
#include<stdlib.h>
#include<string>
#include<iostream>
#include<stdio.h>
#include"../model/notes.h"
#include<fstream>
using namespace std;
class viewNote{
    public:
    void displayNote();
    int menu();
    note getUserNote();
    string modifyNote();
    string deletion();
};



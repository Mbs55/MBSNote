#pragma once
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<ctime>
#include<fstream>
#include "../model/notes.h"
#include<cstdio>
#include<filesystem>
#include "../view/ui.h"
using namespace std;
using namespace filesystem;
    class Manager{
    public:
    viewNote view;
    Manager();
    void addNote();
    void deleteNote();
    void modifyNote();
    void display();
    void run();
};


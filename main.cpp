#include<stdio.h>
#include<stdlib.h>
#include "./model/notes.h"
#include "./view/ui.h"
#include "./controller/manager.h"
using namespace std;
int main(){
    Manager controller;
    controller.run();
}
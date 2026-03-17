#include "notes.h"
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<ctime>
#include<fstream>
int note::count=0;
    note::note(){
            text="";
            title="";
            count++;
    };
    note::note(string T,string txt){
            if(T.length()<20){
                title=T;
                text=txt;
                count++;
            }
            else{
                "Title too long Please try again with a shorter Title";
            }
            
    };
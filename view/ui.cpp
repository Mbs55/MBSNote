#include "ui.h"
#include<stdlib.h>
#include<string>
#include<iostream>
#include<stdio.h>
#include"../model/notes.h"
#include<fstream>
void viewNote::displayNote(){
    string title;
    cout<<"Enter the name of the note(file) ,you want to display without extension"<<endl;
    getline(cin,title);
    string buffer2="C:\\MbsNotes\\";
    string line;
    ifstream f(buffer2+title+".txt");
    if(f.is_open()){
        cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Title:   "<<title<<endl;
        cout<<"Content  :"<<endl;
        while(getline(f,line)){
            cout<<line<<endl;
        }
        cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
        f.close();
        
    }
    else{
        cout<<"could not open this file"<<endl;
    }
}
note viewNote::getUserNote(){
    string title,text;
    cout<<"Enter the title Of the Note"<<endl;
    getline(cin,title);
    cout<<"Enter the content Of the Note"<<endl;
    getline(cin,text);
    note n(title,text);
    return n;
}
string viewNote::modifyNote(){
    string title;
    cout<<"Enter the Title of the Note you want to modify"<<endl;
    getline(cin,title);
    return title;
}
string viewNote::deletion(){
    string title;
    cout<<"Enter the Title of the Note you want to delete"<<endl;
    getline(cin,title);
    return title;
}
int viewNote::menu(){
    int c;
    cout<<"--------------------"<<endl;
    cout<<"1-Add Note"<<endl;
    cout<<"2-Modify Note"<<endl;
    cout<<"3-Delete Note"<<endl;
    cout<<"4-Display Note"<<endl;
    cout<<"0-Quit"<<endl;
    cout<<"--------------------"<<endl;
    cin>>c;
    cin.ignore();
    return c;
}

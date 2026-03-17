#include "manager.h"
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
Manager::Manager(){
    if(create_directory("C:\\MbsNotes\\")){
        cout<<"****Directory MbsNotes was created****"<<endl;
    }
    else{
        cout<<"****Directory MbsNotes already exists****"<<endl;
    }
}
void Manager::addNote(){
    
    note no=view.getUserNote();
    ifstream f;
    
    string buffer2="C:\\MbsNotes\\";
    buffer2+=(no.title);
    f.open(buffer2+".txt");
    int i=2;
    if(f){
        buffer2+="-1";
        f.open(buffer2+".txt");
        while(f){
        string num=to_string(i);
        buffer2.pop_back();
        buffer2+=num;
        i++;
        f.open(buffer2+".txt");
    }
    }
    
    ofstream outfile(buffer2+".txt");
    outfile<<no.title+"\n"+no.text;
    cout<<"*********************************************************************"<<endl;
    cout<<"Note Created Successfully ,Check the path :"<<buffer2+".txt"<<endl;
    cout<<"*********************************************************************"<<endl;
    outfile.close();
    
}
void Manager::deleteNote(){
    string title=view.deletion();
    string buffer2="C:\\MbsNotes\\";
        if(remove(buffer2+title+".txt")){
            cout<<"Note Deleted Successfuly"<<endl;
        }
        else{
            cout<<"note with the Name: "<<title<<" does not exists"<<endl;
        }
}
void Manager::modifyNote(){
    string title=view.modifyNote();
    string buffer2="C:\\MbsNotes\\";
    string file=buffer2+title+".txt";
    string yesNo;
    string txt;
    string buffer;
    if(exists(file)){
        cout<<"You want to Append?(y/n)"<<endl;
        cin>>yesNo;
        getline(cin,buffer);
        if(yesNo=="y"){
            cout<<"Enter the Text you want to Append"<<endl;
            getline(cin,txt);
            ofstream outfile(file,ios::app);
            outfile<<"\n"+txt;
            outfile.close();
        }
        else if(yesNo=="n"){
            cout<<"Enter the Text you want to overwrite with"<<endl;
            getline(cin,txt);
            ofstream outfile(file,ios::trunc);
            outfile<<txt;
            outfile.close();
        }
        else{
            cout<<"please choose between y or n"<<endl;
        }
        
    }
    else{
        cout<<"File does not exist"<<endl;
    }
}
void Manager::display(){
    view.displayNote();
}
void Manager::run(){
    int n;
    do{
    n=view.menu();
    switch(n){
        case 1:
        this->addNote();
        break;
        case 2:
        this->modifyNote();
        break;
        case 3:
        this->deleteNote();
        break;
        case 4:
        this->display();
        break;
        case 0:
        break;
        default:
            cout<<"Please Enter a valid number"<<endl;
            break;

    }

    }while(n);
    cout<<"Have a good day"<<endl;
    
}
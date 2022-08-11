#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class library{
    public:
    int id; 
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

int main(){
    library lib[20];
    int input=0;
    int count=0;

     while (input!=3)
     {
        cout<<"enter 1 to input details like  id, name, student, price, pages :"<<endl;
        cout<<"enter 2 to display details :"<<endl;
        cout<<"enter 3 to quit"<<endl;
        cin>>input;

        switch (input)
        {
        case 1:
            cout<<"Enter The Book id"<<endl;
            cin>>lib[count].id;
            cout<<"Enter The Book name :"<<endl;
            //cin>>lib[count].name;
            cin.getline(lib[count].name,100,',');
            cout<<"Enter The Author  :"<<endl;
            //cin>>lib[count].author;
            cin.getline(lib[count].author,100,',');
            cout<<"Enter The student  :"<<endl;
            //cin>>lib[count].student;
            cin.getline(lib[count].student,100,',');
            cout<<"Enter The book price :"<<endl;
            cin>>lib[count].price;        
            cout<<"Enter The Book pages :"<<endl;
            cin>>lib[count].pages;
            count++;
            break;        
        case 2:
        for (int i = 0; i < count; i++)
        {
            cout<<"Book Id :"<<lib[i].id<<endl;
            cout<<"Book Name :"<<lib[i].name<<endl;
            cout<<"Book Author :"<<lib[i].author<<endl;
            cout<<"Book Student :"<<lib[i].student<<endl;
            cout<<"Book Price :"<<lib[i].price<<endl;
            cout<<"Book Pages :"<<lib[i].pages<<endl;
        }
        break;
        
        case 3:
        exit(0);

        default:
            break;
        }

     }
     

}
#include <iostream>  
using namespace std;  
class Student {  
   public:  
       int id;     
       string name;      
       void insert(int i, string n) 
       void display() 
        {
            cout<<id<<"  "<<name<<endl;
        }
};  
int main() 
{  
    Student s1;    
    Student s2;   
    s1.insert(201, "Prakhar");    
    s2.insert(202, "Piyush");    
    s1.display();    
    s2.display();  
    return 0;  
}  

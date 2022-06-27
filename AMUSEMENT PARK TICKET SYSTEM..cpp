#include <iostream>
using namespace std;
//struct for ride details
struct ride{
    string name;
    int age_low_limit;
    int age_upp_limit;
    int price;
    ride *next;
};
//linked list for connecting the rides saving them
void new_ride(ride **head_ref,string str,int age1,int age2,int price){
    ride *new_ride=new ride();
    new_ride->name=str;
    new_ride->age_low_limit=age1;
    new_ride->age_upp_limit=age2;
    new_ride->price=price;
    new_ride->next=(*head_ref);
    (*head_ref)=new_ride;
    
};
// fucntion for checking the age
  int age_checker(ride *head_ref,int n){
    int expense=0;
    while(head_ref!=NULL){
    int temp1=head_ref->age_low_limit;
    int temp2=head_ref->age_upp_limit;

    if (n>=temp1&&n<temp2){
      cout<<(head_ref)->name<<": Yes"<<endl;
      expense += (head_ref)->price;
    }
    else {cout<<(head_ref)->name<<": No"<<endl;};
    head_ref=head_ref->next;
    
    }return expense;}




int main() {
  int ur_age;
  int ur_expense;
  string name;
  
  int j=0;
  ride *head=NULL;
  //adding the rides if you want you can add rides too 
  new_ride(&head,"Rain Dance",18,100,500);
  new_ride(&head,"Alpine slide",12,50,500);
  new_ride(&head,"Balloon Race",0,12,100);
  new_ride(&head,"Carousel",5,60,200);
  new_ride(&head,"Double Shot",18,30,600);
  new_ride(&head,"Enterprise",0,40,400);
  new_ride(&head,"Ferris wheel",0,70,300);
  new_ride(&head,"Gyro tower",18,30,200);
  new_ride(&head,"Hurricane",12,30,600);
  new_ride(&head,"Infinity",0,70,100);
  new_ride(&head,"Jump and Smile",0,70,100);
  new_ride(&head,"Kamikaze",18,30,900);
  new_ride(&head,"Mechanical bull",8,30,250);
  new_ride(&head,"Pirate Ship",0,70,150);
  new_ride(&head,"Reverse bungee",6,60,250);
  
  cout<<"* Welcome to Theme Park *"<<"\n";
  cout<<"\n";
  cout<<"Please Enter Your Name: ";
  cin>>name;
  cout<<"\n";
  cout<<"Please Enter Your Age: ";
  cin>>ur_age;
  cout<<"\n";
  cout<<"*****";cout<<"\n";
  cout<<"List of Rides that you can take part in :"<<endl;
  cout<<"\n";
  ur_expense=age_checker(head,ur_age);
  cout<<"*****";cout<<"\n";
  cout<<"Total Expense : "<<"₹"<<ur_expense<<endl;
  cout<<"\n";
  cout<<"*Enjoy Theme Park with these Rides *";

}

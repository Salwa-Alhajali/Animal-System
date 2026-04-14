#include <iostream>
using namespace std;
 
//============class_Animal======================
class Animal {
private://عشان انا بس اقدر اوصلهم عن طري ال method
string animal;
public:// ال بناء والهدام دايما عام 

Animal(string n){//البناء
animal=n;
}
virtual void speak(){
cout<<animal<<" animal voice\n";
}
~Animal(){
    //cout << "clear Animal \n";
}
};
//================class_dog===================
//صوت الكلب
class Dog: public Animal{
    public:
    bool d1=false,d2=false;
    float height,weight;
   
Dog():Animal("dog"){
   height=50.0;
    weight=25.0;
//cout << "Dog created.\n";
}
 void det(){
        cout << "     Weight: " << weight << "kg\n";
        cout << "     Height: " << height << "cm\n";
    }
void speak()override{
cout <<"Dog  U•ᴥ•U\tWoof!\a\n";
det();
}
~Dog(){
  //  cout << "Dog destroyed.\n";
    }
};
//===================type1_dog==================================
class  German_Shepherd: public Dog{
    public:
    float  speed;
    string color;
    German_Shepherd(){
  color="Black & Brown";
  speed=48.0;
    height=62.0;
    weight=35.0;}
void info(){
    det();
    cout << "     Color: " << color << "\n";
    cout << "          speed: " << speed << "km/h\n";
}
void speak()override{
    cout <<"German Shepherd Dog  ^•ᴥ•^\tWoof!\a\n";
    info();
}
~German_Shepherd(){
}
};
//===============type2_dog==============================
class  Bulldog: public Dog{
    public:
    float  speed;
    string color;
    Bulldog(){
  color="White and Brown";
  speed=24.0;
    height=35.0;
    weight=25.0;}
void info(){ 
    det();
    cout << "     Color: " << color << "\n";
    cout << "          speed: " << speed << "km/h\n";
}
void speak()override{
    cout <<"Bulldog Dog  ⊂(￣(ｴ)￣)⊃ \tWoof!\a\n";
    info();
}
~Bulldog(){
}
};
//===================class_ cat=============================

class Cat : public Animal {
    public:
    bool c1=false,c2=false;
   float  height, weight;
    Cat():Animal("cat"){ 
    height=24.0;
    weight=4.5;
       
     // cout << "Cat created.\n";
    }
    void det(){
        cout << "     Weight: " << weight << "kg\n";
        cout << "     Height: " << height << "cm\n";
    }
    void speak()override{
    cout <<"Cat  =^.^=\tMeow!\n";
    det();
}
~Cat (){
    // cout << "Cat destroyed.\n";
    }
};
//=======================type1_cat============================
class  Siamese : public Cat{
    public:
    string color,fur_Type;
    Siamese(){
    fur_Type="Short, fine, smooth";
    color="Cream body with dark points ";
    height=28.0; 
    weight=5.0;}
void info(){ 
    det();
    cout << "     Color: " << color << "\n";
    cout << "fur Type: " << fur_Type << "km/h\n";
}
void speak()override{
    cout <<"Siamese Cat  ฅ^•ﻌ•^ฅ \tMeow!\n";
    info();
}
~Siamese(){
}
};
//=========================type2_cat==============================
class  Maine_Coon : public Cat{
    public:
    string color,fur_Type;
    Maine_Coon(){
    fur_Type=" Long, thick, and water-resistant";
    color=" Brown tabby is most common , but they can be many colors";
    height=40.0; 
    weight=9.0;}
void info(){ 
    det();
    cout << "     Color: " << color << "\n";
    cout << "fur Type: " << fur_Type << "km/h\n";
}
void speak()override{
    cout <<"Maine Coon Cat  ʕ^.ᴥ.^ʔ∫  \tMeow!\n";
    info();
}
~Maine_Coon(){
}
};
//=====================user====================
 class user {
public:
user( string name, animal user_arr[]){


}
};

Dog an1;
Cat an2;
Animal an3("mouse");
German_Shepherd an4;
Bulldog an5;
Siamese an6;
Maine_Coon an7;
Animal *animal[]={&an1,&an2,&an3,&an4,&an5,&an6,&an7};
//********************************************************
int main() {
    for (int i=0;i<5;i++){//loopتلف على  مصفوفة البوينتلر 
        cout <<i+1<<" -  ";
        animal[i]-> speak();
        cout <<"\n\n";
    }
return 0;
 
}
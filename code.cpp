// 18-12-2024

// Github repo : https://github.com/Pawan2505/DSA-WEB-11AM.git
// Online Compiler : https://ide.codingblocks.com/
//  Today HW : https://docs.google.com/document/d/1XmOiyG5NNIfABevn_JaQmVhrsm0sKcfrLvvuMMRpilM/edit?tab=t.0


// #include<iostream>
// using namespace std;

// int main(){

//     cout<<"Hello Good Class!";

// }



// Keyword : https://www.geeksforgeeks.org/cpp-keywords/


// #include<iostream>
// using namespace std;

// int main(){

//     // int 12num = 10;  // Not Ok
//     // int num12 = 10; // ok
//     // int num value = 10; // Not Ok
//     // int num_value = 10; //  Ok
//     // int _value = 10; //  Ok
//     // int $value = 10; //  Ok
//     // int @value = 10; // Not  Ok

//     // int float = 10;  // Not ok 

//     // double djfd = 223.455;

//     // Data Type

//     int num = 10;
//     cout<<num<<endl;

//     float num1 = 20.356f;
//     cout<<num1<<endl;

//     double num2 = 234.567987654f;
//     cout<<num2<<endl;

//     string str = "Pawan Maurya";

//     cout<<str<<endl;

//     char ch = 'a';

//     cout<<ch<<endl;

//     bool value = false;

//     cout<<value<<endl;


// }



// Constant :  1. micro, 2. const

// micro

// #include<iostream>
// using namespace std;
// #define num "Pawan Maurya"   // gloable variable
// int main(){

// num = "Pooja"; // Not Ok

// cout<<num<<endl;
// }

// #include<iostream>
// using namespace std;
// #define x 10
// #define y 20
// int main(){

// cout<<x+y<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){

// const int num = 10;

// num = 20;  // Not Ok

// cout<<num<<endl; 
// }





// #include<iostream>
// using namespace std;

// int main(){

// const int num = 10;

// num = 20;  // Not Ok

// cout<<num<<endl; 

// }


// #include<iostream>
// using namespace std;

// int main(){

// const int num;

// cout<<"Please enter number : "<<endl;

// cin>>num;

// cout<<num<<endl; 

// }


// Block scope


// #include<iostream>
// using namespace std;

// int main(){

//     int num = 10;  // global variable / local variable
//     cout<<"Num1 : "<<num<<endl; //10

//     {
//         // int num = 20; // local variable
//         cout<<"Num2 : "<<num<<endl;  //20
//     }
    
//     cout<<"Num3 : "<<num<<endl; //10
// }



// #include<iostream>
// // using namespace std;

// namespace na{
//     int a = 100;
// }
// namespace nb{
//     int a = 200;
// }

// int a = 60;  // global variable

// int main(){

//     std::cout<<nc::a<<std::endl;

//     int a = 10;

//     std::cout<<a<<std::endl;   // 10

//     {
//         int a = 20;
//         std::cout<<a<<std::endl;  //20
//     }

//     a = 60;
//     std::cout<<a<<std::endl;  //10

//     std::cout<<::a<<std::endl;  //:: ->  scope resulation operator
//     std::cout<<na::a<<std::endl;  //:: ->  scope resulation operator
//     std::cout<<nb::a<<std::endl;  //:: ->  scope resulation operator

//     return 0;
// }


// #include<iostream>

// int main(){

// using namespace std;

// int a = 10;

// cout<<a<<endl;

// }


// #include<iostream>

// int main(){

// using namespace std;

// int a = 10;

// cout<<a<<endl;

// }


// Operator :  Uniary Operator

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     a++;

//     cout<<a<<endl;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     ++a;

//     cout<<a<<endl;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     a--;

//     cout<<a<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     --a;

//     cout<<a<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Addition : "<<(a+b)<<endl;
//     cout<<"Multiply : "<<(a*b)<<endl;
//     cout<<"sub :  : "<<(a-b)<<endl;
//     cout<<"Divide : "<<(a/b)<<endl;
//     cout<<"Remainder : "<<(a%b)<<endl;
// }


//  Arithmetic Operator

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Addition : "<<(a+b)<<endl;
//     cout<<"Multiply : "<<(a*b)<<endl;
//     cout<<"sub :  : "<<(a-b)<<endl;
//     cout<<"Divide : "<<(a/b)<<endl;
//     cout<<"Remainder : "<<(a%b)<<endl;
// }


// Conditional Statement

// #include<iostream>
// using namespace std;

// int main(){
//     int fatima_age = 19;
//     int khushi_age = 20;

//     if(fatima_age>khushi_age){

//         cout<<"Fatima age greater than Khushi"<<endl;
//     }else{
//         cout<<"Khushi age greater than fatima"<<endl;
//     }
// }


// Else if 


#include<iostream>
using namespace std;

int main(){

char choice;

while(choice == 'y' || 'Y'){

    if(choice == 'n'){
        cout<<"Thank You!"<<endl;
        break;
    }
        
    int marks;  // declaration

    cout<<"Enter Marks : ";

    cin>>marks; // user input

    if(marks >= 90){

        cout<<"Grade A+"<<endl;
        cout<<"Are you want to try next (y/n) : ";
        cin>>choice;
    }
    else if(marks >= 80 ){
        cout<<"Grade A"<<endl;
         cout<<"Are you want to try next (y/n) : ";
        cin>>choice;
    }
    else if(marks >=70 ){
        cout<<"Grade B+"<<endl;
         cout<<"Are you want to try next (y/n) : ";
        cin>>choice;
    }
    else if(marks >=60 ){
        cout<<"Grade B"<<endl;
         cout<<"Are you want to try next (y/n) : ";
        cin>>choice;
    }
    else if(marks >=50 ){
        cout<<"Grade C"<<endl;
         cout<<"Are you want to try next (y/n) : ";
        cin>>choice;
    }
    else{
        cout<<"Sorry, You are failed!"<<endl;
         cout<<"Are you want to try next (y/n) : ";
        cin>>choice;
    }
}
  
}
// #include <iostream>
// using namespace std;
// class Parent_class{
//     int a;
//     public:
//     Parent_class(){
//         a=10;
//     }
//     void show_a(){
//         cout<<"Inside Prent_class show_a method"<<endl;
//         cout<<"value of a is: "<<a<<endl;
//     }
// };
// class ChildClass_1 : public Parent_class{
//     int b;
//     public:
//     ChildClass_1(){
//         b=100;
//     }
//     void show_b(){
//         cout<<"Inside childclass_1 show_b method"<<endl;
//         cout<<"Value of b is : "<<b<<endl;
//     }
// };
// class ChildClass_2 : public ChildClass_1{
//     int c;
//     public:
//     ChildClass_2(){
//         c=1000;
//     }
//     void show_c(){
//         cout<<"Inside childclass_2 show_c method"<<endl;
//         cout<<"Value of c is: "<<c<<endl;
//     }
// };
// int main(){
//     ChildClass_2 *obj=new ChildClass_2;
//     (*obj).show_a();
//     (*obj).show_b();
//     (*obj).show_c();
// }
#include <iostream>
#include <iomanip>
using namespace std;
// int main(){
//     char ch;
//     cout<<"press any key: ";
//     ch = cin.get();
//     cout<<"\nYour pressed : ";
//     cout.put(ch);
//     return 0;
// }
// int main(){
//     char ch[20];
//     cout<<"Ente you favourite website: "<<endl;
//     cin.getline(ch,20);
//     cout<<"Your output"<<endl;
//     cout.write(ch,6);
// }
int main(){
    int x=10;
    cout<<setw(10);
    cout<<x<<endl;
    cout<<setw(10)<<setfill('*')<<x<<endl;
}
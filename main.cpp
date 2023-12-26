#include "Menu.h"

int main() {
    try {
        cout<<"请选择模式(1-学生信息,2-整数):";
        int choice = inputInt();
        if (choice == 1) {
            Menu<Student> menu;
            menu.Welcome();
            menu.DoMenu();
        } else if (choice == 2){
            Menu<Integer> menu;
            menu.Welcome();
            menu.DoMenu();
        } else{
            throw myExpection("选择错误");
        }
    }catch (myExpection e){
        cout<<e.what()<<endl;
    }
    return 0;
}
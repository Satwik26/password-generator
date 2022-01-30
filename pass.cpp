#include "password_generator.h"
#include<iostream>
using namespace std;
int main(){
    int pass_len;
    cout<<"Enter the password length: ";
    cin>>pass_len;
    Password_generator pg;
    pg.generate(pass_len);
}
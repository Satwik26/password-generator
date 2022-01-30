#include<iostream>
#include <random>
using namespace std;
class Password_generator{
    protected:
        string small, upper, num, special, passw, final_pass;
        int len;
    public:
    Password_generator(){
        small = "abcdefghijklmnopqrstuvwxyz";
        upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        num = "0123456789";
        special = "!@#$%^&*()_-=+<>?,./";
        passw = small + upper + num + special;
        final_pass = "";
        len = passw.length();
    }
    void generate(int pass_len){
        if ( pass_len<8 ){
            cout<<"Minimum length should be 8";
        }else if(pass_len >= 8){
            for(int i=0;i<pass_len;i++){
                final_pass = final_pass + passw[rand()%len];
            }
            cout<<"Final pass: "<<final_pass;
        }
    }
};
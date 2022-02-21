#include <iostream> //including the ios stream library
using namespace std; //using name space std;

class Burger{ //class called burger created
private: //created a private access specifier
    string fries; //declared fries as a string
    string sauces; // declared sauces as a string
    string order; // declared order as a string
    float price; // declared price as a float
public: //created a public acces
    Burger(string f, string s, string o, float p){
        fries = f;
        sauces = s;
        order = o;
        price = p;
    };
    void takeOrder(){
        cout << "Hello! What would you like to order today?" << endl;

        cout << "Please Enter Your Order Here: ";
        cin >> order;
    }
};




int main(int argc, char *argv[]){

    Burger b("fries", "sauces", "order", 1.99);
    b.takeOrder();

};

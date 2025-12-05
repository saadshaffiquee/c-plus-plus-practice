// STUDENT GRADE CALCULATOR


#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter your percentage in Number";
    int response;
    cin>>response;
    
    if(response > 90 && response < 100){
        cout<< "You passed exam  with A+ Grade \nHUGE SHOUT OUT.... CONGRAGULATION \nFROM NOW ON YOU DON'T NEED TO PAY ANY FEE.... YOU GOT 100% SCHLORSHIP";
        
    }else if (response > 80 && response < 89){
        cout<< "You passed the exams with A Grade \nCONGRAGULATION___ YOU GOT 50% SCHLORSHIP TOO";
    }else if (response > 70 && response < 79){
        cout<< "You passed the exams with B+ Grade \nYOU MISSED A GRADE!! I WANNA SEE YOU WITH A GRADE___ NEXT SEMESTER";
    }else if (response > 60 && response < 69){
        cout<< "You passed the exams with B Grade \nNOT BAD BUT NOT GOOD";
    }else if (response > 50 && response < 59){
        cout<< "You passed the exams with C Grade \nYOU ARE SAFE";
    }else if (response > 40 && response < 49){
        cout<< "You bearly passed the exams with D Grade \nBAAL BAAL BACH GEE";
    }else if (response > 40 && response < 0){
        cout<< "You Failed the exams with F Grade \nPARNA THA NA";
    } else {
        cout<<"i don't what you are talking about";
    }
}
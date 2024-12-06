#include <iostream>

using namespace std;

int main()
{
    int choice =0; //انتخاب کاربر
    double num1,num2;//دو عدد ورودی
    for (int i=0; i,10; i++)
        int choice;
        cout<<" menu:\n";
        cout<<"1.sum \n";
        cout<<"2.menha \n";
        cout<<"3.zarb \n";
        cout<<"4.taghsim \n";
        cout<<"5.khoroj \n";
        cout<<"لطفا گزینه انتخاب کنید: ";
        cin>>choice;

        if (choice>=1 && choice<=4) {
            cout<<"enter num1:  ";
            cin>> num1;
            cout<<"enter num2:  ";
            cin>>num2;
        }
        switch(choice){
        case 1://sum
            cout<<"sum="<<num1 + num2<<endl;
            break;
        case 2://menha
            cout<<"menha="<<num1-num2<<endl;
            break;
        case 3://zarb
            cout<<"zarb="<<num1*num2<<endl;
            break;
        case 4://taghsim
            if(num2 != 0){
               cout<<"tahsim="<<num1/num2<<endl;
              } else{

                  cout<<"not possible";
              }

            break;
        case 5://khoroj
            cout<<"khoroj \n";
}
return 0;}





# include <iostream>
# include <math.h>
using namespace std;
void printPositiveNumToBinary(int n){
 
  
    //claculating bits storing it in array
  int temp=n;
    int bit;
 
    int i=0;

    int arrbit[32];
    while(temp !=0){
        bit=(temp & 1);
      
        arrbit[i]=bit;
        i++;
        temp=temp>>1;


    };
    //making all the rest unfilled element in array =0
    while(i<=31){
        arrbit[i]=0;
        i++;
    };
    cout<<endl<<endl;
    cout << "the 32 digit binary conversion of the positive integer "<< n << " is given below:"<<endl<<endl;
    for(int j=31;j>=0;j--){
        cout<<arrbit[j];
    };
    cout<<endl<<endl;

    
}

void printNegativeNumToBinary(int n){

    //converting negative into positive and then storing it in array
    int temp;
    int bit;
    int arrbit[32];

    if(n<0){temp=(-1)*n;};

    int i=0;
    while(temp !=0){
        bit=(temp & 1);
      
        arrbit[i]=bit;
        i++;
        temp=temp>>1;

    };
    //making all the rest unfilled element in array =0
    while(i<=31){
        arrbit[i]=0;
        i++;
    }
    //taking 1s compliment
    for(int j=0;j<32;j++){
        if(arrbit[j]==1){
            arrbit[j]=0;
        }
        else{
            arrbit[j]=1;
        }
    };
    //taking 2s compliment
    for(int j=0;j<32;j++){
        if (arrbit[j]==1){
            arrbit[j]=0;
        }
        else{arrbit[j]=1;
        break;}
    };
    
    cout<<endl<<endl;
    cout << "the 32 digit binary conversion of the negative integer "<< n << " is given below:"<<endl<<endl;
   for(int j=31;j>=0;j--){
        cout<<arrbit[j];
    };    
    cout<<endl<<endl;

};
void positiveOrNegative(int n){
    if (n>0){
        printPositiveNumToBinary(n);
    };
    if(n<0){
        printNegativeNumToBinary(n);
    };
    if(n == 0){
        
         cout<<endl<<endl;
    cout << "the 32 digit binary conversion of the negative integer "<< n << " is given below:"<<endl<<endl;
  cout<<"00000000000000000000000000000000" ;   
    cout<<endl<<endl;
    }
};
void DoYouWantToPrintBinary(int a){
    cout<<endl;
    cout<<endl;
    cout<<"Do You want to print Binary form of resultant number?";
    cout<<endl;
    cout<<endl;
    cout<<"enter 1 for yes"<<endl<<"enter any character for no"<<endl;
    int b;
    cin>>b;
    if(b==1){
        positiveOrNegative(a);
    }else{

    };
};
void LeftShift(int a,int b){
                    cout<<a<<" << "<<b<<endl;

    int x=(a << b);
    cout<<"Left Shift operator for integer "<<a <<" and "<<b <<" is "<<(x)<<endl;
DoYouWantToPrintBinary(x);
}
void RightShift(int a,int b){
                cout<<a<<" >> "<<b<<endl;

    int x=(a >> b);
    cout<<"Right Shift operator for integer "<<a <<" and "<<b <<" is "<<(x)<<endl;
DoYouWantToPrintBinary(x);
}
void AND(int a , int b){
                cout<<a<<" & "<<b<<endl;

    int x=(a & b);
    cout<<"Bitwise AND operator for integer "<<a <<" and "<<b <<" is "<<(x)<<endl;
DoYouWantToPrintBinary(x);
}
void OR(int a , int b){
            cout<<a<<" | "<<b<<endl;

int x=(a | b);
    cout<<"Bitwise OR operator for integer "<<a <<" and "<<b <<" is "<<(x)<<endl;
DoYouWantToPrintBinary(x);
}
void XOR(int a , int b){
        cout<<a<<" ^ "<<b<<endl;

 int x=(a ^ b);
    cout<<"Bitwise XOR operator for integer "<<a <<" and "<<b <<" is "<<(x)<<endl;
DoYouWantToPrintBinary(x);
}
void NOT(int a){
    cout<<" ~ "<<a<<endl;
    int b=(~a);
    cout<<"Bitwise Not operator for integer "<<a <<" is "<<(b)<<endl;
DoYouWantToPrintBinary(b);

}
void calculate(){
    cout<<endl<<endl<<endl;
    cout<<"This is a binary calculator here you can perform tasks like:"<<endl;
    cout<<"[1] Positive integer or Negative integer to binary"<<endl;
    cout<<"[2] Left Shift operator"<<endl;
    cout<<"[3] Right Shift operator"<<endl;
    cout<<endl;
    cout<<"Bitwise Operations like"<<endl;
    cout<<endl;
    cout<<"[4] AND (&)"<<endl;
    cout<<"[5] OR (|)" <<endl;
    cout<<"[6] XOR (^)"<<endl;
    cout<<"[7] NOT (~)"<<endl;
    cout<<"[8] Exit"<<endl;

    cout<<endl<<endl<<endl;
    int a;
    cout<<"enter a number from 1 to 8"<<endl;
    cin>>a;
    if(a==1){
        cout<<"print into binary"<<endl;
        int x;
        cout<<"enter a integer "<<endl;
        cin>>x;
        positiveOrNegative(x);
    }else if(a==2){
        int x,y;
        cout<<"left shift operator"<<endl;
        cout <<"Enter first number: "<<endl;
        cin>>x;
        cout <<"Enter second number: "<<endl;
        cin>>y;
        LeftShift(x,y);
    }else if(a==3){
        int x,y;
        cout<<"Right shift operator"<<endl;
        cout <<"Enter first number: "<<endl;
        cin>>x;
        cout <<"Enter second number: "<<endl;
        cin>>y;
        RightShift(x,y);

    }else if(a==4){
        int x,y;
        cout<<"Bitwise AND (&) operator"<<endl;
        cout <<"Enter first number: "<<endl;
        cin>>x;
        cout <<"Enter second number: "<<endl;
        cin>>y;
        AND(x,y);
    }else if(a==5){
        int x,y;
        cout<<"Bitwise OR (|) operator"<<endl;
        cout <<"Enter first number: "<<endl;
        cin>>x;
        cout <<"Enter second number: "<<endl;
        cin>>y;
        OR(x,y);
    }else if(a==6){
        int x,y;
        cout<<"Bitwise XOR (^) operator"<<endl;
       cout <<"Enter first number: "<<endl;
        cin>>x;
        cout <<"Enter second number: "<<endl;
        cin>>y;
        XOR(x,y);
    }else if(a==7){
        int x,y;
        cout<<"Bitwise NOT (~) operator"<<endl;
        cout<<"Enter the numbers";
        cout<<"~ ";
        cin>>x;

        NOT(x);
    }

};

void calcAgain(){
    while(true){
    cout<<"do you want to claculate again "<<endl;
    cout <<endl;
    cout<<"enter 1 for yes"<<endl<<"enter any character for exit"<<endl;
    int a;
    cin>>a;
    if(a==1){
        calculate();
    }else{
    break;
    };}
};

int main () {
    
    cout<<endl<<endl<<endl<<endl;
    cout<<" * * * * * ";
    cout<<"Welcome to Binary claculator";
    cout<<" * * * * * ";
    cout<<endl;
    calculate();


    calcAgain();
    return 0;
}

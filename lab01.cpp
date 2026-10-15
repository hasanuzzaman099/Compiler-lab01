#include<iostream>
#include<string>
using namespace std;

void numeric(){
string s;
cout<<"Enter an input: ";
cin>>s;

for (int i=0 ; i<(int)s.length();i++){
      int ascii =(double)s[i];

if(!(ascii>=48 && ascii<=57 ))
    {
    break;
    }
}
if((int)s.length()>0)
    cout<<"numeric constant"<<endl;
else
    cout<<"output is not numeric ";
}


//cout<<(int)'5';



void operators(){

 string s;
 cout<<"enter an expression: ";
 cin>>s;


 for(int i= 0;i<(int)s.length(); i++)
    {
    int ascii =(int)s[i];

    if(ascii==43 || ascii==45 || ascii==42 || ascii==47 || ascii==37 || ascii==61)
    {
        if (ascii ==43)
        {
           cout<<"operator:"<<":  "<<(char)ascii<<"(addition) "<<endl;
        }
        if (ascii ==45)
        {
          cout<<"operator:"<<":  "<<(char)ascii<<"(subtraction) "<<endl;
        }
        if(ascii == 42)
        {
          cout<<"operator:"<<":  "<<(char)ascii<<"(multiplication) "<<endl;
        }
        if(ascii == 47)
        {
          cout<<"operator:"<<":  "<<(char)ascii<<"(division) "<<endl;
        }
        if(ascii == 37)
        {
          cout<<"operator:"<<":  "<<(char)ascii<<"(remainder) "<<endl;
        }
        if(ascii == 61)
        {
          cout<<"operator:"<<":  "<<(char)ascii<<"( equal) "<<endl;
        }
      }
   }
}

void commentCheck(){
 string s1, s2;
    int len1 = 0, len2 = 0;

    cout<<"Enter string 1 (first word of the comment): ";
    cin>>s1;

    while(s1[len1] != '\0')
        len1++;

    if(len1>=2 && (int)s1[0]==47 && (int)s1[1]==47){
        cout<<"Single line comment"<<endl;
    }
    else if(len1>=2 && (int)s1[0]==47 && (int)s1[1]==42){
        cout<<"Enter string 2 (last word of the comment): ";
        cin>>s2;

        while(s2[len2] != '\0')
            len2++;

        if(len2>=2 && (int)s2[len2-2]==42 && (int)s2[len2-1]==47)
            cout<<"Multiple line comment"<<endl;
        else
            cout<<"Not a comment (missing */)"<<endl;
    }
    else{
        cout<<"Not a comment"<<endl;
    }

}


void identifier(){





 }


int main (){

int choice;
do{
    cout<<"\n1. numeric constant"<<endl;
    cout<<"2. operators"<<endl;
    cout<<"3. commentCheck"<<endl;
    cout<<"enter choice:";
    cin>>choice;

    if(choice ==1)numeric();
    else if (choice ==2)operators();
    else if (choice ==3)commentCheck();

}
while(choice!=0);

return 0;

}

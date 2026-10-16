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


void identifierCheck(){
    string s;
    cout<<"Enter input: ";
    cin>>s;

    int flag = 1;

    int first = (int)s[0];
    if(!((first>=65 && first<=90) || (first>=97 && first<=122) || first==95))
        flag = 0;

    for(int i=1; i<(int)s.length(); i++){
        int ascii = (int)s[i];
        if(!((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122) || ascii==95 || (ascii>=48 && ascii<=57))){
            flag = 0;
            break;
        }
    }

    if(flag==1)
        cout<<"Identifier"<<endl;
    else
        cout<<"Not an identifier"<<endl;
}

void averageArray(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[100];
    int sum = 0;

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }

    float avg = (float)sum / n;
    cout<<"Average = "<<avg<<endl;
}

void minMaxArray(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[100];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int mn = arr[0];
    int mx = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] < mn) mn = arr[i];
        if(arr[i] > mx) mx = arr[i];
    }

    cout<<"Minimum = "<<mn<<endl;
    cout<<"Maximum = "<<mx<<endl;
}


void fullName(){
    string firstName, lastName, fullName;

    cout<<"Enter first name: ";
    cin>>firstName;
    cout<<"Enter last name: ";
    cin>>lastName;

    fullName = firstName + (string)" " + lastName;
    cout<<"full name = \""<<fullName<<"\""<<endl;
}



int main (){

int choice;
do{
    cout<<"\n1. Numeric constant"<<endl;
    cout<<"2. Operators"<<endl;
    cout<<"3. Comment Check"<<endl;
    cout<<"4. Identifier Check"<<endl;
    cout<<"5. Average Array"<<endl;
    cout<<"6. MinMax Array"<<endl;
    cout<<"7. Full Name Array"<<endl;
    cout<<"Enter choice:";
    cin>>choice;

    if(choice ==1)numeric();
    else if (choice ==2)operators();
    else if (choice ==3)commentCheck();
    else if (choice ==4)identifierCheck();
    else if (choice ==5)averageArray();
    else if (choice ==6)minMaxArray();
    else if (choice ==7)fullName();


}
while(choice!=0);

return 0;

}

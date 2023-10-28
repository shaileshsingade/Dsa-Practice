#include<iostream>
#define max 1000
using namespace std;
int main()
{
    char c[max];
    char state ='A';
    cout << "Enter the string";
    cin >>c;
   for (int i = 0; i < c[i] != '\0'; i++)
    {
       switch (state)
       {
       case 'A':
           if(c[i]=='0'||c[i]=='4' ||c[i]=='8')
           {
               state ='A';
               cout<<"A-------------->A"<<endl;
           }
           else if(c[i]=='1'||c[i]=='5'||c[i]=='9')
           {
               state ='B';
               cout<<"A--------------->B"<<endl;

           }
           else if(c[i]=='2'||c[i]=='6')
           {
               state ='C';
               cout<<"A---------------->C"<<endl;
           }
           else if(c[i]=='3'||c[i]=='7')
           {
               state ='D';
               cout<<"A----------------->D"<<endl;
           }
           else{
               if(c[i]!=(0,1,2,3,4,5,6,7,8,9))
               
                   cout <<"String is invalid";
                   exit(0);
               
           }
          
           
           
           break;
           case 'B':
           if(c[i]=='0'||c[i]=='4' ||c[i]=='8')
           {
               state ='C';
               cout<<"B------------------c"<<endl;
           }
          else if(c[i]=='1'||c[i]=='5' ||c[i]=='9')
           {
               state ='D';
               cout<<"B------------------D"<<endl;
           }
            else if(c[i]=='2'||c[i]=='6')
            {
                state ='A';
                cout<<"B-----------------A"<<endl;
            }
            else if(c[i]=='3'||c[i]=='7')
            {
                state ='B';
                cout<<"B-----------------B"<<endl;
            }
             else{
               if(c[i]!=(0,1,2,3,4,5,6,7,8,9))
               
                   cout <<"String is invalid";
                   exit(0);
               
           }
           
            break;
            case 'C':
           if(c[i]=='0'||c[i]=='4' ||c[i]=='8')
           {
               state ='A';
               cout<<"C-----------------A"<<endl;
           }
          else if(c[i]=='1'||c[i]=='5' ||c[i]=='9')
           {
               state ='B';
               cout<<"C-----------------B"<<endl;
           }
            else if(c[i]=='2'||c[i]=='6')
            {
                state ='C';
                cout<<"C----------------C"<<endl;
            }
            else if(c[i]=='3'||c[i]=='7')
            {
                state ='D';
                cout<<"C-----------------D"<<endl;
            }
             else{
               if(c[i]!=(0,1,2,3,4,5,6,7,8,9))
               
                   cout <<"String is invalid";
                   exit(0);
               
           }
            
            break;
            case 'D':
           if(c[i]=='0'||c[i]=='4' ||c[i]=='8')
           {
               state ='C';
               cout<<"D----------------C"<<endl;
               
           }
          else if(c[i]=='1'||c[i]=='5' ||c[i]=='9')
           {
               state ='D';
               cout<<"D----------------D"<<endl;

           }
            else if(c[i]=='2'||c[i]=='6')
            {
                state ='A';
                cout<<"D----------------A"<<endl;
            }
            else if(c[i]=='3'||c[i]=='7')
            {
                state ='B';
                cout<<"D----------------B"<<endl;
            }
             else{
               if(c[i]!=(0,1,2,3,4,5,6,7,8,9))
               
                   cout <<"String is invalid";
                   exit(0);
               
           }
           
            break;
           
       } 
    }
    if(state =='A')
           {
               cout <<"String is accepted";
           }
           else
           {
               cout<<"string is rejected";
           }
           return 0;
    
}


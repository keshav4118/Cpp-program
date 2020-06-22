#include<iostream>
#include<stdio.h>
#include"convert.cpp"
#include"marksheet.cpp"
using namespace std;
class Main
{
      public:
      void Square()
      {
            
            int a,b;
            cout<<"Enter a Number"<<endl;
            cin>>a;
            b=a*a;
            cout<<"Squre od given Number is "<<b<<endl;
      }
      public:
      void swap()
      {
         
            int a,b,c;
            cout<<"Enter any Two Number"<<endl;
            cin>>a>>b;
            cout<<"Before swaping"<<a<<"\t"<<b<<endl;
            c=a;
            a=b;
            b=c;
            cout<<"After swaping"<<a<<"\t"<<b<<endl;
      }
      public:
      void swaping()
      {     
           
            int a,b;
            cout<<"Enter any two Number"<<endl;
            cin>>a>>b;
            cout<<"Before swaping"<<a<<b<<endl;
            a=a+b;
            b=a-b;
            a=b+a;    
            cout<<"After swaping"<<a<<b<<endl;
      }
      public:
      void Triangle()
      {
          
            int a,b,c;
            cout<<"Enter any two Number"<<endl;
            cin>>a>>b;
            c=1/2*(a*b);
            cout<<"Area of Triangle="<<c<<endl;
      }
      public:
      void Circle()
      {
            
            int a,b;
            float pi=3.14;
            cout<<"Enter any Number"<<endl;
            cin>>a;
            b=pi*a*a;
            cout<<"Area of Circle"<<b<<endl;
      }
      void si()
      {
            
            int p;
            float si,r,t;
            cout<<"Enter rate\nEnter time\nEnter Principle"<<endl;
            cin>>p>>r>>t;
            si=(p*r*t)/100;
            cout<<"Simple Intrest is "<<si<<endl;
      }
      void dictance()
      {
            int a,b;
            cout<<"Enter Distance in meter"<<endl;
            cin>>a;
            b=a*1000;
            cout<<"Kilometer ="<<b<<endl;
      }
      void Avrage()
      {
            
            int a,b,c,avg;
            cout<<"Enter any three Number"<<endl;
            cin>>a>>b>>c;
            avg=(a+b+c)/3;
            cout<<"Average is:"<<avg<<endl;
      }
      public:
      void Temp()
      {
           
            int c,f;
            cout<<"Enter temp in celsius"<<endl;
            cin>>c;
            f= ((9/5)*c+32);
            cout<<"Temprature in Faranhait"<<f<<endl;     
       }
     public:   
      void Temp2()
      {
            
            int cal,f;
            cout<<"Enter Temprature in farenheit"<<endl;
            cin>>f;
            cal= ((f-32)*5/9);
            cout<<"Temprature in Calsius"<<cal<<endl;
      }
      public:
      void ascii()
      {
            
            char c;
            cout<<"Enter a charactor:"<<c<<endl;
            cin>>c;
            cout<<"ASCII value of "<<c<<"is "<<int(c)<<endl;
      }
      public:
      void sumdigit()
      {
            
            int sum=0,n;
            cout<<"Enter any Three digit Mumber"<<endl;
            cin>>n;
            sum=n%10+(n/10)%10+(n+100);
            cout<<"Sum of Three Number is "<<sum<<endl;
      }
      public:
      void sumdigit2()
      {
            
            int n,sum=0;
            cout<<"Enter any Three digit Number"<<endl;
            cin>>n;
            if(n)
            {
                  sum=n%10+(n/10)%10+(n+100);
                  
            }      
            else
            {
                  cout<<" "<<endl;
            }      
       }
       public:
       void inttochar()
       {
            
            int n;
            cout<<"Enter integer Value which you want to change in Character"<<n<<endl;
            cin>>n;
            cout<<"Character is"<<char(n)<<"="<<n<<endl;
        }
      public:
      void posinag()
      {
            
            int n;
            cout<<"Enter a Number"<<endl;
            cin>>n;
            if(n>0) 
                  cout<<"Number is Positive"<<endl;
            else
                  cout<<"Number is Nagetive"<<endl;
      }
      public:
      void palindrom()
      {
            
            int n,rn=0,rem,num;
            cout<<"Enter a Number:"<<endl;
            cin>>num;
            n=num;
            while(num!=0)
            {
                  rem=num%10;
                  rn=rn*10+rem;
                  num/=10;
             }
             if(rn==n)
             
                  cout<<"Number is Palindroim"<<endl;
              else
             
                   cout<<"Number is not Palindroim"<<endl;
      }
      public:
      void arm()
      {
           
            int sum=0,a,b,rem;
            cout<<"Enter a number"<<endl;
            cin>>a;
            b=a;
            while(b!=0)
            {
                  rem=b%10;
                  sum=sum+(rem*rem*rem*rem);
                  b=b/10;
            }
            if(a==sum)
            {
                  cout<<"Number is armstrong"<<endl;
            }
            else
            {
                  cout<<"Number is not armstrong"<<endl;
            }
            
      }
      public:
      void fact()
      {
            
            int f=1,i,n;
            cout<<"Enter a value"<<endl;
            cin>>n;
            for(i=1;i<=n;i++)
            {
                  f=f*i;
            }
            cout<<"Factorial is::"<<f<<endl;
      }
      public:
      void add()
      {
            
            float a;
            float b;
            float c;
            cout<<"Enter a First Number: "<<endl;
            cin>>a;
            cout<<"Enter a Second Number: "<<endl;
            cin>>b;
            c=a+b;
            cout<<"Addition= "<<c<<endl;
      }
      public:
      void sub()
      {
            
            float a;
            float b;
            float c;
            cout<<"Enter a First Number: "<<endl;
            cin>>a;
            cout<<"Enter a Second Number: "<<endl;
            cin>>b;
            c=a-b;
            cout<<"Subtraction= "<<c<<endl;
      }
      public:
      void multi()
      {
            
            float a;
            float b;
            float c;
            cout<<"Enter a First Number: "<<endl;
            cin>>a;
            cout<<"Enter a Second Number: "<<endl;
            cin>>b;
            c=a*b;
            cout<<"Multiplication= "<<c<<endl;
      }
      public:
      void divi()
      {
                        float a;
            float b;
            float c;
            cout<<"Enter a First Number: "<<endl;
            cin>>a;
            cout<<"Enter a Second Number: "<<endl;
            cin>>b;
            c=a/b;
            cout<<"Division= "<<c<<endl;
      }
      public:
      void rem()
      {
            
            int a;
            int b;
            float c;
            cout<<"Enter a First Number: "<<endl;
            cin>>a;
            cout<<"Enter a Second Number: "<<endl;
            cin>>b;
            c=a%b;
            cout<<"Remender= "<<c<<endl;
      }
};
int main()
{
      Main m;
      int ch,cho,choi;
      char y;
      
 do{
      cout<<"1.Calculater\n2.Swap\n3.Swaping\n4.Triangle\n5.Circle\n6.Simple intrast\n7.Convert\n8.Avrage\n9.Temprature\n10.Temprature2\n11.ASCII\n12.Sum of Digit\n13.sumdigit2\n14.integar to charactor\n15.Positive to Nagetive\n16.Palindroim\n17.Armstrong\n18.Factorial\n19.Marksheet"<<endl;
      
      
      cout<<"Enter choise:"<<endl;
      cin>>ch;
      switch(ch)
      {
            case 1:
                        do{cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remender\n6.Squre"<<endl;
                        cin>>cho;
                        switch(cho)
                        {
                              case 1:
                                          m.add();
                                          break;
                              
                              case 2:
                                          m.sub();
                                          break;
                              case 3:
                                          m.multi();
                                          break;
                              case 4:
                                          m.divi();
                                          break;
                              case 5:
                                          m.rem();
                                          break;
                              case 6:
                                          m.Square();
                                          break;
                              default:
                                     cout<<"You prass Invalid Key\n";
                              }
                              cout<<"do you want to continue"<<endl;
                              cin>>y;
                              }while(y=='y');
                        
                        break;
            case 2:
                        m.swap();
                        break;
            case 3:
                        m.swaping();
                        break;
            case 4:
                        m.Triangle();
                        break;
            case 5:
                         m.Circle();
                         break;
            case 6:
                         m.si();
                         break;
            case 7:
                        do{
                        cout<<"1.cm to km\n2.km to cm\n3.distance"<<endl;
                         cin>>choi;
                         switch(choi)
                         {
                              case 1:     keshava k;
                                          k.km();
                                          break;
                              
                              case 2:     
                                          k.cm();
                                          break;
                              case 3:     
                                          k.distance();
                                          break;
                              default:
                                     cout<<"You prass Invalid Key\n";
                          }   
                          cout<<"do you want to continue"<<endl;
                          cin>>y;
                          }while(y=='y');             
                             
                         break;
            case 8:
                         m.Avrage();
                         break;
            case 9:
                         m.Temp(); 
                         break;
            case 10:
                         m.Temp2();
                         break;
            case 11:
                         m.ascii();
                         break;
            case 12:
                         m.sumdigit();
                         break;
            case 13:
                         m.sumdigit2();
                         break;
            case 14:
                         m.inttochar();
                         break;
            case 15:
                         m.posinag();
                         break;
            case 16:
                         m.palindrom();
                         break;
            case 17:
                         m.arm();
                         break;
            case 18:
                         m.fact();
                         break;
            case 19:
                      {
                        MarkSheet ma;
                        ma.accept();
                        ma.display();
	                  break;
	                 }          
            default:
                cout<<"You press Invalid Key\n";      
      }
      cout<<"Do you want countinue(y/n)"<<endl;
      cin>>y;
      getchar();

}while(y == 'y');
}
     

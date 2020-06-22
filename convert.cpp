using namespace std;
class keshava
{
      public:
      void km()
      {
            
            double km,cm,c;
            cout<<"Enter value in kilometer\n";
            cin>>km;
            c=km*100000;
            cout<<"value in cm is"<<c<<"\n";
      }
      
      void cm()
      {     
            
            double km,cm,c;
            cout<<"Enter value in centimeter\n";
            cin>>cm;
            c=cm/100000;
            cout<<"value in cm is"<<km<<endl;

      }
      
      void distance()
      {
            
            double a,b;
            cout<<"Enter Distance in meter";
            cin>>a;
            b=a*1000;
            cout<<"Kilometer ="<<b;
      }
};


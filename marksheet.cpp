//using namespace std;
class MarkSheet
{
    int roll,m,ph,c,h,e,sum,per;
    float p;
    string name;
    string anr;
    public:
    void accept()
    {
        cout<<"Enter Your name:"<<endl;
        cin>>name;
        cout<<"Enter your Rollnumber:"<<endl;
        cin>>roll;
        cout<<"Enter your Anrollment Number:"<<endl;
        cin>>anr;
        cout<<"Maths\t";
        cin>>m;
        cout<<"Physics\t";
        cin>>ph;
        cout<<"Chemestry\t";
        cin>>c;
        cout<<"Hindi\t";
        cin>>h;
        cout<<"English\t";
        cin>>e;

    }
    public:
    void display()
    {
        cout<<"\n\nname :"<<name<<endl;
        cout<<"Rollnumber:"<<roll<<endl;
        cout<<"Enrolment Number:"<<anr<<endl;
        cout<<"Maths\t"<<m<<endl;
        cout<<"Physics\t"<<ph<<endl;
        cout<<"Chemestry"<<c<<endl;
        cout<<"Hindi\t"<<h<<endl;
        cout<<"English\t"<<e<<endl;
	  sum=m+ph+c+e+h;
	 
           	cout<<"Total Marks:500\t \tObtain Marks:"<<sum<<endl;
           	p=sum*100/500;
            cout<<"Yout parcentage is \t"<<p<<endl;
            if(m<33||e<33||ph<33||c<33||h<33)
            {
                  cout<<"You are Fail in the Examination\n";
            }
           
	if (p>=90)
	{
	cout<<"You are Passed The Examination with A++ Grade\n\n";
	cout<<"Out Standing";
	}

	else if  (p>=80)
	{
	cout<<"You are Passed The Examination with A+ Grade\n\n";
	cout<<"Excellent";
	}

	else if  (p>=70)
	{	
	cout<<"You are passed The Examination with A Grade\n\n";
	cout<<"Very Good\n";
	}	
	
	else if (p>=60)
	{
	cout<<"you get B Grade\n\n";
	cout<<"Good\n";
	}

	else if(p>=50)
	{
	cout<<"Your Get C Grade\n\n";
	cout<<"Average\n";
	}
	
	else if(p>=40)
	{
	cout<<"You Get D Grade\n\n";
	cout<<"Satisfactory";
	}
	
	else if(p>=30)
	{
	cout<<"Your not pass in all Subject\n\n";
	cout<<"But You Can Pass The Examination\n";
	}
 
	else 
	{
	cout<<"You are Fail\n\n";
	cout<<"Never Give Up one Day Can\n";
	}

      }
};


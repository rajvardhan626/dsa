#include<iostream>
using namespace std;

class student{
	string name;
    public:
    
    int age;
    bool gender;
    student(){
    	cout<<"Default construtor"<<endl;
	}
    student(string s, int a , int g){
    	cout<<"Parameterised construtor"<<endl;
    	name = s;
    	age= a;
    	gender= g;
	}//parameterised constructor
	
	
	student(student &a){
		cout<<"Copy construtor"<<endl;
		name=a.name;
		age=a.age;
		gender=a.gender;
	}
	~student(){
		cout<<"destructor called"<<endl;
	}
	void getname(){
		cout<<name<<endl;
	}

    void printinfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }
    bool operator == (student &a){
    	if(name==a.name && age==a.age && gender==a.gender){
    		return true;
		}
		return false;
			
		
	}
};

int main(){
    
    
    
    //student arr[3];
    //for(int i=0;i<3;i++){
      //  cout<<"Name= ";
        //cin>>arr[i].name;
        //cout<<"Age= ";
        //cin>>arr[i].age;
        ///cout<<"Gender ";
        //cin>>arr[i].gender;
    // }
    //for(int i =0;i<3;i++){
      //  arr[i].printinfo();
      // }
    
    student a("raj",20,1);
    
    //a.printinfo();
	student b("aryan",20,1);
	//b.printinfo();
	student c;
	student d =a;
	if(d==a){
		cout<<"same"<<endl;
		
	}
	else{
		cout<<"not same"<<endl;
	}
	
    return 0;
}

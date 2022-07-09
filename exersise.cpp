#include <iostream>
#include <fstream>


using namespace std;

typedef struct students{
	string name;
	int age;
	float grade[3];
}students;

void welcome(){

	cout<<endl<<endl<<endl;
	cout<<"**********************************************"<<endl;
	cout<<"*****************WELCOME**********************"<<endl;
	cout<<"**********************************************"<<endl;
	cout<<endl<<endl;
	cout<<"#####  1. Add student  ######"<<endl;
	cout<<"#####  2. Display      ######"<<endl;
	cout<<"#####  3. exit         ######"<<endl;
}


students add(students stud){
	cout<<endl;
	cout<<"What is your name ?\t";
	cin>>stud.name;
	cout<<"How old are you ?\t";
	cin>>stud.age;
	for(int i = 0; i < 3; i++){
		cout<<"Insert grade number "<<i+1<<"  ";
		cin>>stud.grade[i];
	}

	ofstream writefile("file/students.txt");
	writefile<<"studnet name : "<<stud.name<<"\nstudent age : "<< stud.age<<"\n";
	writefile.close();

	return stud;
}

void display(students stud[],int size){

	if(size  == 0){
		cout<<"sorry there is no file here "<<endl;
		return;
	}	
	for(int i = 0;i < size;i++){
		cout<<"#########################################"<<endl;
		cout<<endl<<"Name :\t"<<stud[i].name<<endl<<endl;
		cout<<"Age  :\t"<<stud[i].age<<endl<<endl;
		cout<<"Your grades are"<<endl<<endl;
		for(int j = 0;j < 3;j++)
		{
			cout<<"Grade "<<j+1<<" is "<<stud[i].grade[j]<<"\t";
		}
		cout<<endl<<"##########################################"<<endl<<endl;
	}
}


int main()
{
	students student[10];	
	string pauser;

	int choice, num_stud, counter = 0;	
	first:
	welcome();
	cin>>choice;
	switch(choice){
		case 1:
			cout<<endl<<"How many students do you want to add\t";
			cin>>num_stud;
			
			for(int i = counter;i < num_stud + counter;i++){
				cout<<i+1<<endl;
				student[i] = add(student[i]);
			}
			
			counter += num_stud;

			cout<<"you succefully entered your file"<<endl;
			cin>>pauser;
			goto first;
			break;
		case 2:
			display(student,counter);	
			cout<<endl<<endl;
			cin>>pauser;
			goto first;
			break;
		case 3:
			cout<<endl<<endl<<"thank you"<<endl<<endl;
			break;
		default: 
			cout<<endl<<"wrong input"<<endl;
			break;
	}

	

	return 0;
}

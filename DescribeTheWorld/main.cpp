#include "Person.h"
#include "Book.h"
#include "Computer.h"
#include "University.h"
#include "Cafe.h"
#include "Student.h"

#include <vector>
#include <map>
#include <fstream>

Person* FindOldest(vector<Person*> humans)
{
	Person* oldest = nullptr;
	for (int i = 0; i < humans.size() - 1; i++)
	{
		for (int j = i + 1; j < humans.size(); j++)
		{
			if (humans.at(i)->GetAge() > humans.at(j)->GetAge())
			{
				if (oldest != nullptr)
				{
					oldest->GetAge() > humans.at(i)->GetAge();
					break;
				}
				oldest = humans.at(i);
			}
		}
	}
	return oldest;
}

//void LoadData(string filename)
//{
//	ifstream myfile(filename);
//	string mystring;
//	if (myfile.is_open())
//	{
//		string mychar;
//		while (myfile)
//		{
//			mychar = myfile.get();
//			cout << mychar;
//		}
//	}
//}

void LoadData(vector<string>& v) 
{
	ifstream myfile("data.txt");
	string line;
	while (getline(myfile, line)) 
	{
		v.push_back(line);
	}
	myfile.close();
}

vector<string> GetLineData(string& line)
{
	string word;
	vector<string> temp;
	for (int i = 0; i < line.size(); i++)
	{
		if (line[i] != ',')
		{
			word = word + line[i];
		}
		else
		{
			temp.push_back(word);
			word.clear();
		}
	}
	return temp;
}

int main()
{
	/*Student* student1 = new Student;
	student1->SetName("Viktoria");
	student1->SetAge(21);
	student1->SetUniname("Sofia University");
	student1->SetSpec("Software engeneering");
	student1->Print();

	Student* student2 = new Student;
	student2->SetName("Tsvetelin");
	student2->SetAge(22);
	student2->SetSex("Male");
	student2->SetUniname("Sofia University");
	student2->SetSpec("Applied Mathematics");
	student2->Print();

	Student* student3 = new Student;
	student3->SetName("Maria");
	student3->SetAge(21);
	student3->SetSex("Female");
	student3->SetUniname("Sofia University");
	student3->SetSpec("Software engeneering");
	student3->Print();

	vector <Student*> students;
	students.push_back(student1);
	students.push_back(student2);
	students.push_back(student3);
	for (int i = 0; i < students.size(); i++)
	{
		cout << students.at(i)->GetName() << endl;
		cout << students.at(i)->GetSpec() << endl;
	}*/

	/*string filename = "data.txt";
	LoadData(filename);*/
	
	vector<string> students;
	LoadData(students);
	for (int i = 0; i < students.size(); ++i)
	{
		/*cout << students[i] << " ";
		cout << endl;*/
	}

	vector<Student*> person;
	vector<string> data;
	for (int i = 0; i < students.size(); i++)
	{
		data = GetLineData(students[i]);
		Student* first = new Student;
		first->SetName(data[0]);
		first->SetAge(stoi(data[1]));
		first->SetSex(data[2]);
		first->SetBirth(stoi(data[3]));
		first->SetId(stoi(data[4]));
		first->SetHeight(stoi(data[5]));
		first->SetEyecolor(data[6]);
		first->SetZodiacsign(data[7]);
		first->SetUniname(data[8]);
		first->SetSpec(data[9]);
		person.push_back(first);
	}
	for (int i = 0; i < person.size(); i++)
	{
		person.at(i)->Print();
	}
	
	

	return 0;
}
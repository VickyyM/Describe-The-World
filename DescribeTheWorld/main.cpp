#include "Person.h"
#include "Book.h"
#include "Computer.h"
#include "University.h"
#include "Cafe.h"
#include "Student.h"

#include <vector>
#include <map>

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

int main()
{
	Student* student1 = new Student;
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
	}

	return 0;
}
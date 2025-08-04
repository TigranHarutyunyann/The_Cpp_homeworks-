#include <iostream>
#include <vector>
#include <string>

struct StudentData {
    const std::string sName;
    const int nStudentID;
    const int nBirthYear;
    std::vector<int>& vecOfGrades;

    StudentData(const std::string& name, int id, int year, std::vector<int>& grades)
        : sName(name), nStudentID(id), nBirthYear(year), vecOfGrades(grades) {}
};

class StudentProfile {
private:
    const StudentData& data; 

public:
    StudentProfile(const StudentData& studentData) : data(studentData) {}

    void printProfile() const {
        std::cout << "Name: " << data.sName << std::endl;
        std::cout << "Student ID: " << data.nStudentID << std::endl;
        std::cout << "Birth Year: " << data.nBirthYear << std::endl;
        std::cout << "Grades: ";
        for (int grade : data.vecOfGrades) {
            std::cout << grade << " ";
        }
        std::cout << std::endl;
    }

    double averageGrade() const {
        if (data.vecOfGrades.empty())  return 0.0;
        int sum=0, count=0;
		for(auto num : data.vecOfGrades){
		sum+=num;
		count++;
		}
		return static_cast<double>(sum) / count;
    }
};

int main() {
	std::vector<int> grades{9,9,9,8,7,9,10,10,8,9,2};
	
	StudentData student("Tigran", 12345, 2008, grades);
    StudentProfile profile(student);

    profile.printProfile();
    std::cout << "Average Grade: " << profile.averageGrade() << std::endl;
	return 0;
}

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Worker
{
private:
  string socialNumber;
  string name;
  int yearsOfExperience;
  string currentPosition;
  vector<double> salaries;

public:
  Worker() : socialNumber("0"), yearsOfExperience(0)
  {
    cout << "Въведете текуща длъжност: ";
    getline(cin, currentPosition);
  }

  Worker(const string socialNum, const string workerName, const int experience, const string position)
      : socialNumber(socialNum), name(workerName), yearsOfExperience(experience), currentPosition(position) {}

  string getSocialNumber() const
  {
    return socialNumber;
  }

  void setSocialNumber(const string &socialNum)
  {
    socialNumber = socialNum;
  }

  void setName(const string &workerName)
  {
    name = workerName;
  }

  string getName() const
  {
    return name;
  }
  void setYearsOfExperience(int experience)
  {
    yearsOfExperience = experience;
  }

  int getYearsOfExperience() const
  {
    return yearsOfExperience;
  }

  void setCurrentPosition(const string &position)
  {
    currentPosition = position;
  }

  string getCurrentPosition() const
  {
    return currentPosition;
  }

  void addSalary(double salary) {
    salaries.push_back(salary);
  }

  double getAverageSalary() const {
    if (salaries.empty()) return 0.0;

    double sum = 0.0;

    for (double salary : salaries) 
    {
      sum += salary;
    }
    
    return sum / salaries.size();
  }

  double getMinimumSalary() const {
    if (salaries.empty()) return 0.0;

    double minSalary = salaries[0];

    for (int i = 1; i < salaries.size(); i++) {
      if (minSalary > salaries[i]) {
        minSalary = salaries[i];
      }
    }

    return minSalary;
  }
};

int main() {
    Worker worker1;

    worker1.setSocialNumber("123456789");
    worker1.setName("Иван Иванов");
    worker1.setYearsOfExperience(10);
    
    worker1.addSalary(1200.50);
    worker1.addSalary(1350.75);
    worker1.addSalary(1280.40);

    cout << "Социален номер: " << worker1.getSocialNumber() << endl;
    cout << "Име: " << worker1.getName() << endl;
    cout << "Години трудов стаж: " << worker1.getYearsOfExperience() << endl;
    cout << "Текуща длъжност: " << worker1.getCurrentPosition() << endl;
    cout << "Средна заплата: " << worker1.getAverageSalary() << endl;
    cout << "Минимална заплата: " << worker1.getMinimumSalary() << endl;

    return 0;
}
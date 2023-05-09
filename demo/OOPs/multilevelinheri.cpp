#include <iostream>

using namespace std;

// Base class
class Person {
   public:
      void setName(string n) {
         name = n;
      }
      string getName() {
         return name;
      }

   protected:
      string name;
};

// Derived class 1
class Student: public Person {
   public:
      void setRollNo(int r) {
         rollNo = r;
      }
      int getRollNo() {
         return rollNo;
      }

   protected:
      int rollNo;
};

// Derived class 2
class EngineeringStudent: public Student {
   public:
      void setBranch(string b) {
         branch = b;
      }
      string getBranch() {
         return branch;
      }

   private:
      string branch;
};

int main() {
   EngineeringStudent engStudent;

   engStudent.setName("John");
   engStudent.setRollNo(12345);
   engStudent.setBranch("Computer Science");

   // Print the details of the object.
   cout << "Name: " << engStudent.getName() << endl;
   cout << "Roll No: " << engStudent.getRollNo() << endl;
   cout << "Branch: " << engStudent.getBranch() << endl;

   return 0;
}

/*main.cpp*/
 
//
// Grade Analysis program in modern C++.
//
// << YOUR NAME >>
// U. of Illinois, Chicago
// CS 341: Fall 2018
// Project 01
//
 
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
 
class Course
{
private:
 
public:
    string Name, Number, Coursename, GradeA, GradeB, GradeC, GradeD, GradeF;
    Course(string name, string number, string coursename, string Gradea, string Gradeb, string Gradec, string Graded, string Gradef)
    : Name(name) ,Number(number), Coursename(coursename), GradeA(Gradea),GradeB(Gradeb), GradeC(Gradec), GradeD(Graded), GradeF(Gradef) {}

    double totalCourses();
};
 
 
int main()
{
  string  filename;
  string line;
  string name, number, coursename, gradeA, gradeB, gradeC, gradeD, gradeF;
 // cin >> filename;
 // cout << filename << endl;
 // cout << endl;
 int a = 0;
 int b = 0;
 int c = 0;
 int d = 0;
 int f = 0;
 int total = 0;
 int atotal = 0;
  vector<Course> courses;
  ifstream file("fall-2017.csv");
  getline(file, line);
  while (getline(file, line))

  {
      stringstream ss(line);
      getline(ss, name, ',');
      getline(ss, number, ',');
      getline(ss, coursename, ',');
      for (int i = 0; i <5 ; ++i) {
          getline(ss, gradeA, ',');
          if(i == 0){
             atotal = stoi(gradeA) + atotal;
             cout << atotal << endl;
          }
          a = stoi(gradeA);
          total = total + a;


      }



      Course c(name, number,coursename,gradeA,gradeB,gradeC,gradeD,gradeF);
      courses.push_back(c);
  }
  file.close();

  cout << std::fixed;
  cout << std::setprecision(2);
    for (Course& c : courses) {
        cout << c.Name << " " << c.Number << " " << c.Coursename << " " << c.GradeA << endl;
    }

    cout << total << " "<< atotal;

    }



 
 
 
 
 
 

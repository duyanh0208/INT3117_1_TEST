#include <bits/stdc++.h>
using namespace std;

string ratingStudent(double GPA) {
  string state = "";
  if( GPA >= 3.6) {
    state = "Ban la Sinh vien Xuat Sac";
  }else if ( GPA >= 3.2 && GPA < 3.6){
    state = "Ban la Sinh vien Gioi";  
  }else if ( GPA >= 2.5 && GPA < 3.2){
    state = "Ban la Sinh vien Kha";  
  }else if ( GPA >= 2 && GPA < 2.5){
    state = "Ban la Sinh vien Trung Binh";  
  }else if ( GPA < 2){
    state = "Ban bi canh cao hoc vu";  
  }
  
  return state;
}

int main() {
  int numCourses;

  do {
    cout << "Nhap so luong mon hoc: ";
    cin >> numCourses;
    if (numCourses <= 0) 
      cout << "Loi: So luong mon hoc phai lon hon 0." << endl;    
  } while (numCourses <= 0);

  double totalPoints = 0;
  int totalWeight = 0;

  for (int i = 1; i <= numCourses; i++) {
    double grade;
    do {
      cout << "Nhap diem cua mon hoc " << i << ": ";
      cin >> grade;
      if (grade < 0 || grade > 4) 
        cout << "Loi: Diem phai nam trong khoang tu 0 den 4." << endl;
    } while (grade < 0 || grade > 4);

    int weight;
    do {
      cout << "Nhap trong so cua mon hoc " << i << ": ";
      cin >> weight;
      if (weight <= 0)
        cout << "Loi: Trong so phai lon hon 0." << endl;
    } while (weight <= 0);
    totalPoints += grade * weight;
    totalWeight += weight;
  }

  double GPA = totalPoints / totalWeight;
  cout << setprecision(2) << fixed << "Diem GPA: " << GPA << endl;
  cout << ratingStudent(GPA) << endl;

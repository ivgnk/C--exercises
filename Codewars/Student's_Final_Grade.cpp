/*
https://www.codewars.com/kata/5ad0d8356165e63c140014d4/train/cpp
This function should take two arguments: exam - grade for exam (from 0 to 100); projects - number of completed projects (from 0 and above);
This function should return a number (final grade). There are four types of final grades:
100, if a grade for the exam is more than 90 or if a number of completed projects more than 10.
90, if a grade for the exam is more than 75 and if a number of completed projects is minimum 5.
75, if a grade for the exam is more than 50 and if a number of completed projects is minimum 2.
0, in other cases
*/

# include <iostream>
using namespace std;

struct Student_Results
{
    int exam;
    int projects;
};

int final_grade(int exam, int projects){
  if (((exam>90) || (projects>10))) return 100;
  else if (((exam>75) && (projects>=5))) return 90;
  else if (((exam>50) && (projects>=2))) return 75;
  else return 0;
}

main(){
  int n = 7;  
  Student_Results std_res[n];
  std_res[0] = {100, 12};
  std_res[1] = {99, 0};
  std_res[2] = {10, 15};
  std_res[3] = {85, 5};
  std_res[4] = {55, 3};
  std_res[5] = {55, 0};
  std_res[6] = {20, 2};
  for (int i = 0; i < n;i++){
    cout << final_grade(std_res[i].exam, std_res[i].projects) << endl;
  }

}
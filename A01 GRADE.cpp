/* C++ program to enter the marks of five subjects and calculate total, average, and percentage */

#include <iostream>

using namespace std;

int main()
{
    float p, c, m, e, h, total, average, per;
    
    // p, c, m, e, and h are the five subjects
    // p = physics
    // c = chemistry
    // m = math
    // e = english
    // h = computer

    cout << "Enter the marks of five subjects::\n";
    cin >> p >> c >> m >> e >> h;

    // Calculate total, average and percentage
    total = p + c + m + e + h;
    average = total / 5.0;
    per = (total / 500.0) * 100;

    // Output
    cout << "The Total marks   = " << total << "/500\n";
    cout << "The Average marks = " << average << "\n";
    cout << "The Percentage    = " << perc << "%";
    cout << "The Degree is     = ";
    //Calculation of Division
    //if Percentage greater than 75 then it is a Hounors Degree
    if(per>75)
    {
        cout<<"Hounors";
    }
    //if Percentage greater than 60 and less than 75 then it is a 1st Division Degree
    else if(per<75 && per>=60) 
    {
         cout<<"1st Division"<<endl;
    }
    //if Percentage greater than 35 and less than 60 then it is a 1st Division Degree
    else if(per<60 && per>=35)
    {
         cout<<"2nd Division"<<endl;
   }
  //if Percentage greater than 30 and less than 35 then it is a 1st Division Degree
   else if(per<35 && per>=30) 
   {
     cout<<"3rd Division"<<endl;
   }
   // If al te above condition fail then he will be fail....😢😢😢😢
   else 
   {
     cout<<"Fail"<<endl;
   } 
    return 0;
}

#include <iostream>
#include <string>
#include <vector>

 struct Student
{
    std::string imie;
    std::string nazwisko;
    std::vector<int>oceny;
};

int average_of(Student x)
{
    int suma = 0;
    int ilosc= x.oceny.size();
    for(auto i=0;i<ilosc;i++)
    {
    x.oceny.at(i);
    suma = suma + x.oceny.at(i);
    }
    return suma/ilosc;
}

Student get_best_student(std::vector<Student>const &x)
{
    int a;
    int best;
    Student tb;
std::cout<<std::endl;
    for(auto i=0;i<x.size();i++){
        a = average_of(x.at(i));
        if(best <= a )
        {
            best = a;
        }
    }
    for(auto i=0;i<x.size();i++)
    {
        if(best == average_of(x.at(i)))
        {
           tb = x.at(i);
           break;

        }
    }
    return tb;
}
int main()
{
    Student pierwszy;
    pierwszy.imie = "Malwina";
    pierwszy.nazwisko = "Wirkus";
    pierwszy.oceny.push_back(5);
    pierwszy.oceny.push_back(5);
    pierwszy.oceny.push_back(4);

    Student drugi;
    drugi.imie = "Michał";
    drugi.nazwisko = "Anioł";
    drugi.oceny.push_back(2);
    drugi.oceny.push_back(5);
    drugi.oceny.push_back(2);

    Student trzeci;
    trzeci.imie = "Adam";
    trzeci.nazwisko = "Małysz";
    trzeci.oceny.push_back(5);
    trzeci.oceny.push_back(2);
    trzeci.oceny.push_back(5);

    std::vector<Student>studenci;
    studenci.push_back(pierwszy);
    studenci.push_back(drugi);
    studenci.push_back(trzeci);


    std::cout<<average_of(pierwszy)<<std::endl;
    std::cout<<average_of(drugi)<<std::endl;
    std::cout<<average_of(trzeci)<<std::endl;
    std::cout<<"najlepszy student: "<<get_best_student(studenci).imie<<get_best_student(studenci).nazwisko<<"\n";
    return 0;
}
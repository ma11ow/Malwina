#include <iostream>
#include <string>
#include <vector>

 struct Student
{
    std::string imie;
    std::string nazwisko;
    std::vector<int>oceny;
};

struct grupa
{

    std::string nazwa;
    std::vector<Student>czlonkowie;

    grupa(std::string const& i)
    {
    nazwa = i;
    }

};

void add_student(grupa& g, Student const& s)
{
g.czlonkowie.push_back(s);
}

auto main() -> int
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

     Student czwarty;
    czwarty.imie = "Robert";
    czwarty.nazwisko = "Kubica";
    czwarty.oceny.push_back(2);
    czwarty.oceny.push_back(2);
    czwarty.oceny.push_back(2);

    auto grupa1 = grupa("33");
    auto grupa2 = grupa("11");

    add_student(grupa2,czwarty);
    add_student(grupa2,pierwszy);
    add_student(grupa1,drugi);
    add_student(grupa1,trzeci);
    std::cout<<"druga grupa";
    for(auto i : grupa2.czlonkowie)
    {
        std::cout<< i.imie<<" "<<i.nazwisko<<", " ;
    }

    std::cout<<std::endl<<"pierwsza grupa ";
    for(auto i : grupa1.czlonkowie)
    {
        std::cout<< i.imie<<" "<<i.nazwisko<< ", ";
    }

    return 0;
}
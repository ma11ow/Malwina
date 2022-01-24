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

    grupa(std::string const& i){
    nazwa = i;
    }

};

void add_student(grupa& g, Student const& s)
{
g.czlonkowie.push_back(s);
}

int average_of(Student x)
{
    int sum = 0;
    int ile= x.oceny.size();
    for(auto i=0;i<ile;i++)
    {
    x.oceny.at(i);
    sum = sum + x.oceny.at(i);
    }
    return sum/ile;
}

grupa best_groups_name(std::vector<grupa>const& gr)
{
    int naj;
    int sum1;
    int sum2;

        sum1 = average_of(gr.at(0).czlonkowie.at(0));
        sum1 = sum1 + average_of(gr.at(0).czlonkowie.at(1));
        sum2 = average_of(gr.at(1).czlonkowie.at(0));
        sum2 = sum2 + average_of(gr.at(1).czlonkowie.at(1));
        if(sum1>sum2){return gr.at(0).nazwa;}
        else if(sum2>sum1){return gr.at(1);}
        else{return gr.at(1);}


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


    auto grupa1 = grupa("17");
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
    std::cout<<std::endl;
    std::vector<grupa>grupy;
    grupy.push_back(grupa1);
    grupy.push_back(grupa2);
    std::cout<<"nazwy grup: ";
    for(auto i=0;i<grupy.size();i++)
    {
        std::cout<<grupy.at(i).nazwa<<", ";
    }

    std::cout<<"najlepsza grupa: "<<best_groups_name(grupy).nazwa;
    return 0;
}
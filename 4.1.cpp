
#include <iostream>
#include <string>

enum P {jedz = 1, pij = 2, tancz = 4};
std::string los(P);

auto main() -> int{
 int user[10] = {2,3,4,5,7,1,0,3,5,2};
 for(auto i=0;i<=10;i++)
 {
 std::cout<<los(P(user[i]))<<" numerze "<<i<<"\n";
 }
return 0;
}
std::string los(P zgody){
    switch(zgody)
    {
        case jedz: // 1
        return "jedz";
        break;
        case pij: // 2
        return "pij";
        break;
        case jedz | pij: // 3
        return "jedz i pij.";
        case tancz: // 4
        return "tancz";
        break;
        case  tancz | jedz: // 5
        return "tancz i jedz";
        break;
        case tancz | pij: // 6
        return "tancz i pij";
        break;
        case tancz | pij | jedz: // 7
        return "tancz pij jedz";
        break;
        default:
        return "odpocznij sobie";
        break;
    }
}
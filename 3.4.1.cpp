#include <iostream>
#include <string>



int main()
{
	std::string namesurname="Malwina Wirkus";
	int size= namesurname.size();
	std::string* ptr=&namesurname;
	*ptr=namesurname;
	int* ptr2=&size;
	
	std::cout<<*ptr<<"\n";
	std::cout<<&namesurname<<"\n";
	std::cout<<*ptr2<<"\n";
	
	
	
	return 0;
	}

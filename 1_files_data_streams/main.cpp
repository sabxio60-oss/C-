#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> myNums = {};
    int number{};

    std::cout << "Podaj liczby do wypisania (lub 0 aby wyjsc):  " << std::endl;
    while((std::cin >> number) && (number != 0))
    {
        myNums.push_back(number);
            
    }

   std::cout << "[";
   for(int index{}; index < myNums.size(); index++)
   {    
        if( (index == (myNums.size()-1) )  )
        { 
            std::cout << myNums[index];
        }   
        else 
        { 
            std::cout << myNums[index] << ", "; 
        }
   }
    std::cout << "]"; 

    return 0;
}
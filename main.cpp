//lisp interpreter implemented in c++
//inspired by Anthony Hay and Peter Norvig's lisp interpreters
//july 2021


#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <map>

std::string str(long n) {std::ostringstream os; os << n; 
    return os.str();
}

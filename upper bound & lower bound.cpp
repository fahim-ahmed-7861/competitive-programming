
// lower_bound/upper_bound example
#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector

int main () {
  int myints[] = {1,2,2,2,4,10,12};

  std::vector<int> v(myints,myints+7);           // 10 20 30 30 20 10 10 20

  std::sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

 // std::vector<int>::iterator low,up;
 // low=std::lower_bound (v.begin(), v.end(), 20); //          ^
  int up= std::upper_bound (v.begin(), v.end(),12)-v.begin(); //

  int lo= std::lower_bound (v.begin(), v.end(),12)-v.begin();

  //      ^

  //std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
  std::cout << lo<<"\n"<<up<<"\n";




  return 0;
}

#include <iostream>

int funnycounter(int n, int start){
  if (n == 1){
    if(start == 1){
      return 2;
    }
    return 3;
  }
  if (start == 2){
    return 2*funnycounter(n-1,1) + funnycounter(n-1,2); // When the start is 2. We can have 1,2,3 next.
  }
  return funnycounter(n-1,1) + funnycounter(n-1,2);//When the start is 1, we can only have 2,1 be the next.
}

int main(){
  int n;
  std::cin >> n;

  std::cout << funnycounter(n,2) << std::endl;

  return 0;
}

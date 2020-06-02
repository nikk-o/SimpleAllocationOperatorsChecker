class A {};

void test_4_helper(A* obj){
  delete obj;
}

void test_4(){
  A* obj = new A();

  test_4_helper(obj); // This shouldn't generate warning
}

int main(){
  test_4();

  return 0;
}

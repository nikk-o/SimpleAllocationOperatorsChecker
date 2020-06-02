class A{};

void test_2(){
  A* obj = new A();
  delete obj;

  obj = new A();
  delete obj; // This shouldn't generate warning
}

int main(){
  test_2();

  return 0;
}

class A{};

void test_1(){
  A* obj = new A();
  delete obj;

  delete obj; // Generated warning
}

int main(){
  test_1();

  return 0;
}

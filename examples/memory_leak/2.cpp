class A{};

void test_2(){
  A* obj = new A();
  delete obj;

  obj = new A(); // This should generate warning
}

int main(){
  test_2();

  return 0;
}

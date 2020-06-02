class A{};

void test_1(){
  A* obj = new A(); // This should generate warning
}

int main(){
  test_1();

  return 0;
}

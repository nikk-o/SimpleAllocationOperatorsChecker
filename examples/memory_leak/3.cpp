class A{};

void test_3(){
  new A(); // This should generate warning (and it does! :) )
}

int main(){
  test_3();

  return 0;
}

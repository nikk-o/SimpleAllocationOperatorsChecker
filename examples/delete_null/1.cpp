class A{};

void test_1(){
  A* obj = nullptr;

  delete obj; // Should generate warning
}

int main(){
  test_1();

  return 0;
}


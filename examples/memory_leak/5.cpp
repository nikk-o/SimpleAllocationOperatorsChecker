class A{};

void test_5(){
  for(int i = 0; i < 42; i++){
    A* obj = new A();	// This should generate warning
  }
}

int main(){
  test_5();

  return 0;
}

class A{};

void test_2(A* obj, bool someCondition){
  if(someCondition){
    delete obj; // Should generate warning
  }
}


int main(){
  //
  return 0;
}

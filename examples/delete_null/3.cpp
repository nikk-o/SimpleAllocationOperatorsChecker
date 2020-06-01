class A{};

void test_3_helper(A* obj){
	if(obj == null){
		delete obj;
	}
}

void test_3(){
	A* obj = nullptr;

	test_3_helper(obj); // Should generate warning
}

int main(){
	test_3();

	return 0;
}

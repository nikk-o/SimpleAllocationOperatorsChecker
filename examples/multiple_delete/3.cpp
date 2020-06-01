class A{};

void test_3_helper(A* obj){
	delete obj;
}

void test_3(){
	A* obj = new A();
	delete obj;

	test_3_helper(obj); // This should generate warning
}

int main(){
	test_3();

	return 0;
}

#include <iostream>
using namespace std;

class Dog {
    private:
      string name;
    public:
      Dog(string s) {
          name = s;
      }
      void say() {
          cout << "my name is " << name << endl;
      }
};

int main(void){
    // Your code here!
    Dog pochi("bosu");
    pochi.say();
}

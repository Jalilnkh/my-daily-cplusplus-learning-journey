/* 
What is Getters?
While all attributes are private, that does not mean that the user will not need to access the values of these attributes. 
A public function can be used to access a private attribute. 
This type of function has a special name, a getter (also called an accessor). 
1- Getters
2- 
3- 
*/
#include <iostream>
using namespace std;
    
class Phone {
  public:
    Phone(string mo, int s, int me) {
      model = mo;
      storage = s;
      megapixels = me;
    }

    string GetModel() {
      return model;
    }
  
  private:
    string model;
    int storage;
    int megapixels;
};
  

int main() {
  
    //add code below this line
    // 1- Getters
    cout << "1- Getters" << endl;
    Phone model("iphone", 2, 3);
    cout << model.GetModel()<< endl;
    // 2- Public and Private Function
    cout << "2- Public and Private Function" << endl;
    // Now if we call private we will get error:
    // 3- The “const” Keyword
    cout << "3- The “const” Keyword" << endl;

    //add code above this line

  return 0;
  
}

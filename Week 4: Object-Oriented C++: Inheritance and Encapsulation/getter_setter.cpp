/* 
What is Getters?
While all attributes are private, that does not mean that the user will not need to access the values of these attributes. 
A public function can be used to access a private attribute. 
This type of function has a special name, a getter (also called an accessor). 
Setters
Setters are the compliment to getters in that they allow you to set the value of a private attribute. 
Setter functions are also called mutators. 
1- Getters
2- Setters
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

    void SetModel(string new_model) {
      model = new_model;
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
    // 2- Setters
    cout << "2- Setters" << endl;
    model.SetModel("Idone");
    cout << model.GetModel() << endl;
    // 3- The “const” Keyword
    cout << "3- The “const” Keyword" << endl;

    //add code above this line

  return 0;
  
}

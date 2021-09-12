#include <vector>

class Profile {

private:
//VARIABLES
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns = "they/them";
  std::vector<std::string> hobbies;

public:
  Profile(std::string new_name, int new_age,
  std::string new_city, std::string new_country,
  std::string new_pronouns);

//METHOD
  std::string view_profile();
  void add_hobby(std::string new_hobby);
}; //PROFILE END

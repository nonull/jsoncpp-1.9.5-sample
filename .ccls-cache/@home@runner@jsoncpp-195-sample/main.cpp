#include <iostream>
#include "json/json.h"

int main() {
  Json::Value o(Json::objectValue);

  o["name"] = "Foo";
  o["last_name"] = "Hoo";
  o["info"] = Json::objectValue;
  o["info"]["city"] = "Seoul";
  o["info"]["tall"] = 180.1234500;
  std::cout << o.toStyledString() << std::endl;

  return 0;
}
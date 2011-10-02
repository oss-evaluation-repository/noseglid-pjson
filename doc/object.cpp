#include <pjson.hpp>

#include <string>
#include <iostream>

int main(void)
{
	std::string strJSON = "{\"action\" : \"update\", \"itemid\" : \"a6fb4e\", \"name\" : \"cdbabe\"}";
	Json::Value j(strJSON);

	Json::JsonObject obj = j.asObject();

	for (Json::JsonObject::const_iterator it = obj.begin(); it != obj.end(); it++) {
		std::cout << it->first << " : " << it->second->asString() << std::endl;
	}

	return 0;
}
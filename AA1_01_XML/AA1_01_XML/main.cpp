#include "../xml/rapidxml.hpp"
#include "../xml/rapidxml_utils.hpp"
#include "../xml/rapidxml_print.hpp"
#include "../xml/rapidxml_iterators.hpp"#include <sstream>#include <string>#include <iostream>int main() {	rapidxml::xml_document<> doc;	std::ifstream file("../files/Enemigos.xml");	std::stringstream buffer;	buffer << file.rdbuf();	file.close();	std::string content(buffer.str());	doc.parse<0>(&content[0]);	std::cout << "nombre: " << doc.first_node()->name() << "\n";	return 0;}
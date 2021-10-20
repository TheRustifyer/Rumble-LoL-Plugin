#include <string.h>
#include <ostream>
#include <iostream>

struct ClientButton
{
	const char* identifier;
	std::string image_path;


	ClientButton(const char* identifier, const char* image_path)
		: identifier{ identifier }, image_path{ }
	{

		// TODO Take the language id from a configuration struct or class or whatever...
		int current_language_id = 1;

		//const char* base_path[14]{} { nullptr };
		std::string base_path {};
		std::string image_extension { ".jpg" };

		switch (current_language_id)
		{
			case 1:
				base_path = "../assets/EN/";
				break;
			case 2:
				base_path = "../assets/SP/";
				break;
		};


		std::string concated_path{ base_path };
		concated_path.append(image_path).append(image_extension);

		this->image_path = concated_path;

		std::cout << "PATH: " << this->image_path;
	};
};
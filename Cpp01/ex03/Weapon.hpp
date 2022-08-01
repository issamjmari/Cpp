#ifndef WEAPON_HPP
#define WEAPON_HPP
	#include <string>
	class Weapon
	{
		private:
			std::string type;
		public:
			const std::string getType();
			void		setType(std::string type);
			Weapon(void);
			Weapon(std::string s);
	} ;
#endif
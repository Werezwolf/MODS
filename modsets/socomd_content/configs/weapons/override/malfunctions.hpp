#define BROKEN_WEAPON(weaponName) \
class weaponName; \
class broken_##weaponName : weaponName { \
	scope = public; \
};

BROKEN_WEAPON(launch_RPG7_F)
BROKEN_WEAPON(CUP_launch_RPG7V)
BROKEN_WEAPON(CUP_launch_RPG18)
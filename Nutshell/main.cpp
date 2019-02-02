#include <iostream>

#include "core/core.h"

Core core;

int main()
{
	// someday, add xml to configure the core.
	core.init();

	core.loop();

	return 0;
}

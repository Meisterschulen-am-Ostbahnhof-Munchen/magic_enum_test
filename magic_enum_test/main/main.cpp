#include <iostream>




extern int make_a_test();



/* Inside .cpp file, app_main function must be declared with C linkage */
extern "C" void app_main(void)
{

	make_a_test();

}

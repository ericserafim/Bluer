#include "../gcode.h"


/**
 * M8383: Custom Bed Leveling command
 *
 * Default behavior is to loop until the stop print command
 *
 * Sending "M8383 L0" will keep the loopping until until stop the printing
 */
void GcodeSuite::M8383() {  
    const int loop = parser.intval('L', 0);

    set_relative_mode(false);//G90
    G28();
    
}
#include <stdio.h>
#include <stdint.h>

typedef union {
    struct {
        uint32_t OCTP : 8;
        uint32_t MCUEN : 4;
        uint32_t MCUCTL : 4;
        uint32_t PLLCTL : 8;
        uint32_t PLLEN : 8;
    } bits;
    uint32_t reg;
} SYS_CTRL_REG;

int main() {
    SYS_CTRL_REG SYS_CTRL; 
	SYS_CTRL.bits.MCUCTL = 0x1;
    return 0;
}
#include "wrapper.h"

extern void F(int);

void call_f5_with_F() {
	f5(F);
}

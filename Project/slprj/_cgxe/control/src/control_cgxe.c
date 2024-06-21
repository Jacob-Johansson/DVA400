/* Include files */

#include "control_cgxe.h"
#include "m_k1yJ2cHhRAgA3x2nFHT0AH.h"
#include "m_79W5648Ed9sN1fJCl9QFBC.h"

unsigned int cgxe_control_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 757697380 &&
      ssGetChecksum1(S) == 107073960 &&
      ssGetChecksum2(S) == 741281173 &&
      ssGetChecksum3(S) == 1041609108) {
    method_dispatcher_k1yJ2cHhRAgA3x2nFHT0AH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3010249817 &&
      ssGetChecksum1(S) == 2657491519 &&
      ssGetChecksum2(S) == 3269301016 &&
      ssGetChecksum3(S) == 3189502038) {
    method_dispatcher_79W5648Ed9sN1fJCl9QFBC(S, method, data);
    return 1;
  }

  return 0;
}

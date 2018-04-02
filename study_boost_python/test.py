import os
import sys

sys.path.append(os.getcwd() + "/cmake-build-debug")
print(sys.path)

import libstudy_boost_python as sbp

a = sbp.a_t()
print(a.greet())
a.b = 1
print(a.greet())

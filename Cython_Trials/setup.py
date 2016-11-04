from distutils.core import setup
from Cython.Build import cythonize
import numpy
import pyximport
pyximport.install(setup_args={"script_args":["--compiler=mingw32"],
                              "include_dirs":numpy.get_include()},
                  reload_support=True)

setup(
    ext_modules=cythonize("threading_test.pyx"),
    include_dirs=[numpy.get_include()]
)

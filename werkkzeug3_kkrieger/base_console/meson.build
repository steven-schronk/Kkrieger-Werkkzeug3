parentinc = include_directories('..')

system = [
  '../_intmath.cpp',
  './_startconsole.cpp',
  '../_types.cpp']

shaders = [
  '../shadercodegen.cpp',
  '../shadercompile.cpp']

baselib_src = system + shaders
baselib = static_library('base_console', baselib_src, include_directories : parentinc, cpp_args : '-D_LIB')

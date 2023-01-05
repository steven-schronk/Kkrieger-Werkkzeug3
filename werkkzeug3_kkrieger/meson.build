project('Kkrieger', 'cpp', license : 'BSD-2-Clause', meson_version : '>=0.56', version : '0.1.0')

add_project_arguments('-Wno-unknown-pragmas', language : 'cpp')
add_project_arguments('-Wno-attributes', language : 'cpp')
add_project_arguments('-D_DEBUG', language : 'cpp')
add_project_arguments('-mmmx', language : 'cpp')
add_project_arguments('-msse', language : 'cpp')

nasm = find_program('nasm')

if host_machine.system() == 'windows'
viruz2a = custom_target('_viruz2a.obj',
                        input : '_viruz2a.asm',
                        output : '_viruz2a.obj',
                        command : [nasm, '-f', 'win32',
                                   '-o', '@OUTPUT@',
                                   '@INPUT@'])
cpp_winlibs = ['-lwinmm', '-ldxguid' , '-ldinput']
endif

subdir('base_console')
subdir('shadercompile')

effect_jpegps_hpp = custom_target(
  'effect_jpegps.hpp',
  output : 'effect_jpegps.hpp',
  input : 'werkkzeug3/effect_jpeg.psh',
  command : [shadercompile, '@INPUT@', '--out-header', '@OUTPUT@'],
  )

effect_jpegvs_hpp = custom_target(
  'effect_jpegvs.hpp',
  output : 'effect_jpegvs.hpp',
  input : 'werkkzeug3/effect_jpeg.vsh',
  command : [shadercompile, '@INPUT@', '--out-header', '@OUTPUT@'],
  )

subdir('materials')

subdir('player_intro')

parentinc = include_directories('..', '../materials')

if host_machine.system() == 'windows'
windows = import('windows')
resource = windows.compile_resources('../player_demo/demo_resource.rc', args : ['-DINTRO'])
else
resource = []
endif

generators = [
  '../genbitmap.cpp',
  '../genblobspline.cpp',
  '../geneffect.cpp',
  '../geneffectdebris.cpp',
  '../geneffectex.cpp',
  '../geneffectipp.cpp',
  '../genmaterial.cpp',
  '../genmesh.cpp',
  '../genminmesh.cpp',
  '../genoverlay.cpp',
  '../genscene.cpp']

materials = [
  '../materials/material11.cpp',
  '../materials/material20.cpp',
  '../materials/materialdirect.cpp',
  '../materials/rtmanager.cpp',
  '../shadercodegen.cpp',
  material20_envips_hpp,
  material20_envivs_hpp,
  material20_fatps_hpp,
  material20_fatvs_hpp,
  material20_lightps_hpp,
  material20_lightvs_hpp,
  material20_texps_hpp,
  material20_texvs_hpp,
  material20_vcolorps_hpp,
  material20_vcolorvs_hpp,
  material20_zfillps_hpp,
  material20_zfillvs_hpp]

music = [
  '../_viruz2.cpp',
  viruz2a]

system = [
  '../_lekktor.cpp',
  '../_start.cpp',
  '../_types.cpp']

src = [
  '../engine.cpp',
  '../kdoc.cpp',
  'intro_oplist.cpp',
  '../mainplayer.cpp',
  '../player_demo/resource.h',
  effect_jpegps_hpp,
  effect_jpegvs_hpp] + generators + materials + music + system + resource

playerintro = executable('player_intro', src, include_directories : parentinc, cpp_pch : '../player_intro/intro_config.hpp', cpp_args : ['-fpermissive'], link_args : cpp_winlibs, win_subsystem : 'windows')

# SPDX-FileCopyrightText: 2011-2023 Blender Authors
#
# SPDX-License-Identifier: GPL-2.0-or-later

# turn everything OFF except for python which defaults to ON
# and is needed for the UI
#
# Example usage:
#   cmake -C../blender/build_files/cmake/config/blender_lite.cmake  ../blender
#

set(WITH_ALEMBIC             OFF CACHE BOOL "" FORCE)
set(WITH_AUDASPACE           OFF CACHE BOOL "" FORCE)
set(WITH_BLENDER_THUMBNAILER OFF CACHE BOOL "" FORCE)
set(WITH_BOOST               OFF CACHE BOOL "" FORCE)
set(WITH_BUILDINFO           OFF CACHE BOOL "" FORCE)
set(WITH_BULLET              OFF CACHE BOOL "" FORCE)
set(WITH_CODEC_FFMPEG        OFF CACHE BOOL "" FORCE)
set(WITH_CODEC_SNDFILE       OFF CACHE BOOL "" FORCE)
set(WITH_COMPOSITOR_CPU      OFF CACHE BOOL "" FORCE)
set(WITH_CYCLES              OFF CACHE BOOL "" FORCE)
set(WITH_DRACO               OFF CACHE BOOL "" FORCE)
set(WITH_FFTW3               OFF CACHE BOOL "" FORCE)
set(WITH_FREESTYLE           OFF CACHE BOOL "" FORCE)
set(WITH_GMP                 OFF CACHE BOOL "" FORCE)
set(WITH_HARU                OFF CACHE BOOL "" FORCE)
set(WITH_HYDRA               OFF CACHE BOOL "" FORCE)
set(WITH_IK_ITASC            OFF CACHE BOOL "" FORCE)
set(WITH_IK_SOLVER           OFF CACHE BOOL "" FORCE)
set(WITH_IMAGE_CINEON        OFF CACHE BOOL "" FORCE)
set(WITH_IMAGE_OPENEXR       OFF CACHE BOOL "" FORCE)
set(WITH_IMAGE_OPENJPEG      OFF CACHE BOOL "" FORCE)
set(WITH_IMAGE_WEBP          OFF CACHE BOOL "" FORCE)
set(WITH_INPUT_IME           OFF CACHE BOOL "" FORCE)
set(WITH_INPUT_NDOF          OFF CACHE BOOL "" FORCE)
set(WITH_INTERNATIONAL       OFF CACHE BOOL "" FORCE)
set(WITH_IO_PLY              OFF CACHE BOOL "" FORCE)
set(WITH_IO_STL              OFF CACHE BOOL "" FORCE)
set(WITH_IO_WAVEFRONT_OBJ    OFF CACHE BOOL "" FORCE)
set(WITH_IO_GREASE_PENCIL    OFF CACHE BOOL "" FORCE)
set(WITH_JACK                OFF CACHE BOOL "" FORCE)
set(WITH_LIBMV               OFF CACHE BOOL "" FORCE)
set(WITH_LLVM                OFF CACHE BOOL "" FORCE)
set(WITH_LZMA                OFF CACHE BOOL "" FORCE)
set(WITH_LZO                 OFF CACHE BOOL "" FORCE)
set(WITH_MOD_FLUID           OFF CACHE BOOL "" FORCE)
set(WITH_MOD_OCEANSIM        OFF CACHE BOOL "" FORCE)
set(WITH_MOD_REMESH          OFF CACHE BOOL "" FORCE)
set(WITH_NANOVDB             OFF CACHE BOOL "" FORCE)
set(WITH_OPENAL              OFF CACHE BOOL "" FORCE)
set(WITH_OPENCOLLADA         OFF CACHE BOOL "" FORCE)
set(WITH_OPENCOLORIO         OFF CACHE BOOL "" FORCE)
set(WITH_OPENIMAGEDENOISE    OFF CACHE BOOL "" FORCE)
set(WITH_OPENMP              OFF CACHE BOOL "" FORCE)
set(WITH_OPENSUBDIV          OFF CACHE BOOL "" FORCE)
set(WITH_OPENVDB             OFF CACHE BOOL "" FORCE)

set(WITH_POTRACE             OFF CACHE BOOL "" FORCE)
set(WITH_PUGIXML             OFF CACHE BOOL "" FORCE)
set(WITH_PULSEAUDIO          OFF CACHE BOOL "" FORCE)
set(WITH_QUADRIFLOW          OFF CACHE BOOL "" FORCE)
set(WITH_SDL                 OFF CACHE BOOL "" FORCE)
set(WITH_TBB                 OFF CACHE BOOL "" FORCE)
set(WITH_USD                 OFF CACHE BOOL "" FORCE)
set(WITH_MATERIALX           OFF CACHE BOOL "" FORCE)
set(WITH_XR_OPENXR           OFF CACHE BOOL "" FORCE)

if(UNIX AND NOT APPLE)
  set(WITH_GHOST_XDND          OFF CACHE BOOL "" FORCE)
  set(WITH_X11_XINPUT          OFF CACHE BOOL "" FORCE)
  set(WITH_X11_XF86VMODE       OFF CACHE BOOL "" FORCE)
elseif(WIN32)
  set(WITH_WASAPI              OFF CACHE BOOL "" FORCE)
elseif(APPLE)
  set(WITH_COREAUDIO           OFF CACHE BOOL "" FORCE)
endif()

# These should not have any impact but are disabled so they don't
# appear to be enabled in the list of items (which are mostly OFF).
set(WITH_CYCLES_DEVICE_OPTIX OFF CACHE BOOL "" FORCE)
set(WITH_CYCLES_EMBREE       OFF CACHE BOOL "" FORCE)
set(WITH_CYCLES_OSL          OFF CACHE BOOL "" FORCE)
set(WITH_CYCLES_PATH_GUIDING OFF CACHE BOOL "" FORCE)
set(WITH_OPENVDB_BLOSC       OFF CACHE BOOL "" FORCE)

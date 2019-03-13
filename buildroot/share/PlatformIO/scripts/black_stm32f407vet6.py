import os,shutil
from os.path import isdir, join
from SCons.Script import DefaultEnvironment
from platformio import util

env = DefaultEnvironment()
platform = env.PioPlatform()
board = env.BoardConfig()

FRAMEWORK_DIR = join(platform.get_package_dir("framework-arduinoststm32"), "STM32")
CMSIS_DIR = join(platform.get_package_dir("framework-arduinoststm32"), "STM32", "CMSIS", "CMSIS")
assert isdir(FRAMEWORK_DIR)
assert isdir(CMSIS_DIR)
assert isdir("buildroot/share/PlatformIO/variants")

mcu_type = board.get("build.mcu")[:-2]
variant = board.get("build.variant")
series = mcu_type[:7].upper() + "xx"
variant_dir = join(FRAMEWORK_DIR, "variants", variant)

source_dir = join("buildroot/share/PlatformIO/variants", variant)
assert isdir(source_dir)

if not os.path.isdir(variant_dir):
    os.mkdir(variant_dir)

    source_files = os.listdir(source_dir)
    for file_name in source_files:
        full_file_name = os.path.join(source_dir, file_name)
        if os.path.isfile(full_file_name):
            shutil.copy(full_file_name, variant_dir)

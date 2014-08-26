// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2
// Refer to the license.txt file included.

#pragma once

#include <GL/glew.h>

namespace ShaderUtil {

GLuint LoadShaders(const char* vertex_file_path, const char* fragment_file_path);

}
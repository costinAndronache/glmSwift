#pragma once
#include "../../../GLMSwiftGenericSpecializations/Sources/include/shim.h"

inline glm::vec3 make_vec3(glm::f32 x, glm::f32 y, glm::f32 z) {
    return glm::vec3(x, y, z);
}

inline glm::vec4 make_vec4(glm::f32 x, glm::f32 y, glm::f32 z, glm::f32 w) {
    return glm::vec4(x, y, z, w);
}

namespace glm {
    const auto pi_f32 = glm::pi<glm::f32>;
    const auto perspective_f32 = glm::perspective<glm::f32>;
    const auto rotate_f32 = glm::rotate<glm::f32, glm::qualifier::defaultp>;
    const auto translate_f32 = glm::translate<glm::f32, glm::qualifier::defaultp>;
    
    // Swift has trouble importing these declarations
    /*typedef glm::mat4 (*mat4_mult_mat4_f32_t)(const glm::mat4&, const glm::mat4&);
    const mat4_mult_mat4_f32_t  mat4_mult_mat4 = &glm::operator*<glm::f32, glm::qualifier::defaultp>;

    typedef glm::vec4 (*mat4_mult_vec4_f32_t)(const glm::mat4&, const glm::vec4&);
    const mat4_mult_vec4_f32_t mat4_mult_vec4 = &glm::operator*<glm::f32, glm::qualifier::defaultp>;
    */

    inline glm::mat4 mat4_mult_mat4(const glm::mat4& m1, const glm::mat4& m2) { return m1 * m2; }
    inline glm::vec4 mat4_mult_vec4(const glm::mat4& m, const glm::vec4& v) { return m * v; }
}

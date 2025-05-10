#pragma once
#include "../../../../glm/glm.hpp"

#include "../../../../glm/ext/matrix_transform.hpp" // glm::translate, glm::rotate, glm::scale
#include "../../../../glm/ext/matrix_clip_space.hpp" // glm::perspective
#include "../../../../glm/ext/scalar_constants.hpp" // glm::pi


template <>
glm::f32 glm::pi<glm::f32>();

template<>
glm::mat4 glm::perspective<glm::f32>(glm::f32, glm::f32, glm::f32, glm::f32);

template<>
glm::mat4 glm::rotate<glm::f32, glm::qualifier::defaultp>(const glm::mat4&, glm::f32, const glm::vec3&);

template<>
glm::mat4 glm::translate<glm::f32, glm::qualifier::defaultp>(const glm::mat4&, const glm::vec3&);

template<>
glm::mat4 glm::operator*(const glm::mat4&, const glm::mat4&);

template<>
glm::vec4 glm::operator*(const glm::mat4&, const glm::vec4&);

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

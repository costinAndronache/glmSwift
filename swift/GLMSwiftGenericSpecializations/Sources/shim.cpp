#include "include/shim.h"

template <>
glm::f32 glm::pi<glm::f32>();

template<>
glm::mat4 glm::perspective<glm::f32>(glm::f32, glm::f32, glm::f32, glm::f32);

template<>
glm::mat4 glm::rotate<glm::f32, glm::qualifier::defaultp>(const glm::mat4&, glm::f32, const glm::vec3&);

template<>
glm::mat4 glm::translate<glm::f32, glm::qualifier::defaultp>(const glm::mat4&, const glm::vec3&);



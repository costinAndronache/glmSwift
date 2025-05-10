import GLMSwift

public func * (m1: glm.mat4, m2: glm.mat4) -> glm.mat4 {
    glm.mat4_mult_mat4(m1, m2)
}

public func * (m: glm.mat4, v: glm.vec4) -> glm.vec4 {
    glm.mat4_mult_vec4(m, v)
}
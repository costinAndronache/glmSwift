// swift-tools-version: 6.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "SwiftGLM",
    products: [
        .library(name: "GLMSwift", targets: ["GLMSwift"]),
        .library(name: "GLMSwiftExtensions", targets: ["GLMSwiftExtensions"])
    ],
    targets: [
        .target(
            name: "GLMSwift",
            path: "swift/GLMSwift",
            publicHeadersPath: "Sources/include",
            cSettings: [
                .headerSearchPath(".")
            ]
        ),
        .target(
            name: "GLMSwiftExtensions",
            dependencies: ["GLMSwift"],
            path: "swift/GLMSwiftExtensions",
            swiftSettings: [
                .interoperabilityMode(.Cxx)
            ])
    ]
)
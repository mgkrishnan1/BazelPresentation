cc_library(
    name = "dependency1",
    srcs = ["dependency1.c"],
    hdrs = ["dependency1.h"],
)

cc_binary(
    name = "source",
    srcs = ["source.c"],
    deps = [
        ":dependency1",
        "//Dependencies:dependency2",
    ],
)
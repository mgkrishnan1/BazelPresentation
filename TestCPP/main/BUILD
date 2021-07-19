load("@rules_cc//cc:defs.bzl", "cc_library", "cc_binary")

cc_library(
    name = "function2",
    srcs = ["function2.cc"],
    hdrs = ["function2.h",],
	visibility = ["//visibility:public"],
)

cc_binary(
    name = "program1",
    srcs = ["program1.cc"],
    deps = ["@gtest//:main",
			"//lib:function1",
			"function2",],
	visibility = ["//visibility:public"],
)

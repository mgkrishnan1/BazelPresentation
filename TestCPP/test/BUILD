load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "test_program1",
    srcs = ["test_program1.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@gtest//:main",
        "//main:program1",
		"//lib:function1",
		"//main:function2",
    ],
	visibility = ["//visibility:public"],
)
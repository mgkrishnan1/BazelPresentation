Build CPP
bazel build //main:helloworld
bazel-bin\main\helloworld.exe


Graph CPP
bazel query --notool_deps --noimplicit_deps "deps(//main:helloworld)" --output graph>sample.dot
dot -Tpng sample.dot -o myDemo_dot.png



Build Java
bazel build //:ProjectRunner
bazel-bin/ProjectRunner



Graph Java
bazel query  --notool_deps --noimplicit_deps "deps(//:ProjectRunner)" --output graph>sample.dot
Copy the result to sample.dot
dot -Tpng sample.dot -o myDemo_dot.png



GTest
bazel build ...
bazel run bin:hello
bazel test ... --test_output=errors




Bazel Official Website can be visited for more information.
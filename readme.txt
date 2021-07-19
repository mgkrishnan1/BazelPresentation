SimpleCPP
bazel build //Source:source
bazel-bin\main\source.exe


Graph for SimpleCPP
bazel query --notool_deps --noimplicit_deps "deps(//Source:source)" --output graph>sample.dot
dot -Tpng sample.dot -o myDemo_dot.png
Note: Install graphviz 


Build SimpleJavaBuild
bazel build //:ProjectRunner
bazel-bin/ProjectRunner



Graph for SimpleJavaBuild
bazel query  --notool_deps --noimplicit_deps "deps(//:ProjectRunner)" --output graph>sample.dot
Copy the result to sample.dot
dot -Tpng sample.dot -o myDemo_dot.png



TestCPP
bazel test //test:test_program1



Note: Bazel Official Website can be visited for more information.

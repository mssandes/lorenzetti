file(REMOVE_RECURSE
  "liblorenzetti.pdb"
  "liblorenzetti.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/lorenzetti.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()

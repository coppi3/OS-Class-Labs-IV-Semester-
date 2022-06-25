file(REMOVE_RECURSE
  "mmap"
  "mmap.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang C)
  include(CMakeFiles/mmap.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()

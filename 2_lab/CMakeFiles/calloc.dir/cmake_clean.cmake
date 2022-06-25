file(REMOVE_RECURSE
  "calloc"
  "calloc.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang C)
  include(CMakeFiles/calloc.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()

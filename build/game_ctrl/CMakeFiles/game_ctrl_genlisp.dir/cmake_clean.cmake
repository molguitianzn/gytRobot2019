file(REMOVE_RECURSE
  "game_ctrl_automoc.cpp"
  "judge_automoc.cpp"
  "judgepre_automoc.cpp"
  "judgekick_automoc.cpp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/game_ctrl_genlisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()

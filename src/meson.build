test_gtk_deps = [gtk_dep]
include_dirs = configuration_inc

test_gtk_sources = files(
  'main.c',
)

executable('test_gtk',
  test_gtk_sources,
  dependencies : test_gtk_deps,
  include_directories : include_dirs,
  install : true,
)

project(
  'github-actions-test-gtk',
  'c',
  default_options : [
    'buildtype=debugoptimized', 'c_std=c99', 'c_args=-Wall -Wextra',
  ],
  license : 'CC0',
  meson_version : '>= 0.49',
  version : '0.1',
)

configuration_inc = include_directories('.')
config_h = configuration_data()
config_h.set_quoted('GETTEXT_PACKAGE', meson.project_name())
config_h.set_quoted('PACKAGE_VERSION', meson.project_version())
config_h.set_quoted('LOCALEDIR', get_option('prefix') / get_option('localedir'))

gtk_dep = dependency('gtk+-3.0', version : '>= 3.0', required : true)

i18n = import('i18n')

subdir('po')
subdir('src')

configure_file(output : 'config.h', configuration : config_h)

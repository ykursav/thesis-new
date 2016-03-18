// Generated code for Python source for module 'numpy.distutils.command.build_ext'
// created by Nuitka version 0.5.19

// This code is in part copyright 2016 Kay Hayen.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nuitka/prelude.hpp"

#include "__helpers.hpp"

// The _module_numpy$distutils$command$build_ext is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils$command$build_ext;
PyDictObject *moduledict_numpy$distutils$command$build_ext;

// The module constants used
static PyObject *const_str_digest_9803e833e3dccf90cf6e8f0a78d216de;
extern PyObject *const_str_digest_605fe6eec78a08f1509cdf1a1c40fdcd;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_tuple_str_digest_547a4f49f1a41093678192c4b4fbe0ad_tuple;
extern PyObject *const_str_plain_exec_command;
static PyObject *const_str_plain_ext_filename;
extern PyObject *const_str_plain_f_objects;
extern PyObject *const_str_plain_get_ext_source_files;
extern PyObject *const_str_plain_sets;
extern PyObject *const_str_plain_libraries;
extern PyObject *const_str_plain_intelw;
extern PyObject *const_str_digest_cd6a33ccef6f831dd7e0430d9d28854f;
static PyObject *const_tuple_str_plain_self_str_plain_filenames_str_plain_ext_tuple;
static PyObject *const_str_digest_336099845390025550e005e395fc3398;
extern PyObject *const_str_plain_module_build_dir;
extern PyObject *const_str_plain_customize;
extern PyObject *const_str_digest_3d2e4dcc71ff2710c1a6bc4aedffe24c;
extern PyObject *const_str_digest_ac56091d2e235fc7ddd5932da1894382;
extern PyObject *const_str_digest_8b7171d1f1e5148727cc3440574e4dc4;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_link_shared_object;
extern PyObject *const_str_plain_source_languages;
extern PyObject *const_str_plain_force;
extern PyObject *const_str_plain_finalize_options;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_language;
extern PyObject *const_tuple_str_plain_msvc_tuple;
extern PyObject *const_str_plain_need_cxx;
static PyObject *const_str_digest_5e3f89d01f8f07e41755afa825a56392;
extern PyObject *const_str_plain_create_static_lib;
extern PyObject *const_str_plain_module_dir_switch;
extern PyObject *const_tuple_024e0dc9330afcb8c331c62b23f96c36_tuple;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_plain_clibs;
extern PyObject *const_str_plain_extra_objects;
extern PyObject *const_str_plain_compiler;
extern PyObject *const_str_plain_existing_modules;
static PyObject *const_tuple_dd6f066290cb1550add1b02b155df829_tuple;
static PyObject *const_str_plain_all_languages;
static PyObject *const_str_plain__cxx_compiler;
extern PyObject *const_str_plain_get_libraries;
extern PyObject *const_str_plain_build_py;
static PyObject *const_str_plain_need_cxx_compiler;
extern PyObject *const_str_plain_remove;
extern PyObject *const_tuple_str_plain_log_tuple;
extern PyObject *const_str_plain_build;
extern PyObject *const_str_plain_filenames;
static PyObject *const_str_plain__f77_compiler;
extern PyObject *const_tuple_str_plain_build_clib_tuple;
static PyObject *const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple;
extern PyObject *const_str_digest_3b1be6da02805162db59b861b815c22b;
extern PyObject *const_str_digest_3de59fd470b91375d5f73b99d9cf76d9;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_build_extensions;
extern PyObject *const_str_plain_o;
static PyObject *const_tuple_str_digest_84051636bb29a331bed1787f3bb61f88_tuple;
extern PyObject *const_str_plain_extra_f77_compile_args;
extern PyObject *const_str_plain_ext;
static PyObject *const_str_digest_4c1b560b3f3f191ccd0e9318308a41e0;
extern PyObject *const_str_digest_6d315605648e433b0f5827b4d0f11ccf;
extern PyObject *const_tuple_str_plain_build_ext_tuple;
extern PyObject *const_str_plain_help_options;
static PyObject *const_tuple_str_digest_830eb0db6a47817653ee64068d4d72a7_tuple;
extern PyObject *const_str_plain_lib;
extern PyObject *const_tuple_str_plain_newer_group_tuple;
extern PyObject *const_str_plain_newer;
extern PyObject *const_str_plain_build_temp;
extern PyObject *const_str_plain_get_command_obj;
extern PyObject *const_str_plain_get_package_dir;
extern PyObject *const_str_plain_module_dirs;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_define_macros;
static PyObject *const_str_plain_build_extension;
static PyObject *const_str_digest_e71046027ad89002d40b61208820fea4;
extern PyObject *const_str_digest_44434cdc9d5250a0be417c3b7d855692;
extern PyObject *const_str_plain_abspath;
extern PyObject *const_str_plain_customize_cmd;
extern PyObject *const_str_digest_07ed2a23242764d63b1d13928e0c5b14;
extern PyObject *const_str_plain_combine_paths;
extern PyObject *const_str_digest_d8f34256ec03abb6e9b633ba54b105d1;
extern PyObject *const_str_plain_base;
static PyObject *const_str_digest_e07a3a637704ac783fd5c36fb56041b3;
static PyObject *const_str_plain_need_f90_compiler;
extern PyObject *const_tuple_str_digest_0f6f2707b7b934e3e56e9cd912859487_tuple;
extern PyObject *const_str_plain_Set;
extern PyObject *const_str_plain_libfile2;
extern PyObject *const_str_plain_check_extensions_list;
extern PyObject *const_str_plain_extra_postargs;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_export_symbols;
static PyObject *const_str_digest_c2461ad4b24b3fe2bf8349080991b42f;
static PyObject *const_str_plain_ext_language;
static PyObject *const_str_digest_830eb0db6a47817653ee64068d4d72a7;
extern PyObject *const_str_plain_has_cxx_sources;
extern PyObject *const_str_plain_use_tee;
extern PyObject *const_str_digest_99b5e9edb82812c9fdf03a03f93a3eeb;
extern PyObject *const_str_plain_show_customization;
extern PyObject *const_str_plain_compiler_type;
extern PyObject *const_str_plain_dir;
extern PyObject *const_tuple_str_dot_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_incl_dirs_tuple;
extern PyObject *const_str_plain_set;
static PyObject *const_str_digest_1b1d1633e77bc5c7922368bf48141b9b;
extern PyObject *const_str_plain_split;
static PyObject *const_str_digest_c9ec016fd3738398a4d79dfcb60d1f6f;
static PyObject *const_str_plain_get_ext_filename;
extern PyObject *const_str_plain_filter_sources;
extern PyObject *const_str_plain_modpath;
extern PyObject *const_str_plain_target_lang;
extern PyObject *const_str_plain_f77;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_fcompiler;
extern PyObject *const_str_digest_7a14583f2b8e5abe2eeccb1c7d041273;
extern PyObject *const_str_plain_debug;
extern PyObject *const_tuple_str_plain_msvc_str_plain_intelw_str_plain_intelemw_tuple;
extern PyObject *const_str_plain_extra_args;
extern PyObject *const_str_plain_user_options;
extern PyObject *const_str_plain_show_fortran_compilers;
extern PyObject *const_str_plain_undef_macros;
static PyObject *const_str_plain_dst_name;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_extra_link_args;
static PyObject *const_str_digest_8b868ac38ca8eba8dd5e4c0312500790;
extern PyObject *const_tuple_str_plain_build_src_tuple;
extern PyObject *const_str_plain_output_dir;
extern PyObject *const_tuple_str_plain_f77_tuple;
static PyObject *const_str_plain__libs_with_msvc_and_fortran;
extern PyObject *const_tuple_str_plain_show_fortran_compilers_tuple;
extern PyObject *const_tuple_str_digest_cd6a33ccef6f831dd7e0430d9d28854f_tuple;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_package_dir;
extern PyObject *const_str_plain_s;
extern PyObject *const_tuple_str_plain_glob_tuple;
extern PyObject *const_str_digest_483fe6e8fb067015ad0f59fff4617c82;
extern PyObject *const_tuple_362b44a433f1257ed3a9e3fef7d62eb7_tuple;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_new_compiler;
static PyObject *const_str_digest_71bdad57e27a9481edd78fd87582c670;
extern PyObject *const_list_07ea72d64576b97abf91f4050554755c_list;
extern PyObject *const_str_plain_objects;
extern PyObject *const_str_plain_msvc_version;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_digest_547a4f49f1a41093678192c4b4fbe0ad;
extern PyObject *const_str_plain_DistutilsFileError;
static PyObject *const_str_plain_old_build_ext;
extern PyObject *const_tuple_str_plain_exec_command_tuple;
static PyObject *const_str_plain__gfortran_workaround;
extern PyObject *const_str_plain_incl_dirs;
extern PyObject *const_str_plain_build_ext;
extern PyObject *const_str_digest_0f6f2707b7b934e3e56e9cd912859487;
extern PyObject *const_tuple_str_plain_self_str_plain_sources_tuple;
extern PyObject *const_str_plain_get_build_architecture;
extern PyObject *const_str_plain_get_numpy_include_dirs;
extern PyObject *const_tuple_str_digest_99b5e9edb82812c9fdf03a03f93a3eeb_tuple;
extern PyObject *const_dict_3be937dfcb6326ab62ea1b692cc71009;
extern PyObject *const_str_digest_2d6b78a8db931a7665f7c875fc3cbb30;
static PyObject *const_str_digest_38eb5a1a38d4e142cdd76fbd5b2863a4;
extern PyObject *const_str_plain_module_options;
extern PyObject *const_str_digest_fc8bc65751456e5bb14f2782af4345b0;
extern PyObject *const_tuple_str_plain_copy_file_tuple;
extern PyObject *const_str_plain_verbose;
static PyObject *const_str_plain_c_library_dirs;
extern PyObject *const_str_plain_inplace;
extern PyObject *const_tuple_str_plain_Set_tuple;
extern PyObject *const_str_plain_run_command;
extern PyObject *const_str_plain_include_dirs;
extern PyObject *const_str_plain_build_info;
extern PyObject *const_str_plain_extensions;
extern PyObject *const_str_plain_glob;
extern PyObject *const_str_plain_extra_compile_args;
extern PyObject *const_str_digest_0e6cce5d2f21199bd98b4fd22ff45e74;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_run;
extern PyObject *const_str_plain_build_clib;
extern PyObject *const_str_plain_has_f_sources;
extern PyObject *const_tuple_str_plain_build_py_tuple;
extern PyObject *const_str_plain_initialize_options;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_join;
static PyObject *const_str_plain_ext_languages;
extern PyObject *const_list_str_plain_f77_str_plain_f90_list;
extern PyObject *const_str_plain_get_ext_fullname;
extern PyObject *const_str_plain_package;
static PyObject *const_str_digest_db67186108086e194127831bd493be9e;
extern PyObject *const_str_plain_DistutilsError;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_move_file;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_digest_f0c9f0b81ac751f63b3effde79658bd1;
extern PyObject *const_str_digest_ca625664a1ac195c2723761a2439b505;
extern PyObject *const_str_plain_set_undefined_options;
static PyObject *const_str_plain_detect_language;
extern PyObject *const_str_digest_d749e6789d566eeaee2182abad7c2fde;
static PyObject *const_str_plain_has_c_libraries;
extern PyObject *const_str_plain_f90;
extern PyObject *const_tuple_str_plain_parallel_str_plain_parallel_tuple;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_32e5c084ab1b4692985127a7925d549a_tuple;
static PyObject *const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple;
extern PyObject *const_str_plain_libname;
extern PyObject *const_str_plain_cxx_compiler;
extern PyObject *const_str_plain_kws;
extern PyObject *const_str_plain_is_sequence;
extern PyObject *const_str_plain_parallel;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_mkpath;
extern PyObject *const_str_plain_extra_f90_compile_args;
static PyObject *const_str_digest_513238febf8f5eeccab8c98160ee0c81;
extern PyObject *const_str_plain_distribution;
extern PyObject *const_str_plain_DistutilsSetupError;
extern PyObject *const_str_plain_isfile;
static PyObject *const_str_plain_f_lib_dirs;
static PyObject *const_str_plain_need_f77_compiler;
static PyObject *const_str_digest_48cc8c909a2a058b978247ac71b2b58d;
extern PyObject *const_tuple_9608cb38ad8cfabaffebc40aea72718c_tuple;
extern PyObject *const_str_digest_98a3a3dfd8d3584793ab139a5e5d7744;
extern PyObject *const_str_digest_5797ecbe2f726e884034a40def176a4d;
static PyObject *const_str_digest_ad800c936be6144e86faccb951518036;
extern PyObject *const_str_plain_copy_file;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_plain_m;
extern PyObject *const_tuple_str_plain_new_fcompiler_tuple;
static PyObject *const_str_plain_have_run;
extern PyObject *const_str_digest_aa0985cb7cf79f104d1e7c5800867ead;
extern PyObject *const_str_digest_b48c66f43da8ef8e0826c0fd6de4168b;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_c_compiler;
static PyObject *const_str_plain_new_c_libs;
static PyObject *const_tuple_f04dded3545b09309f299bcd811a3c64_tuple;
static PyObject *const_str_plain__f90_compiler;
static PyObject *const_str_digest_d3ba698a3de89a878c9bf84db1b4f5ac;
extern PyObject *const_str_plain_ensure_finalized;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_runtime_library_dirs;
extern PyObject *const_str_plain_pathsep;
static PyObject *const_tuple_str_plain_combine_paths_tuple;
extern PyObject *const_str_plain_get_outputs;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_fmodule_sources;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_f_sources;
extern PyObject *const_str_plain_undef;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_newer_group;
extern PyObject *const_str_digest_9a40c45b61e00899e36064128b334a6b;
static PyObject *const_str_plain_c_objects;
static PyObject *const_str_digest_e4054020d80aaf5638ed005e56116f81;
extern PyObject *const_tuple_str_digest_483fe6e8fb067015ad0f59fff4617c82_tuple;
extern PyObject *const_str_plain_binfo;
static PyObject *const_str_digest_84051636bb29a331bed1787f3bb61f88;
extern PyObject *const_str_plain_fileexists;
static PyObject *const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple;
extern PyObject *const_str_plain_cxx_sources;
extern PyObject *const_str_digest_9bd342466344c27bee51c2060e7b289f;
extern PyObject *const_str_plain_libdir;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_ec8a3e4dce79fe85170ca4f1784c494d;
extern PyObject *const_str_digest_27a7628ab85cd892afa96bd047d5a375;
extern PyObject *const_str_plain_new_fcompiler;
static PyObject *const_str_plain_c_libs;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_msvc;
static PyObject *const_str_plain_c_libraries;
extern PyObject *const_str_plain_depends;
extern PyObject *const_str_plain_linker;
extern PyObject *const_str_plain_libfile;
static PyObject *const_str_plain_c_lib_dirs;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_get_source_files;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_digest_8b7171d1f1e5148727cc3440574e4dc4_tuple;
static PyObject *const_tuple_9d96976babf556d15c456c7216b3a323_tuple;
extern PyObject *const_str_plain_sources;
static PyObject *const_str_digest_564bfb24392ee0a906a20b8697c32551;
static PyObject *const_str_plain__add_dummy_mingwex_sym;
extern PyObject *const_str_plain_fullname;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_description;
extern PyObject *const_str_plain_get_finalized_command;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_digest_7700c32f5dffa5ed5566de029c7b17ab;
extern PyObject *const_str_plain_build_lib;
extern PyObject *const_str_plain_library_dirs;
extern PyObject *const_str_plain_c_sources;
extern PyObject *const_str_plain_swig_sources;
extern PyObject *const_tuple_str_digest_44434cdc9d5250a0be417c3b7d855692_tuple;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_build_src;
extern PyObject *const_str_plain_ctype;
extern PyObject *const_str_plain_requiref90;
extern PyObject *const_str_plain_dry_run;
extern PyObject *const_str_plain_cygpath;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_intelemw;
extern PyObject *const_str_plain_outputs;
extern PyObject *const_str_plain_get_version;
static PyObject *const_str_plain_get_export_symbols;
extern PyObject *const_str_plain_macros;
extern PyObject *const_tuple_str_plain_new_compiler_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_9803e833e3dccf90cf6e8f0a78d216de = UNSTREAM_STRING( &constant_bin[ 613909 ], 76, 0 );
    const_str_plain_ext_filename = UNSTREAM_STRING( &constant_bin[ 613985 ], 12, 1 );
    const_tuple_str_plain_self_str_plain_filenames_str_plain_ext_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_filenames_str_plain_ext_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_filenames_str_plain_ext_tuple, 1, const_str_plain_filenames ); Py_INCREF( const_str_plain_filenames );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_filenames_str_plain_ext_tuple, 2, const_str_plain_ext ); Py_INCREF( const_str_plain_ext );
    const_str_digest_336099845390025550e005e395fc3398 = UNSTREAM_STRING( &constant_bin[ 613997 ], 27, 0 );
    const_str_plain_link_shared_object = UNSTREAM_STRING( &constant_bin[ 614024 ], 18, 1 );
    const_str_digest_5e3f89d01f8f07e41755afa825a56392 = UNSTREAM_STRING( &constant_bin[ 614042 ], 33, 0 );
    const_str_plain_clibs = UNSTREAM_STRING( &constant_bin[ 614075 ], 5, 1 );
    const_tuple_dd6f066290cb1550add1b02b155df829_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 614080 ], 357 );
    const_str_plain_all_languages = UNSTREAM_STRING( &constant_bin[ 614204 ], 13, 1 );
    const_str_plain__cxx_compiler = UNSTREAM_STRING( &constant_bin[ 603964 ], 13, 1 );
    const_str_plain_need_cxx_compiler = UNSTREAM_STRING( &constant_bin[ 614383 ], 17, 1 );
    const_str_plain__f77_compiler = UNSTREAM_STRING( &constant_bin[ 614365 ], 13, 1 );
    const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 1, const_str_plain_fcompiler ); Py_INCREF( const_str_plain_fcompiler );
    const_str_plain_c_libraries = UNSTREAM_STRING( &constant_bin[ 614437 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 2, const_str_plain_c_libraries ); Py_INCREF( const_str_plain_c_libraries );
    const_str_plain_c_library_dirs = UNSTREAM_STRING( &constant_bin[ 614448 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 3, const_str_plain_c_library_dirs ); Py_INCREF( const_str_plain_c_library_dirs );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 4, const_str_plain_libname ); Py_INCREF( const_str_plain_libname );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 5, const_str_plain_fileexists ); Py_INCREF( const_str_plain_fileexists );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 6, const_str_plain_libdir ); Py_INCREF( const_str_plain_libdir );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 7, const_str_plain_libfile ); Py_INCREF( const_str_plain_libfile );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 8, const_str_plain_libfile2 ); Py_INCREF( const_str_plain_libfile2 );
    const_str_plain_f_lib_dirs = UNSTREAM_STRING( &constant_bin[ 614462 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 9, const_str_plain_f_lib_dirs ); Py_INCREF( const_str_plain_f_lib_dirs );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 10, const_str_plain_dir ); Py_INCREF( const_str_plain_dir );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 11, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 12, const_str_plain_o ); Py_INCREF( const_str_plain_o );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 13, const_str_plain_lib ); Py_INCREF( const_str_plain_lib );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 14, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_plain_dst_name = UNSTREAM_STRING( &constant_bin[ 614472 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 15, const_str_plain_dst_name ); Py_INCREF( const_str_plain_dst_name );
    const_str_plain_build_extensions = UNSTREAM_STRING( &constant_bin[ 614480 ], 16, 1 );
    const_tuple_str_digest_84051636bb29a331bed1787f3bb61f88_tuple = PyTuple_New( 1 );
    const_str_digest_84051636bb29a331bed1787f3bb61f88 = UNSTREAM_STRING( &constant_bin[ 614496 ], 7, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_84051636bb29a331bed1787f3bb61f88_tuple, 0, const_str_digest_84051636bb29a331bed1787f3bb61f88 ); Py_INCREF( const_str_digest_84051636bb29a331bed1787f3bb61f88 );
    const_str_digest_4c1b560b3f3f191ccd0e9318308a41e0 = UNSTREAM_STRING( &constant_bin[ 614503 ], 36, 0 );
    const_tuple_str_digest_830eb0db6a47817653ee64068d4d72a7_tuple = PyTuple_New( 1 );
    const_str_digest_830eb0db6a47817653ee64068d4d72a7 = UNSTREAM_STRING( &constant_bin[ 614539 ], 77, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_830eb0db6a47817653ee64068d4d72a7_tuple, 0, const_str_digest_830eb0db6a47817653ee64068d4d72a7 ); Py_INCREF( const_str_digest_830eb0db6a47817653ee64068d4d72a7 );
    const_str_plain_build_extension = UNSTREAM_STRING( &constant_bin[ 614480 ], 15, 1 );
    const_str_digest_e71046027ad89002d40b61208820fea4 = UNSTREAM_STRING( &constant_bin[ 614616 ], 33, 0 );
    const_str_digest_e07a3a637704ac783fd5c36fb56041b3 = UNSTREAM_STRING( &constant_bin[ 614649 ], 67, 0 );
    const_str_plain_need_f90_compiler = UNSTREAM_STRING( &constant_bin[ 614339 ], 17, 1 );
    const_str_digest_c2461ad4b24b3fe2bf8349080991b42f = UNSTREAM_STRING( &constant_bin[ 614716 ], 23, 0 );
    const_str_plain_ext_language = UNSTREAM_STRING( &constant_bin[ 614230 ], 12, 1 );
    const_tuple_str_plain_self_str_plain_incl_dirs_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_incl_dirs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_incl_dirs_tuple, 1, const_str_plain_incl_dirs ); Py_INCREF( const_str_plain_incl_dirs );
    const_str_digest_1b1d1633e77bc5c7922368bf48141b9b = UNSTREAM_STRING( &constant_bin[ 614739 ], 46, 0 );
    const_str_digest_c9ec016fd3738398a4d79dfcb60d1f6f = UNSTREAM_STRING( &constant_bin[ 614785 ], 53, 0 );
    const_str_plain_get_ext_filename = UNSTREAM_STRING( &constant_bin[ 614838 ], 16, 1 );
    const_str_digest_8b868ac38ca8eba8dd5e4c0312500790 = UNSTREAM_STRING( &constant_bin[ 614854 ], 67, 0 );
    const_str_plain__libs_with_msvc_and_fortran = UNSTREAM_STRING( &constant_bin[ 614921 ], 27, 1 );
    const_str_digest_71bdad57e27a9481edd78fd87582c670 = UNSTREAM_STRING( &constant_bin[ 614948 ], 58, 0 );
    const_str_plain_old_build_ext = UNSTREAM_STRING( &constant_bin[ 615006 ], 13, 1 );
    const_str_plain__gfortran_workaround = UNSTREAM_STRING( &constant_bin[ 615019 ], 20, 1 );
    const_str_digest_38eb5a1a38d4e142cdd76fbd5b2863a4 = UNSTREAM_STRING( &constant_bin[ 615039 ], 45, 0 );
    const_str_plain_ext_languages = UNSTREAM_STRING( &constant_bin[ 614230 ], 13, 1 );
    const_str_digest_db67186108086e194127831bd493be9e = UNSTREAM_STRING( &constant_bin[ 615084 ], 106, 0 );
    const_str_plain_detect_language = UNSTREAM_STRING( &constant_bin[ 615190 ], 15, 1 );
    const_str_plain_has_c_libraries = UNSTREAM_STRING( &constant_bin[ 615205 ], 15, 1 );
    const_tuple_32e5c084ab1b4692985127a7925d549a_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 615220 ], 480 );
    const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple, 1, const_str_plain_outputs ); Py_INCREF( const_str_plain_outputs );
    PyTuple_SET_ITEM( const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple, 2, const_str_plain_ext ); Py_INCREF( const_str_plain_ext );
    PyTuple_SET_ITEM( const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple, 3, const_str_plain_fullname ); Py_INCREF( const_str_plain_fullname );
    const_str_digest_513238febf8f5eeccab8c98160ee0c81 = UNSTREAM_STRING( &constant_bin[ 615700 ], 45, 0 );
    const_str_plain_need_f77_compiler = UNSTREAM_STRING( &constant_bin[ 614361 ], 17, 1 );
    const_str_digest_48cc8c909a2a058b978247ac71b2b58d = UNSTREAM_STRING( &constant_bin[ 615745 ], 84, 0 );
    const_str_digest_ad800c936be6144e86faccb951518036 = UNSTREAM_STRING( &constant_bin[ 615829 ], 22, 0 );
    const_str_plain_have_run = UNSTREAM_STRING( &constant_bin[ 615851 ], 8, 1 );
    const_str_plain_new_c_libs = UNSTREAM_STRING( &constant_bin[ 614307 ], 10, 1 );
    const_tuple_f04dded3545b09309f299bcd811a3c64_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f04dded3545b09309f299bcd811a3c64_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f04dded3545b09309f299bcd811a3c64_tuple, 1, const_str_plain_c_sources ); Py_INCREF( const_str_plain_c_sources );
    PyTuple_SET_ITEM( const_tuple_f04dded3545b09309f299bcd811a3c64_tuple, 2, const_str_plain_build_src ); Py_INCREF( const_str_plain_build_src );
    PyTuple_SET_ITEM( const_tuple_f04dded3545b09309f299bcd811a3c64_tuple, 3, const_str_plain_build_clib ); Py_INCREF( const_str_plain_build_clib );
    PyTuple_SET_ITEM( const_tuple_f04dded3545b09309f299bcd811a3c64_tuple, 4, const_str_plain_objects ); Py_INCREF( const_str_plain_objects );
    const_str_plain__f90_compiler = UNSTREAM_STRING( &constant_bin[ 614343 ], 13, 1 );
    const_str_digest_d3ba698a3de89a878c9bf84db1b4f5ac = UNSTREAM_STRING( &constant_bin[ 615859 ], 75, 0 );
    const_tuple_str_plain_combine_paths_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_combine_paths_tuple, 0, const_str_plain_combine_paths ); Py_INCREF( const_str_plain_combine_paths );
    const_str_plain_c_objects = UNSTREAM_STRING( &constant_bin[ 615534 ], 9, 1 );
    const_str_digest_e4054020d80aaf5638ed005e56116f81 = UNSTREAM_STRING( &constant_bin[ 615934 ], 33, 0 );
    const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple, 0, const_str_plain_DistutilsFileError ); Py_INCREF( const_str_plain_DistutilsFileError );
    PyTuple_SET_ITEM( const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple, 1, const_str_plain_DistutilsSetupError ); Py_INCREF( const_str_plain_DistutilsSetupError );
    PyTuple_SET_ITEM( const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple, 2, const_str_plain_DistutilsError ); Py_INCREF( const_str_plain_DistutilsError );
    const_str_plain_c_libs = UNSTREAM_STRING( &constant_bin[ 614248 ], 6, 1 );
    const_str_plain_c_lib_dirs = UNSTREAM_STRING( &constant_bin[ 614259 ], 10, 1 );
    const_tuple_9d96976babf556d15c456c7216b3a323_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 0, const_str_plain_filter_sources ); Py_INCREF( const_str_plain_filter_sources );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 1, const_str_plain_has_f_sources ); Py_INCREF( const_str_plain_has_f_sources );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 2, const_str_plain_has_cxx_sources ); Py_INCREF( const_str_plain_has_cxx_sources );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 3, const_str_plain_get_ext_source_files ); Py_INCREF( const_str_plain_get_ext_source_files );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 4, const_str_plain_get_numpy_include_dirs ); Py_INCREF( const_str_plain_get_numpy_include_dirs );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 5, const_str_plain_is_sequence ); Py_INCREF( const_str_plain_is_sequence );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 6, const_str_plain_get_build_architecture ); Py_INCREF( const_str_plain_get_build_architecture );
    PyTuple_SET_ITEM( const_tuple_9d96976babf556d15c456c7216b3a323_tuple, 7, const_str_plain_msvc_version ); Py_INCREF( const_str_plain_msvc_version );
    const_str_digest_564bfb24392ee0a906a20b8697c32551 = UNSTREAM_STRING( &constant_bin[ 615967 ], 62, 0 );
    const_str_plain__add_dummy_mingwex_sym = UNSTREAM_STRING( &constant_bin[ 616029 ], 22, 1 );
    const_str_plain_get_export_symbols = UNSTREAM_STRING( &constant_bin[ 616051 ], 18, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$distutils$command$build_ext( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9c8db95fcecb30cd42844549036a1aaa;
static PyCodeObject *codeobj_4e1bfaa99dc8ed37eeff6a55667ea5d2;
static PyCodeObject *codeobj_00d0986d3d613bd78b66fc85fe072f72;
static PyCodeObject *codeobj_2ad9c82b6026c3bbdf2752af86deda32;
static PyCodeObject *codeobj_61666110b5375a4eb0d2352a1a9f27c3;
static PyCodeObject *codeobj_a80ffa97c0aeb62a3bc2fc2c2cc9f89a;
static PyCodeObject *codeobj_96dd1bff74ca03fe80eb75ce2114e896;
static PyCodeObject *codeobj_1f1d82eb7e51ac17db3ac25d59b9f97c;
static PyCodeObject *codeobj_9abaca61fbeb0e5833981ce379421da4;
static PyCodeObject *codeobj_f8491787bb7cd86e46a65ad8333e92cf;
static PyCodeObject *codeobj_d408d35b973fcc3c4384eba06a6b092f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_8b868ac38ca8eba8dd5e4c0312500790 );
    codeobj_9c8db95fcecb30cd42844549036a1aaa = MAKE_CODEOBJ( module_filename_obj, const_str_plain__add_dummy_mingwex_sym, 443, const_tuple_f04dded3545b09309f299bcd811a3c64_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4e1bfaa99dc8ed37eeff6a55667ea5d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__libs_with_msvc_and_fortran, 451, const_tuple_7208152a259dd06477bbc914cdfc09ef_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_00d0986d3d613bd78b66fc85fe072f72 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_build_ext, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2ad9c82b6026c3bbdf2752af86deda32 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_build_ext, 30, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_61666110b5375a4eb0d2352a1a9f27c3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_build_extension, 264, const_tuple_32e5c084ab1b4692985127a7925d549a_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a80ffa97c0aeb62a3bc2fc2c2cc9f89a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_finalize_options, 51, const_tuple_str_plain_self_str_plain_incl_dirs_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_96dd1bff74ca03fe80eb75ce2114e896 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_outputs, 512, const_tuple_be528a91a6247dcc14283b69e0dd7f3d_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f1d82eb7e51ac17db3ac25d59b9f97c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_source_files, 505, const_tuple_str_plain_self_str_plain_filenames_str_plain_ext_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9abaca61fbeb0e5833981ce379421da4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_initialize_options, 46, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f8491787bb7cd86e46a65ad8333e92cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run, 77, const_tuple_dd6f066290cb1550add1b02b155df829_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d408d35b973fcc3c4384eba06a6b092f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_swig_sources, 260, const_tuple_str_plain_self_str_plain_sources_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_build_ext_of_numpy$distutils$command$build_ext( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl_function_10_complex_call_helper_pos_keywords_star_dict_of___internal__( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_2_finalize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_3_run_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_4_swig_sources_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_5_build_extension_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_8_get_source_files_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );


static PyObject *MAKE_FUNCTION_function_9_get_outputs_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_build_ext_of_numpy$distutils$command$build_ext( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var_description = NULL;
    PyObject *var_user_options = NULL;
    PyObject *var_help_options = NULL;
    PyObject *var_initialize_options = NULL;
    PyObject *var_finalize_options = NULL;
    PyObject *var_run = NULL;
    PyObject *var_swig_sources = NULL;
    PyObject *var_build_extension = NULL;
    PyObject *var__add_dummy_mingwex_sym = NULL;
    PyObject *var__libs_with_msvc_and_fortran = NULL;
    PyObject *var_get_source_files = NULL;
    PyObject *var_get_outputs = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_e71046027ad89002d40b61208820fea4;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_71bdad57e27a9481edd78fd87582c670;
    assert( var_description == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_description = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2ad9c82b6026c3bbdf2752af86deda32, module_numpy$distutils$command$build_ext );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_old_build_ext );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_build_ext );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "old_build_ext" );
        exception_tb = NULL;

        exception_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_user_options );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = LIST_COPY( const_list_07ea72d64576b97abf91f4050554755c_list );
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    assert( var_user_options == NULL );
    var_user_options = tmp_assign_source_3;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_old_build_ext );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_build_ext );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "old_build_ext" );
        exception_tb = NULL;

        exception_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_help_options );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = PyList_New( 1 );
    tmp_list_element_1 = PyTuple_New( 4 );
    tmp_tuple_element_1 = const_str_digest_9bd342466344c27bee51c2060e7b289f;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_digest_3de59fd470b91375d5f73b99d9cf76d9;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_show_fortran_compilers );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_show_fortran_compilers );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "show_fortran_compilers" );
        exception_tb = NULL;

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 3, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_right_name_2, 0, tmp_list_element_1 );
    tmp_assign_source_4 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    assert( var_help_options == NULL );
    var_help_options = tmp_assign_source_4;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( var___module__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___module__,
                    var___module__
                );

                assert( res == 0 );
            }

            if ( var_description )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_description,
                    var_description
                );

                assert( res == 0 );
            }

            if ( var_user_options )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_user_options,
                    var_user_options
                );

                assert( res == 0 );
            }

            if ( var_help_options )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_help_options,
                    var_help_options
                );

                assert( res == 0 );
            }

            if ( var_initialize_options )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_initialize_options,
                    var_initialize_options
                );

                assert( res == 0 );
            }

            if ( var_finalize_options )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_finalize_options,
                    var_finalize_options
                );

                assert( res == 0 );
            }

            if ( var_run )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_run,
                    var_run
                );

                assert( res == 0 );
            }

            if ( var_swig_sources )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_swig_sources,
                    var_swig_sources
                );

                assert( res == 0 );
            }

            if ( var_build_extension )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_build_extension,
                    var_build_extension
                );

                assert( res == 0 );
            }

            if ( var__add_dummy_mingwex_sym )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__add_dummy_mingwex_sym,
                    var__add_dummy_mingwex_sym
                );

                assert( res == 0 );
            }

            if ( var__libs_with_msvc_and_fortran )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__libs_with_msvc_and_fortran,
                    var__libs_with_msvc_and_fortran
                );

                assert( res == 0 );
            }

            if ( var_get_source_files )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_get_source_files,
                    var_get_source_files
                );

                assert( res == 0 );
            }

            if ( var_get_outputs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_get_outputs,
                    var_get_outputs
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_assign_source_5 = MAKE_FUNCTION_function_1_initialize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );
    assert( var_initialize_options == NULL );
    var_initialize_options = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_2_finalize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );
    assert( var_finalize_options == NULL );
    var_finalize_options = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_3_run_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );
    assert( var_run == NULL );
    var_run = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_4_swig_sources_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );
    assert( var_swig_sources == NULL );
    var_swig_sources = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_5_build_extension_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );
    assert( var_build_extension == NULL );
    var_build_extension = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );
    assert( var__add_dummy_mingwex_sym == NULL );
    var__add_dummy_mingwex_sym = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );
    assert( var__libs_with_msvc_and_fortran == NULL );
    var__libs_with_msvc_and_fortran = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_function_8_get_source_files_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );
    assert( var_get_source_files == NULL );
    var_get_source_files = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_function_9_get_outputs_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  );
    assert( var_get_outputs == NULL );
    var_get_outputs = tmp_assign_source_13;

    tmp_return_value = PyDict_New();
    if ( var___module__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__
        );

        assert( res == 0 );
    }

    if ( var_description )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_description,
            var_description
        );

        assert( res == 0 );
    }

    if ( var_user_options )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_user_options,
            var_user_options
        );

        assert( res == 0 );
    }

    if ( var_help_options )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_help_options,
            var_help_options
        );

        assert( res == 0 );
    }

    if ( var_initialize_options )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_initialize_options,
            var_initialize_options
        );

        assert( res == 0 );
    }

    if ( var_finalize_options )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_finalize_options,
            var_finalize_options
        );

        assert( res == 0 );
    }

    if ( var_run )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_run,
            var_run
        );

        assert( res == 0 );
    }

    if ( var_swig_sources )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_swig_sources,
            var_swig_sources
        );

        assert( res == 0 );
    }

    if ( var_build_extension )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_build_extension,
            var_build_extension
        );

        assert( res == 0 );
    }

    if ( var__add_dummy_mingwex_sym )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__add_dummy_mingwex_sym,
            var__add_dummy_mingwex_sym
        );

        assert( res == 0 );
    }

    if ( var__libs_with_msvc_and_fortran )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__libs_with_msvc_and_fortran,
            var__libs_with_msvc_and_fortran
        );

        assert( res == 0 );
    }

    if ( var_get_source_files )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_get_source_files,
            var_get_source_files
        );

        assert( res == 0 );
    }

    if ( var_get_outputs )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_get_outputs,
            var_get_outputs
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var_description );
    Py_DECREF( var_description );
    var_description = NULL;

    CHECK_OBJECT( (PyObject *)var_user_options );
    Py_DECREF( var_user_options );
    var_user_options = NULL;

    CHECK_OBJECT( (PyObject *)var_help_options );
    Py_DECREF( var_help_options );
    var_help_options = NULL;

    CHECK_OBJECT( (PyObject *)var_initialize_options );
    Py_DECREF( var_initialize_options );
    var_initialize_options = NULL;

    CHECK_OBJECT( (PyObject *)var_finalize_options );
    Py_DECREF( var_finalize_options );
    var_finalize_options = NULL;

    CHECK_OBJECT( (PyObject *)var_run );
    Py_DECREF( var_run );
    var_run = NULL;

    CHECK_OBJECT( (PyObject *)var_swig_sources );
    Py_DECREF( var_swig_sources );
    var_swig_sources = NULL;

    CHECK_OBJECT( (PyObject *)var_build_extension );
    Py_DECREF( var_build_extension );
    var_build_extension = NULL;

    CHECK_OBJECT( (PyObject *)var__add_dummy_mingwex_sym );
    Py_DECREF( var__add_dummy_mingwex_sym );
    var__add_dummy_mingwex_sym = NULL;

    CHECK_OBJECT( (PyObject *)var__libs_with_msvc_and_fortran );
    Py_DECREF( var__libs_with_msvc_and_fortran );
    var__libs_with_msvc_and_fortran = NULL;

    CHECK_OBJECT( (PyObject *)var_get_source_files );
    Py_DECREF( var_get_source_files );
    var_get_source_files = NULL;

    CHECK_OBJECT( (PyObject *)var_get_outputs );
    Py_DECREF( var_get_outputs );
    var_get_outputs = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var_description );
    Py_DECREF( var_description );
    var_description = NULL;

    Py_XDECREF( var_user_options );
    var_user_options = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1_initialize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9abaca61fbeb0e5833981ce379421da4, module_numpy$distutils$command$build_ext );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_old_build_ext );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_build_ext );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "old_build_ext" );
        exception_tb = NULL;

        exception_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_initialize_options );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    frame_function->f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_fcompiler, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_parallel, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_initialize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_initialize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_2_finalize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_incl_dirs = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_make_exception_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a80ffa97c0aeb62a3bc2fc2c2cc9f89a, module_numpy$distutils$command$build_ext );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parallel );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    // Tried code:
    tmp_source_name_2 = par_self;

    tmp_int_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_parallel );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_2;
    }
    tmp_assattr_name_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_2;
    }
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_parallel, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 54;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_1 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_7700c32f5dffa5ed5566de029c7b17ab;
    frame_function->f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 56;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_include_dirs );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_5 = par_self;

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_include_dirs );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_split );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_pathsep );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_include_dirs, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    branch_no_3:;
    tmp_source_name_7 = par_self;

    tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_include_dirs );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    Py_DECREF( tmp_or_left_value_1 );
    tmp_or_right_value_1 = PyList_New( 0 );
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_incl_dirs == NULL );
    var_incl_dirs = tmp_assign_source_1;

    tmp_source_name_9 = par_self;

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_distribution );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_include_dirs );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_3 = PyList_New( 0 );
    tmp_source_name_10 = par_self;

    tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_distribution );
    if ( tmp_assattr_target_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_include_dirs, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_target_3 );

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_target_3 );
    branch_no_4:;
    tmp_source_name_12 = par_self;

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_distribution );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_include_dirs );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_include_dirs, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_source_name_14 = par_self;

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_include_dirs );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_extend );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_incl_dirs;

    frame_function->f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_old_build_ext );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_build_ext );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "old_build_ext" );
        exception_tb = NULL;

        exception_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_finalize_options );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_self;

    frame_function->f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_16 = par_self;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_set_undefined_options );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 75;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_024e0dc9330afcb8c331c62b23f96c36_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( var_incl_dirs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_incl_dirs,
                    var_incl_dirs
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_finalize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_incl_dirs );
    Py_DECREF( var_incl_dirs );
    var_incl_dirs = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_incl_dirs );
    var_incl_dirs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_finalize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_3_run_of_class_1_build_ext_of_numpy$distutils$command$build_ext( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_build_clib = NULL;
    PyObject *var_new_compiler = NULL;
    PyObject *var_new_fcompiler = NULL;
    PyObject *var_compiler_type = NULL;
    PyObject *var_clibs = NULL;
    PyObject *var_libname = NULL;
    PyObject *var_build_info = NULL;
    PyObject *var_all_languages = NULL;
    PyObject *var_ext = NULL;
    PyObject *var_ext_languages = NULL;
    PyObject *var_c_libs = NULL;
    PyObject *var_c_lib_dirs = NULL;
    PyObject *var_macros = NULL;
    PyObject *var_binfo = NULL;
    PyObject *var_m = NULL;
    PyObject *var_l = NULL;
    PyObject *var_new_c_libs = NULL;
    PyObject *var_ext_language = NULL;
    PyObject *var_need_f90_compiler = NULL;
    PyObject *var_need_f77_compiler = NULL;
    PyObject *var_need_cxx_compiler = NULL;
    PyObject *var_compiler = NULL;
    PyObject *var_ctype = NULL;
    PyObject *var_fcompiler = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_name_15;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
    PyObject *tmp_assattr_target_14;
    PyObject *tmp_assattr_target_15;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_called_name_45;
    PyObject *tmp_called_name_46;
    PyObject *tmp_called_name_47;
    PyObject *tmp_called_name_48;
    PyObject *tmp_called_name_49;
    PyObject *tmp_called_name_50;
    PyObject *tmp_called_name_51;
    PyObject *tmp_called_name_52;
    PyObject *tmp_called_name_53;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
    int tmp_cond_truth_20;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
    PyObject *tmp_cond_value_20;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_source_name_48;
    PyObject *tmp_source_name_49;
    PyObject *tmp_source_name_50;
    PyObject *tmp_source_name_51;
    PyObject *tmp_source_name_52;
    PyObject *tmp_source_name_53;
    PyObject *tmp_source_name_54;
    PyObject *tmp_source_name_55;
    PyObject *tmp_source_name_56;
    PyObject *tmp_source_name_57;
    PyObject *tmp_source_name_58;
    PyObject *tmp_source_name_59;
    PyObject *tmp_source_name_60;
    PyObject *tmp_source_name_61;
    PyObject *tmp_source_name_62;
    PyObject *tmp_source_name_63;
    PyObject *tmp_source_name_64;
    PyObject *tmp_source_name_65;
    PyObject *tmp_source_name_66;
    PyObject *tmp_source_name_67;
    PyObject *tmp_source_name_68;
    PyObject *tmp_source_name_69;
    PyObject *tmp_source_name_70;
    PyObject *tmp_source_name_71;
    PyObject *tmp_source_name_72;
    PyObject *tmp_source_name_73;
    PyObject *tmp_source_name_74;
    PyObject *tmp_source_name_75;
    PyObject *tmp_source_name_76;
    PyObject *tmp_source_name_77;
    PyObject *tmp_source_name_78;
    PyObject *tmp_source_name_79;
    PyObject *tmp_source_name_80;
    PyObject *tmp_source_name_81;
    PyObject *tmp_source_name_82;
    PyObject *tmp_source_name_83;
    PyObject *tmp_source_name_84;
    PyObject *tmp_source_name_85;
    PyObject *tmp_source_name_86;
    PyObject *tmp_source_name_87;
    PyObject *tmp_source_name_88;
    PyObject *tmp_source_name_89;
    PyObject *tmp_source_name_90;
    PyObject *tmp_source_name_91;
    PyObject *tmp_source_name_92;
    PyObject *tmp_source_name_93;
    PyObject *tmp_source_name_94;
    PyObject *tmp_source_name_95;
    PyObject *tmp_source_name_96;
    PyObject *tmp_source_name_97;
    PyObject *tmp_source_name_98;
    PyObject *tmp_source_name_99;
    PyObject *tmp_source_name_100;
    PyObject *tmp_source_name_101;
    PyObject *tmp_source_name_102;
    PyObject *tmp_source_name_103;
    PyObject *tmp_source_name_104;
    PyObject *tmp_source_name_105;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f8491787bb7cd86e46a65ad8333e92cf, module_numpy$distutils$command$build_ext );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extensions );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_run_command );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 82;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_build_src_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = par_self;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_distribution );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_has_c_libraries );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 84;
    tmp_cond_value_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_5 = par_self;

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_inplace );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_8 = par_self;

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_distribution );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_have_run );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_get );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 86;
    tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_plain_build_clib_tuple, 0 ) );

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_warn );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 87;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_digest_830eb0db6a47817653ee64068d4d72a7_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = par_self;

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_distribution );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_get_command_obj );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 89;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_plain_build_clib_tuple, 0 ) );

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    assert( var_build_clib == NULL );
    var_build_clib = tmp_assign_source_1;

    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_13 = par_self;

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_distribution );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_get_command_obj );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 91;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_plain_build_clib_tuple, 0 ) );

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    assert( var_build_clib == NULL );
    var_build_clib = tmp_assign_source_2;

    tmp_assattr_name_1 = const_int_pos_1;
    tmp_assattr_target_1 = var_build_clib;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_inplace, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = var_build_clib;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_ensure_finalized );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 93;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_15 = var_build_clib;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_run );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 94;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_1 = const_int_pos_1;
    tmp_source_name_17 = par_self;

    tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_distribution );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_have_run );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_plain_build_clib;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_18 = par_self;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_run_command );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 98;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_plain_build_clib_tuple, 0 ) );

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_19 = par_self;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_get_finalized_command );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 99;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_plain_build_clib_tuple, 0 ) );

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    assert( var_build_clib == NULL );
    var_build_clib = tmp_assign_source_3;

    branch_end_3:;
    tmp_source_name_21 = par_self;

    tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_library_dirs );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_append );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = var_build_clib;

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "build_clib" );
        exception_tb = NULL;

        exception_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_build_clib );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 100;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 100;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_4 = Py_None;
    assert( var_build_clib == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_build_clib = tmp_assign_source_4;

    branch_end_2:;
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_self )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_self,
            par_self
        );

        assert( res == 0 );
    }

    if ( var_build_clib )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_build_clib,
            var_build_clib
        );

        assert( res == 0 );
    }

    if ( var_new_compiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_new_compiler,
            var_new_compiler
        );

        assert( res == 0 );
    }

    if ( var_new_fcompiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_new_fcompiler,
            var_new_fcompiler
        );

        assert( res == 0 );
    }

    if ( var_compiler_type )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_compiler_type,
            var_compiler_type
        );

        assert( res == 0 );
    }

    if ( var_clibs )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_clibs,
            var_clibs
        );

        assert( res == 0 );
    }

    if ( var_libname )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_libname,
            var_libname
        );

        assert( res == 0 );
    }

    if ( var_build_info )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_build_info,
            var_build_info
        );

        assert( res == 0 );
    }

    if ( var_all_languages )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_all_languages,
            var_all_languages
        );

        assert( res == 0 );
    }

    if ( var_ext )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ext,
            var_ext
        );

        assert( res == 0 );
    }

    if ( var_ext_languages )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ext_languages,
            var_ext_languages
        );

        assert( res == 0 );
    }

    if ( var_c_libs )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_c_libs,
            var_c_libs
        );

        assert( res == 0 );
    }

    if ( var_c_lib_dirs )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_c_lib_dirs,
            var_c_lib_dirs
        );

        assert( res == 0 );
    }

    if ( var_macros )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_macros,
            var_macros
        );

        assert( res == 0 );
    }

    if ( var_binfo )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_binfo,
            var_binfo
        );

        assert( res == 0 );
    }

    if ( var_m )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_m,
            var_m
        );

        assert( res == 0 );
    }

    if ( var_l )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_l,
            var_l
        );

        assert( res == 0 );
    }

    if ( var_new_c_libs )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_new_c_libs,
            var_new_c_libs
        );

        assert( res == 0 );
    }

    if ( var_ext_language )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ext_language,
            var_ext_language
        );

        assert( res == 0 );
    }

    if ( var_need_f90_compiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_need_f90_compiler,
            var_need_f90_compiler
        );

        assert( res == 0 );
    }

    if ( var_need_f77_compiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_need_f77_compiler,
            var_need_f77_compiler
        );

        assert( res == 0 );
    }

    if ( var_need_cxx_compiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_need_cxx_compiler,
            var_need_cxx_compiler
        );

        assert( res == 0 );
    }

    if ( var_compiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_compiler,
            var_compiler
        );

        assert( res == 0 );
    }

    if ( var_ctype )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ctype,
            var_ctype
        );

        assert( res == 0 );
    }

    if ( var_fcompiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fcompiler,
            var_fcompiler
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 109;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_ec8a3e4dce79fe85170ca4f1784c494d, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_new_compiler_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_new_compiler );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    assert( var_new_compiler == NULL );
    var_new_compiler = tmp_assign_source_5;

    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ( par_self )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_self,
            par_self
        );

        assert( res == 0 );
    }

    if ( var_build_clib )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_build_clib,
            var_build_clib
        );

        assert( res == 0 );
    }

    if ( var_new_compiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_new_compiler,
            var_new_compiler
        );

        assert( res == 0 );
    }

    if ( var_new_fcompiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_new_fcompiler,
            var_new_fcompiler
        );

        assert( res == 0 );
    }

    if ( var_compiler_type )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_compiler_type,
            var_compiler_type
        );

        assert( res == 0 );
    }

    if ( var_clibs )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_clibs,
            var_clibs
        );

        assert( res == 0 );
    }

    if ( var_libname )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_libname,
            var_libname
        );

        assert( res == 0 );
    }

    if ( var_build_info )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_build_info,
            var_build_info
        );

        assert( res == 0 );
    }

    if ( var_all_languages )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_all_languages,
            var_all_languages
        );

        assert( res == 0 );
    }

    if ( var_ext )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ext,
            var_ext
        );

        assert( res == 0 );
    }

    if ( var_ext_languages )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ext_languages,
            var_ext_languages
        );

        assert( res == 0 );
    }

    if ( var_c_libs )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_c_libs,
            var_c_libs
        );

        assert( res == 0 );
    }

    if ( var_c_lib_dirs )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_c_lib_dirs,
            var_c_lib_dirs
        );

        assert( res == 0 );
    }

    if ( var_macros )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_macros,
            var_macros
        );

        assert( res == 0 );
    }

    if ( var_binfo )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_binfo,
            var_binfo
        );

        assert( res == 0 );
    }

    if ( var_m )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_m,
            var_m
        );

        assert( res == 0 );
    }

    if ( var_l )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_l,
            var_l
        );

        assert( res == 0 );
    }

    if ( var_new_c_libs )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_new_c_libs,
            var_new_c_libs
        );

        assert( res == 0 );
    }

    if ( var_ext_language )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ext_language,
            var_ext_language
        );

        assert( res == 0 );
    }

    if ( var_need_f90_compiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_need_f90_compiler,
            var_need_f90_compiler
        );

        assert( res == 0 );
    }

    if ( var_need_f77_compiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_need_f77_compiler,
            var_need_f77_compiler
        );

        assert( res == 0 );
    }

    if ( var_need_cxx_compiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_need_cxx_compiler,
            var_need_cxx_compiler
        );

        assert( res == 0 );
    }

    if ( var_compiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_compiler,
            var_compiler
        );

        assert( res == 0 );
    }

    if ( var_ctype )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ctype,
            var_ctype
        );

        assert( res == 0 );
    }

    if ( var_fcompiler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_fcompiler,
            var_fcompiler
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 110;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_605fe6eec78a08f1509cdf1a1c40fdcd, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_new_fcompiler_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_new_fcompiler );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    assert( var_new_fcompiler == NULL );
    var_new_fcompiler = tmp_assign_source_6;

    tmp_source_name_23 = par_self;

    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_compiler );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    assert( var_compiler_type == NULL );
    var_compiler_type = tmp_assign_source_7;

    tmp_called_name_12 = var_new_compiler;

    tmp_kw_name_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = var_compiler_type;

    tmp_dict_key_1 = const_str_plain_compiler;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_source_name_24 = par_self;

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_verbose );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_verbose;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_source_name_25 = par_self;

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_dry_run );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_dry_run;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_source_name_26 = par_self;

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_force );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_force;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    frame_function->f_lineno = 117;
    tmp_assattr_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_12, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_compiler, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 114;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_28 = par_self;

    tmp_source_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_compiler );
    if ( tmp_source_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_customize );
    Py_DECREF( tmp_source_name_27 );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_source_name_29 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_distribution );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 118;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_31 = par_self;

    tmp_source_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_compiler );
    if ( tmp_source_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_customize_cmd );
    Py_DECREF( tmp_source_name_30 );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_self;

    frame_function->f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_33 = par_self;

    tmp_source_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_compiler );
    if ( tmp_source_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_show_customization );
    Py_DECREF( tmp_source_name_32 );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 120;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_15 );
    Py_DECREF( tmp_called_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_8 = PyDict_New();
    assert( var_clibs == NULL );
    var_clibs = tmp_assign_source_8;

    tmp_compare_left_1 = var_build_clib;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "build_clib" );
        exception_tb = NULL;

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_34 = var_build_clib;

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "build_clib" );
        exception_tb = NULL;

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_libraries );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    Py_DECREF( tmp_or_left_value_1 );
    tmp_or_right_value_1 = PyList_New( 0 );
    tmp_iter_arg_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_iter_arg_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_9;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 125;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 125;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 125;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_libname;
        var_libname = tmp_assign_source_14;
        Py_INCREF( var_libname );
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_build_info;
        var_build_info = tmp_assign_source_15;
        Py_INCREF( var_build_info );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_key_name_1 = var_libname;

    tmp_dict_name_1 = var_clibs;

    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto try_except_handler_2;
    }
    tmp_and_left_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto try_except_handler_2;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_dict_name_2 = var_clibs;

    tmp_key_name_2 = var_libname;

    tmp_compexpr_left_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto try_except_handler_2;
    }
    tmp_compexpr_right_1 = var_build_info;

    tmp_and_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto try_except_handler_2;
    }
    tmp_cond_value_5 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_5 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 126;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 127;
        goto try_except_handler_2;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_warn );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto try_except_handler_2;
    }
    tmp_left_name_1 = const_str_digest_d3ba698a3de89a878c9bf84db1b4f5ac;
    tmp_right_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_libname;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 300;
    tmp_dict_name_3 = var_clibs;

    tmp_key_name_3 = var_libname;

    tmp_operand_name_1 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 129;
        goto try_except_handler_2;
    }
    tmp_slice_source_1 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 129;
        goto try_except_handler_2;
    }
    tmp_tuple_element_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 129;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = 300;
    tmp_operand_name_2 = var_build_info;

    tmp_slice_source_2 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_2 );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 129;
        goto try_except_handler_2;
    }
    tmp_tuple_element_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 129;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 127;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_dictset_value = var_build_info;

    tmp_dictset_dict = var_clibs;

    tmp_dictset_key = var_libname;

    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    branch_no_5:;
    tmp_source_name_37 = par_self;

    tmp_source_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_distribution );
    if ( tmp_source_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_libraries );
    Py_DECREF( tmp_source_name_36 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    Py_DECREF( tmp_or_left_value_2 );
    tmp_or_right_value_2 = PyList_New( 0 );
    tmp_iter_arg_3 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_iter_arg_3 = tmp_or_left_value_2;
    or_end_2:;
    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_16;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 132;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_4 = tmp_for_loop_2__iter_value;

    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_19 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 132;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_20 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 132;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_5;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_5;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    tmp_assign_source_21 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = var_libname;
        var_libname = tmp_assign_source_21;
        Py_INCREF( var_libname );
        Py_XDECREF( old );
    }

    tmp_assign_source_22 = tmp_tuple_unpack_2__element_2;

    {
        PyObject *old = var_build_info;
        var_build_info = tmp_assign_source_22;
        Py_INCREF( var_build_info );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_1 );
    Py_DECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_2 );
    Py_DECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_key_name_4 = var_libname;

    tmp_dict_name_4 = var_clibs;

    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        goto try_except_handler_4;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    goto loop_start_2;
    branch_no_7:;
    tmp_dictset_value = var_build_info;

    tmp_dictset_dict = var_clibs;

    tmp_dictset_key = var_libname;

    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        goto try_except_handler_4;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_set );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "set" );
        exception_tb = NULL;

        exception_lineno = 140;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 140;
    tmp_assign_source_23 = CALL_FUNCTION_NO_ARGS( tmp_called_name_17 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    assert( var_all_languages == NULL );
    var_all_languages = tmp_assign_source_23;

    tmp_source_name_38 = par_self;

    tmp_iter_arg_5 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_extensions );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_24;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator;

    tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_25 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 141;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    tmp_assign_source_26 = tmp_for_loop_3__iter_value;

    {
        PyObject *old = var_ext;
        var_ext = tmp_assign_source_26;
        Py_INCREF( var_ext );
        Py_XDECREF( old );
    }

    tmp_called_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_set );

    if (unlikely( tmp_called_name_18 == NULL ))
    {
        tmp_called_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set );
    }

    if ( tmp_called_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "set" );
        exception_tb = NULL;

        exception_lineno = 142;
        goto try_except_handler_6;
    }

    frame_function->f_lineno = 142;
    tmp_assign_source_27 = CALL_FUNCTION_NO_ARGS( tmp_called_name_18 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto try_except_handler_6;
    }
    {
        PyObject *old = var_ext_languages;
        var_ext_languages = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    tmp_assign_source_28 = PyList_New( 0 );
    {
        PyObject *old = var_c_libs;
        var_c_libs = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    tmp_assign_source_29 = PyList_New( 0 );
    {
        PyObject *old = var_c_lib_dirs;
        var_c_lib_dirs = tmp_assign_source_29;
        Py_XDECREF( old );
    }

    tmp_assign_source_30 = PyList_New( 0 );
    {
        PyObject *old = var_macros;
        var_macros = tmp_assign_source_30;
        Py_XDECREF( old );
    }

    tmp_source_name_39 = var_ext;

    tmp_iter_arg_6 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_libraries );
    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto try_except_handler_6;
    }
    tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_for_loop_4__for_iterator;
        tmp_for_loop_4__for_iterator = tmp_assign_source_31;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator;

    tmp_assign_source_32 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_32 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 146;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_for_loop_4__iter_value;
        tmp_for_loop_4__iter_value = tmp_assign_source_32;
        Py_XDECREF( old );
    }

    tmp_assign_source_33 = tmp_for_loop_4__iter_value;

    {
        PyObject *old = var_libname;
        var_libname = tmp_assign_source_33;
        Py_INCREF( var_libname );
        Py_XDECREF( old );
    }

    tmp_key_name_5 = var_libname;

    tmp_dict_name_5 = var_clibs;

    tmp_res = PyDict_Contains( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_7;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_dict_name_6 = var_clibs;

    tmp_key_name_6 = var_libname;

    tmp_assign_source_34 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_binfo;
        var_binfo = tmp_assign_source_34;
        Py_XDECREF( old );
    }

    tmp_left_name_2 = var_c_libs;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c_libs" );
        exception_tb = NULL;

        exception_lineno = 149;
        goto try_except_handler_7;
    }

    tmp_source_name_40 = var_binfo;

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_get );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto try_except_handler_7;
    }
    tmp_call_arg_element_1 = const_str_plain_libraries;
    tmp_call_arg_element_2 = PyList_New( 0 );
    frame_function->f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1, tmp_call_arg_element_2 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto try_except_handler_7;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_35 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto try_except_handler_7;
    }
    var_c_libs = tmp_assign_source_35;

    tmp_left_name_3 = var_c_lib_dirs;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c_lib_dirs" );
        exception_tb = NULL;

        exception_lineno = 150;
        goto try_except_handler_7;
    }

    tmp_source_name_41 = var_binfo;

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_get );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto try_except_handler_7;
    }
    tmp_call_arg_element_3 = const_str_plain_library_dirs;
    tmp_call_arg_element_4 = PyList_New( 0 );
    frame_function->f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_call_arg_element_3, tmp_call_arg_element_4 };
        tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto try_except_handler_7;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_36 = tmp_left_name_3;
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto try_except_handler_7;
    }
    var_c_lib_dirs = tmp_assign_source_36;

    tmp_source_name_42 = var_binfo;

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_get );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto try_except_handler_7;
    }
    tmp_call_arg_element_5 = const_str_plain_macros;
    tmp_call_arg_element_6 = PyList_New( 0 );
    frame_function->f_lineno = 151;
    {
        PyObject *call_args[] = { tmp_call_arg_element_5, tmp_call_arg_element_6 };
        tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_iter_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto try_except_handler_7;
    }
    tmp_assign_source_37 = MAKE_ITERATOR( tmp_iter_arg_7 );
    Py_DECREF( tmp_iter_arg_7 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_for_loop_5__for_iterator;
        tmp_for_loop_5__for_iterator = tmp_assign_source_37;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator;

    tmp_assign_source_38 = ITERATOR_NEXT( tmp_next_source_5 );
    if ( tmp_assign_source_38 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_5;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 151;
            goto try_except_handler_8;
        }
    }

    {
        PyObject *old = tmp_for_loop_5__iter_value;
        tmp_for_loop_5__iter_value = tmp_assign_source_38;
        Py_XDECREF( old );
    }

    tmp_assign_source_39 = tmp_for_loop_5__iter_value;

    {
        PyObject *old = var_m;
        var_m = tmp_assign_source_39;
        Py_INCREF( var_m );
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_m;

    tmp_compare_right_2 = var_macros;

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_43 = var_macros;

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_append );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_8;
    }
    tmp_args_element_name_5 = var_m;

    frame_function->f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    branch_no_9:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto try_except_handler_8;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    branch_no_8:;
    tmp_source_name_45 = var_clibs;

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_get );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_7;
    }
    tmp_args_element_name_6 = var_libname;

    tmp_args_element_name_7 = PyDict_New();
    frame_function->f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_source_name_44 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_source_name_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_7;
    }
    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_get );
    Py_DECREF( tmp_source_name_44 );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_7;
    }
    tmp_call_arg_element_7 = const_str_plain_source_languages;
    tmp_call_arg_element_8 = PyList_New( 0 );
    frame_function->f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_call_arg_element_7, tmp_call_arg_element_8 };
        tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_iter_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_7;
    }
    tmp_assign_source_40 = MAKE_ITERATOR( tmp_iter_arg_8 );
    Py_DECREF( tmp_iter_arg_8 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_for_loop_6__for_iterator;
        tmp_for_loop_6__for_iterator = tmp_assign_source_40;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_6:;
    tmp_next_source_6 = tmp_for_loop_6__for_iterator;

    tmp_assign_source_41 = ITERATOR_NEXT( tmp_next_source_6 );
    if ( tmp_assign_source_41 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_6;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 155;
            goto try_except_handler_9;
        }
    }

    {
        PyObject *old = tmp_for_loop_6__iter_value;
        tmp_for_loop_6__iter_value = tmp_assign_source_41;
        Py_XDECREF( old );
    }

    tmp_assign_source_42 = tmp_for_loop_6__iter_value;

    {
        PyObject *old = var_l;
        var_l = tmp_assign_source_42;
        Py_INCREF( var_l );
        Py_XDECREF( old );
    }

    tmp_source_name_46 = var_ext_languages;

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_add );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto try_except_handler_9;
    }
    tmp_args_element_name_8 = var_l;

    frame_function->f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_called_name_25 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_9;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto try_except_handler_7;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_6;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    tmp_cond_value_8 = var_c_libs;

    if ( tmp_cond_value_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c_libs" );
        exception_tb = NULL;

        exception_lineno = 157;
        goto try_except_handler_6;
    }

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto try_except_handler_6;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_47 = var_ext;

    tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_libraries );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto try_except_handler_6;
    }
    tmp_right_name_4 = var_c_libs;

    if ( tmp_right_name_4 == NULL )
    {
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c_libs" );
        exception_tb = NULL;

        exception_lineno = 158;
        goto try_except_handler_6;
    }

    tmp_assign_source_43 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto try_except_handler_6;
    }
    {
        PyObject *old = var_new_c_libs;
        var_new_c_libs = tmp_assign_source_43;
        Py_XDECREF( old );
    }

    tmp_source_name_48 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_48 == NULL ))
    {
        tmp_source_name_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_48 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 159;
        goto try_except_handler_6;
    }

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_info );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto try_except_handler_6;
    }
    tmp_left_name_5 = const_str_digest_513238febf8f5eeccab8c98160ee0c81;
    tmp_right_name_5 = PyTuple_New( 3 );
    tmp_source_name_49 = var_ext;

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_name );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_right_name_5 );

        exception_lineno = 160;
        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_2 );
    tmp_source_name_50 = var_ext;

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_libraries );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_right_name_5 );

        exception_lineno = 160;
        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_new_c_libs;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_5, 2, tmp_tuple_element_2 );
    tmp_args_element_name_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_26 );

        exception_lineno = 159;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 160;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_3 = var_new_c_libs;

    tmp_assattr_target_3 = var_ext;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_libraries, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        goto try_except_handler_6;
    }
    tmp_source_name_51 = var_ext;

    tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_library_dirs );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        goto try_except_handler_6;
    }
    tmp_right_name_6 = var_c_lib_dirs;

    if ( tmp_right_name_6 == NULL )
    {
        Py_DECREF( tmp_left_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c_lib_dirs" );
        exception_tb = NULL;

        exception_lineno = 162;
        goto try_except_handler_6;
    }

    tmp_assattr_name_4 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        goto try_except_handler_6;
    }
    tmp_assattr_target_4 = var_ext;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_library_dirs, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 162;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_assattr_name_4 );
    branch_no_10:;
    tmp_cond_value_9 = var_macros;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_6;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_52 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_52 == NULL ))
    {
        tmp_source_name_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_52 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 164;
        goto try_except_handler_6;
    }

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_info );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto try_except_handler_6;
    }
    tmp_left_name_7 = const_str_digest_38eb5a1a38d4e142cdd76fbd5b2863a4;
    tmp_right_name_7 = PyTuple_New( 2 );
    tmp_source_name_53 = var_ext;

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_name );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_27 );
        Py_DECREF( tmp_right_name_7 );

        exception_lineno = 165;
        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_macros;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_7, 1, tmp_tuple_element_3 );
    tmp_args_element_name_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_27 );

        exception_lineno = 164;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 165;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_54 = var_ext;

    tmp_left_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_define_macros );
    if ( tmp_left_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto try_except_handler_6;
    }
    tmp_right_name_8 = var_macros;

    tmp_assattr_name_5 = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_8 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto try_except_handler_6;
    }
    tmp_assattr_target_5 = var_ext;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_define_macros, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 166;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_assattr_name_5 );
    branch_no_11:;
    tmp_called_name_28 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_has_f_sources );

    if (unlikely( tmp_called_name_28 == NULL ))
    {
        tmp_called_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_has_f_sources );
    }

    if ( tmp_called_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "has_f_sources" );
        exception_tb = NULL;

        exception_lineno = 169;
        goto try_except_handler_6;
    }

    tmp_source_name_55 = var_ext;

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_sources );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 169;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_cond_value_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_cond_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        goto try_except_handler_6;
    }
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        exception_lineno = 169;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_56 = var_ext_languages;

    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_add );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 170;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, &PyTuple_GET_ITEM( const_tuple_str_plain_f77_tuple, 0 ) );

    Py_DECREF( tmp_called_name_29 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_12:;
    tmp_called_name_30 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_has_cxx_sources );

    if (unlikely( tmp_called_name_30 == NULL ))
    {
        tmp_called_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_has_cxx_sources );
    }

    if ( tmp_called_name_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "has_cxx_sources" );
        exception_tb = NULL;

        exception_lineno = 171;
        goto try_except_handler_6;
    }

    tmp_source_name_57 = var_ext;

    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_sources );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_cond_value_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_cond_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        goto try_except_handler_6;
    }
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_11 );

        exception_lineno = 171;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_58 = var_ext_languages;

    tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_add );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 172;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, &PyTuple_GET_ITEM( const_tuple_str_digest_483fe6e8fb067015ad0f59fff4617c82_tuple, 0 ) );

    Py_DECREF( tmp_called_name_31 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_13:;
    tmp_source_name_59 = var_ext;

    tmp_or_left_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_language );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_6;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_3 );

        exception_lineno = 173;
        goto try_except_handler_6;
    }
    if ( tmp_or_left_truth_3 == 1 )
    {
        goto or_left_3;
    }
    else
    {
        goto or_right_3;
    }
    or_right_3:;
    Py_DECREF( tmp_or_left_value_3 );
    tmp_source_name_61 = par_self;

    tmp_source_name_60 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_compiler );
    if ( tmp_source_name_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_6;
    }
    tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_detect_language );
    Py_DECREF( tmp_source_name_60 );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_6;
    }
    tmp_source_name_62 = var_ext;

    tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_sources );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_32 );

        exception_lineno = 173;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 173;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_or_right_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_called_name_32 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_or_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_6;
    }
    tmp_assign_source_44 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_assign_source_44 = tmp_or_left_value_3;
    or_end_3:;
    {
        PyObject *old = var_l;
        var_l = tmp_assign_source_44;
        Py_XDECREF( old );
    }

    tmp_cond_value_12 = var_l;

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        goto try_except_handler_6;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_63 = var_ext_languages;

    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_add );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        goto try_except_handler_6;
    }
    tmp_args_element_name_14 = var_l;

    frame_function->f_lineno = 175;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, call_args );
    }

    Py_DECREF( tmp_called_name_33 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_14:;
    tmp_compare_left_3 = const_str_digest_483fe6e8fb067015ad0f59fff4617c82;
    tmp_compare_right_3 = var_ext_languages;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_assign_source_45 = const_str_digest_483fe6e8fb067015ad0f59fff4617c82;
    {
        PyObject *old = var_ext_language;
        var_ext_language = tmp_assign_source_45;
        Py_INCREF( var_ext_language );
        Py_XDECREF( old );
    }

    goto branch_end_15;
    branch_no_15:;
    tmp_compare_left_4 = const_str_plain_f90;
    tmp_compare_right_4 = var_ext_languages;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_assign_source_46 = const_str_plain_f90;
    {
        PyObject *old = var_ext_language;
        var_ext_language = tmp_assign_source_46;
        Py_INCREF( var_ext_language );
        Py_XDECREF( old );
    }

    goto branch_end_16;
    branch_no_16:;
    tmp_compare_left_5 = const_str_plain_f77;
    tmp_compare_right_5 = var_ext_languages;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_assign_source_47 = const_str_plain_f77;
    {
        PyObject *old = var_ext_language;
        var_ext_language = tmp_assign_source_47;
        Py_INCREF( var_ext_language );
        Py_XDECREF( old );
    }

    goto branch_end_17;
    branch_no_17:;
    tmp_assign_source_48 = const_str_plain_c;
    {
        PyObject *old = var_ext_language;
        var_ext_language = tmp_assign_source_48;
        Py_INCREF( var_ext_language );
        Py_XDECREF( old );
    }

    branch_end_17:;
    branch_end_16:;
    branch_end_15:;
    tmp_and_left_value_2 = var_l;

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto try_except_handler_6;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_compexpr_left_2 = var_l;

    tmp_compexpr_right_2 = var_ext_language;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ext_language" );
        exception_tb = NULL;

        exception_lineno = 185;
        goto try_except_handler_6;
    }

    tmp_and_left_value_3 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto try_except_handler_6;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 185;
        goto try_except_handler_6;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    Py_DECREF( tmp_and_left_value_3 );
    tmp_source_name_64 = var_ext;

    tmp_and_right_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_language );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto try_except_handler_6;
    }
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_value_13 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_cond_value_13 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_13 );

        exception_lineno = 185;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_source_name_65 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_65 == NULL ))
    {
        tmp_source_name_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_65 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 186;
        goto try_except_handler_6;
    }

    tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_warn );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto try_except_handler_6;
    }
    tmp_left_name_9 = const_str_digest_1b1d1633e77bc5c7922368bf48141b9b;
    tmp_right_name_9 = PyTuple_New( 3 );
    tmp_source_name_66 = var_ext;

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_name );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_34 );
        Py_DECREF( tmp_right_name_9 );

        exception_lineno = 187;
        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_right_name_9, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_l;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_9, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_ext_language;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_called_name_34 );
        Py_DECREF( tmp_right_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ext_language" );
        exception_tb = NULL;

        exception_lineno = 187;
        goto try_except_handler_6;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_9, 2, tmp_tuple_element_4 );
    tmp_args_element_name_15 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_34 );

        exception_lineno = 186;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
    }

    Py_DECREF( tmp_called_name_34 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_18:;
    tmp_assattr_name_6 = var_ext_language;

    if ( tmp_assattr_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ext_language" );
        exception_tb = NULL;

        exception_lineno = 188;
        goto try_except_handler_6;
    }

    tmp_assattr_target_6 = var_ext;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_language, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_6;
    }
    tmp_source_name_67 = var_all_languages;

    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_update );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto try_except_handler_6;
    }
    tmp_args_element_name_16 = var_ext_languages;

    frame_function->f_lineno = 190;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
    }

    Py_DECREF( tmp_called_name_35 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    tmp_compexpr_left_3 = const_str_plain_f90;
    tmp_compexpr_right_3 = var_all_languages;

    tmp_assign_source_49 = SEQUENCE_CONTAINS( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        goto frame_exception_exit_1;
    }
    assert( var_need_f90_compiler == NULL );
    Py_INCREF( tmp_assign_source_49 );
    var_need_f90_compiler = tmp_assign_source_49;

    tmp_compexpr_left_4 = const_str_plain_f77;
    tmp_compexpr_right_4 = var_all_languages;

    tmp_assign_source_50 = SEQUENCE_CONTAINS( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    assert( var_need_f77_compiler == NULL );
    Py_INCREF( tmp_assign_source_50 );
    var_need_f77_compiler = tmp_assign_source_50;

    tmp_compexpr_left_5 = const_str_digest_483fe6e8fb067015ad0f59fff4617c82;
    tmp_compexpr_right_5 = var_all_languages;

    tmp_assign_source_51 = SEQUENCE_CONTAINS( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto frame_exception_exit_1;
    }
    assert( var_need_cxx_compiler == NULL );
    Py_INCREF( tmp_assign_source_51 );
    var_need_cxx_compiler = tmp_assign_source_51;

    tmp_cond_value_14 = var_need_cxx_compiler;

    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_called_name_36 = var_new_compiler;

    tmp_kw_name_2 = _PyDict_NewPresized( 4 );
    tmp_dict_value_5 = var_compiler_type;

    tmp_dict_key_5 = const_str_plain_compiler;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_source_name_68 = par_self;

    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_verbose );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = const_str_plain_verbose;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    tmp_source_name_69 = par_self;

    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_dry_run );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 200;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = const_str_plain_dry_run;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    tmp_source_name_70 = par_self;

    tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_force );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = const_str_plain_force;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    frame_function->f_lineno = 201;
    tmp_assattr_name_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_36, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_7 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__cxx_compiler, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    tmp_source_name_71 = par_self;

    tmp_assign_source_52 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain__cxx_compiler );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    assert( var_compiler == NULL );
    var_compiler = tmp_assign_source_52;

    tmp_source_name_72 = var_compiler;

    tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_customize );
    if ( tmp_called_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_73 = par_self;

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_distribution );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_37 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_5 );
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_9 = var_need_cxx_compiler;

    tmp_dict_key_9 = const_str_plain_need_cxx;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_9, tmp_dict_value_9 );
    frame_function->f_lineno = 203;
    tmp_unused = CALL_FUNCTION( tmp_called_name_37, tmp_args_name_1, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_37 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_74 = var_compiler;

    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_customize_cmd );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_17 = par_self;

    frame_function->f_lineno = 204;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_75 = var_compiler;

    tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_show_customization );
    if ( tmp_called_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 205;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_39 );
    Py_DECREF( tmp_called_name_39 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_76 = var_compiler;

    tmp_called_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_cxx_compiler );
    if ( tmp_called_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 206;
    tmp_assattr_name_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_40 );
    Py_DECREF( tmp_called_name_40 );
    if ( tmp_assattr_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_8 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain__cxx_compiler, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_8 );
    goto branch_end_19;
    branch_no_19:;
    tmp_assattr_name_9 = Py_None;
    tmp_assattr_target_9 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain__cxx_compiler, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    branch_end_19:;
    tmp_cond_value_15 = var_need_f77_compiler;

    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_15 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_source_name_77 = par_self;

    tmp_assign_source_53 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain_fcompiler );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    assert( var_ctype == NULL );
    var_ctype = tmp_assign_source_53;

    tmp_called_name_41 = var_new_fcompiler;

    tmp_kw_name_4 = _PyDict_NewPresized( 6 );
    tmp_source_name_78 = par_self;

    tmp_dict_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain_fcompiler );
    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_4 );

        exception_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_10 = const_str_plain_compiler;
    PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    tmp_source_name_79 = par_self;

    tmp_dict_value_11 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain_verbose );
    if ( tmp_dict_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_4 );

        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_11 = const_str_plain_verbose;
    PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_value_11 );
    tmp_source_name_80 = par_self;

    tmp_dict_value_12 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain_dry_run );
    if ( tmp_dict_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_4 );

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_12 = const_str_plain_dry_run;
    PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_12, tmp_dict_value_12 );
    Py_DECREF( tmp_dict_value_12 );
    tmp_source_name_81 = par_self;

    tmp_dict_value_13 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_force );
    if ( tmp_dict_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_4 );

        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_13 = const_str_plain_force;
    PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_13, tmp_dict_value_13 );
    Py_DECREF( tmp_dict_value_13 );
    tmp_dict_value_14 = Py_False;
    tmp_dict_key_14 = const_str_plain_requiref90;
    PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_14, tmp_dict_value_14 );
    tmp_source_name_82 = par_self;

    tmp_dict_value_15 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_compiler );
    if ( tmp_dict_value_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_4 );

        exception_lineno = 218;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_15 = const_str_plain_c_compiler;
    PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_15, tmp_dict_value_15 );
    Py_DECREF( tmp_dict_value_15 );
    frame_function->f_lineno = 218;
    tmp_assattr_name_10 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_41, tmp_kw_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_assattr_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_10 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain__f77_compiler, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        exception_lineno = 213;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    tmp_source_name_83 = par_self;

    tmp_assign_source_54 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain__f77_compiler );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    assert( var_fcompiler == NULL );
    var_fcompiler = tmp_assign_source_54;

    tmp_cond_value_16 = var_fcompiler;

    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_16 == 1 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_source_name_84 = var_fcompiler;

    tmp_assign_source_55 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain_compiler_type );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ctype;
        assert( old != NULL );
        var_ctype = tmp_assign_source_55;
        Py_DECREF( old );
    }

    tmp_source_name_85 = var_fcompiler;

    tmp_called_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain_customize );
    if ( tmp_called_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_source_name_86 = par_self;

    tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_distribution );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_42 );

        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 222;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_42, call_args );
    }

    Py_DECREF( tmp_called_name_42 );
    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_21:;
    tmp_and_left_value_4 = var_fcompiler;

    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    tmp_source_name_87 = var_fcompiler;

    tmp_called_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain_get_version );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 223;
    tmp_and_right_value_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_43 );
    Py_DECREF( tmp_called_name_43 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_17 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    Py_INCREF( tmp_and_left_value_4 );
    tmp_cond_value_17 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_17 );

        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_source_name_88 = var_fcompiler;

    tmp_called_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_customize_cmd );
    if ( tmp_called_name_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_19 = par_self;

    frame_function->f_lineno = 224;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_44, call_args );
    }

    Py_DECREF( tmp_called_name_44 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_89 = var_fcompiler;

    tmp_called_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_show_customization );
    if ( tmp_called_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 225;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_45 );
    Py_DECREF( tmp_called_name_45 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_22;
    branch_no_22:;
    tmp_source_name_90 = par_self;

    tmp_called_name_46 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain_warn );
    if ( tmp_called_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        goto frame_exception_exit_1;
    }
    tmp_left_name_10 = const_str_digest_5e3f89d01f8f07e41755afa825a56392;
    tmp_right_name_10 = var_ctype;

    tmp_args_element_name_20 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_46 );

        exception_lineno = 227;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 228;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_46, call_args );
    }

    Py_DECREF( tmp_called_name_46 );
    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_11 = Py_None;
    tmp_assattr_target_11 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain__f77_compiler, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        goto frame_exception_exit_1;
    }
    branch_end_22:;
    goto branch_end_20;
    branch_no_20:;
    tmp_assattr_name_12 = Py_None;
    tmp_assattr_target_12 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain__f77_compiler, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto frame_exception_exit_1;
    }
    branch_end_20:;
    tmp_cond_value_18 = var_need_f90_compiler;

    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_18 == 1 )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_source_name_91 = par_self;

    tmp_assign_source_56 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain_fcompiler );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ctype;
        var_ctype = tmp_assign_source_56;
        Py_XDECREF( old );
    }

    tmp_called_name_47 = var_new_fcompiler;

    tmp_kw_name_5 = _PyDict_NewPresized( 6 );
    tmp_source_name_92 = par_self;

    tmp_dict_value_16 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain_fcompiler );
    if ( tmp_dict_value_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_5 );

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_16 = const_str_plain_compiler;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_16, tmp_dict_value_16 );
    Py_DECREF( tmp_dict_value_16 );
    tmp_source_name_93 = par_self;

    tmp_dict_value_17 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_verbose );
    if ( tmp_dict_value_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_5 );

        exception_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_17 = const_str_plain_verbose;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_17, tmp_dict_value_17 );
    Py_DECREF( tmp_dict_value_17 );
    tmp_source_name_94 = par_self;

    tmp_dict_value_18 = LOOKUP_ATTRIBUTE( tmp_source_name_94, const_str_plain_dry_run );
    if ( tmp_dict_value_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_5 );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_18 = const_str_plain_dry_run;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_18, tmp_dict_value_18 );
    Py_DECREF( tmp_dict_value_18 );
    tmp_source_name_95 = par_self;

    tmp_dict_value_19 = LOOKUP_ATTRIBUTE( tmp_source_name_95, const_str_plain_force );
    if ( tmp_dict_value_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_5 );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_19 = const_str_plain_force;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_19, tmp_dict_value_19 );
    Py_DECREF( tmp_dict_value_19 );
    tmp_dict_value_20 = Py_True;
    tmp_dict_key_20 = const_str_plain_requiref90;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_20, tmp_dict_value_20 );
    tmp_source_name_96 = par_self;

    tmp_dict_value_21 = LOOKUP_ATTRIBUTE( tmp_source_name_96, const_str_plain_compiler );
    if ( tmp_dict_value_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_5 );

        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_21 = const_str_plain_c_compiler;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_21, tmp_dict_value_21 );
    Py_DECREF( tmp_dict_value_21 );
    frame_function->f_lineno = 241;
    tmp_assattr_name_13 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_47, tmp_kw_name_5 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_assattr_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_13 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain__f90_compiler, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_13 );

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_13 );
    tmp_source_name_97 = par_self;

    tmp_assign_source_57 = LOOKUP_ATTRIBUTE( tmp_source_name_97, const_str_plain__f90_compiler );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_fcompiler;
        var_fcompiler = tmp_assign_source_57;
        Py_XDECREF( old );
    }

    tmp_cond_value_19 = var_fcompiler;

    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_19 == 1 )
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    tmp_source_name_98 = var_fcompiler;

    tmp_assign_source_58 = LOOKUP_ATTRIBUTE( tmp_source_name_98, const_str_plain_compiler_type );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ctype;
        assert( old != NULL );
        var_ctype = tmp_assign_source_58;
        Py_DECREF( old );
    }

    tmp_source_name_99 = var_fcompiler;

    tmp_called_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_99, const_str_plain_customize );
    if ( tmp_called_name_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        goto frame_exception_exit_1;
    }
    tmp_source_name_100 = par_self;

    tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_100, const_str_plain_distribution );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_48 );

        exception_lineno = 245;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 245;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_48, call_args );
    }

    Py_DECREF( tmp_called_name_48 );
    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_24:;
    tmp_and_left_value_5 = var_fcompiler;

    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    if ( tmp_and_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    tmp_source_name_101 = var_fcompiler;

    tmp_called_name_49 = LOOKUP_ATTRIBUTE( tmp_source_name_101, const_str_plain_get_version );
    if ( tmp_called_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 246;
    tmp_and_right_value_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_49 );
    Py_DECREF( tmp_called_name_49 );
    if ( tmp_and_right_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_20 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    Py_INCREF( tmp_and_left_value_5 );
    tmp_cond_value_20 = tmp_and_left_value_5;
    and_end_5:;
    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_20 );

        exception_lineno = 246;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == 1 )
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_source_name_102 = var_fcompiler;

    tmp_called_name_50 = LOOKUP_ATTRIBUTE( tmp_source_name_102, const_str_plain_customize_cmd );
    if ( tmp_called_name_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_22 = par_self;

    frame_function->f_lineno = 247;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_50, call_args );
    }

    Py_DECREF( tmp_called_name_50 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_103 = var_fcompiler;

    tmp_called_name_51 = LOOKUP_ATTRIBUTE( tmp_source_name_103, const_str_plain_show_customization );
    if ( tmp_called_name_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 248;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_51 );
    Py_DECREF( tmp_called_name_51 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_25;
    branch_no_25:;
    tmp_source_name_104 = par_self;

    tmp_called_name_52 = LOOKUP_ATTRIBUTE( tmp_source_name_104, const_str_plain_warn );
    if ( tmp_called_name_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_left_name_11 = const_str_digest_e4054020d80aaf5638ed005e56116f81;
    tmp_right_name_11 = var_ctype;

    tmp_args_element_name_23 = BINARY_OPERATION_REMAINDER( tmp_left_name_11, tmp_right_name_11 );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_52 );

        exception_lineno = 250;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 251;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_52, call_args );
    }

    Py_DECREF( tmp_called_name_52 );
    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_14 = Py_None;
    tmp_assattr_target_14 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain__f90_compiler, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    branch_end_25:;
    goto branch_end_23;
    branch_no_23:;
    tmp_assattr_name_15 = Py_None;
    tmp_assattr_target_15 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain__f90_compiler, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    branch_end_23:;
    tmp_source_name_105 = par_self;

    tmp_called_name_53 = LOOKUP_ATTRIBUTE( tmp_source_name_105, const_str_plain_build_extensions );
    if ( tmp_called_name_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 257;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_53 );
    Py_DECREF( tmp_called_name_53 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( var_build_clib )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_build_clib,
                    var_build_clib
                );

                assert( res == 0 );
            }

            if ( var_new_compiler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_new_compiler,
                    var_new_compiler
                );

                assert( res == 0 );
            }

            if ( var_new_fcompiler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_new_fcompiler,
                    var_new_fcompiler
                );

                assert( res == 0 );
            }

            if ( var_compiler_type )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_compiler_type,
                    var_compiler_type
                );

                assert( res == 0 );
            }

            if ( var_clibs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_clibs,
                    var_clibs
                );

                assert( res == 0 );
            }

            if ( var_libname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_libname,
                    var_libname
                );

                assert( res == 0 );
            }

            if ( var_build_info )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_build_info,
                    var_build_info
                );

                assert( res == 0 );
            }

            if ( var_all_languages )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_all_languages,
                    var_all_languages
                );

                assert( res == 0 );
            }

            if ( var_ext )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ext,
                    var_ext
                );

                assert( res == 0 );
            }

            if ( var_ext_languages )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ext_languages,
                    var_ext_languages
                );

                assert( res == 0 );
            }

            if ( var_c_libs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c_libs,
                    var_c_libs
                );

                assert( res == 0 );
            }

            if ( var_c_lib_dirs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c_lib_dirs,
                    var_c_lib_dirs
                );

                assert( res == 0 );
            }

            if ( var_macros )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_macros,
                    var_macros
                );

                assert( res == 0 );
            }

            if ( var_binfo )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_binfo,
                    var_binfo
                );

                assert( res == 0 );
            }

            if ( var_m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    var_m
                );

                assert( res == 0 );
            }

            if ( var_l )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_l,
                    var_l
                );

                assert( res == 0 );
            }

            if ( var_new_c_libs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_new_c_libs,
                    var_new_c_libs
                );

                assert( res == 0 );
            }

            if ( var_ext_language )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ext_language,
                    var_ext_language
                );

                assert( res == 0 );
            }

            if ( var_need_f90_compiler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_need_f90_compiler,
                    var_need_f90_compiler
                );

                assert( res == 0 );
            }

            if ( var_need_f77_compiler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_need_f77_compiler,
                    var_need_f77_compiler
                );

                assert( res == 0 );
            }

            if ( var_need_cxx_compiler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_need_cxx_compiler,
                    var_need_cxx_compiler
                );

                assert( res == 0 );
            }

            if ( var_compiler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_compiler,
                    var_compiler
                );

                assert( res == 0 );
            }

            if ( var_ctype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ctype,
                    var_ctype
                );

                assert( res == 0 );
            }

            if ( var_fcompiler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fcompiler,
                    var_fcompiler
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_run_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_build_clib );
    var_build_clib = NULL;

    Py_XDECREF( var_new_compiler );
    var_new_compiler = NULL;

    Py_XDECREF( var_new_fcompiler );
    var_new_fcompiler = NULL;

    Py_XDECREF( var_compiler_type );
    var_compiler_type = NULL;

    Py_XDECREF( var_clibs );
    var_clibs = NULL;

    Py_XDECREF( var_libname );
    var_libname = NULL;

    Py_XDECREF( var_build_info );
    var_build_info = NULL;

    Py_XDECREF( var_all_languages );
    var_all_languages = NULL;

    Py_XDECREF( var_ext );
    var_ext = NULL;

    Py_XDECREF( var_ext_languages );
    var_ext_languages = NULL;

    Py_XDECREF( var_c_libs );
    var_c_libs = NULL;

    Py_XDECREF( var_c_lib_dirs );
    var_c_lib_dirs = NULL;

    Py_XDECREF( var_macros );
    var_macros = NULL;

    Py_XDECREF( var_binfo );
    var_binfo = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_new_c_libs );
    var_new_c_libs = NULL;

    Py_XDECREF( var_ext_language );
    var_ext_language = NULL;

    Py_XDECREF( var_need_f90_compiler );
    var_need_f90_compiler = NULL;

    Py_XDECREF( var_need_f77_compiler );
    var_need_f77_compiler = NULL;

    Py_XDECREF( var_need_cxx_compiler );
    var_need_cxx_compiler = NULL;

    Py_XDECREF( var_compiler );
    var_compiler = NULL;

    Py_XDECREF( var_ctype );
    var_ctype = NULL;

    Py_XDECREF( var_fcompiler );
    var_fcompiler = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_build_clib );
    var_build_clib = NULL;

    Py_XDECREF( var_new_compiler );
    var_new_compiler = NULL;

    Py_XDECREF( var_new_fcompiler );
    var_new_fcompiler = NULL;

    Py_XDECREF( var_compiler_type );
    var_compiler_type = NULL;

    Py_XDECREF( var_clibs );
    var_clibs = NULL;

    Py_XDECREF( var_libname );
    var_libname = NULL;

    Py_XDECREF( var_build_info );
    var_build_info = NULL;

    Py_XDECREF( var_all_languages );
    var_all_languages = NULL;

    Py_XDECREF( var_ext );
    var_ext = NULL;

    Py_XDECREF( var_ext_languages );
    var_ext_languages = NULL;

    Py_XDECREF( var_c_libs );
    var_c_libs = NULL;

    Py_XDECREF( var_c_lib_dirs );
    var_c_lib_dirs = NULL;

    Py_XDECREF( var_macros );
    var_macros = NULL;

    Py_XDECREF( var_binfo );
    var_binfo = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_new_c_libs );
    var_new_c_libs = NULL;

    Py_XDECREF( var_ext_language );
    var_ext_language = NULL;

    Py_XDECREF( var_need_f90_compiler );
    var_need_f90_compiler = NULL;

    Py_XDECREF( var_need_f77_compiler );
    var_need_f77_compiler = NULL;

    Py_XDECREF( var_need_cxx_compiler );
    var_need_cxx_compiler = NULL;

    Py_XDECREF( var_compiler );
    var_compiler = NULL;

    Py_XDECREF( var_ctype );
    var_ctype = NULL;

    Py_XDECREF( var_fcompiler );
    var_fcompiler = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_run_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_4_swig_sources_of_class_1_build_ext_of_numpy$distutils$command$build_ext( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sources = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_sources;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_4_swig_sources_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_sources );
    Py_DECREF( par_sources );
    par_sources = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_swig_sources_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_5_build_extension_of_class_1_build_ext_of_numpy$distutils$command$build_ext( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_ext = python_pars[ 1 ];
    PyObject *var_sources = NULL;
    PyObject *var_fullname = NULL;
    PyObject *var_modpath = NULL;
    PyObject *var_package = NULL;
    PyObject *var_base = NULL;
    PyObject *var_build_py = NULL;
    PyObject *var_package_dir = NULL;
    PyObject *var_ext_filename = NULL;
    PyObject *var_depends = NULL;
    PyObject *var_extra_args = NULL;
    PyObject *var_macros = NULL;
    PyObject *var_undef = NULL;
    PyObject *var_c_sources = NULL;
    PyObject *var_cxx_sources = NULL;
    PyObject *var_f_sources = NULL;
    PyObject *var_fmodule_sources = NULL;
    PyObject *var_fcompiler = NULL;
    PyObject *var_cxx_compiler = NULL;
    PyObject *var_kws = NULL;
    PyObject *var_output_dir = NULL;
    PyObject *var_include_dirs = NULL;
    PyObject *var_c_objects = NULL;
    PyObject *var_extra_postargs = NULL;
    PyObject *var_f_objects = NULL;
    PyObject *var_module_dirs = NULL;
    PyObject *var_module_build_dir = NULL;
    PyObject *var_existing_modules = NULL;
    PyObject *var_f = NULL;
    PyObject *var_t = NULL;
    PyObject *var_objects = NULL;
    PyObject *var_libraries = NULL;
    PyObject *var_library_dirs = NULL;
    PyObject *var_linker = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    int tmp_and_left_truth_6;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_left_value_6;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
    PyObject *tmp_and_right_value_6;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
    PyObject *tmp_args_element_name_31;
    PyObject *tmp_args_element_name_32;
    PyObject *tmp_args_element_name_33;
    PyObject *tmp_args_element_name_34;
    PyObject *tmp_args_element_name_35;
    PyObject *tmp_args_element_name_36;
    PyObject *tmp_args_element_name_37;
    PyObject *tmp_args_element_name_38;
    PyObject *tmp_args_element_name_39;
    PyObject *tmp_args_element_name_40;
    PyObject *tmp_args_element_name_41;
    PyObject *tmp_args_element_name_42;
    PyObject *tmp_args_element_name_43;
    PyObject *tmp_args_element_name_44;
    PyObject *tmp_args_element_name_45;
    PyObject *tmp_args_element_name_46;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_called_name_45;
    PyObject *tmp_called_name_46;
    PyObject *tmp_called_name_47;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_left_8;
    PyObject *tmp_compexpr_left_9;
    PyObject *tmp_compexpr_left_10;
    PyObject *tmp_compexpr_left_11;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    PyObject *tmp_compexpr_right_8;
    PyObject *tmp_compexpr_right_9;
    PyObject *tmp_compexpr_right_10;
    PyObject *tmp_compexpr_right_11;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_key_22;
    PyObject *tmp_dict_key_23;
    PyObject *tmp_dict_key_24;
    PyObject *tmp_dict_key_25;
    PyObject *tmp_dict_key_26;
    PyObject *tmp_dict_key_27;
    PyObject *tmp_dict_key_28;
    PyObject *tmp_dict_key_29;
    PyObject *tmp_dict_key_30;
    PyObject *tmp_dict_key_31;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_dict_value_22;
    PyObject *tmp_dict_value_23;
    PyObject *tmp_dict_value_24;
    PyObject *tmp_dict_value_25;
    PyObject *tmp_dict_value_26;
    PyObject *tmp_dict_value_27;
    PyObject *tmp_dict_value_28;
    PyObject *tmp_dict_value_29;
    PyObject *tmp_dict_value_30;
    PyObject *tmp_dict_value_31;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_dircall_arg4_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_left_name_12;
    PyObject *tmp_left_name_13;
    PyObject *tmp_left_name_14;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    int tmp_or_left_truth_4;
    int tmp_or_left_truth_5;
    int tmp_or_left_truth_6;
    int tmp_or_left_truth_7;
    int tmp_or_left_truth_8;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_left_value_4;
    PyObject *tmp_or_left_value_5;
    PyObject *tmp_or_left_value_6;
    PyObject *tmp_or_left_value_7;
    PyObject *tmp_or_left_value_8;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    PyObject *tmp_or_right_value_4;
    PyObject *tmp_or_right_value_5;
    PyObject *tmp_or_right_value_6;
    PyObject *tmp_or_right_value_7;
    PyObject *tmp_or_right_value_8;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_right_name_14;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    Py_ssize_t tmp_slice_index_upper_4;
    Py_ssize_t tmp_slice_index_upper_5;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    PyObject *tmp_slice_source_5;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_4;
    Py_ssize_t tmp_sliceslicedel_index_lower_5;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_source_name_48;
    PyObject *tmp_source_name_49;
    PyObject *tmp_source_name_50;
    PyObject *tmp_source_name_51;
    PyObject *tmp_source_name_52;
    PyObject *tmp_source_name_53;
    PyObject *tmp_source_name_54;
    PyObject *tmp_source_name_55;
    PyObject *tmp_source_name_56;
    PyObject *tmp_source_name_57;
    PyObject *tmp_source_name_58;
    PyObject *tmp_source_name_59;
    PyObject *tmp_source_name_60;
    PyObject *tmp_source_name_61;
    PyObject *tmp_source_name_62;
    PyObject *tmp_source_name_63;
    PyObject *tmp_source_name_64;
    PyObject *tmp_source_name_65;
    PyObject *tmp_source_name_66;
    PyObject *tmp_source_name_67;
    PyObject *tmp_source_name_68;
    PyObject *tmp_source_name_69;
    PyObject *tmp_source_name_70;
    PyObject *tmp_source_name_71;
    PyObject *tmp_source_name_72;
    PyObject *tmp_source_name_73;
    PyObject *tmp_source_name_74;
    PyObject *tmp_source_name_75;
    PyObject *tmp_source_name_76;
    PyObject *tmp_source_name_77;
    PyObject *tmp_source_name_78;
    PyObject *tmp_source_name_79;
    PyObject *tmp_source_name_80;
    PyObject *tmp_source_name_81;
    PyObject *tmp_source_name_82;
    PyObject *tmp_source_name_83;
    PyObject *tmp_source_name_84;
    PyObject *tmp_source_name_85;
    PyObject *tmp_source_name_86;
    PyObject *tmp_source_name_87;
    PyObject *tmp_source_name_88;
    PyObject *tmp_source_name_89;
    PyObject *tmp_source_name_90;
    PyObject *tmp_source_name_91;
    PyObject *tmp_source_name_92;
    PyObject *tmp_source_name_93;
    PyObject *tmp_source_name_94;
    PyObject *tmp_source_name_95;
    PyObject *tmp_source_name_96;
    PyObject *tmp_source_name_97;
    PyObject *tmp_source_name_98;
    PyObject *tmp_source_name_99;
    PyObject *tmp_source_name_100;
    PyObject *tmp_source_name_101;
    PyObject *tmp_source_name_102;
    PyObject *tmp_source_name_103;
    PyObject *tmp_source_name_104;
    PyObject *tmp_source_name_105;
    PyObject *tmp_source_name_106;
    PyObject *tmp_source_name_107;
    PyObject *tmp_source_name_108;
    PyObject *tmp_source_name_109;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_61666110b5375a4eb0d2352a1a9f27c3, module_numpy$distutils$command$build_ext );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_ext;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sources );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        goto frame_exception_exit_1;
    }
    assert( var_sources == NULL );
    var_sources = tmp_assign_source_1;

    tmp_compexpr_left_1 = var_sources;

    tmp_compexpr_right_1 = Py_None;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_is_sequence );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_sequence );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_sequence" );
        exception_tb = NULL;

        exception_lineno = 266;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_sources;

    frame_function->f_lineno = 266;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsSetupError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DistutilsSetupError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DistutilsSetupError" );
        exception_tb = NULL;

        exception_lineno = 267;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_db67186108086e194127831bd493be9e;
    tmp_source_name_2 = par_ext;

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 270;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 270;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_list_arg_1 = var_sources;

    tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_sources;
        assert( old != NULL );
        var_sources = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_cond_value_2 = var_sources;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_self;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get_ext_fullname );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_ext;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 276;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 276;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        goto frame_exception_exit_1;
    }
    assert( var_fullname == NULL );
    var_fullname = tmp_assign_source_3;

    tmp_source_name_5 = par_self;

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_inplace );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 277;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_6 = var_fullname;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_split );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 278;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        goto frame_exception_exit_1;
    }
    assert( var_modpath == NULL );
    var_modpath = tmp_assign_source_4;

    tmp_source_name_7 = const_str_dot;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    assert( tmp_called_name_5 != NULL );
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_modpath;

    tmp_args_element_name_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 279;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 279;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        goto frame_exception_exit_1;
    }
    assert( var_package == NULL );
    var_package = tmp_assign_source_5;

    tmp_subscribed_name_1 = var_modpath;

    tmp_subscript_name_1 = const_int_neg_1;
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        goto frame_exception_exit_1;
    }
    assert( var_base == NULL );
    var_base = tmp_assign_source_6;

    tmp_source_name_8 = par_self;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_get_finalized_command );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 281;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_plain_build_py_tuple, 0 ) );

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    assert( var_build_py == NULL );
    var_build_py = tmp_assign_source_7;

    tmp_source_name_9 = var_build_py;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_get_package_dir );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_package;

    frame_function->f_lineno = 282;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto frame_exception_exit_1;
    }
    assert( var_package_dir == NULL );
    var_package_dir = tmp_assign_source_8;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_path );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_join );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_package_dir;

    tmp_source_name_12 = par_self;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_get_ext_filename );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 284;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = var_base;

    frame_function->f_lineno = 284;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 284;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 284;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto frame_exception_exit_1;
    }
    assert( var_ext_filename == NULL );
    var_ext_filename = tmp_assign_source_9;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 286;
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_path );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        goto frame_exception_exit_1;
    }
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_join );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = par_self;

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_build_lib );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 286;
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = par_self;

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_get_ext_filename );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 287;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = var_fullname;

    frame_function->f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 287;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_9 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        goto frame_exception_exit_1;
    }
    assert( var_ext_filename == NULL );
    var_ext_filename = tmp_assign_source_10;

    branch_end_3:;
    tmp_left_name_2 = var_sources;

    tmp_source_name_17 = par_ext;

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_depends );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        goto frame_exception_exit_1;
    }
    assert( var_depends == NULL );
    var_depends = tmp_assign_source_11;

    tmp_source_name_18 = par_self;

    tmp_or_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_force );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 290;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    Py_DECREF( tmp_or_left_value_2 );
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_newer_group );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_newer_group );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "newer_group" );
        exception_tb = NULL;

        exception_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_depends;

    tmp_args_element_name_13 = var_ext_filename;

    tmp_args_element_name_14 = const_str_plain_newer;
    frame_function->f_lineno = 290;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_or_right_value_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, call_args );
    }

    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_4 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_cond_value_4 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 290;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_debug );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = const_str_digest_4c1b560b3f3f191ccd0e9318308a41e0;
    tmp_source_name_20 = par_ext;

    tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_name );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 291;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 291;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 294;
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_info );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_17 = const_str_digest_c2461ad4b24b3fe2bf8349080991b42f;
    tmp_source_name_22 = par_ext;

    tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_name );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 294;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 294;
    {
        PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_4:;
    tmp_source_name_23 = par_ext;

    tmp_or_left_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_extra_compile_args );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_3 );

        exception_lineno = 296;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_3 == 1 )
    {
        goto or_left_3;
    }
    else
    {
        goto or_right_3;
    }
    or_right_3:;
    Py_DECREF( tmp_or_left_value_3 );
    tmp_or_right_value_3 = PyList_New( 0 );
    tmp_assign_source_12 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_assign_source_12 = tmp_or_left_value_3;
    or_end_3:;
    assert( var_extra_args == NULL );
    var_extra_args = tmp_assign_source_12;

    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
    tmp_source_name_24 = par_ext;

    tmp_slice_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_define_macros );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        goto frame_exception_exit_1;
    }
    assert( var_macros == NULL );
    var_macros = tmp_assign_source_13;

    tmp_source_name_25 = par_ext;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_undef_macros );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_14;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 298;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_assign_source_16 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_undef;
        var_undef = tmp_assign_source_16;
        Py_INCREF( var_undef );
        Py_XDECREF( old );
    }

    tmp_source_name_26 = var_macros;

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_append );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        goto try_except_handler_2;
    }
    tmp_args_element_name_19 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_undef;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_19, 0, tmp_tuple_element_1 );
    frame_function->f_lineno = 299;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Tried code:
    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_filter_sources );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_filter_sources );
    }

    if ( tmp_called_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "filter_sources" );
        exception_tb = NULL;

        exception_lineno = 302;
        goto try_except_handler_3;
    }

    tmp_source_name_27 = par_ext;

    tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_sources );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 302;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        goto try_except_handler_3;
    }
    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_17;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_18 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 301;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_18;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_19 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 301;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_19;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_20 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 301;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_20;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_4, 3 );
    if ( tmp_assign_source_21 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 301;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_21;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_3;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_22 = tmp_tuple_unpack_1__element_1;

    assert( var_c_sources == NULL );
    Py_INCREF( tmp_assign_source_22 );
    var_c_sources = tmp_assign_source_22;

    tmp_assign_source_23 = tmp_tuple_unpack_1__element_2;

    assert( var_cxx_sources == NULL );
    Py_INCREF( tmp_assign_source_23 );
    var_cxx_sources = tmp_assign_source_23;

    tmp_assign_source_24 = tmp_tuple_unpack_1__element_3;

    assert( var_f_sources == NULL );
    Py_INCREF( tmp_assign_source_24 );
    var_f_sources = tmp_assign_source_24;

    tmp_assign_source_25 = tmp_tuple_unpack_1__element_4;

    assert( var_fmodule_sources == NULL );
    Py_INCREF( tmp_assign_source_25 );
    var_fmodule_sources = tmp_assign_source_25;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_3 );
    Py_DECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_4 );
    Py_DECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    tmp_source_name_29 = par_self;

    tmp_source_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_compiler );
    if ( tmp_source_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_compiler_type );
    Py_DECREF( tmp_source_name_28 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_msvc;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 306;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_cond_value_5 = var_cxx_sources;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_30 = var_extra_args;

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_append );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 309;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, &PyTuple_GET_ITEM( const_tuple_str_digest_84051636bb29a331bed1787f3bb61f88_tuple, 0 ) );

    Py_DECREF( tmp_called_name_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_left_name_3 = var_c_sources;

    tmp_right_name_3 = var_cxx_sources;

    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_26 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        goto frame_exception_exit_1;
    }
    var_c_sources = tmp_assign_source_26;

    tmp_assign_source_27 = PyList_New( 0 );
    {
        PyObject *old = var_cxx_sources;
        assert( old != NULL );
        var_cxx_sources = tmp_assign_source_27;
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_source_name_31 = par_ext;

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_language );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_plain_f90;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 316;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_32 = par_self;

    tmp_assign_source_28 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain__f90_compiler );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        goto frame_exception_exit_1;
    }
    assert( var_fcompiler == NULL );
    var_fcompiler = tmp_assign_source_28;

    goto branch_end_7;
    branch_no_7:;
    tmp_source_name_33 = par_ext;

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_language );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_str_plain_f77;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 318;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_34 = par_self;

    tmp_assign_source_29 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain__f77_compiler );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        goto frame_exception_exit_1;
    }
    assert( var_fcompiler == NULL );
    var_fcompiler = tmp_assign_source_29;

    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_35 = par_self;

    tmp_or_left_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain__f90_compiler );
    if ( tmp_or_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_4 = CHECK_IF_TRUE( tmp_or_left_value_4 );
    if ( tmp_or_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_4 );

        exception_lineno = 321;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_4 == 1 )
    {
        goto or_left_4;
    }
    else
    {
        goto or_right_4;
    }
    or_right_4:;
    Py_DECREF( tmp_or_left_value_4 );
    tmp_source_name_36 = par_self;

    tmp_or_right_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain__f77_compiler );
    if ( tmp_or_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_30 = tmp_or_right_value_4;
    goto or_end_4;
    or_left_4:;
    tmp_assign_source_30 = tmp_or_left_value_4;
    or_end_4:;
    assert( var_fcompiler == NULL );
    var_fcompiler = tmp_assign_source_30;

    branch_end_8:;
    branch_end_7:;
    tmp_compare_left_4 = var_fcompiler;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fcompiler" );
        exception_tb = NULL;

        exception_lineno = 322;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_hasattr_source_1 = par_ext;

    tmp_hasattr_attr_1 = const_str_plain_extra_f77_compile_args;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_source_name_37 = par_ext;

    tmp_or_left_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_extra_f77_compile_args );
    if ( tmp_or_left_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_5 = CHECK_IF_TRUE( tmp_or_left_value_5 );
    if ( tmp_or_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_5 );

        exception_lineno = 323;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_5 == 1 )
    {
        goto or_left_5;
    }
    else
    {
        goto or_right_5;
    }
    or_right_5:;
    Py_DECREF( tmp_or_left_value_5 );
    tmp_or_right_value_5 = PyList_New( 0 );
    tmp_assattr_name_1 = tmp_or_right_value_5;
    goto or_end_5;
    or_left_5:;
    tmp_assattr_name_1 = tmp_or_left_value_5;
    or_end_5:;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assattr_name_1 = PyList_New( 0 );
    condexpr_end_1:;
    tmp_assattr_target_1 = var_fcompiler;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fcompiler" );
        exception_tb = NULL;

        exception_lineno = 323;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_extra_f77_compile_args, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 323;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_hasattr_source_2 = par_ext;

    tmp_hasattr_attr_2 = const_str_plain_extra_f90_compile_args;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_source_name_38 = par_ext;

    tmp_or_left_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_extra_f90_compile_args );
    if ( tmp_or_left_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_6 = CHECK_IF_TRUE( tmp_or_left_value_6 );
    if ( tmp_or_left_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_6 );

        exception_lineno = 324;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_6 == 1 )
    {
        goto or_left_6;
    }
    else
    {
        goto or_right_6;
    }
    or_right_6:;
    Py_DECREF( tmp_or_left_value_6 );
    tmp_or_right_value_6 = PyList_New( 0 );
    tmp_assattr_name_2 = tmp_or_right_value_6;
    goto or_end_6;
    or_left_6:;
    tmp_assattr_name_2 = tmp_or_left_value_6;
    or_end_6:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assattr_name_2 = PyList_New( 0 );
    condexpr_end_2:;
    tmp_assattr_target_2 = var_fcompiler;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fcompiler" );
        exception_tb = NULL;

        exception_lineno = 324;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_extra_f90_compile_args, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 324;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    branch_no_9:;
    tmp_source_name_39 = par_self;

    tmp_assign_source_31 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain__cxx_compiler );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    assert( var_cxx_compiler == NULL );
    var_cxx_compiler = tmp_assign_source_31;

    tmp_and_left_value_1 = var_cxx_sources;

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_compexpr_left_2 = var_cxx_compiler;

    tmp_compexpr_right_2 = Py_None;
    tmp_and_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_cond_value_6 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_6 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_called_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsError );

    if (unlikely( tmp_called_name_18 == NULL ))
    {
        tmp_called_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DistutilsError );
    }

    if ( tmp_called_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DistutilsError" );
        exception_tb = NULL;

        exception_lineno = 329;
        goto frame_exception_exit_1;
    }

    tmp_left_name_4 = const_str_digest_c9ec016fd3738398a4d79dfcb60d1f6f;
    tmp_source_name_40 = par_ext;

    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_name );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_21 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 330;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 330;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_10:;
    tmp_or_left_value_7 = var_f_sources;

    tmp_or_left_truth_7 = CHECK_IF_TRUE( tmp_or_left_value_7 );
    if ( tmp_or_left_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_7 == 1 )
    {
        goto or_left_7;
    }
    else
    {
        goto or_right_7;
    }
    or_right_7:;
    tmp_or_right_value_7 = var_fmodule_sources;

    tmp_and_left_value_2 = tmp_or_right_value_7;
    goto or_end_7;
    or_left_7:;
    tmp_and_left_value_2 = tmp_or_left_value_7;
    or_end_7:;
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_compexpr_left_3 = var_fcompiler;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fcompiler" );
        exception_tb = NULL;

        exception_lineno = 331;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_3 = Py_None;
    tmp_and_right_value_2 = BOOL_FROM( tmp_compexpr_left_3 == tmp_compexpr_right_3 );
    tmp_cond_value_7 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_7 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsError );

    if (unlikely( tmp_called_name_19 == NULL ))
    {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DistutilsError );
    }

    if ( tmp_called_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DistutilsError" );
        exception_tb = NULL;

        exception_lineno = 332;
        goto frame_exception_exit_1;
    }

    tmp_left_name_5 = const_str_digest_564bfb24392ee0a906a20b8697c32551;
    tmp_source_name_41 = par_ext;

    tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_name );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_22 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 333;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 333;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_11:;
    tmp_source_name_42 = par_ext;

    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_language );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = LIST_COPY( const_list_str_plain_f77_str_plain_f90_list );
    tmp_and_left_value_3 = SEQUENCE_CONTAINS( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    assert( !(tmp_and_left_truth_3 == -1) );
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_compexpr_left_5 = var_fcompiler;

    if ( tmp_compexpr_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fcompiler" );
        exception_tb = NULL;

        exception_lineno = 334;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_5 = Py_None;
    tmp_and_right_value_3 = BOOL_FROM( tmp_compexpr_left_5 == tmp_compexpr_right_5 );
    tmp_cond_value_8 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_8 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    assert( !(tmp_cond_truth_8 == -1) );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_43 = par_self;

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_warn );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = const_str_digest_48cc8c909a2a058b978247ac71b2b58d;
    tmp_source_name_44 = par_ext;

    tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_name );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );

        exception_lineno = 336;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_23 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );

        exception_lineno = 335;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 336;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_12:;
    tmp_source_name_45 = par_ext;

    tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_language );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_6 = const_str_digest_483fe6e8fb067015ad0f59fff4617c82;
    tmp_and_left_value_4 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    if ( tmp_and_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_4 );

        exception_lineno = 337;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    Py_DECREF( tmp_and_left_value_4 );
    tmp_compexpr_left_7 = var_cxx_compiler;

    tmp_compexpr_right_7 = Py_None;
    tmp_and_right_value_4 = BOOL_FROM( tmp_compexpr_left_7 == tmp_compexpr_right_7 );
    Py_INCREF( tmp_and_right_value_4 );
    tmp_cond_value_9 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_cond_value_9 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        exception_lineno = 337;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_46 = par_self;

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_warn );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        goto frame_exception_exit_1;
    }
    tmp_left_name_7 = const_str_digest_9803e833e3dccf90cf6e8f0a78d216de;
    tmp_source_name_47 = par_ext;

    tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_name );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_21 );

        exception_lineno = 339;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_24 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_21 );

        exception_lineno = 338;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 339;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_13:;
    tmp_assign_source_32 = _PyDict_NewPresized( 1 );
    tmp_source_name_48 = par_ext;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_depends );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        exception_lineno = 341;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_depends;
    PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( var_kws == NULL );
    var_kws = tmp_assign_source_32;

    tmp_source_name_49 = par_self;

    tmp_assign_source_33 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_build_temp );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        goto frame_exception_exit_1;
    }
    assert( var_output_dir == NULL );
    var_output_dir = tmp_assign_source_33;

    tmp_source_name_50 = par_ext;

    tmp_left_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_include_dirs );
    if ( tmp_left_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        goto frame_exception_exit_1;
    }
    tmp_called_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_get_numpy_include_dirs );

    if (unlikely( tmp_called_name_22 == NULL ))
    {
        tmp_called_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_numpy_include_dirs );
    }

    if ( tmp_called_name_22 == NULL )
    {
        Py_DECREF( tmp_left_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_numpy_include_dirs" );
        exception_tb = NULL;

        exception_lineno = 344;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 344;
    tmp_right_name_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_22 );
    if ( tmp_right_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_8 );

        exception_lineno = 344;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_34 = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        goto frame_exception_exit_1;
    }
    assert( var_include_dirs == NULL );
    var_include_dirs = tmp_assign_source_34;

    tmp_assign_source_35 = PyList_New( 0 );
    assert( var_c_objects == NULL );
    var_c_objects = tmp_assign_source_35;

    tmp_cond_value_10 = var_c_sources;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_51 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_51 == NULL ))
    {
        tmp_source_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_51 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 348;
        goto frame_exception_exit_1;
    }

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_info );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 348;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, &PyTuple_GET_ITEM( const_tuple_str_digest_99b5e9edb82812c9fdf03a03f93a3eeb_tuple, 0 ) );

    Py_DECREF( tmp_called_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_53 = par_self;

    tmp_source_name_52 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_compiler );
    if ( tmp_source_name_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_compile );
    Py_DECREF( tmp_source_name_52 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_c_sources;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 5 );
    tmp_dict_value_2 = var_output_dir;

    tmp_dict_key_2 = const_str_plain_output_dir;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = var_macros;

    tmp_dict_key_3 = const_str_plain_macros;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = var_include_dirs;

    tmp_dict_key_4 = const_str_plain_include_dirs;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_source_name_54 = par_self;

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_debug );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 353;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_debug;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    tmp_dict_value_6 = var_extra_args;

    tmp_dict_key_6 = const_str_plain_extra_postargs;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dircall_arg4_1 = var_kws;

    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_assign_source_36 = impl_function_10_complex_call_helper_pos_keywords_star_dict_of___internal__( dir_call_args );
    }
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_c_objects;
        assert( old != NULL );
        var_c_objects = tmp_assign_source_36;
        Py_DECREF( old );
    }

    branch_no_14:;
    tmp_cond_value_11 = var_cxx_sources;

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_55 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_55 == NULL ))
    {
        tmp_source_name_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_55 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 358;
        goto frame_exception_exit_1;
    }

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_info );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 358;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, &PyTuple_GET_ITEM( const_tuple_str_digest_547a4f49f1a41093678192c4b4fbe0ad_tuple, 0 ) );

    Py_DECREF( tmp_called_name_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_9 = var_c_objects;

    tmp_source_name_56 = var_cxx_compiler;

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_compile );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_cxx_sources;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_3 );
    tmp_dircall_arg3_2 = _PyDict_NewPresized( 5 );
    tmp_dict_value_7 = var_output_dir;

    tmp_dict_key_7 = const_str_plain_output_dir;
    PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = var_macros;

    tmp_dict_key_8 = const_str_plain_macros;
    PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_value_9 = var_include_dirs;

    tmp_dict_key_9 = const_str_plain_include_dirs;
    PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_source_name_57 = par_self;

    tmp_dict_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_debug );
    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );

        exception_lineno = 363;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_10 = const_str_plain_debug;
    PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    tmp_dict_value_11 = var_extra_args;

    tmp_dict_key_11 = const_str_plain_extra_postargs;
    PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dircall_arg4_2 = var_kws;

    Py_INCREF( tmp_dircall_arg4_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
        tmp_right_name_9 = impl_function_10_complex_call_helper_pos_keywords_star_dict_of___internal__( dir_call_args );
    }
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 365;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
    tmp_assign_source_37 = tmp_left_name_9;
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        goto frame_exception_exit_1;
    }
    var_c_objects = tmp_assign_source_37;

    branch_no_15:;
    tmp_assign_source_38 = PyList_New( 0 );
    assert( var_extra_postargs == NULL );
    var_extra_postargs = tmp_assign_source_38;

    tmp_assign_source_39 = PyList_New( 0 );
    assert( var_f_objects == NULL );
    var_f_objects = tmp_assign_source_39;

    tmp_cond_value_12 = var_fmodule_sources;

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_source_name_58 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_58 == NULL ))
    {
        tmp_source_name_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_58 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 370;
        goto frame_exception_exit_1;
    }

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_info );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 370;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, &PyTuple_GET_ITEM( const_tuple_str_digest_0f6f2707b7b934e3e56e9cd912859487_tuple, 0 ) );

    Py_DECREF( tmp_called_name_25 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_sliceslicedel_index_lower_3 = 0;
    tmp_slice_index_upper_3 = PY_SSIZE_T_MAX;
    tmp_source_name_59 = par_ext;

    tmp_slice_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_module_dirs );
    if ( tmp_slice_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_40 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    Py_DECREF( tmp_slice_source_3 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        goto frame_exception_exit_1;
    }
    assert( var_module_dirs == NULL );
    var_module_dirs = tmp_assign_source_40;

    tmp_source_name_61 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_61 == NULL ))
    {
        tmp_source_name_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_61 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 372;
        goto frame_exception_exit_1;
    }

    tmp_source_name_60 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_path );
    if ( tmp_source_name_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        goto frame_exception_exit_1;
    }
    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_join );
    Py_DECREF( tmp_source_name_60 );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        goto frame_exception_exit_1;
    }
    tmp_source_name_62 = par_self;

    tmp_args_element_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_build_temp );
    if ( tmp_args_element_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_26 );

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    tmp_source_name_64 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_64 == NULL ))
    {
        tmp_source_name_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_64 == NULL )
    {
        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_args_element_name_25 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_source_name_63 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_path );
    if ( tmp_source_name_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_args_element_name_25 );

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_63 );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_args_element_name_25 );

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    tmp_source_name_65 = par_self;

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_get_ext_filename );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_args_element_name_25 );
        Py_DECREF( tmp_called_name_27 );

        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_28 = var_fullname;

    frame_function->f_lineno = 374;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_args_element_name_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
    }

    Py_DECREF( tmp_called_name_28 );
    if ( tmp_args_element_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_args_element_name_25 );
        Py_DECREF( tmp_called_name_27 );

        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 374;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_args_element_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    Py_DECREF( tmp_args_element_name_27 );
    if ( tmp_args_element_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_args_element_name_25 );

        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 374;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26 };
        tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    Py_DECREF( tmp_args_element_name_25 );
    Py_DECREF( tmp_args_element_name_26 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    assert( var_module_build_dir == NULL );
    var_module_build_dir = tmp_assign_source_41;

    tmp_source_name_66 = par_self;

    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_mkpath );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_29 = var_module_build_dir;

    frame_function->f_lineno = 376;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
    }

    Py_DECREF( tmp_called_name_29 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_67 = var_fcompiler;

    if ( tmp_source_name_67 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fcompiler" );
        exception_tb = NULL;

        exception_lineno = 377;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_module_dir_switch );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = Py_None;
    tmp_is_1 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    Py_DECREF( tmp_compare_left_5 );
    if ( tmp_is_1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_called_name_30 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_called_name_30 == NULL ))
    {
        tmp_called_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_called_name_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "glob" );
        exception_tb = NULL;

        exception_lineno = 378;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 378;
    tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, &PyTuple_GET_ITEM( const_tuple_str_digest_44434cdc9d5250a0be417c3b7d855692_tuple, 0 ) );

    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    assert( var_existing_modules == NULL );
    var_existing_modules = tmp_assign_source_42;

    branch_no_17:;
    tmp_left_name_10 = var_extra_postargs;

    tmp_source_name_68 = var_fcompiler;

    if ( tmp_source_name_68 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fcompiler" );
        exception_tb = NULL;

        exception_lineno = 379;
        goto frame_exception_exit_1;
    }

    tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_module_options );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_30 = var_module_dirs;

    tmp_args_element_name_31 = var_module_build_dir;

    frame_function->f_lineno = 380;
    {
        PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31 };
        tmp_right_name_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_31, call_args );
    }

    Py_DECREF( tmp_called_name_31 );
    if ( tmp_right_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_10, tmp_right_name_10 );
    tmp_assign_source_43 = tmp_left_name_10;
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        goto frame_exception_exit_1;
    }
    var_extra_postargs = tmp_assign_source_43;

    tmp_left_name_11 = var_f_objects;

    tmp_source_name_69 = var_fcompiler;

    if ( tmp_source_name_69 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fcompiler" );
        exception_tb = NULL;

        exception_lineno = 381;
        goto frame_exception_exit_1;
    }

    tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_compile );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_4 = var_fmodule_sources;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_4 );
    tmp_kw_name_1 = _PyDict_NewPresized( 6 );
    tmp_source_name_70 = par_self;

    tmp_dict_value_12 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_build_temp );
    if ( tmp_dict_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_32 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 382;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_12 = const_str_plain_output_dir;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_12, tmp_dict_value_12 );
    Py_DECREF( tmp_dict_value_12 );
    tmp_dict_value_13 = var_macros;

    tmp_dict_key_13 = const_str_plain_macros;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_13, tmp_dict_value_13 );
    tmp_dict_value_14 = var_include_dirs;

    tmp_dict_key_14 = const_str_plain_include_dirs;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_14, tmp_dict_value_14 );
    tmp_source_name_71 = par_self;

    tmp_dict_value_15 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain_debug );
    if ( tmp_dict_value_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_32 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 385;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_15 = const_str_plain_debug;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_15, tmp_dict_value_15 );
    Py_DECREF( tmp_dict_value_15 );
    tmp_dict_value_16 = var_extra_postargs;

    tmp_dict_key_16 = const_str_plain_extra_postargs;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_16, tmp_dict_value_16 );
    tmp_source_name_72 = par_ext;

    tmp_dict_value_17 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_depends );
    if ( tmp_dict_value_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_32 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 387;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_17 = const_str_plain_depends;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_17, tmp_dict_value_17 );
    Py_DECREF( tmp_dict_value_17 );
    frame_function->f_lineno = 387;
    tmp_right_name_11 = CALL_FUNCTION( tmp_called_name_32, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_32 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_right_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_11, tmp_right_name_11 );
    tmp_assign_source_44 = tmp_left_name_11;
    Py_DECREF( tmp_right_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        goto frame_exception_exit_1;
    }
    var_f_objects = tmp_assign_source_44;

    tmp_source_name_73 = var_fcompiler;

    if ( tmp_source_name_73 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fcompiler" );
        exception_tb = NULL;

        exception_lineno = 389;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_module_dir_switch );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_6 = Py_None;
    tmp_is_2 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    Py_DECREF( tmp_compare_left_6 );
    if ( tmp_is_2 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_called_name_33 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_called_name_33 == NULL ))
    {
        tmp_called_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_called_name_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "glob" );
        exception_tb = NULL;

        exception_lineno = 390;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 390;
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, &PyTuple_GET_ITEM( const_tuple_str_digest_44434cdc9d5250a0be417c3b7d855692_tuple, 0 ) );

    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_45 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_45;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_46 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_46 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 390;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_46;
        Py_XDECREF( old );
    }

    tmp_assign_source_47 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_f;
        var_f = tmp_assign_source_47;
        Py_INCREF( var_f );
        Py_XDECREF( old );
    }

    tmp_compare_left_7 = var_f;

    tmp_compare_right_7 = var_existing_modules;

    if ( tmp_compare_right_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "existing_modules" );
        exception_tb = NULL;

        exception_lineno = 391;
        goto try_except_handler_4;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    goto loop_start_2;
    branch_no_19:;
    tmp_source_name_75 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_75 == NULL ))
    {
        tmp_source_name_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_75 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 393;
        goto try_except_handler_4;
    }

    tmp_source_name_74 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_path );
    if ( tmp_source_name_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        goto try_except_handler_4;
    }
    tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_join );
    Py_DECREF( tmp_source_name_74 );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        goto try_except_handler_4;
    }
    tmp_args_element_name_32 = var_module_build_dir;

    tmp_args_element_name_33 = var_f;

    frame_function->f_lineno = 393;
    {
        PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33 };
        tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_34, call_args );
    }

    Py_DECREF( tmp_called_name_34 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_48;
        Py_XDECREF( old );
    }

    tmp_source_name_77 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_77 == NULL ))
    {
        tmp_source_name_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_77 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 394;
        goto try_except_handler_4;
    }

    tmp_source_name_76 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain_path );
    if ( tmp_source_name_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        goto try_except_handler_4;
    }
    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_76 );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        goto try_except_handler_4;
    }
    tmp_args_element_name_34 = var_f;

    frame_function->f_lineno = 394;
    {
        PyObject *call_args[] = { tmp_args_element_name_34 };
        tmp_compare_left_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
    }

    Py_DECREF( tmp_called_name_35 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        goto try_except_handler_4;
    }
    tmp_source_name_79 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_79 == NULL ))
    {
        tmp_source_name_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_79 == NULL )
    {
        Py_DECREF( tmp_compare_left_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 394;
        goto try_except_handler_4;
    }

    tmp_source_name_78 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain_path );
    if ( tmp_source_name_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 394;
        goto try_except_handler_4;
    }
    tmp_called_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_78 );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 394;
        goto try_except_handler_4;
    }
    tmp_args_element_name_35 = var_t;

    frame_function->f_lineno = 394;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_compare_right_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_called_name_36 );
    if ( tmp_compare_right_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 394;
        goto try_except_handler_4;
    }
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );
        Py_DECREF( tmp_compare_right_8 );

        exception_lineno = 394;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_compare_left_8 );
    Py_DECREF( tmp_compare_right_8 );
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    goto loop_start_2;
    branch_no_20:;
    tmp_source_name_81 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_81 == NULL ))
    {
        tmp_source_name_81 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_81 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 396;
        goto try_except_handler_4;
    }

    tmp_source_name_80 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_path );
    if ( tmp_source_name_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        goto try_except_handler_4;
    }
    tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_80 );
    if ( tmp_called_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        goto try_except_handler_4;
    }
    tmp_args_element_name_36 = var_t;

    frame_function->f_lineno = 396;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_cond_value_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, call_args );
    }

    Py_DECREF( tmp_called_name_37 );
    if ( tmp_cond_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        goto try_except_handler_4;
    }
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_13 );

        exception_lineno = 396;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == 1 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_source_name_82 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_82 == NULL ))
    {
        tmp_source_name_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_82 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 397;
        goto try_except_handler_4;
    }

    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_remove );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto try_except_handler_4;
    }
    tmp_args_element_name_37 = var_t;

    frame_function->f_lineno = 397;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_no_21:;
    // Tried code:
    tmp_source_name_83 = par_self;

    tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain_move_file );
    if ( tmp_called_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        goto try_except_handler_5;
    }
    tmp_args_element_name_38 = var_f;

    tmp_args_element_name_39 = var_module_build_dir;

    frame_function->f_lineno = 399;
    {
        PyObject *call_args[] = { tmp_args_element_name_38, tmp_args_element_name_39 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_39, call_args );
    }

    Py_DECREF( tmp_called_name_39 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != -1 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_function, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    tmp_compare_left_9 = PyThreadState_GET()->exc_type;
    tmp_compare_right_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsFileError );

    if (unlikely( tmp_compare_right_9 == NULL ))
    {
        tmp_compare_right_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DistutilsFileError );
    }

    if ( tmp_compare_right_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DistutilsFileError" );
        exception_tb = NULL;

        exception_lineno = 400;
        goto try_except_handler_4;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_source_name_84 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_84 == NULL ))
    {
        tmp_source_name_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_84 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 401;
        goto try_except_handler_4;
    }

    tmp_called_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain_warn );
    if ( tmp_called_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        goto try_except_handler_4;
    }
    tmp_left_name_12 = const_str_digest_07ed2a23242764d63b1d13928e0c5b14;
    tmp_right_name_12 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_f;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_12, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_module_build_dir;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_12, 1, tmp_tuple_element_5 );
    tmp_args_element_name_40 = BINARY_OPERATION_REMAINDER( tmp_left_name_12, tmp_right_name_12 );
    Py_DECREF( tmp_right_name_12 );
    if ( tmp_args_element_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_40 );

        exception_lineno = 401;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 402;
    {
        PyObject *call_args[] = { tmp_args_element_name_40 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, call_args );
    }

    Py_DECREF( tmp_called_name_40 );
    Py_DECREF( tmp_args_element_name_40 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_22;
    branch_no_22:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_4;
    branch_end_22:;
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_5_build_extension_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;
    // End of try:
    try_end_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_18:;
    branch_no_16:;
    tmp_cond_value_14 = var_f_sources;

    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_source_name_85 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_85 == NULL ))
    {
        tmp_source_name_85 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_85 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 404;
        goto frame_exception_exit_1;
    }

    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain_info );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 404;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_41, &PyTuple_GET_ITEM( const_tuple_str_digest_8b7171d1f1e5148727cc3440574e4dc4_tuple, 0 ) );

    Py_DECREF( tmp_called_name_41 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_13 = var_f_objects;

    tmp_source_name_86 = var_fcompiler;

    if ( tmp_source_name_86 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fcompiler" );
        exception_tb = NULL;

        exception_lineno = 405;
        goto frame_exception_exit_1;
    }

    tmp_called_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_compile );
    if ( tmp_called_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_6 = var_f_sources;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_6 );
    tmp_kw_name_2 = _PyDict_NewPresized( 6 );
    tmp_source_name_87 = par_self;

    tmp_dict_value_18 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain_build_temp );
    if ( tmp_dict_value_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_42 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 406;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_18 = const_str_plain_output_dir;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_18, tmp_dict_value_18 );
    Py_DECREF( tmp_dict_value_18 );
    tmp_dict_value_19 = var_macros;

    tmp_dict_key_19 = const_str_plain_macros;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_19, tmp_dict_value_19 );
    tmp_dict_value_20 = var_include_dirs;

    tmp_dict_key_20 = const_str_plain_include_dirs;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_20, tmp_dict_value_20 );
    tmp_source_name_88 = par_self;

    tmp_dict_value_21 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_debug );
    if ( tmp_dict_value_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_42 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 409;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_21 = const_str_plain_debug;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_21, tmp_dict_value_21 );
    Py_DECREF( tmp_dict_value_21 );
    tmp_dict_value_22 = var_extra_postargs;

    tmp_dict_key_22 = const_str_plain_extra_postargs;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_22, tmp_dict_value_22 );
    tmp_source_name_89 = par_ext;

    tmp_dict_value_23 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_depends );
    if ( tmp_dict_value_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_42 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 411;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_23 = const_str_plain_depends;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_23, tmp_dict_value_23 );
    Py_DECREF( tmp_dict_value_23 );
    frame_function->f_lineno = 411;
    tmp_right_name_13 = CALL_FUNCTION( tmp_called_name_42, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_42 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_right_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_13, tmp_right_name_13 );
    tmp_assign_source_49 = tmp_left_name_13;
    Py_DECREF( tmp_right_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        goto frame_exception_exit_1;
    }
    var_f_objects = tmp_assign_source_49;

    branch_no_23:;
    tmp_left_name_14 = var_c_objects;

    if ( tmp_left_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c_objects" );
        exception_tb = NULL;

        exception_lineno = 413;
        goto frame_exception_exit_1;
    }

    tmp_right_name_14 = var_f_objects;

    if ( tmp_right_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "f_objects" );
        exception_tb = NULL;

        exception_lineno = 413;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_50 = BINARY_OPERATION_ADD( tmp_left_name_14, tmp_right_name_14 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;
        goto frame_exception_exit_1;
    }
    assert( var_objects == NULL );
    var_objects = tmp_assign_source_50;

    tmp_source_name_90 = par_ext;

    tmp_cond_value_15 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain_extra_objects );
    if ( tmp_cond_value_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 415;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_15 );

        exception_lineno = 415;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == 1 )
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    tmp_source_name_91 = var_objects;

    tmp_called_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain_extend );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        goto frame_exception_exit_1;
    }
    tmp_source_name_92 = par_ext;

    tmp_args_element_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain_extra_objects );
    if ( tmp_args_element_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_43 );

        exception_lineno = 416;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 416;
    {
        PyObject *call_args[] = { tmp_args_element_name_41 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_43, call_args );
    }

    Py_DECREF( tmp_called_name_43 );
    Py_DECREF( tmp_args_element_name_41 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_24:;
    tmp_source_name_93 = par_ext;

    tmp_or_left_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_extra_link_args );
    if ( tmp_or_left_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 417;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_8 = CHECK_IF_TRUE( tmp_or_left_value_8 );
    if ( tmp_or_left_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_8 );

        exception_lineno = 417;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_8 == 1 )
    {
        goto or_left_8;
    }
    else
    {
        goto or_right_8;
    }
    or_right_8:;
    Py_DECREF( tmp_or_left_value_8 );
    tmp_or_right_value_8 = PyList_New( 0 );
    tmp_assign_source_51 = tmp_or_right_value_8;
    goto or_end_8;
    or_left_8:;
    tmp_assign_source_51 = tmp_or_left_value_8;
    or_end_8:;
    {
        PyObject *old = var_extra_args;
        assert( old != NULL );
        var_extra_args = tmp_assign_source_51;
        Py_DECREF( old );
    }

    tmp_sliceslicedel_index_lower_4 = 0;
    tmp_slice_index_upper_4 = PY_SSIZE_T_MAX;
    tmp_source_name_94 = par_self;

    tmp_called_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_94, const_str_plain_get_libraries );
    if ( tmp_called_name_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_42 = par_ext;

    frame_function->f_lineno = 418;
    {
        PyObject *call_args[] = { tmp_args_element_name_42 };
        tmp_slice_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_44, call_args );
    }

    Py_DECREF( tmp_called_name_44 );
    if ( tmp_slice_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_52 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
    Py_DECREF( tmp_slice_source_4 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        goto frame_exception_exit_1;
    }
    assert( var_libraries == NULL );
    var_libraries = tmp_assign_source_52;

    tmp_sliceslicedel_index_lower_5 = 0;
    tmp_slice_index_upper_5 = PY_SSIZE_T_MAX;
    tmp_source_name_95 = par_ext;

    tmp_slice_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_95, const_str_plain_library_dirs );
    if ( tmp_slice_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_53 = LOOKUP_INDEX_SLICE( tmp_slice_source_5, tmp_sliceslicedel_index_lower_5, tmp_slice_index_upper_5 );
    Py_DECREF( tmp_slice_source_5 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        goto frame_exception_exit_1;
    }
    assert( var_library_dirs == NULL );
    var_library_dirs = tmp_assign_source_53;

    tmp_source_name_97 = par_self;

    tmp_source_name_96 = LOOKUP_ATTRIBUTE( tmp_source_name_97, const_str_plain_compiler );
    if ( tmp_source_name_96 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_54 = LOOKUP_ATTRIBUTE( tmp_source_name_96, const_str_plain_link_shared_object );
    Py_DECREF( tmp_source_name_96 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        goto frame_exception_exit_1;
    }
    assert( var_linker == NULL );
    var_linker = tmp_assign_source_54;

    tmp_source_name_99 = par_self;

    tmp_source_name_98 = LOOKUP_ATTRIBUTE( tmp_source_name_99, const_str_plain_compiler );
    if ( tmp_source_name_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_98, const_str_plain_compiler_type );
    Py_DECREF( tmp_source_name_98 );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_10 = const_tuple_str_plain_msvc_str_plain_intelw_str_plain_intelemw_tuple;
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_2 == -1) );
    Py_DECREF( tmp_compare_left_10 );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_source_name_100 = par_self;

    tmp_called_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_100, const_str_plain__libs_with_msvc_and_fortran );
    if ( tmp_called_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_43 = var_fcompiler;

    if ( tmp_args_element_name_43 == NULL )
    {
        Py_DECREF( tmp_called_name_45 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fcompiler" );
        exception_tb = NULL;

        exception_lineno = 426;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_44 = var_libraries;

    tmp_args_element_name_45 = var_library_dirs;

    frame_function->f_lineno = 426;
    {
        PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44, tmp_args_element_name_45 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_45, call_args );
    }

    Py_DECREF( tmp_called_name_45 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_25;
    branch_no_25:;
    tmp_source_name_101 = par_ext;

    tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_101, const_str_plain_language );
    if ( tmp_compexpr_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 428;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_8 = LIST_COPY( const_list_str_plain_f77_str_plain_f90_list );
    tmp_and_left_value_5 = SEQUENCE_CONTAINS( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    Py_DECREF( tmp_compexpr_left_8 );
    Py_DECREF( tmp_compexpr_right_8 );
    if ( tmp_and_left_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 428;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    assert( !(tmp_and_left_truth_5 == -1) );
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    tmp_compexpr_left_9 = var_fcompiler;

    if ( tmp_compexpr_left_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fcompiler" );
        exception_tb = NULL;

        exception_lineno = 428;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_9 = Py_None;
    tmp_and_right_value_5 = BOOL_FROM( tmp_compexpr_left_9 != tmp_compexpr_right_9 );
    tmp_cond_value_16 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    tmp_cond_value_16 = tmp_and_left_value_5;
    and_end_5:;
    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    assert( !(tmp_cond_truth_16 == -1) );
    if ( tmp_cond_truth_16 == 1 )
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    tmp_source_name_102 = var_fcompiler;

    if ( tmp_source_name_102 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fcompiler" );
        exception_tb = NULL;

        exception_lineno = 429;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_55 = LOOKUP_ATTRIBUTE( tmp_source_name_102, const_str_plain_link_shared_object );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_linker;
        assert( old != NULL );
        var_linker = tmp_assign_source_55;
        Py_DECREF( old );
    }

    branch_no_26:;
    branch_end_25:;
    tmp_source_name_103 = par_ext;

    tmp_compexpr_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_103, const_str_plain_language );
    if ( tmp_compexpr_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_10 = const_str_digest_483fe6e8fb067015ad0f59fff4617c82;
    tmp_and_left_value_6 = RICH_COMPARE_EQ( tmp_compexpr_left_10, tmp_compexpr_right_10 );
    Py_DECREF( tmp_compexpr_left_10 );
    if ( tmp_and_left_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_6 = CHECK_IF_TRUE( tmp_and_left_value_6 );
    if ( tmp_and_left_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_6 );

        exception_lineno = 430;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_6 == 1 )
    {
        goto and_right_6;
    }
    else
    {
        goto and_left_6;
    }
    and_right_6:;
    Py_DECREF( tmp_and_left_value_6 );
    tmp_compexpr_left_11 = var_cxx_compiler;

    tmp_compexpr_right_11 = Py_None;
    tmp_and_right_value_6 = BOOL_FROM( tmp_compexpr_left_11 != tmp_compexpr_right_11 );
    Py_INCREF( tmp_and_right_value_6 );
    tmp_cond_value_17 = tmp_and_right_value_6;
    goto and_end_6;
    and_left_6:;
    tmp_cond_value_17 = tmp_and_left_value_6;
    and_end_6:;
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_17 );

        exception_lineno = 430;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == 1 )
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    tmp_source_name_104 = var_cxx_compiler;

    tmp_assign_source_56 = LOOKUP_ATTRIBUTE( tmp_source_name_104, const_str_plain_link_shared_object );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_linker;
        var_linker = tmp_assign_source_56;
        Py_XDECREF( old );
    }

    branch_no_27:;
    tmp_called_name_46 = var_linker;

    if ( tmp_called_name_46 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "linker" );
        exception_tb = NULL;

        exception_lineno = 433;
        goto frame_exception_exit_1;
    }

    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_objects;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_ext_filename;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_7 );
    tmp_kw_name_3 = _PyDict_NewPresized( 8 );
    tmp_dict_value_24 = var_libraries;

    tmp_dict_key_24 = const_str_plain_libraries;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_24, tmp_dict_value_24 );
    tmp_dict_value_25 = var_library_dirs;

    tmp_dict_key_25 = const_str_plain_library_dirs;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_25, tmp_dict_value_25 );
    tmp_source_name_105 = par_ext;

    tmp_dict_value_26 = LOOKUP_ATTRIBUTE( tmp_source_name_105, const_str_plain_runtime_library_dirs );
    if ( tmp_dict_value_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 436;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_26 = const_str_plain_runtime_library_dirs;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_26, tmp_dict_value_26 );
    Py_DECREF( tmp_dict_value_26 );
    tmp_dict_value_27 = var_extra_args;

    tmp_dict_key_27 = const_str_plain_extra_postargs;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_27, tmp_dict_value_27 );
    tmp_source_name_106 = par_self;

    tmp_called_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_106, const_str_plain_get_export_symbols );
    if ( tmp_called_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 438;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_46 = par_ext;

    frame_function->f_lineno = 438;
    {
        PyObject *call_args[] = { tmp_args_element_name_46 };
        tmp_dict_value_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_47, call_args );
    }

    Py_DECREF( tmp_called_name_47 );
    if ( tmp_dict_value_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 438;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_28 = const_str_plain_export_symbols;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_28, tmp_dict_value_28 );
    Py_DECREF( tmp_dict_value_28 );
    tmp_source_name_107 = par_self;

    tmp_dict_value_29 = LOOKUP_ATTRIBUTE( tmp_source_name_107, const_str_plain_debug );
    if ( tmp_dict_value_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 439;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_29 = const_str_plain_debug;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_29, tmp_dict_value_29 );
    Py_DECREF( tmp_dict_value_29 );
    tmp_source_name_108 = par_self;

    tmp_dict_value_30 = LOOKUP_ATTRIBUTE( tmp_source_name_108, const_str_plain_build_temp );
    if ( tmp_dict_value_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 440;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_30 = const_str_plain_build_temp;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_30, tmp_dict_value_30 );
    Py_DECREF( tmp_dict_value_30 );
    tmp_source_name_109 = par_ext;

    tmp_dict_value_31 = LOOKUP_ATTRIBUTE( tmp_source_name_109, const_str_plain_language );
    if ( tmp_dict_value_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 441;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_31 = const_str_plain_target_lang;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_31, tmp_dict_value_31 );
    Py_DECREF( tmp_dict_value_31 );
    frame_function->f_lineno = 441;
    tmp_unused = CALL_FUNCTION( tmp_called_name_46, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 441;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_ext )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ext,
                    par_ext
                );

                assert( res == 0 );
            }

            if ( var_sources )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sources,
                    var_sources
                );

                assert( res == 0 );
            }

            if ( var_fullname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fullname,
                    var_fullname
                );

                assert( res == 0 );
            }

            if ( var_modpath )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_modpath,
                    var_modpath
                );

                assert( res == 0 );
            }

            if ( var_package )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_package,
                    var_package
                );

                assert( res == 0 );
            }

            if ( var_base )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_base,
                    var_base
                );

                assert( res == 0 );
            }

            if ( var_build_py )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_build_py,
                    var_build_py
                );

                assert( res == 0 );
            }

            if ( var_package_dir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_package_dir,
                    var_package_dir
                );

                assert( res == 0 );
            }

            if ( var_ext_filename )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ext_filename,
                    var_ext_filename
                );

                assert( res == 0 );
            }

            if ( var_depends )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_depends,
                    var_depends
                );

                assert( res == 0 );
            }

            if ( var_extra_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_extra_args,
                    var_extra_args
                );

                assert( res == 0 );
            }

            if ( var_macros )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_macros,
                    var_macros
                );

                assert( res == 0 );
            }

            if ( var_undef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_undef,
                    var_undef
                );

                assert( res == 0 );
            }

            if ( var_c_sources )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c_sources,
                    var_c_sources
                );

                assert( res == 0 );
            }

            if ( var_cxx_sources )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cxx_sources,
                    var_cxx_sources
                );

                assert( res == 0 );
            }

            if ( var_f_sources )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f_sources,
                    var_f_sources
                );

                assert( res == 0 );
            }

            if ( var_fmodule_sources )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fmodule_sources,
                    var_fmodule_sources
                );

                assert( res == 0 );
            }

            if ( var_fcompiler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fcompiler,
                    var_fcompiler
                );

                assert( res == 0 );
            }

            if ( var_cxx_compiler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cxx_compiler,
                    var_cxx_compiler
                );

                assert( res == 0 );
            }

            if ( var_kws )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kws,
                    var_kws
                );

                assert( res == 0 );
            }

            if ( var_output_dir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_output_dir,
                    var_output_dir
                );

                assert( res == 0 );
            }

            if ( var_include_dirs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_include_dirs,
                    var_include_dirs
                );

                assert( res == 0 );
            }

            if ( var_c_objects )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c_objects,
                    var_c_objects
                );

                assert( res == 0 );
            }

            if ( var_extra_postargs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_extra_postargs,
                    var_extra_postargs
                );

                assert( res == 0 );
            }

            if ( var_f_objects )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f_objects,
                    var_f_objects
                );

                assert( res == 0 );
            }

            if ( var_module_dirs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module_dirs,
                    var_module_dirs
                );

                assert( res == 0 );
            }

            if ( var_module_build_dir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module_build_dir,
                    var_module_build_dir
                );

                assert( res == 0 );
            }

            if ( var_existing_modules )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_existing_modules,
                    var_existing_modules
                );

                assert( res == 0 );
            }

            if ( var_f )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f,
                    var_f
                );

                assert( res == 0 );
            }

            if ( var_t )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_t,
                    var_t
                );

                assert( res == 0 );
            }

            if ( var_objects )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_objects,
                    var_objects
                );

                assert( res == 0 );
            }

            if ( var_libraries )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_libraries,
                    var_libraries
                );

                assert( res == 0 );
            }

            if ( var_library_dirs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_library_dirs,
                    var_library_dirs
                );

                assert( res == 0 );
            }

            if ( var_linker )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_linker,
                    var_linker
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_5_build_extension_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ext );
    Py_DECREF( par_ext );
    par_ext = NULL;

    CHECK_OBJECT( (PyObject *)var_sources );
    Py_DECREF( var_sources );
    var_sources = NULL;

    Py_XDECREF( var_fullname );
    var_fullname = NULL;

    Py_XDECREF( var_modpath );
    var_modpath = NULL;

    Py_XDECREF( var_package );
    var_package = NULL;

    Py_XDECREF( var_base );
    var_base = NULL;

    Py_XDECREF( var_build_py );
    var_build_py = NULL;

    Py_XDECREF( var_package_dir );
    var_package_dir = NULL;

    Py_XDECREF( var_ext_filename );
    var_ext_filename = NULL;

    Py_XDECREF( var_depends );
    var_depends = NULL;

    Py_XDECREF( var_extra_args );
    var_extra_args = NULL;

    Py_XDECREF( var_macros );
    var_macros = NULL;

    Py_XDECREF( var_undef );
    var_undef = NULL;

    Py_XDECREF( var_c_sources );
    var_c_sources = NULL;

    Py_XDECREF( var_cxx_sources );
    var_cxx_sources = NULL;

    Py_XDECREF( var_f_sources );
    var_f_sources = NULL;

    Py_XDECREF( var_fmodule_sources );
    var_fmodule_sources = NULL;

    Py_XDECREF( var_fcompiler );
    var_fcompiler = NULL;

    Py_XDECREF( var_cxx_compiler );
    var_cxx_compiler = NULL;

    Py_XDECREF( var_kws );
    var_kws = NULL;

    Py_XDECREF( var_output_dir );
    var_output_dir = NULL;

    Py_XDECREF( var_include_dirs );
    var_include_dirs = NULL;

    Py_XDECREF( var_c_objects );
    var_c_objects = NULL;

    Py_XDECREF( var_extra_postargs );
    var_extra_postargs = NULL;

    Py_XDECREF( var_f_objects );
    var_f_objects = NULL;

    Py_XDECREF( var_module_dirs );
    var_module_dirs = NULL;

    Py_XDECREF( var_module_build_dir );
    var_module_build_dir = NULL;

    Py_XDECREF( var_existing_modules );
    var_existing_modules = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_objects );
    var_objects = NULL;

    Py_XDECREF( var_libraries );
    var_libraries = NULL;

    Py_XDECREF( var_library_dirs );
    var_library_dirs = NULL;

    Py_XDECREF( var_linker );
    var_linker = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ext );
    Py_DECREF( par_ext );
    par_ext = NULL;

    Py_XDECREF( var_sources );
    var_sources = NULL;

    Py_XDECREF( var_fullname );
    var_fullname = NULL;

    Py_XDECREF( var_modpath );
    var_modpath = NULL;

    Py_XDECREF( var_package );
    var_package = NULL;

    Py_XDECREF( var_base );
    var_base = NULL;

    Py_XDECREF( var_build_py );
    var_build_py = NULL;

    Py_XDECREF( var_package_dir );
    var_package_dir = NULL;

    Py_XDECREF( var_ext_filename );
    var_ext_filename = NULL;

    Py_XDECREF( var_depends );
    var_depends = NULL;

    Py_XDECREF( var_extra_args );
    var_extra_args = NULL;

    Py_XDECREF( var_macros );
    var_macros = NULL;

    Py_XDECREF( var_undef );
    var_undef = NULL;

    Py_XDECREF( var_c_sources );
    var_c_sources = NULL;

    Py_XDECREF( var_cxx_sources );
    var_cxx_sources = NULL;

    Py_XDECREF( var_f_sources );
    var_f_sources = NULL;

    Py_XDECREF( var_fmodule_sources );
    var_fmodule_sources = NULL;

    Py_XDECREF( var_fcompiler );
    var_fcompiler = NULL;

    Py_XDECREF( var_cxx_compiler );
    var_cxx_compiler = NULL;

    Py_XDECREF( var_kws );
    var_kws = NULL;

    Py_XDECREF( var_output_dir );
    var_output_dir = NULL;

    Py_XDECREF( var_include_dirs );
    var_include_dirs = NULL;

    Py_XDECREF( var_c_objects );
    var_c_objects = NULL;

    Py_XDECREF( var_extra_postargs );
    var_extra_postargs = NULL;

    Py_XDECREF( var_f_objects );
    var_f_objects = NULL;

    Py_XDECREF( var_module_dirs );
    var_module_dirs = NULL;

    Py_XDECREF( var_module_build_dir );
    var_module_build_dir = NULL;

    Py_XDECREF( var_existing_modules );
    var_existing_modules = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_objects );
    var_objects = NULL;

    Py_XDECREF( var_libraries );
    var_libraries = NULL;

    Py_XDECREF( var_library_dirs );
    var_library_dirs = NULL;

    Py_XDECREF( var_linker );
    var_linker = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_build_extension_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_numpy$distutils$command$build_ext( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_c_sources = python_pars[ 1 ];
    PyObject *var_build_src = NULL;
    PyObject *var_build_clib = NULL;
    PyObject *var_objects = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9c8db95fcecb30cd42844549036a1aaa, module_numpy$distutils$command$build_ext );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_2 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_finalized_command );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 444;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_build_src_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_build_src );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        goto frame_exception_exit_1;
    }
    assert( var_build_src == NULL );
    var_build_src = tmp_assign_source_1;

    tmp_source_name_4 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get_finalized_command );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 445;
    tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_plain_build_clib_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_build_clib );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        goto frame_exception_exit_1;
    }
    assert( var_build_clib == NULL );
    var_build_clib = tmp_assign_source_2;

    tmp_source_name_6 = par_self;

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_compiler );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 446;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_compile );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 446;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyList_New( 1 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 446;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 446;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 446;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_build_src;

    tmp_args_element_name_2 = const_str_digest_ad800c936be6144e86faccb951518036;
    frame_function->f_lineno = 447;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 447;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_9 = par_self;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_build_temp );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 448;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_output_dir;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 448;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        goto frame_exception_exit_1;
    }
    assert( var_objects == NULL );
    var_objects = tmp_assign_source_3;

    tmp_source_name_11 = par_self;

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_compiler );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_create_static_lib );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_objects;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_str_plain__gfortran_workaround;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_2 = var_build_clib;

    tmp_dict_key_2 = const_str_plain_output_dir;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_source_name_12 = par_self;

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_debug );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 449;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_debug;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    frame_function->f_lineno = 449;
    tmp_unused = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_c_sources )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c_sources,
                    par_c_sources
                );

                assert( res == 0 );
            }

            if ( var_build_src )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_build_src,
                    var_build_src
                );

                assert( res == 0 );
            }

            if ( var_build_clib )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_build_clib,
                    var_build_clib
                );

                assert( res == 0 );
            }

            if ( var_objects )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_objects,
                    var_objects
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_c_sources );
    Py_DECREF( par_c_sources );
    par_c_sources = NULL;

    CHECK_OBJECT( (PyObject *)var_build_src );
    Py_DECREF( var_build_src );
    var_build_src = NULL;

    CHECK_OBJECT( (PyObject *)var_build_clib );
    Py_DECREF( var_build_clib );
    var_build_clib = NULL;

    CHECK_OBJECT( (PyObject *)var_objects );
    Py_DECREF( var_objects );
    var_objects = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_c_sources );
    Py_DECREF( par_c_sources );
    par_c_sources = NULL;

    Py_XDECREF( var_build_src );
    var_build_src = NULL;

    Py_XDECREF( var_build_clib );
    var_build_clib = NULL;

    Py_XDECREF( var_objects );
    var_objects = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_numpy$distutils$command$build_ext( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_fcompiler = python_pars[ 1 ];
    PyObject *par_c_libraries = python_pars[ 2 ];
    PyObject *par_c_library_dirs = python_pars[ 3 ];
    PyObject *var_libname = NULL;
    PyObject *var_fileexists = NULL;
    PyObject *var_libdir = NULL;
    PyObject *var_libfile = NULL;
    PyObject *var_libfile2 = NULL;
    PyObject *var_f_lib_dirs = NULL;
    PyObject *var_dir = NULL;
    PyObject *var_s = NULL;
    PyObject *var_o = NULL;
    PyObject *var_lib = NULL;
    PyObject *var_p = NULL;
    PyObject *var_dst_name = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    int tmp_cmp_NotIn_1;
    int tmp_cmp_NotIn_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_compare_left_1 = par_fcompiler;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    branch_no_1:;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4e1bfaa99dc8ed37eeff6a55667ea5d2, module_numpy$distutils$command$build_ext );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_iter_arg_1 = par_c_libraries;

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 455;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_libname;
        var_libname = tmp_assign_source_3;
        Py_INCREF( var_libname );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = var_libname;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_startswith );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 456;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_msvc_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 456;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    goto loop_start_1;
    branch_no_2:;
    tmp_assign_source_4 = Py_False;
    {
        PyObject *old = var_fileexists;
        var_fileexists = tmp_assign_source_4;
        Py_INCREF( var_fileexists );
        Py_XDECREF( old );
    }

    tmp_or_left_value_1 = par_c_library_dirs;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        goto try_except_handler_2;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_or_right_value_1 = PyList_New( 0 );
    tmp_iter_arg_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_iter_arg_2 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 458;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_libdir;
        var_libdir = tmp_assign_source_7;
        Py_INCREF( var_libdir );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 459;
        goto try_except_handler_3;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 459;
        goto try_except_handler_3;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 459;
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = var_libdir;

    tmp_left_name_1 = const_str_digest_d8f34256ec03abb6e9b633ba54b105d1;
    tmp_right_name_1 = var_libname;

    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 459;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 459;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 459;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_libfile;
        var_libfile = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 460;
        goto try_except_handler_3;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        goto try_except_handler_3;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        goto try_except_handler_3;
    }
    tmp_args_element_name_3 = var_libfile;

    frame_function->f_lineno = 460;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        goto try_except_handler_3;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 460;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_9 = Py_True;
    {
        PyObject *old = var_fileexists;
        assert( old != NULL );
        var_fileexists = tmp_assign_source_9;
        Py_INCREF( var_fileexists );
        Py_DECREF( old );
    }

    goto loop_end_2;
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_cond_value_3 = var_fileexists;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 463;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    goto loop_start_1;
    branch_no_4:;
    tmp_assign_source_10 = Py_False;
    {
        PyObject *old = var_fileexists;
        assert( old != NULL );
        var_fileexists = tmp_assign_source_10;
        Py_INCREF( var_fileexists );
        Py_DECREF( old );
    }

    tmp_iter_arg_3 = par_c_library_dirs;

    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 466;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_3__for_iterator;
        tmp_for_loop_3__for_iterator = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator;

    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 466;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = tmp_for_loop_3__iter_value;

    {
        PyObject *old = var_libdir;
        var_libdir = tmp_assign_source_13;
        Py_INCREF( var_libdir );
        Py_XDECREF( old );
    }

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 467;
        goto try_except_handler_4;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_path );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 467;
        goto try_except_handler_4;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 467;
        goto try_except_handler_4;
    }
    tmp_args_element_name_4 = var_libdir;

    tmp_left_name_2 = const_str_digest_d749e6789d566eeaee2182abad7c2fde;
    tmp_right_name_2 = var_libname;

    tmp_args_element_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 467;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 467;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 467;
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_libfile;
        var_libfile = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 468;
        goto try_except_handler_4;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 468;
        goto try_except_handler_4;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 468;
        goto try_except_handler_4;
    }
    tmp_args_element_name_6 = var_libfile;

    frame_function->f_lineno = 468;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 468;
        goto try_except_handler_4;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 468;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 471;
        goto try_except_handler_4;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_path );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 471;
        goto try_except_handler_4;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_join );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 471;
        goto try_except_handler_4;
    }
    tmp_source_name_12 = par_self;

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_build_temp );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 471;
        goto try_except_handler_4;
    }
    tmp_left_name_3 = var_libname;

    tmp_right_name_3 = const_str_digest_fc8bc65751456e5bb14f2782af4345b0;
    tmp_args_element_name_8 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 471;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 471;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 471;
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_libfile2;
        var_libfile2 = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_copy_file );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy_file );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "copy_file" );
        exception_tb = NULL;

        exception_lineno = 472;
        goto try_except_handler_4;
    }

    tmp_args_element_name_9 = var_libfile;

    tmp_args_element_name_10 = var_libfile2;

    frame_function->f_lineno = 472;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 472;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_13 = par_self;

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_build_temp );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        goto try_except_handler_4;
    }
    tmp_compare_right_2 = par_c_library_dirs;

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_14 = par_c_library_dirs;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 474;
        goto try_except_handler_4;
    }
    tmp_source_name_15 = par_self;

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_build_temp );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 474;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 474;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 474;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_assign_source_16 = Py_True;
    {
        PyObject *old = var_fileexists;
        assert( old != NULL );
        var_fileexists = tmp_assign_source_16;
        Py_INCREF( var_fileexists );
        Py_DECREF( old );
    }

    goto loop_end_3;
    branch_no_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 466;
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    tmp_cond_value_5 = var_fileexists;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 477;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    goto loop_start_1;
    branch_no_7:;
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 478;
        goto try_except_handler_2;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_warn );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 478;
        goto try_except_handler_2;
    }
    tmp_left_name_4 = const_str_digest_ca625664a1ac195c2723761a2439b505;
    tmp_right_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_libname;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_c_library_dirs;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_1 );
    tmp_args_element_name_12 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 478;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 479;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 479;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_assign_source_17 = PyList_New( 0 );
    assert( var_f_lib_dirs == NULL );
    var_f_lib_dirs = tmp_assign_source_17;

    tmp_source_name_17 = par_fcompiler;

    tmp_iter_arg_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_library_dirs );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 483;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 483;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator == NULL );
    tmp_for_loop_4__for_iterator = tmp_assign_source_18;

    // Tried code:
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator;

    tmp_assign_source_19 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_19 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 483;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_4__iter_value;
        tmp_for_loop_4__iter_value = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_assign_source_20 = tmp_for_loop_4__iter_value;

    {
        PyObject *old = var_dir;
        var_dir = tmp_assign_source_20;
        Py_INCREF( var_dir );
        Py_XDECREF( old );
    }

    tmp_source_name_18 = var_dir;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_startswith );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 486;
        goto try_except_handler_5;
    }
    frame_function->f_lineno = 486;
    tmp_cond_value_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_digest_cd6a33ccef6f831dd7e0430d9d28854f_tuple, 0 ) );

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 486;
        goto try_except_handler_5;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 486;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    // Tried code:
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_exec_command );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exec_command );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "exec_command" );
        exception_tb = NULL;

        exception_lineno = 487;
        goto try_except_handler_6;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyList_New( 3 );
    tmp_list_element_1 = const_str_plain_cygpath;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_2, 0, tmp_list_element_1 );
    tmp_list_element_1 = const_str_digest_27a7628ab85cd892afa96bd047d5a375;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_2, 1, tmp_list_element_1 );
    tmp_list_element_1 = var_dir;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_2, 2, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_3be937dfcb6326ab62ea1b692cc71009 );
    frame_function->f_lineno = 487;
    tmp_iter_arg_5 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 487;
        goto try_except_handler_6;
    }
    tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 487;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_22 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 487;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_23 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 487;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_6;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_6;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    tmp_assign_source_24 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_s;
        var_s = tmp_assign_source_24;
        Py_INCREF( var_s );
        Py_XDECREF( old );
    }

    tmp_assign_source_25 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_o;
        var_o = tmp_assign_source_25;
        Py_INCREF( var_o );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_cond_value_7 = var_s;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 488;
        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    tmp_assign_source_26 = var_o;

    {
        PyObject *old = var_dir;
        assert( old != NULL );
        var_dir = tmp_assign_source_26;
        Py_INCREF( var_dir );
        Py_DECREF( old );
    }

    branch_no_9:;
    branch_no_8:;
    tmp_source_name_19 = var_f_lib_dirs;

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_append );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 490;
        goto try_except_handler_5;
    }
    tmp_args_element_name_13 = var_dir;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dir" );
        exception_tb = NULL;

        exception_lineno = 490;
        goto try_except_handler_5;
    }

    frame_function->f_lineno = 490;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 490;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 483;
        goto try_except_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    tmp_source_name_20 = par_c_library_dirs;

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_extend );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 491;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = var_f_lib_dirs;

    frame_function->f_lineno = 491;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 491;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_21 = par_fcompiler;

    tmp_iter_arg_6 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_libraries );
    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 494;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 494;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_5__for_iterator == NULL );
    tmp_for_loop_5__for_iterator = tmp_assign_source_27;

    // Tried code:
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator;

    tmp_assign_source_28 = ITERATOR_NEXT( tmp_next_source_5 );
    if ( tmp_assign_source_28 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_5;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 494;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_for_loop_5__iter_value;
        tmp_for_loop_5__iter_value = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    tmp_assign_source_29 = tmp_for_loop_5__iter_value;

    {
        PyObject *old = var_lib;
        var_lib = tmp_assign_source_29;
        Py_INCREF( var_lib );
        Py_XDECREF( old );
    }

    tmp_source_name_22 = var_lib;

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_startswith );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 495;
        goto try_except_handler_7;
    }
    frame_function->f_lineno = 495;
    tmp_cond_value_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, &PyTuple_GET_ITEM( const_tuple_str_plain_msvc_tuple, 0 ) );

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 495;
        goto try_except_handler_7;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 495;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_no_10;
    }
    else
    {
        goto branch_yes_10;
    }
    branch_yes_10:;
    tmp_source_name_23 = par_c_libraries;

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_append );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 496;
        goto try_except_handler_7;
    }
    tmp_args_element_name_15 = var_lib;

    frame_function->f_lineno = 496;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 496;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_combine_paths );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_combine_paths );
    }

    if ( tmp_called_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "combine_paths" );
        exception_tb = NULL;

        exception_lineno = 497;
        goto try_except_handler_7;
    }

    tmp_args_element_name_16 = var_f_lib_dirs;

    tmp_left_name_6 = const_str_plain_lib;
    tmp_right_name_5 = var_lib;

    tmp_left_name_5 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_5 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 497;
        goto try_except_handler_7;
    }
    tmp_right_name_6 = const_str_digest_b48c66f43da8ef8e0826c0fd6de4168b;
    tmp_args_element_name_17 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 497;
        goto try_except_handler_7;
    }
    frame_function->f_lineno = 497;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 497;
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_p;
        var_p = tmp_assign_source_30;
        Py_XDECREF( old );
    }

    tmp_cond_value_9 = var_p;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 498;
        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 499;
        goto try_except_handler_7;
    }

    tmp_source_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_path );
    if ( tmp_source_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 499;
        goto try_except_handler_7;
    }
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_join );
    Py_DECREF( tmp_source_name_24 );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 499;
        goto try_except_handler_7;
    }
    tmp_source_name_26 = par_self;

    tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_build_temp );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 499;
        goto try_except_handler_7;
    }
    tmp_left_name_7 = var_lib;

    tmp_right_name_7 = const_str_digest_fc8bc65751456e5bb14f2782af4345b0;
    tmp_args_element_name_19 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_args_element_name_18 );

        exception_lineno = 499;
        goto try_except_handler_7;
    }
    frame_function->f_lineno = 499;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
        tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_element_name_18 );
    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 499;
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_dst_name;
        var_dst_name = tmp_assign_source_31;
        Py_XDECREF( old );
    }

    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 500;
        goto try_except_handler_7;
    }

    tmp_source_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_path );
    if ( tmp_source_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 500;
        goto try_except_handler_7;
    }
    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_27 );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 500;
        goto try_except_handler_7;
    }
    tmp_args_element_name_20 = var_dst_name;

    frame_function->f_lineno = 500;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_cond_value_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_cond_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 500;
        goto try_except_handler_7;
    }
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        exception_lineno = 500;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_no_12;
    }
    else
    {
        goto branch_yes_12;
    }
    branch_yes_12:;
    tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_copy_file );

    if (unlikely( tmp_called_name_19 == NULL ))
    {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy_file );
    }

    if ( tmp_called_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "copy_file" );
        exception_tb = NULL;

        exception_lineno = 501;
        goto try_except_handler_7;
    }

    tmp_subscribed_name_1 = var_p;

    tmp_subscript_name_1 = const_int_0;
    tmp_args_element_name_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 501;
        goto try_except_handler_7;
    }
    tmp_args_element_name_22 = var_dst_name;

    frame_function->f_lineno = 501;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 501;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    branch_no_12:;
    tmp_source_name_29 = par_self;

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_build_temp );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 502;
        goto try_except_handler_7;
    }
    tmp_compare_right_3 = par_c_library_dirs;

    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_NotIn_2 == -1) );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_NotIn_2 == 0 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_30 = par_c_library_dirs;

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_append );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 503;
        goto try_except_handler_7;
    }
    tmp_source_name_31 = par_self;

    tmp_args_element_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_build_temp );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );

        exception_lineno = 503;
        goto try_except_handler_7;
    }
    frame_function->f_lineno = 503;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 503;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    branch_no_13:;
    branch_no_11:;
    branch_no_10:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 494;
        goto try_except_handler_7;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_fcompiler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fcompiler,
                    par_fcompiler
                );

                assert( res == 0 );
            }

            if ( par_c_libraries )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c_libraries,
                    par_c_libraries
                );

                assert( res == 0 );
            }

            if ( par_c_library_dirs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c_library_dirs,
                    par_c_library_dirs
                );

                assert( res == 0 );
            }

            if ( var_libname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_libname,
                    var_libname
                );

                assert( res == 0 );
            }

            if ( var_fileexists )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fileexists,
                    var_fileexists
                );

                assert( res == 0 );
            }

            if ( var_libdir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_libdir,
                    var_libdir
                );

                assert( res == 0 );
            }

            if ( var_libfile )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_libfile,
                    var_libfile
                );

                assert( res == 0 );
            }

            if ( var_libfile2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_libfile2,
                    var_libfile2
                );

                assert( res == 0 );
            }

            if ( var_f_lib_dirs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f_lib_dirs,
                    var_f_lib_dirs
                );

                assert( res == 0 );
            }

            if ( var_dir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dir,
                    var_dir
                );

                assert( res == 0 );
            }

            if ( var_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    var_s
                );

                assert( res == 0 );
            }

            if ( var_o )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_o,
                    var_o
                );

                assert( res == 0 );
            }

            if ( var_lib )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lib,
                    var_lib
                );

                assert( res == 0 );
            }

            if ( var_p )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_p,
                    var_p
                );

                assert( res == 0 );
            }

            if ( var_dst_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dst_name,
                    var_dst_name
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fcompiler );
    Py_DECREF( par_fcompiler );
    par_fcompiler = NULL;

    CHECK_OBJECT( (PyObject *)par_c_libraries );
    Py_DECREF( par_c_libraries );
    par_c_libraries = NULL;

    CHECK_OBJECT( (PyObject *)par_c_library_dirs );
    Py_DECREF( par_c_library_dirs );
    par_c_library_dirs = NULL;

    Py_XDECREF( var_libname );
    var_libname = NULL;

    Py_XDECREF( var_fileexists );
    var_fileexists = NULL;

    Py_XDECREF( var_libdir );
    var_libdir = NULL;

    Py_XDECREF( var_libfile );
    var_libfile = NULL;

    Py_XDECREF( var_libfile2 );
    var_libfile2 = NULL;

    Py_XDECREF( var_f_lib_dirs );
    var_f_lib_dirs = NULL;

    Py_XDECREF( var_dir );
    var_dir = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_o );
    var_o = NULL;

    Py_XDECREF( var_lib );
    var_lib = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_dst_name );
    var_dst_name = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fcompiler );
    Py_DECREF( par_fcompiler );
    par_fcompiler = NULL;

    CHECK_OBJECT( (PyObject *)par_c_libraries );
    Py_DECREF( par_c_libraries );
    par_c_libraries = NULL;

    CHECK_OBJECT( (PyObject *)par_c_library_dirs );
    Py_DECREF( par_c_library_dirs );
    par_c_library_dirs = NULL;

    Py_XDECREF( var_libname );
    var_libname = NULL;

    Py_XDECREF( var_fileexists );
    var_fileexists = NULL;

    Py_XDECREF( var_libdir );
    var_libdir = NULL;

    Py_XDECREF( var_libfile );
    var_libfile = NULL;

    Py_XDECREF( var_libfile2 );
    var_libfile2 = NULL;

    Py_XDECREF( var_f_lib_dirs );
    var_f_lib_dirs = NULL;

    Py_XDECREF( var_dir );
    var_dir = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_o );
    var_o = NULL;

    Py_XDECREF( var_lib );
    var_lib = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_dst_name );
    var_dst_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_8_get_source_files_of_class_1_build_ext_of_numpy$distutils$command$build_ext( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_filenames = NULL;
    PyObject *var_ext = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1f1d82eb7e51ac17db3ac25d59b9f97c, module_numpy$distutils$command$build_ext );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_check_extensions_list );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 506;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_extensions );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 506;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 506;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 506;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_filenames == NULL );
    var_filenames = tmp_assign_source_1;

    tmp_source_name_3 = par_self;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extensions );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 508;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 508;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 508;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_ext;
        var_ext = tmp_assign_source_4;
        Py_INCREF( var_ext );
        Py_XDECREF( old );
    }

    tmp_source_name_4 = var_filenames;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_extend );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 509;
        goto try_except_handler_2;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_get_ext_source_files );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_ext_source_files );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_ext_source_files" );
        exception_tb = NULL;

        exception_lineno = 509;
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = var_ext;

    frame_function->f_lineno = 509;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 509;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 509;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 509;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 508;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( var_filenames )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_filenames,
                    var_filenames
                );

                assert( res == 0 );
            }

            if ( var_ext )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ext,
                    var_ext
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = var_filenames;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_8_get_source_files_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_filenames );
    Py_DECREF( var_filenames );
    var_filenames = NULL;

    Py_XDECREF( var_ext );
    var_ext = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_filenames );
    var_filenames = NULL;

    Py_XDECREF( var_ext );
    var_ext = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_8_get_source_files_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_9_get_outputs_of_class_1_build_ext_of_numpy$distutils$command$build_ext( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_outputs = NULL;
    PyObject *var_ext = NULL;
    PyObject *var_fullname = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_96dd1bff74ca03fe80eb75ce2114e896, module_numpy$distutils$command$build_ext );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_check_extensions_list );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 513;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_extensions );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 513;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 513;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 513;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_outputs == NULL );
    var_outputs = tmp_assign_source_1;

    tmp_source_name_3 = par_self;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extensions );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 516;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 516;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 516;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_ext;
        var_ext = tmp_assign_source_4;
        Py_INCREF( var_ext );
        Py_XDECREF( old );
    }

    tmp_source_name_4 = var_ext;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sources );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 517;
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 517;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_start_1;
    branch_no_1:;
    tmp_source_name_5 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get_ext_fullname );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 519;
        goto try_except_handler_2;
    }
    tmp_source_name_6 = var_ext;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_name );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 519;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 519;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 519;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_fullname;
        var_fullname = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_source_name_7 = var_outputs;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 520;
        goto try_except_handler_2;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 520;
        goto try_except_handler_2;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 520;
        goto try_except_handler_2;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_join );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 520;
        goto try_except_handler_2;
    }
    tmp_source_name_10 = par_self;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_build_lib );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 520;
        goto try_except_handler_2;
    }
    tmp_source_name_11 = par_self;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_get_ext_filename );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 521;
        goto try_except_handler_2;
    }
    tmp_args_element_name_6 = var_fullname;

    frame_function->f_lineno = 521;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 521;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 521;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 521;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 521;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 521;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 516;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( var_outputs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_outputs,
                    var_outputs
                );

                assert( res == 0 );
            }

            if ( var_ext )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ext,
                    var_ext
                );

                assert( res == 0 );
            }

            if ( var_fullname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fullname,
                    var_fullname
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = var_outputs;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_9_get_outputs_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_outputs );
    Py_DECREF( var_outputs );
    var_outputs = NULL;

    Py_XDECREF( var_ext );
    var_ext = NULL;

    Py_XDECREF( var_fullname );
    var_fullname = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_outputs );
    var_outputs = NULL;

    Py_XDECREF( var_ext );
    var_ext = NULL;

    Py_XDECREF( var_fullname );
    var_fullname = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_9_get_outputs_of_class_1_build_ext_of_numpy$distutils$command$build_ext );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_initialize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext,
        const_str_plain_initialize_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9abaca61fbeb0e5833981ce379421da4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_finalize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_finalize_options_of_class_1_build_ext_of_numpy$distutils$command$build_ext,
        const_str_plain_finalize_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a80ffa97c0aeb62a3bc2fc2c2cc9f89a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_run_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_run_of_class_1_build_ext_of_numpy$distutils$command$build_ext,
        const_str_plain_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f8491787bb7cd86e46a65ad8333e92cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_swig_sources_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_swig_sources_of_class_1_build_ext_of_numpy$distutils$command$build_ext,
        const_str_plain_swig_sources,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d408d35b973fcc3c4384eba06a6b092f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_build_extension_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5_build_extension_of_class_1_build_ext_of_numpy$distutils$command$build_ext,
        const_str_plain_build_extension,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_61666110b5375a4eb0d2352a1a9f27c3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_6__add_dummy_mingwex_sym_of_class_1_build_ext_of_numpy$distutils$command$build_ext,
        const_str_plain__add_dummy_mingwex_sym,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9c8db95fcecb30cd42844549036a1aaa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_7__libs_with_msvc_and_fortran_of_class_1_build_ext_of_numpy$distutils$command$build_ext,
        const_str_plain__libs_with_msvc_and_fortran,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4e1bfaa99dc8ed37eeff6a55667ea5d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_get_source_files_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_8_get_source_files_of_class_1_build_ext_of_numpy$distutils$command$build_ext,
        const_str_plain_get_source_files,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f1d82eb7e51ac17db3ac25d59b9f97c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_get_outputs_of_class_1_build_ext_of_numpy$distutils$command$build_ext(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_9_get_outputs_of_class_1_build_ext_of_numpy$distutils$command$build_ext,
        const_str_plain_get_outputs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_96dd1bff74ca03fe80eb75ce2114e896,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_ext,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils$command$build_ext =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils.command.build_ext",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( numpy$distutils$command$build_ext )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils$command$build_ext );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );
#if PYTHON_VERSION >= 350
    PyType_Ready( &Nuitka_Coroutine_Type );
    PyType_Ready( &Nuitka_CoroutineWrapper_Type );
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

#endif

#if _NUITKA_MODULE
    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();
#endif

    createModuleConstants();
    createModuleCodeObjects();

    // puts( "in initnumpy$distutils$command$build_ext" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils$command$build_ext = Py_InitModule4(
        "numpy.distutils.command.build_ext",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils$command$build_ext = PyModule_Create( &mdef_numpy$distutils$command$build_ext );
#endif

    moduledict_numpy$distutils$command$build_ext = (PyDictObject *)((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;

    CHECK_OBJECT( module_numpy$distutils$command$build_ext );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e71046027ad89002d40b61208820fea4, module_numpy$distutils$command$build_ext );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils$command$build_ext );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
#if _MODULE_LOADER
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#else
    PyDict_SetItem( module_dict, const_str_plain___loader__, Py_None );
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_name_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_globals_9;
    PyObject *tmp_import_globals_10;
    PyObject *tmp_import_globals_11;
    PyObject *tmp_import_globals_12;
    PyObject *tmp_import_globals_13;
    PyObject *tmp_import_globals_14;
    PyObject *tmp_import_globals_15;
    PyObject *tmp_import_globals_16;
    PyObject *tmp_import_globals_17;
    PyObject *tmp_import_globals_18;
    PyObject *tmp_import_globals_19;
    PyObject *tmp_import_globals_20;
    PyObject *tmp_import_globals_21;
    PyObject *tmp_import_globals_22;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_key_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_e07a3a637704ac783fd5c36fb56041b3;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_8b868ac38ca8eba8dd5e4c0312500790;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_00d0986d3d613bd78b66fc85fe072f72, module_numpy$distutils$command$build_ext );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 6;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 7;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_glob, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_glob_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_glob );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_glob, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_3b1be6da02805162db59b861b815c22b, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_newer_group_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_newer_group );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_newer_group, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_336099845390025550e005e395fc3398, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_build_ext_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_build_ext );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_old_build_ext, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_2d6b78a8db931a7665f7c875fc3cbb30, tmp_import_globals_6, tmp_import_globals_6, const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_DistutilsFileError );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsFileError, tmp_assign_source_11 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_2d6b78a8db931a7665f7c875fc3cbb30, tmp_import_globals_7, tmp_import_globals_7, const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_DistutilsSetupError );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsSetupError, tmp_assign_source_12 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_2d6b78a8db931a7665f7c875fc3cbb30, tmp_import_globals_8, tmp_import_globals_8, const_tuple_e9d18a61d0eb2684f239380e3a71a867_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_DistutilsError );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_DistutilsError, tmp_assign_source_13 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_ac56091d2e235fc7ddd5932da1894382, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_copy_file_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_copy_file );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_copy_file, tmp_assign_source_14 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_0e6cce5d2f21199bd98b4fd22ff45e74, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_log_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_log );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_15 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_5797ecbe2f726e884034a40def176a4d, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_exec_command_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_exec_command );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_exec_command, tmp_assign_source_16 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_3d2e4dcc71ff2710c1a6bc4aedffe24c, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_combine_paths_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_combine_paths );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_combine_paths, tmp_assign_source_17 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_6d315605648e433b0f5827b4d0f11ccf, tmp_import_globals_13, tmp_import_globals_13, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_filter_sources );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_filter_sources, tmp_assign_source_18 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_6d315605648e433b0f5827b4d0f11ccf, tmp_import_globals_14, tmp_import_globals_14, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_has_f_sources );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_has_f_sources, tmp_assign_source_19 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_6d315605648e433b0f5827b4d0f11ccf, tmp_import_globals_15, tmp_import_globals_15, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_has_cxx_sources );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_has_cxx_sources, tmp_assign_source_20 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_6d315605648e433b0f5827b4d0f11ccf, tmp_import_globals_16, tmp_import_globals_16, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_get_ext_source_files );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_get_ext_source_files, tmp_assign_source_21 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_digest_6d315605648e433b0f5827b4d0f11ccf, tmp_import_globals_17, tmp_import_globals_17, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_get_numpy_include_dirs );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_get_numpy_include_dirs, tmp_assign_source_22 );
    tmp_import_globals_18 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_digest_6d315605648e433b0f5827b4d0f11ccf, tmp_import_globals_18, tmp_import_globals_18, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_is_sequence );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_is_sequence, tmp_assign_source_23 );
    tmp_import_globals_19 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_digest_6d315605648e433b0f5827b4d0f11ccf, tmp_import_globals_19, tmp_import_globals_19, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_get_build_architecture );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_get_build_architecture, tmp_assign_source_24 );
    tmp_import_globals_20 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_digest_6d315605648e433b0f5827b4d0f11ccf, tmp_import_globals_20, tmp_import_globals_20, const_tuple_9d96976babf556d15c456c7216b3a323_tuple, const_int_0 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_msvc_version );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_msvc_version, tmp_assign_source_25 );
    tmp_import_globals_21 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_digest_7a14583f2b8e5abe2eeccb1c7d041273, tmp_import_globals_21, tmp_import_globals_21, const_tuple_str_plain_show_fortran_compilers_tuple, const_int_0 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_show_fortran_compilers );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_show_fortran_compilers, tmp_assign_source_26 );
    // Tried code:
    tmp_unused = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_set );

    if (unlikely( tmp_unused == NULL ))
    {
        tmp_unused = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set );
    }

    if ( tmp_unused == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "set" );
        exception_tb = NULL;

        exception_lineno = 26;
        goto try_except_handler_1;
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_module );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_module, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_NameError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_22 = ((PyModuleObject *)module_numpy$distutils$command$build_ext)->md_dict;
    frame_module->f_lineno = 28;
    tmp_import_name_from_20 = IMPORT_MODULE( const_str_plain_sets, tmp_import_globals_22, tmp_import_globals_22, const_tuple_str_plain_Set_tuple, const_int_0 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_Set );
    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_set, tmp_assign_source_27 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$distutils$command$build_ext );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_assign_source_28 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_old_build_ext );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_build_ext );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "old_build_ext" );
        exception_tb = NULL;

        exception_lineno = 30;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_28, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_28;

    tmp_assign_source_29 = impl_class_1_build_ext_of_numpy$distutils$command$build_ext( NULL );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_29;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_1__class_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_dict;

    tmp_key_name_1 = const_str_plain___metaclass__;
    tmp_assign_source_30 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_30 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_30;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_build_ext;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_31;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_module, exception_lineno );
    }
    else if ( exception_tb->tb_frame != frame_module )
    {
        PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_module, exception_lineno );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }

    // Put the previous frame back on top.
    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_module->f_executing -= 1;
#endif
    Py_DECREF( frame_module );

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_32 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_ext, (Nuitka_StringObject *)const_str_plain_build_ext, tmp_assign_source_32 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_numpy$distutils$command$build_ext );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

// Generated code for Python source for module 'numpy.distutils.from_template'
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

// The _module_numpy$distutils$from_template is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils$from_template;
PyDictObject *moduledict_numpy$distutils$from_template;

// The module constants used
static PyObject *const_str_digest_1b29e6e829705e24321d53a222c7af37;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_98130d630e8cb035f98bdd50e0630faf;
extern PyObject *const_str_plain_process_str;
static PyObject *const_str_plain_template_name_re;
extern PyObject *const_str_plain_adict;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_allkeys;
extern PyObject *const_str_plain_startswith;
static PyObject *const_tuple_str_digest_b121fb20072b3e91bf01df23dab6d0c4_tuple;
extern PyObject *const_str_plain_process_file;
extern PyObject *const_list_str_plain_process_str_str_plain_process_file_list;
static PyObject *const_tuple_str_digest_a189f1a2b6d72417f39022c9e60fc148_tuple;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_index;
static PyObject *const_str_digest_e026170ece6f790480ca7ac83857304f;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_astr;
static PyObject *const_str_digest_b121fb20072b3e91bf01df23dab6d0c4;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_start;
static PyObject *const_str_digest_4816c680a2be181527582063cf4da995;
static PyObject *const_str_plain_expand_sub;
extern PyObject *const_str_plain_isabs;
static PyObject *const_tuple_759be00056c6de2841026467bf2a7b74_tuple;
static PyObject *const_str_digest_0fc17a4fb735a9381aa8caf5613abadf;
extern PyObject *const_str_digest_09bc009ffd858aaf58df7e98266d9b89;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_name_tuple;
extern PyObject *const_str_plain_ind;
static PyObject *const_str_plain_mobj;
extern PyObject *const_str_plain_newstr;
extern PyObject *const_str_plain_close;
static PyObject *const_str_plain_base_rule;
static PyObject *const_tuple_str_digest_0e9a49b0af203d827fbb4f6fc6ff70a7_tuple;
extern PyObject *const_str_plain_re;
static PyObject *const_str_plain_function_start_re;
static PyObject *const_str_plain_rule;
extern PyObject *const_str_plain_fid;
static PyObject *const_str_digest_931bc6d53df2c6cb0a4dd7ae3c8ea4e5;
static PyObject *const_tuple_str_digest_65d5a8e51899b9f41210d53f6809efbf_tuple;
static PyObject *const_tuple_7c39012341934da59b76a05ece6682a1_tuple;
extern PyObject *const_str_plain_sub;
static PyObject *const_str_digest_0e9a49b0af203d827fbb4f6fc6ff70a7;
extern PyObject *const_str_plain_conv;
extern PyObject *const_str_digest_d786a914848e66cddf4d7481bf6182cb;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_45a162f81fb30dc7638391481a2baa6f;
static PyObject *const_str_digest_d989d7e590a32e7ef3bd61cde7efe1bf;
static PyObject *const_tuple_str_plain_source_str_plain_lines_tuple;
extern PyObject *const_tuple_0224e5d0eb5383ba668e84e6261ccb16_tuple;
static PyObject *const_str_digest_c99cd3c024140182f52468acba8b717b;
static PyObject *const_str_digest_f4126f3e01bad1300c379866d6045fdb;
extern PyObject *const_tuple_str_chr_44_tuple;
extern PyObject *const_str_plain_split;
static PyObject *const_tuple_8cdacc71822067d090c03b03cf8facf6_tuple;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_os;
static PyObject *const_str_plain_allstr;
extern PyObject *const_str_plain_search;
static PyObject *const_str_plain_from_template;
static PyObject *const_str_plain_routine_start_re;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_pos_7;
static PyObject *const_str_digest_511f15f2910de56971c230d19e88fdde;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_lnames;
extern PyObject *const_str_plain_include_src_re;
static PyObject *const_tuple_str_digest_98130d630e8cb035f98bdd50e0630faf_str_chr_60_tuple;
extern PyObject *const_str_plain_group;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_resolve_includes;
extern PyObject *const_str_plain_unique_key;
extern PyObject *const_str_digest_f6ada9e69ea06a56bd534c582594500f;
static PyObject *const_str_plain__special_names;
static PyObject *const_str_digest_db6b630af1ef59763a37df0f95a79b23;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_plain_lines;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_digest_82952138ca590e2eca33a8e119932f12;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_spanlist;
static PyObject *const_tuple_str_digest_e026170ece6f790480ca7ac83857304f_str_chr_44_tuple;
extern PyObject *const_str_plain_rules;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_str_plain_index_tuple;
static PyObject *const_str_digest_b2ec70d4b609a03718038bd5abfdbdb7;
extern PyObject *const_str_plain_path;
static PyObject *const_str_digest_c0c3759da123e387798315e75d2fed70;
static PyObject *const_str_digest_a257c704909e3224d8cccf40d6fbee3b;
static PyObject *const_str_plain_find_repl_patterns;
extern PyObject *const_str_plain_num;
static PyObject *const_str_digest_65d5a8e51899b9f41210d53f6809efbf;
static PyObject *const_tuple_str_digest_628a1a8ecfa32c3914e16d609aa8b6f0_tuple;
extern PyObject *const_str_plain_name;
static PyObject *const_str_digest_1b1371708b8b3997a3d12590d095a3c8;
extern PyObject *const_str_plain_I;
static PyObject *const_str_digest_628a1a8ecfa32c3914e16d609aa8b6f0;
static PyObject *const_tuple_1e44ebdb72545d52f70ba0a102927456_tuple;
static PyObject *const_str_plain_numsubs;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_isfile;
static PyObject *const_str_plain_item_re;
static PyObject *const_tuple_0c466890acbe55763aba1843ca08c964_tuple;
extern PyObject *const_str_plain_rep;
extern PyObject *const_str_plain_substr;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_l;
static PyObject *const_str_plain_thelist;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_d;
static PyObject *const_tuple_1196920a66b602f1627aa8378e32606d_tuple;
static PyObject *const_tuple_c2d21aac1458e3f4afe4d58fb2570ae8_tuple;
static PyObject *const_tuple_c015f4d79f89b3376fbe0493846f2917_tuple;
static PyObject *const_tuple_str_digest_d989d7e590a32e7ef3bd61cde7efe1bf_str_chr_62_tuple;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_named_re;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_match;
static PyObject *const_str_plain_list_re;
static PyObject *const_str_digest_99896917694049dbebf87f41bbd5b94d;
static PyObject *const_tuple_str_plain_mobj_str_plain_name_str_plain_rules_str_plain_k_tuple;
extern PyObject *const_str_plain_struct;
static PyObject *const_str_plain_namerepl;
extern PyObject *const_str_chr_62;
static PyObject *const_str_digest_74e63e28199cf88fc2673c2514464c94;
extern PyObject *const_str_chr_60;
static PyObject *const_str_plain_routine_end_re;
extern PyObject *const_str_plain_done;
extern PyObject *const_str_plain_names;
static PyObject *const_str_digest_a189f1a2b6d72417f39022c9e60fc148;
static PyObject *const_str_digest_499ccd52313f1ebf87885cce87299eef;
extern PyObject *const_str_plain_repl;
extern PyObject *const_str_plain_newkey;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain_findall;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_reps;
extern PyObject *const_str_plain_print;
static PyObject *const_tuple_36364c158a39572294a5f29d2e89e9e7_tuple;
extern PyObject *const_str_plain_parse_structure;
extern PyObject *const_tuple_str_plain___tuple;
extern PyObject *const_str_plain_fn;
extern PyObject *const_str_plain_division;
static PyObject *const_tuple_str_digest_99896917694049dbebf87f41bbd5b94d_tuple;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_template_re;
static PyObject *const_str_digest_a652547f3ebf25e876cf84911f3efe7b;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_newline;
static PyObject *const_str_plain_writestr;
extern PyObject *const_str_plain_oldend;
static PyObject *const_str_plain_listrepl;
extern PyObject *const_str_plain_rfind;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_source;
static PyObject *const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_1b29e6e829705e24321d53a222c7af37 = UNSTREAM_STRING( &constant_bin[ 649572 ], 5, 0 );
    const_str_digest_98130d630e8cb035f98bdd50e0630faf = UNSTREAM_STRING( &constant_bin[ 649577 ], 11, 0 );
    const_str_plain_template_name_re = UNSTREAM_STRING( &constant_bin[ 649588 ], 16, 1 );
    const_tuple_str_digest_b121fb20072b3e91bf01df23dab6d0c4_tuple = PyTuple_New( 1 );
    const_str_digest_b121fb20072b3e91bf01df23dab6d0c4 = UNSTREAM_STRING( &constant_bin[ 649604 ], 21, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b121fb20072b3e91bf01df23dab6d0c4_tuple, 0, const_str_digest_b121fb20072b3e91bf01df23dab6d0c4 ); Py_INCREF( const_str_digest_b121fb20072b3e91bf01df23dab6d0c4 );
    const_tuple_str_digest_a189f1a2b6d72417f39022c9e60fc148_tuple = PyTuple_New( 1 );
    const_str_digest_a189f1a2b6d72417f39022c9e60fc148 = UNSTREAM_STRING( &constant_bin[ 649625 ], 20, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a189f1a2b6d72417f39022c9e60fc148_tuple, 0, const_str_digest_a189f1a2b6d72417f39022c9e60fc148 ); Py_INCREF( const_str_digest_a189f1a2b6d72417f39022c9e60fc148 );
    const_str_digest_e026170ece6f790480ca7ac83857304f = UNSTREAM_STRING( &constant_bin[ 649645 ], 7, 0 );
    const_str_digest_4816c680a2be181527582063cf4da995 = UNSTREAM_STRING( &constant_bin[ 649652 ], 28, 0 );
    const_str_plain_expand_sub = UNSTREAM_STRING( &constant_bin[ 649680 ], 10, 1 );
    const_tuple_759be00056c6de2841026467bf2a7b74_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_759be00056c6de2841026467bf2a7b74_tuple, 0, const_str_plain_astr ); Py_INCREF( const_str_plain_astr );
    PyTuple_SET_ITEM( const_tuple_759be00056c6de2841026467bf2a7b74_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_759be00056c6de2841026467bf2a7b74_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_759be00056c6de2841026467bf2a7b74_tuple, 3, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    PyTuple_SET_ITEM( const_tuple_759be00056c6de2841026467bf2a7b74_tuple, 4, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_759be00056c6de2841026467bf2a7b74_tuple, 5, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_759be00056c6de2841026467bf2a7b74_tuple, 6, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    const_str_digest_0fc17a4fb735a9381aa8caf5613abadf = UNSTREAM_STRING( &constant_bin[ 649690 ], 2, 0 );
    const_str_plain_mobj = UNSTREAM_STRING( &constant_bin[ 649692 ], 4, 1 );
    const_str_plain_base_rule = UNSTREAM_STRING( &constant_bin[ 649696 ], 9, 1 );
    const_tuple_str_digest_0e9a49b0af203d827fbb4f6fc6ff70a7_tuple = PyTuple_New( 1 );
    const_str_digest_0e9a49b0af203d827fbb4f6fc6ff70a7 = UNSTREAM_STRING( &constant_bin[ 649705 ], 19, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_0e9a49b0af203d827fbb4f6fc6ff70a7_tuple, 0, const_str_digest_0e9a49b0af203d827fbb4f6fc6ff70a7 ); Py_INCREF( const_str_digest_0e9a49b0af203d827fbb4f6fc6ff70a7 );
    const_str_plain_function_start_re = UNSTREAM_STRING( &constant_bin[ 649724 ], 17, 1 );
    const_str_plain_rule = UNSTREAM_STRING( &constant_bin[ 67256 ], 4, 1 );
    const_str_digest_931bc6d53df2c6cb0a4dd7ae3c8ea4e5 = UNSTREAM_STRING( &constant_bin[ 649741 ], 27, 0 );
    const_tuple_str_digest_65d5a8e51899b9f41210d53f6809efbf_tuple = PyTuple_New( 1 );
    const_str_digest_65d5a8e51899b9f41210d53f6809efbf = UNSTREAM_STRING( &constant_bin[ 649768 ], 31, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_65d5a8e51899b9f41210d53f6809efbf_tuple, 0, const_str_digest_65d5a8e51899b9f41210d53f6809efbf ); Py_INCREF( const_str_digest_65d5a8e51899b9f41210d53f6809efbf );
    const_tuple_7c39012341934da59b76a05ece6682a1_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_7c39012341934da59b76a05ece6682a1_tuple, 0, const_str_plain_astr ); Py_INCREF( const_str_plain_astr );
    PyTuple_SET_ITEM( const_tuple_7c39012341934da59b76a05ece6682a1_tuple, 1, const_str_plain_spanlist ); Py_INCREF( const_str_plain_spanlist );
    PyTuple_SET_ITEM( const_tuple_7c39012341934da59b76a05ece6682a1_tuple, 2, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_7c39012341934da59b76a05ece6682a1_tuple, 3, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_7c39012341934da59b76a05ece6682a1_tuple, 4, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_7c39012341934da59b76a05ece6682a1_tuple, 5, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_7c39012341934da59b76a05ece6682a1_tuple, 6, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    const_str_digest_45a162f81fb30dc7638391481a2baa6f = UNSTREAM_STRING( &constant_bin[ 649799 ], 43, 0 );
    const_str_digest_d989d7e590a32e7ef3bd61cde7efe1bf = UNSTREAM_STRING( &constant_bin[ 649842 ], 12, 0 );
    const_tuple_str_plain_source_str_plain_lines_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_source_str_plain_lines_tuple, 0, const_str_plain_source ); Py_INCREF( const_str_plain_source );
    PyTuple_SET_ITEM( const_tuple_str_plain_source_str_plain_lines_tuple, 1, const_str_plain_lines ); Py_INCREF( const_str_plain_lines );
    const_str_digest_c99cd3c024140182f52468acba8b717b = UNSTREAM_STRING( &constant_bin[ 649854 ], 7, 0 );
    const_str_digest_f4126f3e01bad1300c379866d6045fdb = UNSTREAM_STRING( &constant_bin[ 649861 ], 2, 0 );
    const_tuple_8cdacc71822067d090c03b03cf8facf6_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_8cdacc71822067d090c03b03cf8facf6_tuple, 0, const_str_plain_astr ); Py_INCREF( const_str_plain_astr );
    PyTuple_SET_ITEM( const_tuple_8cdacc71822067d090c03b03cf8facf6_tuple, 1, const_str_plain_reps ); Py_INCREF( const_str_plain_reps );
    PyTuple_SET_ITEM( const_tuple_8cdacc71822067d090c03b03cf8facf6_tuple, 2, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    PyTuple_SET_ITEM( const_tuple_8cdacc71822067d090c03b03cf8facf6_tuple, 3, const_str_plain_rep ); Py_INCREF( const_str_plain_rep );
    PyTuple_SET_ITEM( const_tuple_8cdacc71822067d090c03b03cf8facf6_tuple, 4, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_8cdacc71822067d090c03b03cf8facf6_tuple, 5, const_str_plain_repl ); Py_INCREF( const_str_plain_repl );
    const_str_plain_thelist = UNSTREAM_STRING( &constant_bin[ 649863 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_8cdacc71822067d090c03b03cf8facf6_tuple, 6, const_str_plain_thelist ); Py_INCREF( const_str_plain_thelist );
    const_str_plain_allstr = UNSTREAM_STRING( &constant_bin[ 649870 ], 6, 1 );
    const_str_plain_from_template = UNSTREAM_STRING( &constant_bin[ 617409 ], 13, 1 );
    const_str_plain_routine_start_re = UNSTREAM_STRING( &constant_bin[ 649876 ], 16, 1 );
    const_str_digest_511f15f2910de56971c230d19e88fdde = UNSTREAM_STRING( &constant_bin[ 649892 ], 40, 0 );
    const_str_plain_lnames = UNSTREAM_STRING( &constant_bin[ 649932 ], 6, 1 );
    const_tuple_str_digest_98130d630e8cb035f98bdd50e0630faf_str_chr_60_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_98130d630e8cb035f98bdd50e0630faf_str_chr_60_tuple, 0, const_str_digest_98130d630e8cb035f98bdd50e0630faf ); Py_INCREF( const_str_digest_98130d630e8cb035f98bdd50e0630faf );
    PyTuple_SET_ITEM( const_tuple_str_digest_98130d630e8cb035f98bdd50e0630faf_str_chr_60_tuple, 1, const_str_chr_60 ); Py_INCREF( const_str_chr_60 );
    const_str_plain__special_names = UNSTREAM_STRING( &constant_bin[ 649938 ], 14, 1 );
    const_str_digest_db6b630af1ef59763a37df0f95a79b23 = UNSTREAM_STRING( &constant_bin[ 649952 ], 72, 0 );
    const_str_digest_82952138ca590e2eca33a8e119932f12 = UNSTREAM_STRING( &constant_bin[ 650024 ], 57, 0 );
    const_tuple_str_digest_e026170ece6f790480ca7ac83857304f_str_chr_44_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_e026170ece6f790480ca7ac83857304f_str_chr_44_tuple, 0, const_str_digest_e026170ece6f790480ca7ac83857304f ); Py_INCREF( const_str_digest_e026170ece6f790480ca7ac83857304f );
    PyTuple_SET_ITEM( const_tuple_str_digest_e026170ece6f790480ca7ac83857304f_str_chr_44_tuple, 1, const_str_chr_44 ); Py_INCREF( const_str_chr_44 );
    const_tuple_str_plain_index_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_index_tuple, 0, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    const_str_digest_b2ec70d4b609a03718038bd5abfdbdb7 = UNSTREAM_STRING( &constant_bin[ 650081 ], 50, 0 );
    const_str_digest_c0c3759da123e387798315e75d2fed70 = UNSTREAM_STRING( &constant_bin[ 649676 ], 4, 0 );
    const_str_digest_a257c704909e3224d8cccf40d6fbee3b = UNSTREAM_STRING( &constant_bin[ 650131 ], 63, 0 );
    const_str_plain_find_repl_patterns = UNSTREAM_STRING( &constant_bin[ 650194 ], 18, 1 );
    const_tuple_str_digest_628a1a8ecfa32c3914e16d609aa8b6f0_tuple = PyTuple_New( 1 );
    const_str_digest_628a1a8ecfa32c3914e16d609aa8b6f0 = UNSTREAM_STRING( &constant_bin[ 650212 ], 15, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_628a1a8ecfa32c3914e16d609aa8b6f0_tuple, 0, const_str_digest_628a1a8ecfa32c3914e16d609aa8b6f0 ); Py_INCREF( const_str_digest_628a1a8ecfa32c3914e16d609aa8b6f0 );
    const_str_digest_1b1371708b8b3997a3d12590d095a3c8 = UNSTREAM_STRING( &constant_bin[ 650227 ], 4, 0 );
    const_tuple_1e44ebdb72545d52f70ba0a102927456_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_1e44ebdb72545d52f70ba0a102927456_tuple, 0, const_str_digest_0fc17a4fb735a9381aa8caf5613abadf ); Py_INCREF( const_str_digest_0fc17a4fb735a9381aa8caf5613abadf );
    PyTuple_SET_ITEM( const_tuple_1e44ebdb72545d52f70ba0a102927456_tuple, 1, const_str_digest_98130d630e8cb035f98bdd50e0630faf ); Py_INCREF( const_str_digest_98130d630e8cb035f98bdd50e0630faf );
    const_str_plain_numsubs = UNSTREAM_STRING( &constant_bin[ 650231 ], 7, 1 );
    const_str_plain_item_re = UNSTREAM_STRING( &constant_bin[ 650238 ], 7, 1 );
    const_tuple_0c466890acbe55763aba1843ca08c964_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0c466890acbe55763aba1843ca08c964_tuple, 0, const_str_plain_adict ); Py_INCREF( const_str_plain_adict );
    PyTuple_SET_ITEM( const_tuple_0c466890acbe55763aba1843ca08c964_tuple, 1, const_str_plain_allkeys ); Py_INCREF( const_str_plain_allkeys );
    PyTuple_SET_ITEM( const_tuple_0c466890acbe55763aba1843ca08c964_tuple, 2, const_str_plain_done ); Py_INCREF( const_str_plain_done );
    PyTuple_SET_ITEM( const_tuple_0c466890acbe55763aba1843ca08c964_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_0c466890acbe55763aba1843ca08c964_tuple, 4, const_str_plain_newkey ); Py_INCREF( const_str_plain_newkey );
    const_tuple_1196920a66b602f1627aa8378e32606d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_1196920a66b602f1627aa8378e32606d_tuple, 0, const_str_plain_allstr ); Py_INCREF( const_str_plain_allstr );
    PyTuple_SET_ITEM( const_tuple_1196920a66b602f1627aa8378e32606d_tuple, 1, const_str_plain_newstr ); Py_INCREF( const_str_plain_newstr );
    const_str_plain_writestr = UNSTREAM_STRING( &constant_bin[ 650245 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_1196920a66b602f1627aa8378e32606d_tuple, 2, const_str_plain_writestr ); Py_INCREF( const_str_plain_writestr );
    PyTuple_SET_ITEM( const_tuple_1196920a66b602f1627aa8378e32606d_tuple, 3, const_str_plain_struct ); Py_INCREF( const_str_plain_struct );
    PyTuple_SET_ITEM( const_tuple_1196920a66b602f1627aa8378e32606d_tuple, 4, const_str_plain_oldend ); Py_INCREF( const_str_plain_oldend );
    PyTuple_SET_ITEM( const_tuple_1196920a66b602f1627aa8378e32606d_tuple, 5, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    PyTuple_SET_ITEM( const_tuple_1196920a66b602f1627aa8378e32606d_tuple, 6, const_str_plain_sub ); Py_INCREF( const_str_plain_sub );
    const_tuple_c2d21aac1458e3f4afe4d58fb2570ae8_tuple = PyTuple_New( 2 );
    const_str_digest_74e63e28199cf88fc2673c2514464c94 = UNSTREAM_STRING( &constant_bin[ 650253 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_c2d21aac1458e3f4afe4d58fb2570ae8_tuple, 0, const_str_digest_74e63e28199cf88fc2673c2514464c94 ); Py_INCREF( const_str_digest_74e63e28199cf88fc2673c2514464c94 );
    PyTuple_SET_ITEM( const_tuple_c2d21aac1458e3f4afe4d58fb2570ae8_tuple, 1, const_str_digest_e026170ece6f790480ca7ac83857304f ); Py_INCREF( const_str_digest_e026170ece6f790480ca7ac83857304f );
    const_tuple_c015f4d79f89b3376fbe0493846f2917_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c015f4d79f89b3376fbe0493846f2917_tuple, 0, const_str_plain_mobj ); Py_INCREF( const_str_plain_mobj );
    PyTuple_SET_ITEM( const_tuple_c015f4d79f89b3376fbe0493846f2917_tuple, 1, const_str_plain_thelist ); Py_INCREF( const_str_plain_thelist );
    PyTuple_SET_ITEM( const_tuple_c015f4d79f89b3376fbe0493846f2917_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_c015f4d79f89b3376fbe0493846f2917_tuple, 3, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_c015f4d79f89b3376fbe0493846f2917_tuple, 4, const_str_plain_lnames ); Py_INCREF( const_str_plain_lnames );
    const_tuple_str_digest_d989d7e590a32e7ef3bd61cde7efe1bf_str_chr_62_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d989d7e590a32e7ef3bd61cde7efe1bf_str_chr_62_tuple, 0, const_str_digest_d989d7e590a32e7ef3bd61cde7efe1bf ); Py_INCREF( const_str_digest_d989d7e590a32e7ef3bd61cde7efe1bf );
    PyTuple_SET_ITEM( const_tuple_str_digest_d989d7e590a32e7ef3bd61cde7efe1bf_str_chr_62_tuple, 1, const_str_chr_62 ); Py_INCREF( const_str_chr_62 );
    const_str_plain_list_re = UNSTREAM_STRING( &constant_bin[ 650255 ], 7, 1 );
    const_str_digest_99896917694049dbebf87f41bbd5b94d = UNSTREAM_STRING( &constant_bin[ 650262 ], 255, 0 );
    const_tuple_str_plain_mobj_str_plain_name_str_plain_rules_str_plain_k_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_mobj_str_plain_name_str_plain_rules_str_plain_k_tuple, 0, const_str_plain_mobj ); Py_INCREF( const_str_plain_mobj );
    PyTuple_SET_ITEM( const_tuple_str_plain_mobj_str_plain_name_str_plain_rules_str_plain_k_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_mobj_str_plain_name_str_plain_rules_str_plain_k_tuple, 2, const_str_plain_rules ); Py_INCREF( const_str_plain_rules );
    PyTuple_SET_ITEM( const_tuple_str_plain_mobj_str_plain_name_str_plain_rules_str_plain_k_tuple, 3, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_str_plain_namerepl = UNSTREAM_STRING( &constant_bin[ 650517 ], 8, 1 );
    const_str_plain_routine_end_re = UNSTREAM_STRING( &constant_bin[ 650525 ], 14, 1 );
    const_str_digest_499ccd52313f1ebf87885cce87299eef = UNSTREAM_STRING( &constant_bin[ 650539 ], 1478, 0 );
    const_tuple_36364c158a39572294a5f29d2e89e9e7_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_36364c158a39572294a5f29d2e89e9e7_tuple, 0, const_str_digest_f4126f3e01bad1300c379866d6045fdb ); Py_INCREF( const_str_digest_f4126f3e01bad1300c379866d6045fdb );
    PyTuple_SET_ITEM( const_tuple_36364c158a39572294a5f29d2e89e9e7_tuple, 1, const_str_digest_d989d7e590a32e7ef3bd61cde7efe1bf ); Py_INCREF( const_str_digest_d989d7e590a32e7ef3bd61cde7efe1bf );
    const_tuple_str_digest_99896917694049dbebf87f41bbd5b94d_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_99896917694049dbebf87f41bbd5b94d_tuple, 0, const_str_digest_99896917694049dbebf87f41bbd5b94d ); Py_INCREF( const_str_digest_99896917694049dbebf87f41bbd5b94d );
    const_str_plain_template_re = UNSTREAM_STRING( &constant_bin[ 652017 ], 11, 1 );
    const_str_digest_a652547f3ebf25e876cf84911f3efe7b = UNSTREAM_STRING( &constant_bin[ 652028 ], 145, 0 );
    const_str_plain_listrepl = UNSTREAM_STRING( &constant_bin[ 652173 ], 8, 1 );
    const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 0, const_str_plain_substr ); Py_INCREF( const_str_plain_substr );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 1, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 2, const_str_plain_lnames ); Py_INCREF( const_str_plain_lnames );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 3, const_str_plain_listrepl ); Py_INCREF( const_str_plain_listrepl );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 4, const_str_plain_numsubs ); Py_INCREF( const_str_plain_numsubs );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 5, const_str_plain_base_rule ); Py_INCREF( const_str_plain_base_rule );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 6, const_str_plain_rules ); Py_INCREF( const_str_plain_rules );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 7, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 8, const_str_plain_thelist ); Py_INCREF( const_str_plain_thelist );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 9, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 10, const_str_plain_rule ); Py_INCREF( const_str_plain_rule );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 11, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 12, const_str_plain_namerepl ); Py_INCREF( const_str_plain_namerepl );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 13, const_str_plain_newstr ); Py_INCREF( const_str_plain_newstr );
    PyTuple_SET_ITEM( const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 14, const_str_plain_k ); Py_INCREF( const_str_plain_k );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$distutils$from_template( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_053f048c0ac63ab0fdc2ce36a2a3adfd;
static PyCodeObject *codeobj_bc75a5e66d29f135bbbeb6390458e4f2;
static PyCodeObject *codeobj_8f1eb0e53bb2baf5c96328d82c15bd49;
static PyCodeObject *codeobj_6e46dcba2cc813fb54c61578c03a8e23;
static PyCodeObject *codeobj_bb4fcdc817f8a668c7e5120d20a16093;
static PyCodeObject *codeobj_b82141e529642dd0be5196e2d7921e79;
static PyCodeObject *codeobj_4aa83e47527a74782d3301e057f3512c;
static PyCodeObject *codeobj_9d1653c4a861af8bd287ab422217cb59;
static PyCodeObject *codeobj_6ac94bf7925a81390e79e17b96b5a54b;
static PyCodeObject *codeobj_120d8dbad794a86159d44d598ee337ff;
static PyCodeObject *codeobj_1d6be7b3323c428ad0a46fde5938aa8f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_a257c704909e3224d8cccf40d6fbee3b );
    codeobj_053f048c0ac63ab0fdc2ce36a2a3adfd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_conv, 102, const_tuple_759be00056c6de2841026467bf2a7b74_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bc75a5e66d29f135bbbeb6390458e4f2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_expand_sub, 127, const_tuple_a370ac42301b70cb886eb055ee8dcabc_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8f1eb0e53bb2baf5c96328d82c15bd49 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_find_repl_patterns, 91, const_tuple_8cdacc71822067d090c03b03cf8facf6_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6e46dcba2cc813fb54c61578c03a8e23 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_template, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bb4fcdc817f8a668c7e5120d20a16093 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_listrepl, 133, const_tuple_c015f4d79f89b3376fbe0493846f2917_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b82141e529642dd0be5196e2d7921e79 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_namerepl, 175, const_tuple_str_plain_mobj_str_plain_name_str_plain_rules_str_plain_k_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4aa83e47527a74782d3301e057f3512c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_structure, 60, const_tuple_7c39012341934da59b76a05ece6682a1_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9d1653c4a861af8bd287ab422217cb59 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_process_file, 227, const_tuple_str_plain_source_str_plain_lines_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6ac94bf7925a81390e79e17b96b5a54b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_process_str, 187, const_tuple_1196920a66b602f1627aa8378e32606d_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_120d8dbad794a86159d44d598ee337ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_includes, 207, const_tuple_0224e5d0eb5383ba668e84e6261ccb16_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1d6be7b3323c428ad0a46fde5938aa8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_unique_key, 112, const_tuple_0c466890acbe55763aba1843ca08c964_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_listrepl_of_function_5_expand_sub_of_numpy$distutils$from_template( PyCellObject *closure_lnames );


static PyObject *MAKE_FUNCTION_function_1_parse_structure_of_numpy$distutils$from_template(  );


static PyObject *MAKE_FUNCTION_function_2_find_repl_patterns_of_numpy$distutils$from_template(  );


static PyObject *MAKE_FUNCTION_function_2_namerepl_of_function_5_expand_sub_of_numpy$distutils$from_template( PyCellObject *closure_k, PyCellObject *closure_rules );


static PyObject *MAKE_FUNCTION_function_3_conv_of_numpy$distutils$from_template(  );


static PyObject *MAKE_FUNCTION_function_4_unique_key_of_numpy$distutils$from_template(  );


static PyObject *MAKE_FUNCTION_function_5_expand_sub_of_numpy$distutils$from_template(  );


static PyObject *MAKE_FUNCTION_function_6_process_str_of_numpy$distutils$from_template(  );


static PyObject *MAKE_FUNCTION_function_7_resolve_includes_of_numpy$distutils$from_template(  );


static PyObject *MAKE_FUNCTION_function_8_process_file_of_numpy$distutils$from_template(  );


// The module function definitions.
static PyObject *impl_function_1_parse_structure_of_numpy$distutils$from_template( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_astr = python_pars[ 0 ];
    PyObject *var_spanlist = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_m = NULL;
    PyObject *var_start = NULL;
    PyObject *var_i = NULL;
    PyObject *var_end = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cmp_Eq_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_spanlist == NULL );
    var_spanlist = tmp_assign_source_1;

    tmp_assign_source_2 = const_int_0;
    assert( var_ind == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_ind = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4aa83e47527a74782d3301e057f3512c, module_numpy$distutils$from_template );
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
    loop_start_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_routine_start_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_routine_start_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "routine_start_re" );
        exception_tb = NULL;

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_search );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_astr;

    tmp_args_element_name_2 = var_ind;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ind" );
        exception_tb = NULL;

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_m;
        var_m = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_m;

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
    goto loop_end_1;
    branch_no_1:;
    tmp_source_name_2 = var_m;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_start );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 72;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_start;
        var_start = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_function_start_re );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_function_start_re );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "function_start_re" );
        exception_tb = NULL;

        exception_lineno = 73;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_match );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_astr;

    tmp_args_element_name_4 = var_start;

    tmp_source_name_4 = var_m;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_end );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 73;
    tmp_args_element_name_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 73;
        goto frame_exception_exit_1;
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
    loop_start_2:;
    tmp_source_name_5 = par_astr;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_rfind );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = const_str_newline;
    tmp_args_element_name_7 = var_ind;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ind" );
        exception_tb = NULL;

        exception_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_start;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;

        exception_lineno = 75;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_i;

    tmp_compare_right_2 = const_int_neg_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    goto loop_end_2;
    branch_no_3:;
    tmp_assign_source_6 = var_i;

    {
        PyObject *old = var_start;
        var_start = tmp_assign_source_6;
        Py_INCREF( var_start );
        Py_XDECREF( old );
    }

    tmp_slice_source_1 = par_astr;

    tmp_slice_lower_1 = var_i;

    tmp_left_name_1 = var_i;

    tmp_right_name_1 = const_int_pos_7;
    tmp_slice_upper_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_3 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_str_digest_c99cd3c024140182f52468acba8b717b;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    goto loop_end_2;
    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    branch_no_2:;
    tmp_left_name_2 = var_start;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;

        exception_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_7 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    var_start = tmp_assign_source_7;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_routine_end_re );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_routine_end_re );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "routine_end_re" );
        exception_tb = NULL;

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_search );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = par_astr;

    tmp_source_name_7 = var_m;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_end );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 82;
    tmp_args_element_name_10 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    Py_DECREF( tmp_called_name_7 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_m;
        assert( old != NULL );
        var_m = tmp_assign_source_8;
        Py_DECREF( old );
    }

    // Tried code:
    tmp_and_left_value_1 = var_m;

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
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
    tmp_source_name_8 = var_m;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_end );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 83;
    tmp_left_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    Py_DECREF( tmp_called_name_8 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_2;
    }
    tmp_right_name_3 = const_int_pos_1;
    tmp_and_right_value_1 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_2;
    }
    tmp_or_left_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_or_left_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 83;
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_len_arg_1 = par_astr;

    tmp_or_right_value_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_2;
    }
    tmp_assign_source_9 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_9 = tmp_or_left_value_1;
    or_end_1:;
    {
        PyObject *old = tmp_assign_unpack_1__assign_source;
        tmp_assign_unpack_1__assign_source = tmp_assign_source_9;
        Py_XDECREF( old );
    }

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

    Py_XDECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_10 = tmp_assign_unpack_1__assign_source;

    {
        PyObject *old = var_ind;
        var_ind = tmp_assign_source_10;
        Py_INCREF( var_ind );
        Py_XDECREF( old );
    }

    tmp_assign_source_11 = tmp_assign_unpack_1__assign_source;

    {
        PyObject *old = var_end;
        var_end = tmp_assign_source_11;
        Py_INCREF( var_end );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    tmp_source_name_9 = var_spanlist;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_start;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_11, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_end;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_11, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

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
            if ( par_astr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_astr,
                    par_astr
                );

                assert( res == 0 );
            }

            if ( var_spanlist )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_spanlist,
                    var_spanlist
                );

                assert( res == 0 );
            }

            if ( var_ind )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ind,
                    var_ind
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

            if ( var_start )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_start,
                    var_start
                );

                assert( res == 0 );
            }

            if ( var_i )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_i,
                    var_i
                );

                assert( res == 0 );
            }

            if ( var_end )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_end,
                    var_end
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

    tmp_return_value = var_spanlist;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_parse_structure_of_numpy$distutils$from_template );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_astr );
    Py_DECREF( par_astr );
    par_astr = NULL;

    CHECK_OBJECT( (PyObject *)var_spanlist );
    Py_DECREF( var_spanlist );
    var_spanlist = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

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

    CHECK_OBJECT( (PyObject *)par_astr );
    Py_DECREF( par_astr );
    par_astr = NULL;

    CHECK_OBJECT( (PyObject *)var_spanlist );
    Py_DECREF( var_spanlist );
    var_spanlist = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_parse_structure_of_numpy$distutils$from_template );
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


static PyObject *impl_function_2_find_repl_patterns_of_numpy$distutils$from_template( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_astr = python_pars[ 0 ];
    PyObject *var_reps = NULL;
    PyObject *var_names = NULL;
    PyObject *var_rep = NULL;
    PyObject *var_name = NULL;
    PyObject *var_repl = NULL;
    PyObject *var_thelist = NULL;
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
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8f1eb0e53bb2baf5c96328d82c15bd49, module_numpy$distutils$from_template );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_named_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_named_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "named_re" );
        exception_tb = NULL;

        exception_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_findall );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_astr;

    frame_function->f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    assert( var_reps == NULL );
    var_reps = tmp_assign_source_1;

    tmp_assign_source_2 = PyDict_New();
    assert( var_names == NULL );
    var_names = tmp_assign_source_2;

    tmp_iter_arg_1 = var_reps;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 94;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_rep;
        var_rep = tmp_assign_source_5;
        Py_INCREF( var_rep );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_1 = var_rep;

    tmp_subscript_name_1 = const_int_0;
    tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto try_except_handler_2;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_strip );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 95;
    tmp_or_left_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto try_except_handler_2;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 95;
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_unique_key );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique_key );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unique_key" );
        exception_tb = NULL;

        exception_lineno = 95;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = var_names;

    frame_function->f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto try_except_handler_2;
    }
    tmp_assign_source_6 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_6 = tmp_or_left_value_1;
    or_end_1:;
    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_2 = var_rep;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_2;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_replace );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 96;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_c2d21aac1458e3f4afe4d58fb2570ae8_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_repl;
        var_repl = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_conv );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_conv );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "conv" );
        exception_tb = NULL;

        exception_lineno = 97;
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = var_repl;

    frame_function->f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_thelist;
        var_thelist = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_dictset_value = var_thelist;

    tmp_dictset_dict = var_names;

    tmp_dictset_key = var_name;

    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
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
            if ( par_astr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_astr,
                    par_astr
                );

                assert( res == 0 );
            }

            if ( var_reps )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_reps,
                    var_reps
                );

                assert( res == 0 );
            }

            if ( var_names )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_names,
                    var_names
                );

                assert( res == 0 );
            }

            if ( var_rep )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rep,
                    var_rep
                );

                assert( res == 0 );
            }

            if ( var_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    var_name
                );

                assert( res == 0 );
            }

            if ( var_repl )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_repl,
                    var_repl
                );

                assert( res == 0 );
            }

            if ( var_thelist )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_thelist,
                    var_thelist
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

    tmp_return_value = var_names;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_find_repl_patterns_of_numpy$distutils$from_template );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_astr );
    Py_DECREF( par_astr );
    par_astr = NULL;

    CHECK_OBJECT( (PyObject *)var_reps );
    Py_DECREF( var_reps );
    var_reps = NULL;

    CHECK_OBJECT( (PyObject *)var_names );
    Py_DECREF( var_names );
    var_names = NULL;

    Py_XDECREF( var_rep );
    var_rep = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_repl );
    var_repl = NULL;

    Py_XDECREF( var_thelist );
    var_thelist = NULL;

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

    CHECK_OBJECT( (PyObject *)par_astr );
    Py_DECREF( par_astr );
    par_astr = NULL;

    Py_XDECREF( var_reps );
    var_reps = NULL;

    Py_XDECREF( var_names );
    var_names = NULL;

    Py_XDECREF( var_rep );
    var_rep = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_repl );
    var_repl = NULL;

    Py_XDECREF( var_thelist );
    var_thelist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_find_repl_patterns_of_numpy$distutils$from_template );
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


static PyObject *impl_function_3_conv_of_numpy$distutils$from_template( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_astr = python_pars[ 0 ];
    PyObject *var_b = NULL;
    PyObject *var_x = NULL;
    PyObject *var_l = NULL;
    PyObject *var_i = NULL;
    PyObject *var_m = NULL;
    PyObject *var_j = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_053f048c0ac63ab0fdc2ce36a2a3adfd, module_numpy$distutils$from_template );
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
    tmp_source_name_1 = par_astr;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_split );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 103;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    assert( var_b == NULL );
    var_b = tmp_assign_source_1;

    // Tried code:
    tmp_iter_arg_1 = var_b;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_4;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 104;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_6;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_source_name_2 = var_x;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_strip );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto try_except_handler_2;
    }
    PyThreadState_GET()->frame->f_lineno = 104;
    tmp_append_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_conv_of_numpy$distutils$from_template );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_conv_of_numpy$distutils$from_template );
    return NULL;
    outline_result_1:;
    tmp_assign_source_2 = tmp_outline_return_value_1;
    assert( var_l == NULL );
    var_l = tmp_assign_source_2;

    tmp_len_arg_1 = var_l;

    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 105;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_9;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_item_re );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_item_re );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "item_re" );
        exception_tb = NULL;

        exception_lineno = 106;
        goto try_except_handler_3;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_match );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto try_except_handler_3;
    }
    tmp_subscribed_name_1 = var_l;

    tmp_subscript_name_1 = var_i;

    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 106;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_m;
        var_m = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = var_m;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        goto try_except_handler_3;
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
    tmp_source_name_4 = var_m;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_group );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 108;
    tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_plain_index_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto try_except_handler_3;
    }
    tmp_assign_source_11 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_j;
        var_j = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_2 = var_l;

    tmp_subscript_name_2 = var_j;

    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto try_except_handler_3;
    }
    tmp_ass_subscribed_1 = var_l;

    tmp_ass_subscript_1 = var_i;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto try_except_handler_3;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
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
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_5 = const_str_chr_44;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_2 = var_l;

    frame_function->f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

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
            if ( par_astr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_astr,
                    par_astr
                );

                assert( res == 0 );
            }

            if ( var_b )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_b,
                    var_b
                );

                assert( res == 0 );
            }

            if ( var_x )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_x,
                    var_x
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

            if ( var_i )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_i,
                    var_i
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

            if ( var_j )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_j,
                    var_j
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_conv_of_numpy$distutils$from_template );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_astr );
    Py_DECREF( par_astr );
    par_astr = NULL;

    CHECK_OBJECT( (PyObject *)var_b );
    Py_DECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_l );
    Py_DECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_astr );
    Py_DECREF( par_astr );
    par_astr = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_conv_of_numpy$distutils$from_template );
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


static PyObject *impl_function_4_unique_key_of_numpy$distutils$from_template( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_adict = python_pars[ 0 ];
    PyObject *var_allkeys = NULL;
    PyObject *var_done = NULL;
    PyObject *var_n = NULL;
    PyObject *var_newkey = NULL;
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_list_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1d6be7b3323c428ad0a46fde5938aa8f, module_numpy$distutils$from_template );
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
    tmp_source_name_1 = par_adict;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 114;
    tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto frame_exception_exit_1;
    }
    assert( var_allkeys == NULL );
    var_allkeys = tmp_assign_source_1;

    tmp_assign_source_2 = Py_False;
    assert( var_done == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_done = tmp_assign_source_2;

    tmp_assign_source_3 = const_int_pos_1;
    assert( var_n == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_n = tmp_assign_source_3;

    loop_start_1:;
    tmp_cond_value_1 = var_done;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "done" );
        exception_tb = NULL;

        exception_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
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
    goto loop_end_1;
    branch_no_1:;
    tmp_left_name_1 = const_str_digest_1b29e6e829705e24321d53a222c7af37;
    tmp_right_name_1 = var_n;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_newkey;
        var_newkey = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_newkey;

    tmp_compare_right_1 = var_allkeys;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_2 = var_n;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_5 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    var_n = tmp_assign_source_5;

    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_6 = Py_True;
    {
        PyObject *old = var_done;
        var_done = tmp_assign_source_6;
        Py_INCREF( var_done );
        Py_XDECREF( old );
    }

    branch_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = var_newkey;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newkey" );
        exception_tb = NULL;

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

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
            if ( par_adict )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_adict,
                    par_adict
                );

                assert( res == 0 );
            }

            if ( var_allkeys )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_allkeys,
                    var_allkeys
                );

                assert( res == 0 );
            }

            if ( var_done )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_done,
                    var_done
                );

                assert( res == 0 );
            }

            if ( var_n )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n,
                    var_n
                );

                assert( res == 0 );
            }

            if ( var_newkey )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_newkey,
                    var_newkey
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_4_unique_key_of_numpy$distutils$from_template );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_adict );
    Py_DECREF( par_adict );
    par_adict = NULL;

    CHECK_OBJECT( (PyObject *)var_allkeys );
    Py_DECREF( var_allkeys );
    var_allkeys = NULL;

    Py_XDECREF( var_done );
    var_done = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_newkey );
    var_newkey = NULL;

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

    CHECK_OBJECT( (PyObject *)par_adict );
    Py_DECREF( par_adict );
    par_adict = NULL;

    Py_XDECREF( var_allkeys );
    var_allkeys = NULL;

    Py_XDECREF( var_done );
    var_done = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_newkey );
    var_newkey = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_unique_key_of_numpy$distutils$from_template );
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


static PyObject *impl_function_5_expand_sub_of_numpy$distutils$from_template( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_substr = python_pars[ 0 ];
    PyObject *par_names = python_pars[ 1 ];
    PyCellObject *var_lnames = PyCell_EMPTY();
    PyObject *var_listrepl = NULL;
    PyObject *var_numsubs = NULL;
    PyObject *var_base_rule = NULL;
    PyCellObject *var_rules = PyCell_EMPTY();
    PyObject *var_r = NULL;
    PyObject *var_thelist = NULL;
    PyObject *var_i = NULL;
    PyObject *var_rule = NULL;
    PyObject *var_num = NULL;
    PyObject *var_namerepl = NULL;
    PyObject *var_newstr = NULL;
    PyCellObject *var_k = PyCell_EMPTY();
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
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
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bc75a5e66d29f135bbbeb6390458e4f2, module_numpy$distutils$from_template );
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
    tmp_source_name_1 = par_substr;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_replace );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 128;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_36364c158a39572294a5f29d2e89e9e7_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_substr;
        assert( old != NULL );
        par_substr = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_2 = par_substr;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_replace );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 129;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_1e44ebdb72545d52f70ba0a102927456_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_substr;
        assert( old != NULL );
        par_substr = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_find_repl_patterns );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_find_repl_patterns );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "find_repl_patterns" );
        exception_tb = NULL;

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_substr;

    frame_function->f_lineno = 130;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_lnames );
        PyCell_SET( var_lnames, tmp_assign_source_3 );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_named_re );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_named_re );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "named_re" );
        exception_tb = NULL;

        exception_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sub );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_str_digest_1b1371708b8b3997a3d12590d095a3c8;
    tmp_args_element_name_3 = par_substr;

    frame_function->f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_substr;
        assert( old != NULL );
        par_substr = tmp_assign_source_4;
        Py_DECREF( old );
    }

    tmp_assign_source_5 = MAKE_FUNCTION_function_1_listrepl_of_function_5_expand_sub_of_numpy$distutils$from_template( var_lnames );
    assert( var_listrepl == NULL );
    var_listrepl = tmp_assign_source_5;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_list_re );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_re );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "list_re" );
        exception_tb = NULL;

        exception_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sub );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_listrepl;

    tmp_args_element_name_5 = par_substr;

    frame_function->f_lineno = 146;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_substr;
        assert( old != NULL );
        par_substr = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_assign_source_7 = Py_None;
    assert( var_numsubs == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_numsubs = tmp_assign_source_7;

    tmp_assign_source_8 = Py_None;
    assert( var_base_rule == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_base_rule = tmp_assign_source_8;

    tmp_assign_source_9 = PyDict_New();
    {
        PyObject *old = PyCell_GET( var_rules );
        PyCell_SET( var_rules, tmp_assign_source_9 );
        Py_XDECREF( old );
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_template_re );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_template_re );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "template_re" );
        exception_tb = NULL;

        exception_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_findall );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_substr;

    frame_function->f_lineno = 152;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_10;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 152;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_r;
        var_r = tmp_assign_source_12;
        Py_INCREF( var_r );
        Py_XDECREF( old );
    }

    tmp_key_name_1 = var_r;

    tmp_dict_name_1 = PyCell_GET( var_rules );

    if ( tmp_dict_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rules" );
        exception_tb = NULL;

        exception_lineno = 153;
        goto try_except_handler_2;
    }

    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_2;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 0 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_2;
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
    tmp_source_name_6 = PyCell_GET( var_lnames );

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "lnames" );
        exception_tb = NULL;

        exception_lineno = 154;
        goto try_except_handler_2;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_get );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = var_r;

    tmp_source_name_7 = par_names;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_get );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 154;
        goto try_except_handler_2;
    }
    tmp_args_element_name_9 = var_r;

    tmp_args_element_name_10 = Py_None;
    frame_function->f_lineno = 154;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 154;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 154;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_thelist;
        var_thelist = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_thelist;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = const_str_digest_4816c680a2be181527582063cf4da995;
    tmp_right_name_1 = var_r;

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 156;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_2;
    branch_no_2:;
    tmp_compexpr_left_1 = var_r;

    tmp_compexpr_right_1 = par_names;

    tmp_and_left_value_1 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_source_name_8 = var_thelist;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_startswith );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 157;
    tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_plain___tuple, 0 ) );

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto try_except_handler_2;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto try_except_handler_2;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_ass_subvalue_1 = var_thelist;

    tmp_ass_subscribed_1 = par_names;

    tmp_ass_subscript_1 = var_r;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto try_except_handler_2;
    }
    branch_no_3:;
    // Tried code:
    tmp_source_name_9 = var_thelist;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_split );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto try_except_handler_3;
    }
    PyThreadState_GET()->frame->f_lineno = 159;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto try_except_handler_3;
    }
    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_list_contraction_1__$0;
        tmp_list_contraction_1__$0 = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_assign_source_16 = PyList_New( 0 );
    {
        PyObject *old = tmp_list_contraction_1__contraction_result;
        tmp_list_contraction_1__contraction_result = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_1__$0;

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
            PyThreadState_GET()->frame->f_lineno = 159;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_assign_source_18 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_18;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_source_name_10 = var_i;

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_replace );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto try_except_handler_3;
    }
    PyThreadState_GET()->frame->f_lineno = 159;
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_str_digest_e026170ece6f790480ca7ac83857304f_str_chr_44_tuple, 0 ) );

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_5_expand_sub_of_numpy$distutils$from_template );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_expand_sub_of_numpy$distutils$from_template );
    return NULL;
    outline_result_1:;
    tmp_assign_source_14 = tmp_outline_return_value_1;
    {
        PyObject *old = var_rule;
        var_rule = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_len_arg_1 = var_rule;

    tmp_assign_source_19 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_num;
        var_num = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_numsubs;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "numsubs" );
        exception_tb = NULL;

        exception_lineno = 162;
        goto try_except_handler_2;
    }

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_20 = var_num;

    {
        PyObject *old = var_numsubs;
        var_numsubs = tmp_assign_source_20;
        Py_INCREF( var_numsubs );
        Py_XDECREF( old );
    }

    tmp_dictset_value = var_rule;

    tmp_dictset_dict = PyCell_GET( var_rules );

    if ( tmp_dictset_dict == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rules" );
        exception_tb = NULL;

        exception_lineno = 164;
        goto try_except_handler_2;
    }

    tmp_dictset_key = var_r;

    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto try_except_handler_2;
    }
    tmp_assign_source_21 = var_r;

    {
        PyObject *old = var_base_rule;
        var_base_rule = tmp_assign_source_21;
        Py_INCREF( var_base_rule );
        Py_XDECREF( old );
    }

    goto branch_end_4;
    branch_no_4:;
    tmp_compare_left_3 = var_num;

    tmp_compare_right_3 = var_numsubs;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "numsubs" );
        exception_tb = NULL;

        exception_lineno = 166;
        goto try_except_handler_2;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictset_value = var_rule;

    tmp_dictset_dict = PyCell_GET( var_rules );

    if ( tmp_dictset_dict == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rules" );
        exception_tb = NULL;

        exception_lineno = 167;
        goto try_except_handler_2;
    }

    tmp_dictset_key = var_r;

    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto try_except_handler_2;
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_called_name_12 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_12 != NULL );
    tmp_left_name_2 = const_str_digest_db6b630af1ef59763a37df0f95a79b23;
    tmp_right_name_2 = PyTuple_New( 4 );
    tmp_tuple_element_1 = var_base_rule;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "base_rule" );
        exception_tb = NULL;

        exception_lineno = 171;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
    tmp_source_name_11 = const_str_chr_44;
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_join );
    assert( tmp_called_name_13 != NULL );
    tmp_dict_name_2 = PyCell_GET( var_rules );

    if ( tmp_dict_name_2 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rules" );
        exception_tb = NULL;

        exception_lineno = 171;
        goto try_except_handler_2;
    }

    tmp_key_name_2 = var_base_rule;

    if ( tmp_key_name_2 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "base_rule" );
        exception_tb = NULL;

        exception_lineno = 171;
        goto try_except_handler_2;
    }

    tmp_args_element_name_12 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 171;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 171;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_r;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_2, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_thelist;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_2, 3, tmp_tuple_element_1 );
    tmp_args_element_name_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_end_5:;
    branch_end_4:;
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_cond_value_3 = PyCell_GET( var_rules );

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rules" );
        exception_tb = NULL;

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_return_value = par_substr;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_6:;
    tmp_assign_source_22 = MAKE_FUNCTION_function_2_namerepl_of_function_5_expand_sub_of_numpy$distutils$from_template( var_k, var_rules );
    assert( var_namerepl == NULL );
    var_namerepl = tmp_assign_source_22;

    tmp_assign_source_23 = const_str_empty;
    assert( var_newstr == NULL );
    Py_INCREF( tmp_assign_source_23 );
    var_newstr = tmp_assign_source_23;

    tmp_range_arg_1 = var_numsubs;

    if ( tmp_range_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "numsubs" );
        exception_tb = NULL;

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_3 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_24;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_2__for_iterator;

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
            frame_function->f_lineno = 180;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    tmp_assign_source_26 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = PyCell_GET( var_k );
        PyCell_SET( var_k, tmp_assign_source_26 );
        Py_INCREF( tmp_assign_source_26 );
        Py_XDECREF( old );
    }

    tmp_left_name_3 = var_newstr;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newstr" );
        exception_tb = NULL;

        exception_lineno = 181;
        goto try_except_handler_4;
    }

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_template_re );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_template_re );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "template_re" );
        exception_tb = NULL;

        exception_lineno = 181;
        goto try_except_handler_4;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_sub );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto try_except_handler_4;
    }
    tmp_args_element_name_13 = var_namerepl;

    tmp_args_element_name_14 = par_substr;

    frame_function->f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto try_except_handler_4;
    }
    tmp_right_name_4 = const_str_digest_09bc009ffd858aaf58df7e98266d9b89;
    tmp_right_name_3 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto try_except_handler_4;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_27 = tmp_left_name_3;
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto try_except_handler_4;
    }
    var_newstr = tmp_assign_source_27;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_source_name_13 = var_newstr;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newstr" );
        exception_tb = NULL;

        exception_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_replace );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 183;
    tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, &PyTuple_GET_ITEM( const_tuple_str_digest_d989d7e590a32e7ef3bd61cde7efe1bf_str_chr_62_tuple, 0 ) );

    Py_DECREF( tmp_called_name_15 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    tmp_source_name_14 = var_newstr;

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_replace );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 184;
    tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_str_digest_98130d630e8cb035f98bdd50e0630faf_str_chr_60_tuple, 0 ) );

    Py_DECREF( tmp_called_name_16 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_newstr;
        assert( old != NULL );
        var_newstr = tmp_assign_source_29;
        Py_DECREF( old );
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
            if ( par_substr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_substr,
                    par_substr
                );

                assert( res == 0 );
            }

            if ( par_names )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_names,
                    par_names
                );

                assert( res == 0 );
            }

            if ( var_lnames->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lnames,
                    var_lnames->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_listrepl )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_listrepl,
                    var_listrepl
                );

                assert( res == 0 );
            }

            if ( var_numsubs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_numsubs,
                    var_numsubs
                );

                assert( res == 0 );
            }

            if ( var_base_rule )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_base_rule,
                    var_base_rule
                );

                assert( res == 0 );
            }

            if ( var_rules->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rules,
                    var_rules->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_r )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_r,
                    var_r
                );

                assert( res == 0 );
            }

            if ( var_thelist )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_thelist,
                    var_thelist
                );

                assert( res == 0 );
            }

            if ( var_i )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_i,
                    var_i
                );

                assert( res == 0 );
            }

            if ( var_rule )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rule,
                    var_rule
                );

                assert( res == 0 );
            }

            if ( var_num )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_num,
                    var_num
                );

                assert( res == 0 );
            }

            if ( var_namerepl )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_namerepl,
                    var_namerepl
                );

                assert( res == 0 );
            }

            if ( var_newstr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_newstr,
                    var_newstr
                );

                assert( res == 0 );
            }

            if ( var_k->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    var_k->ob_ref
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

    tmp_return_value = var_newstr;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_5_expand_sub_of_numpy$distutils$from_template );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_substr );
    Py_DECREF( par_substr );
    par_substr = NULL;

    CHECK_OBJECT( (PyObject *)par_names );
    Py_DECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)var_lnames );
    Py_DECREF( var_lnames );
    var_lnames = NULL;

    CHECK_OBJECT( (PyObject *)var_listrepl );
    Py_DECREF( var_listrepl );
    var_listrepl = NULL;

    Py_XDECREF( var_numsubs );
    var_numsubs = NULL;

    Py_XDECREF( var_base_rule );
    var_base_rule = NULL;

    CHECK_OBJECT( (PyObject *)var_rules );
    Py_DECREF( var_rules );
    var_rules = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_thelist );
    var_thelist = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_rule );
    var_rule = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_namerepl );
    var_namerepl = NULL;

    Py_XDECREF( var_newstr );
    var_newstr = NULL;

    CHECK_OBJECT( (PyObject *)var_k );
    Py_DECREF( var_k );
    var_k = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_substr );
    Py_DECREF( par_substr );
    par_substr = NULL;

    CHECK_OBJECT( (PyObject *)par_names );
    Py_DECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)var_lnames );
    Py_DECREF( var_lnames );
    var_lnames = NULL;

    Py_XDECREF( var_listrepl );
    var_listrepl = NULL;

    Py_XDECREF( var_numsubs );
    var_numsubs = NULL;

    Py_XDECREF( var_base_rule );
    var_base_rule = NULL;

    CHECK_OBJECT( (PyObject *)var_rules );
    Py_DECREF( var_rules );
    var_rules = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_thelist );
    var_thelist = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_rule );
    var_rule = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_namerepl );
    var_namerepl = NULL;

    Py_XDECREF( var_newstr );
    var_newstr = NULL;

    CHECK_OBJECT( (PyObject *)var_k );
    Py_DECREF( var_k );
    var_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_expand_sub_of_numpy$distutils$from_template );
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


static PyObject *impl_function_1_listrepl_of_function_5_expand_sub_of_numpy$distutils$from_template( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mobj = python_pars[ 0 ];
    PyObject *var_thelist = NULL;
    PyObject *var_name = NULL;
    PyObject *var_key = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bb4fcdc817f8a668c7e5120d20a16093, module_numpy$distutils$from_template );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_conv );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_conv );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "conv" );
        exception_tb = NULL;

        exception_lineno = 134;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_mobj;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_group );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 134;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_replace );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 134;
    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_c2d21aac1458e3f4afe4d58fb2570ae8_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 134;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    assert( var_thelist == NULL );
    var_thelist = tmp_assign_source_1;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_template_name_re );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_template_name_re );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "template_name_re" );
        exception_tb = NULL;

        exception_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_match );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_thelist;

    frame_function->f_lineno = 135;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 135;
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
    tmp_left_name_1 = const_str_digest_c0c3759da123e387798315e75d2fed70;
    tmp_right_name_1 = var_thelist;

    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_assign_source_2 = Py_None;
    assert( var_name == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_name = tmp_assign_source_2;

    tmp_source_name_4 = PyCell_GET( self->m_closure[0] );

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lnames" );
        exception_tb = NULL;

        exception_lineno = 138;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_keys );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 138;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 138;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_5;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lnames" );
        exception_tb = NULL;

        exception_lineno = 139;
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = var_key;

    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        goto try_except_handler_2;
    }
    tmp_compare_right_1 = var_thelist;

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 139;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_6 = var_key;

    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_6;
        Py_INCREF( var_name );
        Py_XDECREF( old );
    }

    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
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

    tmp_compare_left_2 = var_name;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;

        exception_lineno = 141;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_unique_key );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unique_key );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unique_key" );
        exception_tb = NULL;

        exception_lineno = 142;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = PyCell_GET( self->m_closure[0] );

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lnames" );
        exception_tb = NULL;

        exception_lineno = 142;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_ass_subvalue_1 = var_thelist;

    tmp_ass_subscribed_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lnames" );
        exception_tb = NULL;

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = var_name;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_left_name_2 = const_str_digest_c0c3759da123e387798315e75d2fed70;
    tmp_right_name_2 = var_name;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

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
            if ( par_mobj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mobj,
                    par_mobj
                );

                assert( res == 0 );
            }

            if ( var_thelist )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_thelist,
                    var_thelist
                );

                assert( res == 0 );
            }

            if ( var_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    var_name
                );

                assert( res == 0 );
            }

            if ( var_key )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_key,
                    var_key
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lnames,
                    self->m_closure[0]->ob_ref
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_listrepl_of_function_5_expand_sub_of_numpy$distutils$from_template );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_mobj );
    Py_DECREF( par_mobj );
    par_mobj = NULL;

    CHECK_OBJECT( (PyObject *)var_thelist );
    Py_DECREF( var_thelist );
    var_thelist = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mobj );
    Py_DECREF( par_mobj );
    par_mobj = NULL;

    Py_XDECREF( var_thelist );
    var_thelist = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_listrepl_of_function_5_expand_sub_of_numpy$distutils$from_template );
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


static PyObject *impl_function_2_namerepl_of_function_5_expand_sub_of_numpy$distutils$from_template( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mobj = python_pars[ 0 ];
    PyObject *var_name = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b82141e529642dd0be5196e2d7921e79, module_numpy$distutils$from_template );
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
    tmp_source_name_1 = par_mobj;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_group );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 176;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_1;

    tmp_source_name_2 = PyCell_GET( self->m_closure[1] );

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "rules" );
        exception_tb = NULL;

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_name;

    tmp_left_name_2 = PyCell_GET( self->m_closure[0] );

    if ( tmp_left_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "k" );
        exception_tb = NULL;

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = PyList_New( 1 );
    tmp_list_element_1 = var_name;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_right_name_2, 0, tmp_list_element_1 );
    tmp_args_element_name_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_subscript_name_1 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "k" );
        exception_tb = NULL;

        exception_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

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
            if ( par_mobj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mobj,
                    par_mobj
                );

                assert( res == 0 );
            }

            if ( var_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    var_name
                );

                assert( res == 0 );
            }

            if ( self->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rules,
                    self->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    self->m_closure[0]->ob_ref
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_namerepl_of_function_5_expand_sub_of_numpy$distutils$from_template );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_mobj );
    Py_DECREF( par_mobj );
    par_mobj = NULL;

    CHECK_OBJECT( (PyObject *)var_name );
    Py_DECREF( var_name );
    var_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mobj );
    Py_DECREF( par_mobj );
    par_mobj = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_namerepl_of_function_5_expand_sub_of_numpy$distutils$from_template );
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


static PyObject *impl_function_6_process_str_of_numpy$distutils$from_template( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_allstr = python_pars[ 0 ];
    PyObject *var_newstr = NULL;
    PyObject *var_writestr = NULL;
    PyObject *var_struct = NULL;
    PyObject *var_oldend = NULL;
    PyObject *var_names = NULL;
    PyObject *var_sub = NULL;
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
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_lower_3;
    PyObject *tmp_slice_lower_4;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_slice_upper_2;
    PyObject *tmp_slice_upper_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = par_allstr;

    assert( var_newstr == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_newstr = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_empty;
    assert( var_writestr == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_writestr = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6ac94bf7925a81390e79e17b96b5a54b, module_numpy$distutils$from_template );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_parse_structure );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_structure );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "parse_structure" );
        exception_tb = NULL;

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_newstr;

    frame_function->f_lineno = 191;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    assert( var_struct == NULL );
    var_struct = tmp_assign_source_3;

    tmp_assign_source_4 = const_int_0;
    assert( var_oldend == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_oldend = tmp_assign_source_4;

    tmp_assign_source_5 = PyDict_New();
    assert( var_names == NULL );
    var_names = tmp_assign_source_5;

    tmp_source_name_1 = var_names;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_update );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain__special_names );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__special_names );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_special_names" );
        exception_tb = NULL;

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 195;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_1 = var_struct;

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 196;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_sub;
        var_sub = tmp_assign_source_8;
        Py_INCREF( var_sub );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_writestr;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "writestr" );
        exception_tb = NULL;

        exception_lineno = 197;
        goto try_except_handler_2;
    }

    tmp_slice_source_1 = var_newstr;

    tmp_slice_lower_1 = var_oldend;

    if ( tmp_slice_lower_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "oldend" );
        exception_tb = NULL;

        exception_lineno = 197;
        goto try_except_handler_2;
    }

    tmp_subscribed_name_1 = var_sub;

    tmp_subscript_name_1 = const_int_0;
    tmp_slice_upper_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto try_except_handler_2;
    }
    tmp_right_name_1 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_9 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto try_except_handler_2;
    }
    var_writestr = tmp_assign_source_9;

    tmp_source_name_2 = var_names;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_update );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto try_except_handler_2;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_find_repl_patterns );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_find_repl_patterns );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "find_repl_patterns" );
        exception_tb = NULL;

        exception_lineno = 198;
        goto try_except_handler_2;
    }

    tmp_slice_source_2 = var_newstr;

    tmp_slice_lower_2 = var_oldend;

    if ( tmp_slice_lower_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "oldend" );
        exception_tb = NULL;

        exception_lineno = 198;
        goto try_except_handler_2;
    }

    tmp_subscribed_name_2 = var_sub;

    tmp_subscript_name_2 = const_int_0;
    tmp_slice_upper_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_slice_upper_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 198;
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_2, tmp_slice_upper_2 );
    Py_DECREF( tmp_slice_upper_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 198;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 198;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 198;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 198;
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


        exception_lineno = 198;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_2 = var_writestr;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_expand_sub );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_expand_sub );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "expand_sub" );
        exception_tb = NULL;

        exception_lineno = 199;
        goto try_except_handler_2;
    }

    tmp_slice_source_3 = var_newstr;

    tmp_subscribed_name_3 = var_sub;

    tmp_subscript_name_3 = const_int_0;
    tmp_slice_lower_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_slice_lower_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto try_except_handler_2;
    }
    tmp_subscribed_name_4 = var_sub;

    tmp_subscript_name_4 = const_int_pos_1;
    tmp_slice_upper_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_slice_upper_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_slice_lower_3 );

        exception_lineno = 199;
        goto try_except_handler_2;
    }
    tmp_args_element_name_5 = LOOKUP_SLICE( tmp_slice_source_3, tmp_slice_lower_3, tmp_slice_upper_3 );
    Py_DECREF( tmp_slice_lower_3 );
    Py_DECREF( tmp_slice_upper_3 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto try_except_handler_2;
    }
    tmp_args_element_name_6 = var_names;

    frame_function->f_lineno = 199;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_10 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto try_except_handler_2;
    }
    var_writestr = tmp_assign_source_10;

    tmp_subscribed_name_5 = var_sub;

    tmp_subscript_name_5 = const_int_pos_1;
    tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_oldend;
        var_oldend = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
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

    tmp_left_name_3 = var_writestr;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "writestr" );
        exception_tb = NULL;

        exception_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_4 = var_newstr;

    tmp_slice_lower_4 = var_oldend;

    if ( tmp_slice_lower_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "oldend" );
        exception_tb = NULL;

        exception_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = LOOKUP_SLICE( tmp_slice_source_4, tmp_slice_lower_4, Py_None );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_12 = tmp_left_name_3;
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    var_writestr = tmp_assign_source_12;


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
            if ( par_allstr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_allstr,
                    par_allstr
                );

                assert( res == 0 );
            }

            if ( var_newstr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_newstr,
                    var_newstr
                );

                assert( res == 0 );
            }

            if ( var_writestr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_writestr,
                    var_writestr
                );

                assert( res == 0 );
            }

            if ( var_struct )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_struct,
                    var_struct
                );

                assert( res == 0 );
            }

            if ( var_oldend )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_oldend,
                    var_oldend
                );

                assert( res == 0 );
            }

            if ( var_names )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_names,
                    var_names
                );

                assert( res == 0 );
            }

            if ( var_sub )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sub,
                    var_sub
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

    tmp_return_value = var_writestr;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_6_process_str_of_numpy$distutils$from_template );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_allstr );
    Py_DECREF( par_allstr );
    par_allstr = NULL;

    CHECK_OBJECT( (PyObject *)var_newstr );
    Py_DECREF( var_newstr );
    var_newstr = NULL;

    CHECK_OBJECT( (PyObject *)var_writestr );
    Py_DECREF( var_writestr );
    var_writestr = NULL;

    CHECK_OBJECT( (PyObject *)var_struct );
    Py_DECREF( var_struct );
    var_struct = NULL;

    Py_XDECREF( var_oldend );
    var_oldend = NULL;

    CHECK_OBJECT( (PyObject *)var_names );
    Py_DECREF( var_names );
    var_names = NULL;

    Py_XDECREF( var_sub );
    var_sub = NULL;

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

    CHECK_OBJECT( (PyObject *)par_allstr );
    Py_DECREF( par_allstr );
    par_allstr = NULL;

    CHECK_OBJECT( (PyObject *)var_newstr );
    Py_DECREF( var_newstr );
    var_newstr = NULL;

    Py_XDECREF( var_writestr );
    var_writestr = NULL;

    Py_XDECREF( var_struct );
    var_struct = NULL;

    Py_XDECREF( var_oldend );
    var_oldend = NULL;

    Py_XDECREF( var_names );
    var_names = NULL;

    Py_XDECREF( var_sub );
    var_sub = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6_process_str_of_numpy$distutils$from_template );
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


static PyObject *impl_function_7_resolve_includes_of_numpy$distutils$from_template( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_source = python_pars[ 0 ];
    PyObject *var_d = NULL;
    PyObject *var_fid = NULL;
    PyObject *var_lines = NULL;
    PyObject *var_line = NULL;
    PyObject *var_m = NULL;
    PyObject *var_fn = NULL;
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
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_open_filename_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_120d8dbad794a86159d44d598ee337ff, module_numpy$distutils$from_template );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 208;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_source;

    frame_function->f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    assert( var_d == NULL );
    var_d = tmp_assign_source_1;

    tmp_open_filename_1 = par_source;

    tmp_assign_source_2 = BUILTIN_OPEN( tmp_open_filename_1, NULL, NULL );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    assert( var_fid == NULL );
    var_fid = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( var_lines == NULL );
    var_lines = tmp_assign_source_3;

    tmp_iter_arg_1 = var_fid;

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 211;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_6;
        Py_INCREF( var_line );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_include_src_re );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_include_src_re );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "include_src_re" );
        exception_tb = NULL;

        exception_lineno = 212;
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_match );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = var_line;

    frame_function->f_lineno = 212;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_m;
        var_m = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = var_m;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        goto try_except_handler_2;
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
    tmp_source_name_4 = var_m;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_group );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 214;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_plain_name_tuple, 0 ) );

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_fn;
        var_fn = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 215;
        goto try_except_handler_2;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        goto try_except_handler_2;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_isabs );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_fn;

    frame_function->f_lineno = 215;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 215;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 216;
        goto try_except_handler_2;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto try_except_handler_2;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = var_d;

    tmp_args_element_name_5 = var_fn;

    frame_function->f_lineno = 216;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_fn;
        assert( old != NULL );
        var_fn = tmp_assign_source_9;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 217;
        goto try_except_handler_2;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_path );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        goto try_except_handler_2;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        goto try_except_handler_2;
    }
    tmp_args_element_name_6 = var_fn;

    frame_function->f_lineno = 217;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        goto try_except_handler_2;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 217;
        goto try_except_handler_2;
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
    tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_7 != NULL );
    tmp_args_element_name_7 = const_str_digest_d786a914848e66cddf4d7481bf6182cb;
    tmp_args_element_name_8 = var_fn;

    frame_function->f_lineno = 218;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = var_lines;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_extend );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto try_except_handler_2;
    }
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_resolve_includes );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_includes );
    }

    if ( tmp_called_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_includes" );
        exception_tb = NULL;

        exception_lineno = 219;
        goto try_except_handler_2;
    }

    tmp_args_element_name_10 = var_fn;

    frame_function->f_lineno = 219;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 219;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 219;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_12 = var_lines;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_append );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto try_except_handler_2;
    }
    tmp_args_element_name_11 = var_line;

    frame_function->f_lineno = 221;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_end_3:;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_13 = var_lines;

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_append );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto try_except_handler_2;
    }
    tmp_args_element_name_12 = var_line;

    frame_function->f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
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

    tmp_source_name_14 = var_fid;

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_close );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 224;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_12 );
    Py_DECREF( tmp_called_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
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
            if ( par_source )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_source,
                    par_source
                );

                assert( res == 0 );
            }

            if ( var_d )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_d,
                    var_d
                );

                assert( res == 0 );
            }

            if ( var_fid )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fid,
                    var_fid
                );

                assert( res == 0 );
            }

            if ( var_lines )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lines,
                    var_lines
                );

                assert( res == 0 );
            }

            if ( var_line )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_line,
                    var_line
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

            if ( var_fn )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fn,
                    var_fn
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

    tmp_return_value = var_lines;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_7_resolve_includes_of_numpy$distutils$from_template );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)var_fid );
    Py_DECREF( var_fid );
    var_fid = NULL;

    CHECK_OBJECT( (PyObject *)var_lines );
    Py_DECREF( var_lines );
    var_lines = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_fn );
    var_fn = NULL;

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

    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_fid );
    var_fid = NULL;

    Py_XDECREF( var_lines );
    var_lines = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_fn );
    var_fn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_7_resolve_includes_of_numpy$distutils$from_template );
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


static PyObject *impl_function_8_process_file_of_numpy$distutils$from_template( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_source = python_pars[ 0 ];
    PyObject *var_lines = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9d1653c4a861af8bd287ab422217cb59, module_numpy$distutils$from_template );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_resolve_includes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_includes );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_includes" );
        exception_tb = NULL;

        exception_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_source;

    frame_function->f_lineno = 228;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto frame_exception_exit_1;
    }
    assert( var_lines == NULL );
    var_lines = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_process_str );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_process_str );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "process_str" );
        exception_tb = NULL;

        exception_lineno = 229;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = const_str_empty;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_3 = var_lines;

    frame_function->f_lineno = 229;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 229;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

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
            if ( par_source )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_source,
                    par_source
                );

                assert( res == 0 );
            }

            if ( var_lines )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lines,
                    var_lines
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_8_process_file_of_numpy$distutils$from_template );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    CHECK_OBJECT( (PyObject *)var_lines );
    Py_DECREF( var_lines );
    var_lines = NULL;

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

    CHECK_OBJECT( (PyObject *)par_source );
    Py_DECREF( par_source );
    par_source = NULL;

    Py_XDECREF( var_lines );
    var_lines = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_8_process_file_of_numpy$distutils$from_template );
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



static PyObject *MAKE_FUNCTION_function_1_listrepl_of_function_5_expand_sub_of_numpy$distutils$from_template( PyCellObject *closure_lnames )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
    closure[0] = closure_lnames;
    Py_INCREF( closure[0] );


    PyObject *result = Nuitka_Function_New(
        impl_function_1_listrepl_of_function_5_expand_sub_of_numpy$distutils$from_template,
        const_str_plain_listrepl,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bb4fcdc817f8a668c7e5120d20a16093,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$from_template,
        Py_None,
        closure,
        1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_parse_structure_of_numpy$distutils$from_template(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_parse_structure_of_numpy$distutils$from_template,
        const_str_plain_parse_structure,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4aa83e47527a74782d3301e057f3512c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$from_template,
        const_str_digest_a652547f3ebf25e876cf84911f3efe7b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_find_repl_patterns_of_numpy$distutils$from_template(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_find_repl_patterns_of_numpy$distutils$from_template,
        const_str_plain_find_repl_patterns,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8f1eb0e53bb2baf5c96328d82c15bd49,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$from_template,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_namerepl_of_function_5_expand_sub_of_numpy$distutils$from_template( PyCellObject *closure_k, PyCellObject *closure_rules )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(2 * sizeof(PyCellObject *));
    closure[0] = closure_k;
    Py_INCREF( closure[0] );
    closure[1] = closure_rules;
    Py_INCREF( closure[1] );


    PyObject *result = Nuitka_Function_New(
        impl_function_2_namerepl_of_function_5_expand_sub_of_numpy$distutils$from_template,
        const_str_plain_namerepl,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b82141e529642dd0be5196e2d7921e79,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$from_template,
        Py_None,
        closure,
        2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_conv_of_numpy$distutils$from_template(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_conv_of_numpy$distutils$from_template,
        const_str_plain_conv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_053f048c0ac63ab0fdc2ce36a2a3adfd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$from_template,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_unique_key_of_numpy$distutils$from_template(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_unique_key_of_numpy$distutils$from_template,
        const_str_plain_unique_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1d6be7b3323c428ad0a46fde5938aa8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$from_template,
        const_str_digest_511f15f2910de56971c230d19e88fdde
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_expand_sub_of_numpy$distutils$from_template(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5_expand_sub_of_numpy$distutils$from_template,
        const_str_plain_expand_sub,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bc75a5e66d29f135bbbeb6390458e4f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$from_template,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_process_str_of_numpy$distutils$from_template(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_6_process_str_of_numpy$distutils$from_template,
        const_str_plain_process_str,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6ac94bf7925a81390e79e17b96b5a54b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$from_template,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_resolve_includes_of_numpy$distutils$from_template(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_7_resolve_includes_of_numpy$distutils$from_template,
        const_str_plain_resolve_includes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_120d8dbad794a86159d44d598ee337ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$from_template,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_process_file_of_numpy$distutils$from_template(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_8_process_file_of_numpy$distutils$from_template,
        const_str_plain_process_file,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9d1653c4a861af8bd287ab422217cb59,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$from_template,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils$from_template =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils.from_template",   /* m_name */
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

MOD_INIT_DECL( numpy$distutils$from_template )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils$from_template );
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

    // puts( "in initnumpy$distutils$from_template" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils$from_template = Py_InitModule4(
        "numpy.distutils.from_template",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils$from_template = PyModule_Create( &mdef_numpy$distutils$from_template );
#endif

    moduledict_numpy$distutils$from_template = (PyDictObject *)((PyModuleObject *)module_numpy$distutils$from_template)->md_dict;

    CHECK_OBJECT( module_numpy$distutils$from_template );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f6ada9e69ea06a56bd534c582594500f, module_numpy$distutils$from_template );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils$from_template );

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
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
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
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
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
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_499ccd52313f1ebf87885cce87299eef;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_a257c704909e3224d8cccf40d6fbee3b;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_str_plain_process_str_str_plain_process_file_list );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_6e46dcba2cc813fb54c61578c03a8e23, module_numpy$distutils$from_template );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$from_template)->md_dict;
    frame_module->f_lineno = 52;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$from_template)->md_dict;
    frame_module->f_lineno = 53;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$distutils$from_template)->md_dict;
    frame_module->f_lineno = 54;
    tmp_assign_source_9 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_9 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compile );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_b2ec70d4b609a03718038bd5abfdbdb7;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_I );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_routine_start_re, tmp_assign_source_10 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_compile );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_45a162f81fb30dc7638391481a2baa6f;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_I );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_routine_end_re, tmp_assign_source_11 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_compile );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_digest_931bc6d53df2c6cb0a4dd7ae3c8ea4e5;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_I );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_function_start_re, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_function_1_parse_structure_of_numpy$distutils$from_template(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_parse_structure, tmp_assign_source_13 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_compile );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 87;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_digest_0e9a49b0af203d827fbb4f6fc6ff70a7_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_template_re, tmp_assign_source_14 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_compile );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 88;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_digest_65d5a8e51899b9f41210d53f6809efbf_tuple, 0 ) );

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_named_re, tmp_assign_source_15 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_compile );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 89;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_digest_628a1a8ecfa32c3914e16d609aa8b6f0_tuple, 0 ) );

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_list_re, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_function_2_find_repl_patterns_of_numpy$distutils$from_template(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_find_repl_patterns, tmp_assign_source_17 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_compile );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 101;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_str_digest_a189f1a2b6d72417f39022c9e60fc148_tuple, 0 ) );

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_item_re, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_function_3_conv_of_numpy$distutils$from_template(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_conv, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_function_4_unique_key_of_numpy$distutils$from_template(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_unique_key, tmp_assign_source_20 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_compile );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 126;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_str_digest_b121fb20072b3e91bf01df23dab6d0c4_tuple, 0 ) );

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_template_name_re, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_function_5_expand_sub_of_numpy$distutils$from_template(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_expand_sub, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_function_6_process_str_of_numpy$distutils$from_template(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_process_str, tmp_assign_source_23 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 205;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_compile );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_digest_82952138ca590e2eca33a8e119932f12;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 205;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_I );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 205;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 205;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_include_src_re, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_function_7_resolve_includes_of_numpy$distutils$from_template(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_resolve_includes, tmp_assign_source_25 );
    tmp_assign_source_26 = MAKE_FUNCTION_function_8_process_file_of_numpy$distutils$from_template(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_process_file, tmp_assign_source_26 );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain_find_repl_patterns );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_find_repl_patterns );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "find_repl_patterns" );
        exception_tb = NULL;

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 239;
    tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_digest_99896917694049dbebf87f41bbd5b94d_tuple, 0 ) );

    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$from_template, (Nuitka_StringObject *)const_str_plain__special_names, tmp_assign_source_27 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
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

    return MOD_RETURN_VALUE( module_numpy$distutils$from_template );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

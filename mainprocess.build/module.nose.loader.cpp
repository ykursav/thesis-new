// Generated code for Python source for module 'nose.loader'
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

// The _module_nose$loader is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_nose$loader;
PyDictObject *moduledict_nose$loader;

// The module constants used
extern PyObject *const_str_plain_Importer;
extern PyObject *const_str_plain_sort_list;
static PyObject *const_str_plain_loadTestsFromGenerator;
extern PyObject *const_str_plain_inst;
static PyObject *const_str_plain_test_funcs;
extern PyObject *const_tuple_str_plain_Failure_tuple;
static PyObject *const_str_digest_8903548e855b7b14d8ff44b59f5efc81;
extern PyObject *const_tuple_str_digest_802d97a8584e66528f40ec5b87c9e84a_tuple;
extern PyObject *const_str_plain_getpackage;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_parent;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_test;
static PyObject *const_str_digest_6917656b7edc50e67ef40b68d6b4b3b4;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_module;
extern PyObject *const_str_plain_suite;
extern PyObject *const_str_plain_totuple;
static PyObject *const_str_digest_b5083345ce96b6a793f6011b564c9970;
extern PyObject *const_str_plain_wantModule;
static PyObject *const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple;
static PyObject *const_tuple_968f9a376df09c8afe4284b5980ff953_tuple;
static PyObject *const_str_plain_plug_tests;
extern PyObject *const_str_plain_wantMethod;
static PyObject *const_tuple_3b9d0acca70586f5bd7f56653da387fe_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_normcase;
extern PyObject *const_str_plain_exc;
extern PyObject *const_str_plain_TestAddress;
extern PyObject *const_str_plain_afterImport;
static PyObject *const_str_digest_d9dd9a6820304fafe182bafc09ac205d;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_cmp_to_key;
static PyObject *const_str_digest_9300bd1f5f2c46bf806df0bf427d83a7;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_str_digest_eba877c67da748ce70d0b7979ee26762;
static PyObject *const_str_plain_paths_added;
extern PyObject *const_str_plain_loadTestsFromTestClass;
extern PyObject *const_str_digest_6fbd26c2ed3ec428c6e494e7dc8a7b6d;
extern PyObject *const_str_plain_makeTest;
extern PyObject *const_str_plain_case;
static PyObject *const_str_digest_c5a99b448ccf6b68fa710b56dfb7d9e9;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_resolve;
extern PyObject *const_str_plain_ModuleType;
extern PyObject *const_str_plain_defaultTestLoader;
static PyObject *const_str_digest_fced2ede167894e7c6a068da64df51e0;
extern PyObject *const_str_plain_selector;
static PyObject *const_tuple_str_plain_attr_str_plain_cls_str_plain_sel_str_plain_item_tuple;
extern PyObject *const_str_plain_traverseNamespace;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_tests;
static PyObject *const_str_digest_eea9031ec4525e779b4332bfc3247ce8;
static PyObject *const_tuple_828cb65934bcef1d0666664d371fb632_tuple;
extern PyObject *const_str_plain_debug;
static PyObject *const_str_digest_28f618c1740dc5ba4a5351fdbc02bfdc;
extern PyObject *const_str_plain_wanted;
extern PyObject *const_str_plain_parts;
extern PyObject *const_str_plain_abspath;
static PyObject *const_str_digest_861ff2bc38a033ec441ff737e4af6577;
static PyObject *const_dict_42ffd18cca719075e9303c95295ac21c;
extern PyObject *const_str_plain_FunctionTestCase;
extern PyObject *const_str_plain_loadTestsFromNames;
static PyObject *const_str_plain__haveVisited;
extern PyObject *const_str_plain_unbound_method;
extern PyObject *const_str_plain_plugins;
static PyObject *const_str_digest_f479a3f0512b9648c741cf414e78af4a;
extern PyObject *const_str_plain_suiteClass;
extern PyObject *const_str_plain_TestCase;
extern PyObject *const_str_plain_op_abspath;
static PyObject *const_tuple_str_plain_sort_list_str_plain_cmp_to_key_tuple;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_workingDir;
extern PyObject *const_str_digest_43d74df3a60b2618a5a31c88b0fd4e9c;
extern PyObject *const_str_plain_addr;
extern PyObject *const_tuple_none_false_tuple;
static PyObject *const_str_digest_8174e4c487ea21ec1caf99f6c38167e9;
extern PyObject *const_str_plain_testMatch;
static PyObject *const_str_plain_test_classes;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_str_digest_802d97a8584e66528f40ec5b87c9e84a;
extern PyObject *const_str_plain_split;
static PyObject *const_str_digest_c21418fc916dcf2c5f8ee56d4b2979a0;
extern PyObject *const_str_plain_ContextSuiteFactory;
extern PyObject *const_str_plain_sel;
static PyObject *const_list_str_plain_runTest_list;
extern PyObject *const_str_plain_os;
static PyObject *const_str_plain_is_package;
static PyObject *const_str_plain_test_func;
extern PyObject *const_str_plain_wantClass;
static PyObject *const_tuple_str_plain_g_str_plain_c_tuple;
static PyObject *const_str_digest_bafa40cc413984521fd190fad2ed6c6d;
static PyObject *const_tuple_str_plain_FunctionTestCase_str_plain_MethodTestCase_tuple;
static PyObject *const_tuple_str_plain_defaultSelector_str_plain_TestAddress_tuple;
static PyObject *const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple;
extern PyObject *const_tuple_str_plain___tuple;
extern PyObject *const_str_plain_transplant_func;
extern PyObject *const_str_plain_regex_last_key;
extern PyObject *const_str_plain_test_address;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_str_plain_TestLoader_str_plain_defaultTestLoader_list;
extern PyObject *const_str_digest_50ec6eec50305057aff101793edbb556;
static PyObject *const_tuple_str_plain_g_str_plain_m_tuple;
extern PyObject *const_str_plain_transplant_class;
extern PyObject *const_str_plain_ismethod;
extern PyObject *const_str_plain_t;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_afterDirectory;
static PyObject *const_tuple_df41b7e068bb8d04a999872fba248500_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_loader;
static PyObject *const_str_digest_3b6597bbcfecf00696e1b5f1ae684b31;
static PyObject *const_str_digest_c5603b81ec5e6c7e68f169aefcba6c36;
extern PyObject *const_str_plain_item;
static PyObject *const_str_plain_TestLoader;
extern PyObject *const_str_plain_package;
extern PyObject *const_str_plain_arg;
static PyObject *const_str_plain_op_normpath;
extern PyObject *const_str_plain_LazySuite;
extern PyObject *const_str_plain_loadTestsFromTestCase;
static PyObject *const_tuple_61e91daa3653f39fd888bf44596d96e3_tuple;
extern PyObject *const_str_plain_add_path;
extern PyObject *const_str_plain_beforeDirectory;
extern PyObject *const_str_plain_callable;
extern PyObject *const_str_plain_address;
extern PyObject *const_str_digest_c4a41d45d3f3273121ae80a944790f18;
static PyObject *const_str_digest_5dc712863adc896cbe3b9899c334254b;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_digest_98d91f128fd7fd52ac6f0b9dd6d45d3f;
extern PyObject *const_str_plain_part;
extern PyObject *const_str_plain_loadTestsFromModule;
extern PyObject *const_str_plain_Failure;
static PyObject *const_str_plain_loadTestsFromGeneratorMethod;
static PyObject *const_str_plain_is_file;
static PyObject *const_tuple_str_plain_self_str_plain_entry_path_tuple;
extern PyObject *const_str_plain_op_join;
static PyObject *const_tuple_a1e6bdbd4397eaf5159b8924b92d6117_tuple;
static PyObject *const_tuple_str_plain_t_str_plain_self_str_plain_module_tuple;
extern PyObject *const_str_plain_ContextList;
static PyObject *const_str_digest_9587b43cab77c61a4313fe4df4f6039c;
extern PyObject *const_str_plain_func_lineno;
extern PyObject *const_str_dot;
extern PyObject *const_str_digest_cc4f589119d7c98419ab44ebd707de36;
static PyObject *const_tuple_95ab7f10944a12c5c53048f41b910113_tuple;
extern PyObject *const_int_0;
static PyObject *const_tuple_f14f9243702bc7688dd6b664a1dc0203_tuple;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_runTest;
static PyObject *const_tuple_19ff99d1f0a959daa5d57caed46a7707_tuple;
static PyObject *const_str_plain_op_isdir;
static PyObject *const_tuple_str_digest_6fbd26c2ed3ec428c6e494e7dc8a7b6d_tuple;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_im_class;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_str_plain_self_str_plain_path_tuple;
static PyObject *const_str_plain__makeTest;
static PyObject *const_str_digest_88fcfe7a496424a4abce1827b15e7465;
extern PyObject *const_str_plain_config;
extern PyObject *const_tuple_none_none_none_none_tuple;
static PyObject *const_str_plain_sortTestMethodsUsing;
static PyObject *const_str_digest_7aa8bcd4db230f35b6db18af080c2f19;
extern PyObject *const_str_plain_isclass;
extern PyObject *const_str_plain_attr;
extern PyObject *const_str_plain_remove_path;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_beforeImport;
extern PyObject *const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a;
extern PyObject *const_str_plain_descriptor;
extern PyObject *const_str_plain_generators;
extern PyObject *const_str_plain_afterContext;
extern PyObject *const_str_plain_isgenerator;
extern PyObject *const_str_plain_generate;
static PyObject *const_str_plain_getTestCaseNames;
static PyObject *const_str_plain_plug_res;
static PyObject *const_str_digest_a02cf8425d54550ba6dfc17b81cd557b;
extern PyObject *const_str_plain_isfile;
extern PyObject *const_str_plain_resolve_name;
extern PyObject *const_str_plain_call;
extern PyObject *const_str_plain_can_split;
extern PyObject *const_str_plain_method;
static PyObject *const_tuple_77d5afb07586354ce72843a4431efdc8_tuple;
extern PyObject *const_str_plain_loadTestsFromDir;
static PyObject *const_str_plain_testCaseClass;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_normpath;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_g;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_Config;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain__addVisitedPath;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_filename;
extern PyObject *const_str_plain_loadTestsFromName;
extern PyObject *const_str_plain_p;
static PyObject *const_str_plain_module_paths;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_inspect;
static PyObject *const_str_digest_d6f393258f5d526288331a73af0bdbda;
extern PyObject *const_tuple_str_plain_Config_tuple;
static PyObject *const_str_plain_generator;
static PyObject *const_str_plain_module_path;
extern PyObject *const_tuple_str_plain_isfunction_tuple;
extern PyObject *const_str_plain_isdir;
extern PyObject *const_str_digest_7775affb36096bf2cf44236037c47ff7;
static PyObject *const_tuple_08df04635d18c1c2ea24878464db4a05_tuple;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_names;
static PyObject *const_tuple_10e5837211939f6ed23250f9289c1e57_tuple;
extern PyObject *const_str_plain_importFromPath;
static PyObject *const_str_plain_discovered;
static PyObject *const_str_digest_67e3840bd3c445f8431a7a1527016cae;
extern PyObject *const_str_plain_importer;
static PyObject *const_str_plain_entry_path;
static PyObject *const_str_plain_parseGeneratedTest;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_entry;
extern PyObject *const_str_plain_defaultSelector;
extern PyObject *const_str_plain_MethodTestCase;
extern PyObject *const_str_plain_unittest;
extern PyObject *const_str_plain_types;
static PyObject *const_tuple_str_plain_unbound_method_str_plain_ismethod_tuple;
extern PyObject *const_str_plain_wantDirectory;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_ecd842a01e91f929ca164746079a4106;
static PyObject *const_str_digest_a99c30b0f5bb099333fcf85ac2a60e26;
extern PyObject *const_str_plain_addPaths;
extern PyObject *const_str_digest_098b633ed352e092df3872ffdfb2bf14;
static PyObject *const_str_digest_31d63731dfc77b26c105b432d67a5617;
extern PyObject *const_str_plain_wantFunction;
extern PyObject *const_str_plain_realpath;
extern PyObject *const_str_plain_wantFile;
static PyObject *const_tuple_aaa6b2dfc709df7bbf6fa74c898cfdc6_tuple;
extern PyObject *const_str_plain_listdir;
extern PyObject *const_str_plain_getTestCaseNamesCompat;
static PyObject *const_str_plain__visitedPaths;
extern PyObject *const_str_plain_tuple;
static PyObject *const_str_digest_8cbef258d5e894fb4a8bfabd10a765e6;
extern PyObject *const_str_plain_ispackage;
static PyObject *const_str_digest_ace7670f40fe17ba87c5f1c2567cf3cc;
extern PyObject *const_str_plain_context;
static PyObject *const_str_digest_3d248abb735e9643ab9289aa3eb6f98b;
static PyObject *const_str_digest_ff05de07c412a3882062055038d7671a;
extern PyObject *const_str_plain_filter;
extern PyObject *const_str_plain_loadTestsFromFile;
extern PyObject *const_str_plain_exc_info;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_str_plain_Importer_str_plain_add_path_str_plain_remove_path_tuple;
static PyObject *const_str_plain_op_isfile;
extern PyObject *const_str_plain_cases;
extern PyObject *const_str_plain_isfunction;
extern PyObject *const_str_plain__;
static PyObject *const_tuple_7cd0c21d73281d87e99c2a27bf0571f7_tuple;
extern PyObject *const_str_plain_beforeContext;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_is_dir;
extern PyObject *const_str_plain_entries;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_loadTestsFromGenerator = UNSTREAM_STRING( &constant_bin[ 63017 ], 22, 1 );
    const_str_plain_test_funcs = UNSTREAM_STRING( &constant_bin[ 63039 ], 10, 1 );
    const_str_digest_8903548e855b7b14d8ff44b59f5efc81 = UNSTREAM_STRING( &constant_bin[ 63049 ], 28, 0 );
    const_str_digest_6917656b7edc50e67ef40b68d6b4b3b4 = UNSTREAM_STRING( &constant_bin[ 63077 ], 25, 0 );
    const_str_digest_b5083345ce96b6a793f6011b564c9970 = UNSTREAM_STRING( &constant_bin[ 63102 ], 19, 0 );
    const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple, 1, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple, 2, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    const_str_plain_discovered = UNSTREAM_STRING( &constant_bin[ 63121 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple, 3, const_str_plain_discovered ); Py_INCREF( const_str_plain_discovered );
    PyTuple_SET_ITEM( const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple, 4, const_str_plain_tests ); Py_INCREF( const_str_plain_tests );
    const_str_plain_test_classes = UNSTREAM_STRING( &constant_bin[ 63131 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple, 5, const_str_plain_test_classes ); Py_INCREF( const_str_plain_test_classes );
    PyTuple_SET_ITEM( const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple, 6, const_str_plain_test_funcs ); Py_INCREF( const_str_plain_test_funcs );
    PyTuple_SET_ITEM( const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple, 7, const_str_plain_item ); Py_INCREF( const_str_plain_item );
    PyTuple_SET_ITEM( const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple, 8, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    const_str_plain_module_paths = UNSTREAM_STRING( &constant_bin[ 63143 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple, 9, const_str_plain_module_paths ); Py_INCREF( const_str_plain_module_paths );
    const_str_plain_module_path = UNSTREAM_STRING( &constant_bin[ 63143 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple, 10, const_str_plain_module_path ); Py_INCREF( const_str_plain_module_path );
    const_tuple_968f9a376df09c8afe4284b5980ff953_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_968f9a376df09c8afe4284b5980ff953_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_968f9a376df09c8afe4284b5980ff953_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_968f9a376df09c8afe4284b5980ff953_tuple, 2, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_968f9a376df09c8afe4284b5980ff953_tuple, 3, const_str_plain_discovered ); Py_INCREF( const_str_plain_discovered );
    PyTuple_SET_ITEM( const_tuple_968f9a376df09c8afe4284b5980ff953_tuple, 4, const_str_plain_suite ); Py_INCREF( const_str_plain_suite );
    const_str_plain_plug_tests = UNSTREAM_STRING( &constant_bin[ 63155 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_968f9a376df09c8afe4284b5980ff953_tuple, 5, const_str_plain_plug_tests ); Py_INCREF( const_str_plain_plug_tests );
    PyTuple_SET_ITEM( const_tuple_968f9a376df09c8afe4284b5980ff953_tuple, 6, const_str_plain_addr ); Py_INCREF( const_str_plain_addr );
    PyTuple_SET_ITEM( const_tuple_968f9a376df09c8afe4284b5980ff953_tuple, 7, const_str_plain_parent ); Py_INCREF( const_str_plain_parent );
    PyTuple_SET_ITEM( const_tuple_968f9a376df09c8afe4284b5980ff953_tuple, 8, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_968f9a376df09c8afe4284b5980ff953_tuple, 9, const_str_plain_exc ); Py_INCREF( const_str_plain_exc );
    PyTuple_SET_ITEM( const_tuple_968f9a376df09c8afe4284b5980ff953_tuple, 10, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_968f9a376df09c8afe4284b5980ff953_tuple, 11, const_str_plain_package ); Py_INCREF( const_str_plain_package );
    const_tuple_3b9d0acca70586f5bd7f56653da387fe_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_3b9d0acca70586f5bd7f56653da387fe_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_generator = UNSTREAM_STRING( &constant_bin[ 13464 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_3b9d0acca70586f5bd7f56653da387fe_tuple, 1, const_str_plain_generator ); Py_INCREF( const_str_plain_generator );
    PyTuple_SET_ITEM( const_tuple_3b9d0acca70586f5bd7f56653da387fe_tuple, 2, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_3b9d0acca70586f5bd7f56653da387fe_tuple, 3, const_str_plain_generate ); Py_INCREF( const_str_plain_generate );
    const_str_digest_d9dd9a6820304fafe182bafc09ac205d = UNSTREAM_STRING( &constant_bin[ 63165 ], 15, 0 );
    const_str_digest_9300bd1f5f2c46bf806df0bf427d83a7 = UNSTREAM_STRING( &constant_bin[ 63180 ], 33, 0 );
    const_str_digest_eba877c67da748ce70d0b7979ee26762 = UNSTREAM_STRING( &constant_bin[ 63213 ], 142, 0 );
    const_str_plain_paths_added = UNSTREAM_STRING( &constant_bin[ 63355 ], 11, 1 );
    const_str_digest_c5a99b448ccf6b68fa710b56dfb7d9e9 = UNSTREAM_STRING( &constant_bin[ 63366 ], 218, 0 );
    const_str_plain_resolve = UNSTREAM_STRING( &constant_bin[ 61323 ], 7, 1 );
    const_str_digest_fced2ede167894e7c6a068da64df51e0 = UNSTREAM_STRING( &constant_bin[ 63584 ], 95, 0 );
    const_tuple_str_plain_attr_str_plain_cls_str_plain_sel_str_plain_item_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_attr_str_plain_cls_str_plain_sel_str_plain_item_tuple, 0, const_str_plain_attr ); Py_INCREF( const_str_plain_attr );
    PyTuple_SET_ITEM( const_tuple_str_plain_attr_str_plain_cls_str_plain_sel_str_plain_item_tuple, 1, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_attr_str_plain_cls_str_plain_sel_str_plain_item_tuple, 2, const_str_plain_sel ); Py_INCREF( const_str_plain_sel );
    PyTuple_SET_ITEM( const_tuple_str_plain_attr_str_plain_cls_str_plain_sel_str_plain_item_tuple, 3, const_str_plain_item ); Py_INCREF( const_str_plain_item );
    const_str_digest_eea9031ec4525e779b4332bfc3247ce8 = UNSTREAM_STRING( &constant_bin[ 63679 ], 45, 0 );
    const_tuple_828cb65934bcef1d0666664d371fb632_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_828cb65934bcef1d0666664d371fb632_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_testCaseClass = UNSTREAM_STRING( &constant_bin[ 63724 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_828cb65934bcef1d0666664d371fb632_tuple, 1, const_str_plain_testCaseClass ); Py_INCREF( const_str_plain_testCaseClass );
    PyTuple_SET_ITEM( const_tuple_828cb65934bcef1d0666664d371fb632_tuple, 2, const_str_plain_wanted ); Py_INCREF( const_str_plain_wanted );
    PyTuple_SET_ITEM( const_tuple_828cb65934bcef1d0666664d371fb632_tuple, 3, const_str_plain_cases ); Py_INCREF( const_str_plain_cases );
    const_str_digest_28f618c1740dc5ba4a5351fdbc02bfdc = UNSTREAM_STRING( &constant_bin[ 63737 ], 17, 0 );
    const_str_digest_861ff2bc38a033ec441ff737e4af6577 = UNSTREAM_STRING( &constant_bin[ 63754 ], 26, 0 );
    const_dict_42ffd18cca719075e9303c95295ac21c = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_42ffd18cca719075e9303c95295ac21c, const_str_plain_discovered, Py_True );
    assert( PyDict_Size( const_dict_42ffd18cca719075e9303c95295ac21c ) == 1 );
    const_str_plain__haveVisited = UNSTREAM_STRING( &constant_bin[ 63780 ], 12, 1 );
    const_str_digest_f479a3f0512b9648c741cf414e78af4a = UNSTREAM_STRING( &constant_bin[ 63792 ], 253, 0 );
    const_tuple_str_plain_sort_list_str_plain_cmp_to_key_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sort_list_str_plain_cmp_to_key_tuple, 0, const_str_plain_sort_list ); Py_INCREF( const_str_plain_sort_list );
    PyTuple_SET_ITEM( const_tuple_str_plain_sort_list_str_plain_cmp_to_key_tuple, 1, const_str_plain_cmp_to_key ); Py_INCREF( const_str_plain_cmp_to_key );
    const_str_digest_8174e4c487ea21ec1caf99f6c38167e9 = UNSTREAM_STRING( &constant_bin[ 64045 ], 83, 0 );
    const_str_digest_c21418fc916dcf2c5f8ee56d4b2979a0 = UNSTREAM_STRING( &constant_bin[ 64128 ], 289, 0 );
    const_list_str_plain_runTest_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_runTest_list, 0, const_str_plain_runTest ); Py_INCREF( const_str_plain_runTest );
    const_str_plain_is_package = UNSTREAM_STRING( &constant_bin[ 64417 ], 10, 1 );
    const_str_plain_test_func = UNSTREAM_STRING( &constant_bin[ 63039 ], 9, 1 );
    const_tuple_str_plain_g_str_plain_c_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_g_str_plain_c_tuple, 0, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_str_plain_g_str_plain_c_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    const_str_digest_bafa40cc413984521fd190fad2ed6c6d = UNSTREAM_STRING( &constant_bin[ 64427 ], 15, 0 );
    const_tuple_str_plain_FunctionTestCase_str_plain_MethodTestCase_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FunctionTestCase_str_plain_MethodTestCase_tuple, 0, const_str_plain_FunctionTestCase ); Py_INCREF( const_str_plain_FunctionTestCase );
    PyTuple_SET_ITEM( const_tuple_str_plain_FunctionTestCase_str_plain_MethodTestCase_tuple, 1, const_str_plain_MethodTestCase ); Py_INCREF( const_str_plain_MethodTestCase );
    const_tuple_str_plain_defaultSelector_str_plain_TestAddress_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_defaultSelector_str_plain_TestAddress_tuple, 0, const_str_plain_defaultSelector ); Py_INCREF( const_str_plain_defaultSelector );
    PyTuple_SET_ITEM( const_tuple_str_plain_defaultSelector_str_plain_TestAddress_tuple, 1, const_str_plain_TestAddress ); Py_INCREF( const_str_plain_TestAddress );
    const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, 0, const_str_plain_func_lineno ); Py_INCREF( const_str_plain_func_lineno );
    PyTuple_SET_ITEM( const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, 1, const_str_plain_getpackage ); Py_INCREF( const_str_plain_getpackage );
    PyTuple_SET_ITEM( const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, 2, const_str_plain_isclass ); Py_INCREF( const_str_plain_isclass );
    PyTuple_SET_ITEM( const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, 3, const_str_plain_isgenerator ); Py_INCREF( const_str_plain_isgenerator );
    PyTuple_SET_ITEM( const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, 4, const_str_plain_ispackage ); Py_INCREF( const_str_plain_ispackage );
    PyTuple_SET_ITEM( const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, 5, const_str_plain_regex_last_key ); Py_INCREF( const_str_plain_regex_last_key );
    PyTuple_SET_ITEM( const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, 6, const_str_plain_resolve_name ); Py_INCREF( const_str_plain_resolve_name );
    PyTuple_SET_ITEM( const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, 7, const_str_plain_transplant_func ); Py_INCREF( const_str_plain_transplant_func );
    PyTuple_SET_ITEM( const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, 8, const_str_plain_transplant_class ); Py_INCREF( const_str_plain_transplant_class );
    PyTuple_SET_ITEM( const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, 9, const_str_plain_test_address ); Py_INCREF( const_str_plain_test_address );
    const_list_str_plain_TestLoader_str_plain_defaultTestLoader_list = PyList_New( 2 );
    const_str_plain_TestLoader = UNSTREAM_STRING( &constant_bin[ 16934 ], 10, 1 );
    PyList_SET_ITEM( const_list_str_plain_TestLoader_str_plain_defaultTestLoader_list, 0, const_str_plain_TestLoader ); Py_INCREF( const_str_plain_TestLoader );
    PyList_SET_ITEM( const_list_str_plain_TestLoader_str_plain_defaultTestLoader_list, 1, const_str_plain_defaultTestLoader ); Py_INCREF( const_str_plain_defaultTestLoader );
    const_tuple_str_plain_g_str_plain_m_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_g_str_plain_m_tuple, 0, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_str_plain_g_str_plain_m_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_tuple_df41b7e068bb8d04a999872fba248500_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_df41b7e068bb8d04a999872fba248500_tuple, 0, const_str_plain_ContextSuiteFactory ); Py_INCREF( const_str_plain_ContextSuiteFactory );
    PyTuple_SET_ITEM( const_tuple_df41b7e068bb8d04a999872fba248500_tuple, 1, const_str_plain_ContextList ); Py_INCREF( const_str_plain_ContextList );
    PyTuple_SET_ITEM( const_tuple_df41b7e068bb8d04a999872fba248500_tuple, 2, const_str_plain_LazySuite ); Py_INCREF( const_str_plain_LazySuite );
    const_str_digest_3b6597bbcfecf00696e1b5f1ae684b31 = UNSTREAM_STRING( &constant_bin[ 64442 ], 223, 0 );
    const_str_digest_c5603b81ec5e6c7e68f169aefcba6c36 = UNSTREAM_STRING( &constant_bin[ 64665 ], 321, 0 );
    const_str_plain_op_normpath = UNSTREAM_STRING( &constant_bin[ 64986 ], 11, 1 );
    const_tuple_61e91daa3653f39fd888bf44596d96e3_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_61e91daa3653f39fd888bf44596d96e3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_61e91daa3653f39fd888bf44596d96e3_tuple, 1, const_str_plain_testCaseClass ); Py_INCREF( const_str_plain_testCaseClass );
    PyTuple_SET_ITEM( const_tuple_61e91daa3653f39fd888bf44596d96e3_tuple, 2, const_str_plain_cases ); Py_INCREF( const_str_plain_cases );
    PyTuple_SET_ITEM( const_tuple_61e91daa3653f39fd888bf44596d96e3_tuple, 3, const_str_plain_plugins ); Py_INCREF( const_str_plain_plugins );
    PyTuple_SET_ITEM( const_tuple_61e91daa3653f39fd888bf44596d96e3_tuple, 4, const_str_plain_case ); Py_INCREF( const_str_plain_case );
    const_str_digest_5dc712863adc896cbe3b9899c334254b = UNSTREAM_STRING( &constant_bin[ 64997 ], 227, 0 );
    const_str_plain_loadTestsFromGeneratorMethod = UNSTREAM_STRING( &constant_bin[ 65224 ], 28, 1 );
    const_str_plain_is_file = UNSTREAM_STRING( &constant_bin[ 65252 ], 7, 1 );
    const_tuple_str_plain_self_str_plain_entry_path_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_entry_path_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_entry_path = UNSTREAM_STRING( &constant_bin[ 65259 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_entry_path_tuple, 1, const_str_plain_entry_path ); Py_INCREF( const_str_plain_entry_path );
    const_tuple_a1e6bdbd4397eaf5159b8924b92d6117_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_a1e6bdbd4397eaf5159b8924b92d6117_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a1e6bdbd4397eaf5159b8924b92d6117_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_a1e6bdbd4397eaf5159b8924b92d6117_tuple, 2, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_a1e6bdbd4397eaf5159b8924b92d6117_tuple, 3, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_a1e6bdbd4397eaf5159b8924b92d6117_tuple, 4, const_str_plain_parts ); Py_INCREF( const_str_plain_parts );
    PyTuple_SET_ITEM( const_tuple_a1e6bdbd4397eaf5159b8924b92d6117_tuple, 5, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    PyTuple_SET_ITEM( const_tuple_a1e6bdbd4397eaf5159b8924b92d6117_tuple, 6, const_str_plain_parent ); Py_INCREF( const_str_plain_parent );
    const_tuple_str_plain_t_str_plain_self_str_plain_module_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_self_str_plain_module_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_self_str_plain_module_tuple, 1, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_self_str_plain_module_tuple, 2, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    const_str_digest_9587b43cab77c61a4313fe4df4f6039c = UNSTREAM_STRING( &constant_bin[ 65269 ], 30, 0 );
    const_tuple_95ab7f10944a12c5c53048f41b910113_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_95ab7f10944a12c5c53048f41b910113_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_95ab7f10944a12c5c53048f41b910113_tuple, 1, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_95ab7f10944a12c5c53048f41b910113_tuple, 2, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    PyTuple_SET_ITEM( const_tuple_95ab7f10944a12c5c53048f41b910113_tuple, 3, const_str_plain_tests ); Py_INCREF( const_str_plain_tests );
    PyTuple_SET_ITEM( const_tuple_95ab7f10944a12c5c53048f41b910113_tuple, 4, const_str_plain_exc ); Py_INCREF( const_str_plain_exc );
    const_tuple_f14f9243702bc7688dd6b664a1dc0203_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f14f9243702bc7688dd6b664a1dc0203_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f14f9243702bc7688dd6b664a1dc0203_tuple, 1, const_str_plain_generator ); Py_INCREF( const_str_plain_generator );
    PyTuple_SET_ITEM( const_tuple_f14f9243702bc7688dd6b664a1dc0203_tuple, 2, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_f14f9243702bc7688dd6b664a1dc0203_tuple, 3, const_str_plain_inst ); Py_INCREF( const_str_plain_inst );
    PyTuple_SET_ITEM( const_tuple_f14f9243702bc7688dd6b664a1dc0203_tuple, 4, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_f14f9243702bc7688dd6b664a1dc0203_tuple, 5, const_str_plain_generate ); Py_INCREF( const_str_plain_generate );
    const_tuple_19ff99d1f0a959daa5d57caed46a7707_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_19ff99d1f0a959daa5d57caed46a7707_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_19ff99d1f0a959daa5d57caed46a7707_tuple, 1, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    PyTuple_SET_ITEM( const_tuple_19ff99d1f0a959daa5d57caed46a7707_tuple, 2, const_str_plain_test_func ); Py_INCREF( const_str_plain_test_func );
    PyTuple_SET_ITEM( const_tuple_19ff99d1f0a959daa5d57caed46a7707_tuple, 3, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    const_str_plain_op_isdir = UNSTREAM_STRING( &constant_bin[ 65299 ], 8, 1 );
    const_tuple_str_digest_6fbd26c2ed3ec428c6e494e7dc8a7b6d_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6fbd26c2ed3ec428c6e494e7dc8a7b6d_tuple, 0, const_str_digest_6fbd26c2ed3ec428c6e494e7dc8a7b6d ); Py_INCREF( const_str_digest_6fbd26c2ed3ec428c6e494e7dc8a7b6d );
    const_str_plain__makeTest = UNSTREAM_STRING( &constant_bin[ 65307 ], 9, 1 );
    const_str_digest_88fcfe7a496424a4abce1827b15e7465 = UNSTREAM_STRING( &constant_bin[ 65316 ], 35, 0 );
    const_str_plain_sortTestMethodsUsing = UNSTREAM_STRING( &constant_bin[ 65351 ], 20, 1 );
    const_str_digest_7aa8bcd4db230f35b6db18af080c2f19 = UNSTREAM_STRING( &constant_bin[ 65371 ], 62, 0 );
    const_str_plain_getTestCaseNames = UNSTREAM_STRING( &constant_bin[ 22989 ], 16, 1 );
    const_str_plain_plug_res = UNSTREAM_STRING( &constant_bin[ 65433 ], 8, 1 );
    const_str_digest_a02cf8425d54550ba6dfc17b81cd557b = UNSTREAM_STRING( &constant_bin[ 65441 ], 31, 0 );
    const_tuple_77d5afb07586354ce72843a4431efdc8_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_77d5afb07586354ce72843a4431efdc8_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_77d5afb07586354ce72843a4431efdc8_tuple, 1, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_77d5afb07586354ce72843a4431efdc8_tuple, 2, const_str_plain_wanted ); Py_INCREF( const_str_plain_wanted );
    PyTuple_SET_ITEM( const_tuple_77d5afb07586354ce72843a4431efdc8_tuple, 3, const_str_plain_case ); Py_INCREF( const_str_plain_case );
    PyTuple_SET_ITEM( const_tuple_77d5afb07586354ce72843a4431efdc8_tuple, 4, const_str_plain_cases ); Py_INCREF( const_str_plain_cases );
    PyTuple_SET_ITEM( const_tuple_77d5afb07586354ce72843a4431efdc8_tuple, 5, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    const_str_plain__addVisitedPath = UNSTREAM_STRING( &constant_bin[ 65472 ], 15, 1 );
    const_str_digest_d6f393258f5d526288331a73af0bdbda = UNSTREAM_STRING( &constant_bin[ 65487 ], 33, 0 );
    const_tuple_08df04635d18c1c2ea24878464db4a05_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_08df04635d18c1c2ea24878464db4a05_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_08df04635d18c1c2ea24878464db4a05_tuple, 1, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    PyTuple_SET_ITEM( const_tuple_08df04635d18c1c2ea24878464db4a05_tuple, 2, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_08df04635d18c1c2ea24878464db4a05_tuple, 3, const_str_plain_plug_res ); Py_INCREF( const_str_plain_plug_res );
    PyTuple_SET_ITEM( const_tuple_08df04635d18c1c2ea24878464db4a05_tuple, 4, const_str_plain_suite ); Py_INCREF( const_str_plain_suite );
    const_tuple_10e5837211939f6ed23250f9289c1e57_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_10e5837211939f6ed23250f9289c1e57_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_10e5837211939f6ed23250f9289c1e57_tuple, 1, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_10e5837211939f6ed23250f9289c1e57_tuple, 2, const_str_plain_importer ); Py_INCREF( const_str_plain_importer );
    PyTuple_SET_ITEM( const_tuple_10e5837211939f6ed23250f9289c1e57_tuple, 3, const_str_plain_workingDir ); Py_INCREF( const_str_plain_workingDir );
    PyTuple_SET_ITEM( const_tuple_10e5837211939f6ed23250f9289c1e57_tuple, 4, const_str_plain_selector ); Py_INCREF( const_str_plain_selector );
    const_str_digest_67e3840bd3c445f8431a7a1527016cae = UNSTREAM_STRING( &constant_bin[ 65520 ], 783, 0 );
    const_str_plain_parseGeneratedTest = UNSTREAM_STRING( &constant_bin[ 66303 ], 18, 1 );
    const_tuple_str_plain_unbound_method_str_plain_ismethod_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_unbound_method_str_plain_ismethod_tuple, 0, const_str_plain_unbound_method ); Py_INCREF( const_str_plain_unbound_method );
    PyTuple_SET_ITEM( const_tuple_str_plain_unbound_method_str_plain_ismethod_tuple, 1, const_str_plain_ismethod ); Py_INCREF( const_str_plain_ismethod );
    const_str_digest_ecd842a01e91f929ca164746079a4106 = UNSTREAM_STRING( &constant_bin[ 66321 ], 54, 0 );
    const_str_digest_a99c30b0f5bb099333fcf85ac2a60e26 = UNSTREAM_STRING( &constant_bin[ 66375 ], 25, 0 );
    const_str_digest_31d63731dfc77b26c105b432d67a5617 = UNSTREAM_STRING( &constant_bin[ 66400 ], 16, 0 );
    const_tuple_aaa6b2dfc709df7bbf6fa74c898cfdc6_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_aaa6b2dfc709df7bbf6fa74c898cfdc6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_aaa6b2dfc709df7bbf6fa74c898cfdc6_tuple, 1, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_aaa6b2dfc709df7bbf6fa74c898cfdc6_tuple, 2, const_str_plain_parent ); Py_INCREF( const_str_plain_parent );
    PyTuple_SET_ITEM( const_tuple_aaa6b2dfc709df7bbf6fa74c898cfdc6_tuple, 3, const_str_plain_exc ); Py_INCREF( const_str_plain_exc );
    PyTuple_SET_ITEM( const_tuple_aaa6b2dfc709df7bbf6fa74c898cfdc6_tuple, 4, const_str_plain_addr ); Py_INCREF( const_str_plain_addr );
    const_str_plain__visitedPaths = UNSTREAM_STRING( &constant_bin[ 66416 ], 13, 1 );
    const_str_digest_8cbef258d5e894fb4a8bfabd10a765e6 = UNSTREAM_STRING( &constant_bin[ 66429 ], 184, 0 );
    const_str_digest_ace7670f40fe17ba87c5f1c2567cf3cc = UNSTREAM_STRING( &constant_bin[ 66613 ], 227, 0 );
    const_str_digest_3d248abb735e9643ab9289aa3eb6f98b = UNSTREAM_STRING( &constant_bin[ 66840 ], 86, 0 );
    const_str_digest_ff05de07c412a3882062055038d7671a = UNSTREAM_STRING( &constant_bin[ 66926 ], 186, 0 );
    const_tuple_str_plain_Importer_str_plain_add_path_str_plain_remove_path_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Importer_str_plain_add_path_str_plain_remove_path_tuple, 0, const_str_plain_Importer ); Py_INCREF( const_str_plain_Importer );
    PyTuple_SET_ITEM( const_tuple_str_plain_Importer_str_plain_add_path_str_plain_remove_path_tuple, 1, const_str_plain_add_path ); Py_INCREF( const_str_plain_add_path );
    PyTuple_SET_ITEM( const_tuple_str_plain_Importer_str_plain_add_path_str_plain_remove_path_tuple, 2, const_str_plain_remove_path ); Py_INCREF( const_str_plain_remove_path );
    const_str_plain_op_isfile = UNSTREAM_STRING( &constant_bin[ 67112 ], 9, 1 );
    const_tuple_7cd0c21d73281d87e99c2a27bf0571f7_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_7cd0c21d73281d87e99c2a27bf0571f7_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7cd0c21d73281d87e99c2a27bf0571f7_tuple, 1, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_7cd0c21d73281d87e99c2a27bf0571f7_tuple, 2, const_str_plain_parent ); Py_INCREF( const_str_plain_parent );
    PyTuple_SET_ITEM( const_tuple_7cd0c21d73281d87e99c2a27bf0571f7_tuple, 3, const_str_plain_plug_tests ); Py_INCREF( const_str_plain_plug_tests );
    PyTuple_SET_ITEM( const_tuple_7cd0c21d73281d87e99c2a27bf0571f7_tuple, 4, const_str_plain_addr ); Py_INCREF( const_str_plain_addr );
    PyTuple_SET_ITEM( const_tuple_7cd0c21d73281d87e99c2a27bf0571f7_tuple, 5, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    PyTuple_SET_ITEM( const_tuple_7cd0c21d73281d87e99c2a27bf0571f7_tuple, 6, const_str_plain_exc ); Py_INCREF( const_str_plain_exc );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nose$loader( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_42445f9454ae39ec321aaa9baceb30e1;
static PyCodeObject *codeobj_ab641dbe9770db27a096c9a201e84b54;
static PyCodeObject *codeobj_9e4ce94bce2e2109687fe7d9efc8f672;
static PyCodeObject *codeobj_71805391bb3442eb1d24c60374039392;
static PyCodeObject *codeobj_d25ccf95d8906183a6390091e1fd8515;
static PyCodeObject *codeobj_1d770dee8e17a5a164e8dd2928c76ccd;
static PyCodeObject *codeobj_8f21354a96752ac981634269059373e9;
static PyCodeObject *codeobj_b9c6634566cd6e2ada92e502986a5a0d;
static PyCodeObject *codeobj_046cecd69054adc931e69d5f44dbd5ff;
static PyCodeObject *codeobj_1d54a2ae618fc0b077ce9a0cb4a00e2e;
static PyCodeObject *codeobj_3031e09bdf4d04d57711943007f2dd9a;
static PyCodeObject *codeobj_02ec43b569a2ea6561213d0b6c3e2b11;
static PyCodeObject *codeobj_e00473447787b4332bcfc9d4d2d33bb4;
static PyCodeObject *codeobj_839167fe6751b586ec6c694bbf4f97dd;
static PyCodeObject *codeobj_8b3f28ee7a046d7d089eefaf991705b5;
static PyCodeObject *codeobj_ce603aaa341d556b1255804e99ea14d5;
static PyCodeObject *codeobj_99e8a172770540cbc1dc81b0c7924e0c;
static PyCodeObject *codeobj_59f1379f2a842b69c2c86e8f98ab741b;
static PyCodeObject *codeobj_e41e4b1af7f523b08d834b786d572891;
static PyCodeObject *codeobj_b8889f363fa4d404f3b3758bf783b58f;
static PyCodeObject *codeobj_4bd1c2eab3d7180084e0572a0c53679d;
static PyCodeObject *codeobj_524fdd6cace140d63fa5d5dafed780e2;
static PyCodeObject *codeobj_be31f596dca9e9ead924cf19efa12551;
static PyCodeObject *codeobj_43c3194c7dbca60d0f46d55cdb84f956;
static PyCodeObject *codeobj_717a02d681332eb38e711aa2be9ce057;
static PyCodeObject *codeobj_3662c677432810ab9901161545427acc;
static PyCodeObject *codeobj_a405ac4959036683c1fcda4f725cd324;
static PyCodeObject *codeobj_72e1d79266777c4a33d56340b883bac3;
static PyCodeObject *codeobj_a4c60ab2a3cf95fef7f46fd36e1d909e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_eea9031ec4525e779b4332bfc3247ce8 );
    codeobj_42445f9454ae39ec321aaa9baceb30e1 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 195, const_tuple_str_plain_self_str_plain_entry_path_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_ab641dbe9770db27a096c9a201e84b54 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 330, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9e4ce94bce2e2109687fe7d9efc8f672 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 332, const_tuple_str_plain_t_str_plain_self_str_plain_module_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_71805391bb3442eb1d24c60374039392 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 455, const_tuple_str_plain_self_str_plain_path_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_d25ccf95d8906183a6390091e1fd8515 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 59, const_tuple_10e5837211939f6ed23250f9289c1e57_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1d770dee8e17a5a164e8dd2928c76ccd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__addVisitedPath, 133, const_tuple_str_plain_self_str_plain_path_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8f21354a96752ac981634269059373e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__haveVisited, 125, const_tuple_str_plain_self_str_plain_path_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b9c6634566cd6e2ada92e502986a5a0d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__makeTest, 536, const_tuple_7cd0c21d73281d87e99c2a27bf0571f7_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_046cecd69054adc931e69d5f44dbd5ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate, 249, const_tuple_str_plain_g_str_plain_m_tuple, 2, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1d54a2ae618fc0b077ce9a0cb4a00e2e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate, 249, const_tuple_str_plain_g_str_plain_m_tuple, 2, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_3031e09bdf4d04d57711943007f2dd9a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate, 282, const_tuple_str_plain_g_str_plain_c_tuple, 2, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_02ec43b569a2ea6561213d0b6c3e2b11 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate, 282, const_tuple_str_plain_g_str_plain_c_tuple, 2, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_e00473447787b4332bcfc9d4d2d33bb4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getTestCaseNames, 101, const_tuple_828cb65934bcef1d0666664d371fb632_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_839167fe6751b586ec6c694bbf4f97dd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loadTestsFromDir, 137, const_tuple_str_plain_self_str_plain_path_tuple, 2, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8b3f28ee7a046d7d089eefaf991705b5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loadTestsFromDir, 137, const_tuple_str_plain_self_str_plain_path_tuple, 2, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_ce603aaa341d556b1255804e99ea14d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loadTestsFromFile, 214, const_tuple_95ab7f10944a12c5c53048f41b910113_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_99e8a172770540cbc1dc81b0c7924e0c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loadTestsFromGenerator, 242, const_tuple_3b9d0acca70586f5bd7f56653da387fe_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_59f1379f2a842b69c2c86e8f98ab741b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loadTestsFromGeneratorMethod, 264, const_tuple_f14f9243702bc7688dd6b664a1dc0203_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e41e4b1af7f523b08d834b786d572891 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loadTestsFromModule, 308, const_tuple_c03315979b2c46b4f6b8d2832d9a2b95_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b8889f363fa4d404f3b3758bf783b58f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loadTestsFromName, 361, const_tuple_968f9a376df09c8afe4284b5980ff953_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4bd1c2eab3d7180084e0572a0c53679d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loadTestsFromNames, 469, const_tuple_08df04635d18c1c2ea24878464db4a05_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_524fdd6cace140d63fa5d5dafed780e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loadTestsFromTestCase, 483, const_tuple_61e91daa3653f39fd888bf44596d96e3_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_be31f596dca9e9ead924cf19efa12551 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loadTestsFromTestClass, 500, const_tuple_77d5afb07586354ce72843a4431efdc8_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_43c3194c7dbca60d0f46d55cdb84f956 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loader, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_717a02d681332eb38e711aa2be9ce057 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makeTest, 521, const_tuple_aaa6b2dfc709df7bbf6fa74c898cfdc6_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3662c677432810ab9901161545427acc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parseGeneratedTest, 607, const_tuple_19ff99d1f0a959daa5d57caed46a7707_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a405ac4959036683c1fcda4f725cd324 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve, 595, const_tuple_a1e6bdbd4397eaf5159b8924b92d6117_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_72e1d79266777c4a33d56340b883bac3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wanted, 108, const_tuple_str_plain_attr_str_plain_cls_str_plain_sel_str_plain_item_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a4c60ab2a3cf95fef7f46fd36e1d909e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wanted, 508, const_tuple_str_plain_attr_str_plain_cls_str_plain_sel_str_plain_item_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_TestLoader_of_nose$loader( PyObject **python_pars );


static void genobj_1_loadTestsFromDir_of_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader_context( Nuitka_GeneratorObject *generator );


static void genobj_1_generate_of_function_1_generate_of_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader_context( Nuitka_GeneratorObject *generator );


static void genobj_1_generate_of_function_1_generate_of_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader_context( Nuitka_GeneratorObject *generator );


NUITKA_CROSS_MODULE PyObject *impl_function_6_complex_call_helper_star_list_of___internal__( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_10_loadTestsFromName_of_class_1_TestLoader_of_nose$loader( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_11_loadTestsFromNames_of_class_1_TestLoader_of_nose$loader( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_12_loadTestsFromTestCase_of_class_1_TestLoader_of_nose$loader(  );


static PyObject *MAKE_FUNCTION_function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader(  );


static PyObject *MAKE_FUNCTION_function_14_makeTest_of_class_1_TestLoader_of_nose$loader( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_15__makeTest_of_class_1_TestLoader_of_nose$loader( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_16_resolve_of_class_1_TestLoader_of_nose$loader(  );


static PyObject *MAKE_FUNCTION_function_17_parseGeneratedTest_of_class_1_TestLoader_of_nose$loader(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_TestLoader_of_nose$loader( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1_generate_of_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader( PyObject *defaults, PyCellObject *closure_generator, PyCellObject *closure_self );


static PyObject *MAKE_FUNCTION_function_1_generate_of_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader( PyObject *defaults, PyCellObject *closure_generator, PyCellObject *closure_self );


static PyObject *MAKE_FUNCTION_function_1_lambda_of_function_10_loadTestsFromName_of_class_1_TestLoader_of_nose$loader( PyCellObject *closure_path, PyCellObject *closure_self );


static PyObject *MAKE_FUNCTION_function_1_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader(  );


static PyObject *MAKE_FUNCTION_function_1_lambda_of_genobj_1_loadTestsFromDir_of_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader( PyCellObject *closure_entry_path, PyCellObject *closure_self );


static PyObject *MAKE_FUNCTION_function_1_wanted_of_function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1_wanted_of_function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader(  );


static PyObject *MAKE_FUNCTION_function_2_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader( PyCellObject *closure_module, PyCellObject *closure_self );


static PyObject *MAKE_FUNCTION_function_3__haveVisited_of_class_1_TestLoader_of_nose$loader(  );


static PyObject *MAKE_FUNCTION_function_4__addVisitedPath_of_class_1_TestLoader_of_nose$loader(  );


static PyObject *MAKE_FUNCTION_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader(  );


static PyObject *MAKE_FUNCTION_function_6_loadTestsFromFile_of_class_1_TestLoader_of_nose$loader(  );


static PyObject *MAKE_FUNCTION_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader(  );


static PyObject *MAKE_FUNCTION_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader(  );


static PyObject *MAKE_FUNCTION_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader( PyObject *defaults );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_TestLoader_of_nose$loader( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var_config = NULL;
    PyObject *var_importer = NULL;
    PyObject *var_workingDir = NULL;
    PyObject *var_selector = NULL;
    PyObject *var_suiteClass = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_getTestCaseNames = NULL;
    PyObject *var__haveVisited = NULL;
    PyObject *var__addVisitedPath = NULL;
    PyObject *var_loadTestsFromDir = NULL;
    PyObject *var_loadTestsFromFile = NULL;
    PyObject *var_loadTestsFromGenerator = NULL;
    PyObject *var_loadTestsFromGeneratorMethod = NULL;
    PyObject *var_loadTestsFromModule = NULL;
    PyObject *var_loadTestsFromName = NULL;
    PyObject *var_loadTestsFromNames = NULL;
    PyObject *var_loadTestsFromTestCase = NULL;
    PyObject *var_loadTestsFromTestClass = NULL;
    PyObject *var_makeTest = NULL;
    PyObject *var__makeTest = NULL;
    PyObject *var_resolve = NULL;
    PyObject *var_parseGeneratedTest = NULL;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_6fbd26c2ed3ec428c6e494e7dc8a7b6d;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_c5603b81ec5e6c7e68f169aefcba6c36;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = Py_None;
    assert( var_config == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_config = tmp_assign_source_3;

    tmp_assign_source_4 = Py_None;
    assert( var_importer == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_importer = tmp_assign_source_4;

    tmp_assign_source_5 = Py_None;
    assert( var_workingDir == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_workingDir = tmp_assign_source_5;

    tmp_assign_source_6 = Py_None;
    assert( var_selector == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_selector = tmp_assign_source_6;

    tmp_assign_source_7 = Py_None;
    assert( var_suiteClass == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_suiteClass = tmp_assign_source_7;

    tmp_defaults_1 = const_tuple_none_none_none_none_tuple;
    tmp_assign_source_8 = MAKE_FUNCTION_function_1___init___of_class_1_TestLoader_of_nose$loader( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader(  );
    assert( var_getTestCaseNames == NULL );
    var_getTestCaseNames = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_function_3__haveVisited_of_class_1_TestLoader_of_nose$loader(  );
    assert( var__haveVisited == NULL );
    var__haveVisited = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_function_4__addVisitedPath_of_class_1_TestLoader_of_nose$loader(  );
    assert( var__addVisitedPath == NULL );
    var__addVisitedPath = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader(  );
    assert( var_loadTestsFromDir == NULL );
    var_loadTestsFromDir = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_function_6_loadTestsFromFile_of_class_1_TestLoader_of_nose$loader(  );
    assert( var_loadTestsFromFile == NULL );
    var_loadTestsFromFile = tmp_assign_source_13;

    tmp_assign_source_14 = MAKE_FUNCTION_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader(  );
    assert( var_loadTestsFromGenerator == NULL );
    var_loadTestsFromGenerator = tmp_assign_source_14;

    tmp_assign_source_15 = MAKE_FUNCTION_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader(  );
    assert( var_loadTestsFromGeneratorMethod == NULL );
    var_loadTestsFromGeneratorMethod = tmp_assign_source_15;

    tmp_defaults_2 = const_tuple_none_false_tuple;
    tmp_assign_source_16 = MAKE_FUNCTION_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    assert( var_loadTestsFromModule == NULL );
    var_loadTestsFromModule = tmp_assign_source_16;

    tmp_defaults_3 = const_tuple_none_false_tuple;
    tmp_assign_source_17 = MAKE_FUNCTION_function_10_loadTestsFromName_of_class_1_TestLoader_of_nose$loader( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    assert( var_loadTestsFromName == NULL );
    var_loadTestsFromName = tmp_assign_source_17;

    tmp_defaults_4 = const_tuple_none_tuple;
    tmp_assign_source_18 = MAKE_FUNCTION_function_11_loadTestsFromNames_of_class_1_TestLoader_of_nose$loader( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    assert( var_loadTestsFromNames == NULL );
    var_loadTestsFromNames = tmp_assign_source_18;

    tmp_assign_source_19 = MAKE_FUNCTION_function_12_loadTestsFromTestCase_of_class_1_TestLoader_of_nose$loader(  );
    assert( var_loadTestsFromTestCase == NULL );
    var_loadTestsFromTestCase = tmp_assign_source_19;

    tmp_assign_source_20 = MAKE_FUNCTION_function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader(  );
    assert( var_loadTestsFromTestClass == NULL );
    var_loadTestsFromTestClass = tmp_assign_source_20;

    tmp_defaults_5 = const_tuple_none_tuple;
    tmp_assign_source_21 = MAKE_FUNCTION_function_14_makeTest_of_class_1_TestLoader_of_nose$loader( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    assert( var_makeTest == NULL );
    var_makeTest = tmp_assign_source_21;

    tmp_defaults_6 = const_tuple_none_tuple;
    tmp_assign_source_22 = MAKE_FUNCTION_function_15__makeTest_of_class_1_TestLoader_of_nose$loader( INCREASE_REFCOUNT( tmp_defaults_6 ) );
    assert( var__makeTest == NULL );
    var__makeTest = tmp_assign_source_22;

    tmp_assign_source_23 = MAKE_FUNCTION_function_16_resolve_of_class_1_TestLoader_of_nose$loader(  );
    assert( var_resolve == NULL );
    var_resolve = tmp_assign_source_23;

    tmp_assign_source_24 = MAKE_FUNCTION_function_17_parseGeneratedTest_of_class_1_TestLoader_of_nose$loader(  );
    assert( var_parseGeneratedTest == NULL );
    var_parseGeneratedTest = tmp_assign_source_24;

    // Tried code:
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

    if ( var___doc__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__
        );

        assert( res == 0 );
    }

    if ( var_config )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_config,
            var_config
        );

        assert( res == 0 );
    }

    if ( var_importer )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_importer,
            var_importer
        );

        assert( res == 0 );
    }

    if ( var_workingDir )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_workingDir,
            var_workingDir
        );

        assert( res == 0 );
    }

    if ( var_selector )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_selector,
            var_selector
        );

        assert( res == 0 );
    }

    if ( var_suiteClass )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_suiteClass,
            var_suiteClass
        );

        assert( res == 0 );
    }

    if ( var___init__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__
        );

        assert( res == 0 );
    }

    if ( var_getTestCaseNames )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getTestCaseNames,
            var_getTestCaseNames
        );

        assert( res == 0 );
    }

    if ( var__haveVisited )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__haveVisited,
            var__haveVisited
        );

        assert( res == 0 );
    }

    if ( var__addVisitedPath )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__addVisitedPath,
            var__addVisitedPath
        );

        assert( res == 0 );
    }

    if ( var_loadTestsFromDir )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_loadTestsFromDir,
            var_loadTestsFromDir
        );

        assert( res == 0 );
    }

    if ( var_loadTestsFromFile )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_loadTestsFromFile,
            var_loadTestsFromFile
        );

        assert( res == 0 );
    }

    if ( var_loadTestsFromGenerator )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_loadTestsFromGenerator,
            var_loadTestsFromGenerator
        );

        assert( res == 0 );
    }

    if ( var_loadTestsFromGeneratorMethod )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_loadTestsFromGeneratorMethod,
            var_loadTestsFromGeneratorMethod
        );

        assert( res == 0 );
    }

    if ( var_loadTestsFromModule )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_loadTestsFromModule,
            var_loadTestsFromModule
        );

        assert( res == 0 );
    }

    if ( var_loadTestsFromName )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_loadTestsFromName,
            var_loadTestsFromName
        );

        assert( res == 0 );
    }

    if ( var_loadTestsFromNames )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_loadTestsFromNames,
            var_loadTestsFromNames
        );

        assert( res == 0 );
    }

    if ( var_loadTestsFromTestCase )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_loadTestsFromTestCase,
            var_loadTestsFromTestCase
        );

        assert( res == 0 );
    }

    if ( var_loadTestsFromTestClass )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_loadTestsFromTestClass,
            var_loadTestsFromTestClass
        );

        assert( res == 0 );
    }

    if ( var_makeTest )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_makeTest,
            var_makeTest
        );

        assert( res == 0 );
    }

    if ( var__makeTest )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__makeTest,
            var__makeTest
        );

        assert( res == 0 );
    }

    if ( var_resolve )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_resolve,
            var_resolve
        );

        assert( res == 0 );
    }

    if ( var_parseGeneratedTest )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_parseGeneratedTest,
            var_parseGeneratedTest
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var_config );
    Py_DECREF( var_config );
    var_config = NULL;

    CHECK_OBJECT( (PyObject *)var_importer );
    Py_DECREF( var_importer );
    var_importer = NULL;

    CHECK_OBJECT( (PyObject *)var_workingDir );
    Py_DECREF( var_workingDir );
    var_workingDir = NULL;

    CHECK_OBJECT( (PyObject *)var_selector );
    Py_DECREF( var_selector );
    var_selector = NULL;

    CHECK_OBJECT( (PyObject *)var_suiteClass );
    Py_DECREF( var_suiteClass );
    var_suiteClass = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_getTestCaseNames );
    Py_DECREF( var_getTestCaseNames );
    var_getTestCaseNames = NULL;

    CHECK_OBJECT( (PyObject *)var__haveVisited );
    Py_DECREF( var__haveVisited );
    var__haveVisited = NULL;

    CHECK_OBJECT( (PyObject *)var__addVisitedPath );
    Py_DECREF( var__addVisitedPath );
    var__addVisitedPath = NULL;

    CHECK_OBJECT( (PyObject *)var_loadTestsFromDir );
    Py_DECREF( var_loadTestsFromDir );
    var_loadTestsFromDir = NULL;

    CHECK_OBJECT( (PyObject *)var_loadTestsFromFile );
    Py_DECREF( var_loadTestsFromFile );
    var_loadTestsFromFile = NULL;

    CHECK_OBJECT( (PyObject *)var_loadTestsFromGenerator );
    Py_DECREF( var_loadTestsFromGenerator );
    var_loadTestsFromGenerator = NULL;

    CHECK_OBJECT( (PyObject *)var_loadTestsFromGeneratorMethod );
    Py_DECREF( var_loadTestsFromGeneratorMethod );
    var_loadTestsFromGeneratorMethod = NULL;

    CHECK_OBJECT( (PyObject *)var_loadTestsFromModule );
    Py_DECREF( var_loadTestsFromModule );
    var_loadTestsFromModule = NULL;

    CHECK_OBJECT( (PyObject *)var_loadTestsFromName );
    Py_DECREF( var_loadTestsFromName );
    var_loadTestsFromName = NULL;

    CHECK_OBJECT( (PyObject *)var_loadTestsFromNames );
    Py_DECREF( var_loadTestsFromNames );
    var_loadTestsFromNames = NULL;

    CHECK_OBJECT( (PyObject *)var_loadTestsFromTestCase );
    Py_DECREF( var_loadTestsFromTestCase );
    var_loadTestsFromTestCase = NULL;

    CHECK_OBJECT( (PyObject *)var_loadTestsFromTestClass );
    Py_DECREF( var_loadTestsFromTestClass );
    var_loadTestsFromTestClass = NULL;

    CHECK_OBJECT( (PyObject *)var_makeTest );
    Py_DECREF( var_makeTest );
    var_makeTest = NULL;

    CHECK_OBJECT( (PyObject *)var__makeTest );
    Py_DECREF( var__makeTest );
    var__makeTest = NULL;

    CHECK_OBJECT( (PyObject *)var_resolve );
    Py_DECREF( var_resolve );
    var_resolve = NULL;

    CHECK_OBJECT( (PyObject *)var_parseGeneratedTest );
    Py_DECREF( var_parseGeneratedTest );
    var_parseGeneratedTest = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_TestLoader_of_nose$loader );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_config = python_pars[ 1 ];
    PyObject *par_importer = python_pars[ 2 ];
    PyObject *par_workingDir = python_pars[ 3 ];
    PyObject *par_selector = python_pars[ 4 ];
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
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
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    bool tmp_result;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d25ccf95d8906183a6390091e1fd8515, module_nose$loader );
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
    tmp_compare_left_1 = par_config;

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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Config );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Config );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Config" );
        exception_tb = NULL;

        exception_lineno = 80;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 80;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_config;
        assert( old != NULL );
        par_config = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = par_importer;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Importer );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Importer );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Importer" );
        exception_tb = NULL;

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_config;

    tmp_dict_key_1 = const_str_plain_config;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 82;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_importer;
        assert( old != NULL );
        par_importer = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_compare_left_3 = par_workingDir;

    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_3 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_1 = par_config;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_workingDir );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_workingDir;
        assert( old != NULL );
        par_workingDir = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_compare_left_4 = par_selector;

    tmp_compare_right_4 = Py_None;
    tmp_is_4 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_4 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_defaultSelector );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defaultSelector );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "defaultSelector" );
        exception_tb = NULL;

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_config;

    frame_function->f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_selector;
        assert( old != NULL );
        par_selector = tmp_assign_source_4;
        Py_DECREF( old );
    }

    goto branch_end_4;
    branch_no_4:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isclass );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isclass );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isclass" );
        exception_tb = NULL;

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_selector;

    frame_function->f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_5 = par_selector;

    tmp_args_element_name_3 = par_config;

    frame_function->f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_selector;
        assert( old != NULL );
        par_selector = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_5:;
    branch_end_4:;
    tmp_assattr_name_1 = par_config;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_config, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_importer;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_importer, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_op_normpath );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_op_normpath );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "op_normpath" );
        exception_tb = NULL;

        exception_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_op_abspath );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_op_abspath );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "op_abspath" );
        exception_tb = NULL;

        exception_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_workingDir;

    frame_function->f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_workingDir, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_assattr_name_4 = par_selector;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;

        exception_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_selector, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_config;

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_addPaths );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_add_path );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_path );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "add_path" );
        exception_tb = NULL;

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_workingDir;

    tmp_args_element_name_7 = par_config;

    frame_function->f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_ContextSuiteFactory );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ContextSuiteFactory );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ContextSuiteFactory" );
        exception_tb = NULL;

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = par_config;

    tmp_dict_key_2 = const_str_plain_config;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 95;
    tmp_assattr_name_5 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_9, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_suiteClass, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_assattr_name_6 = PySet_New( NULL );
    tmp_assattr_target_6 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__visitedPaths, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 97;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_TestLoader );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = par_self;

    frame_function->f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
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

            if ( par_config )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_config,
                    par_config
                );

                assert( res == 0 );
            }

            if ( par_importer )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_importer,
                    par_importer
                );

                assert( res == 0 );
            }

            if ( par_workingDir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_workingDir,
                    par_workingDir
                );

                assert( res == 0 );
            }

            if ( par_selector )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_selector,
                    par_selector
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_importer );
    Py_DECREF( par_importer );
    par_importer = NULL;

    CHECK_OBJECT( (PyObject *)par_workingDir );
    Py_DECREF( par_workingDir );
    par_workingDir = NULL;

    Py_XDECREF( par_selector );
    par_selector = NULL;

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

    Py_XDECREF( par_config );
    par_config = NULL;

    Py_XDECREF( par_importer );
    par_importer = NULL;

    Py_XDECREF( par_workingDir );
    par_workingDir = NULL;

    Py_XDECREF( par_selector );
    par_selector = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_testCaseClass = python_pars[ 1 ];
    PyObject *var_wanted = NULL;
    PyObject *var_cases = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dir_arg_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e00473447787b4332bcfc9d4d2d33bb4, module_nose$loader );
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

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_config );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getTestCaseNamesCompat );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 105;
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_TestLoader );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_getTestCaseNames );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    tmp_args_element_name_2 = par_testCaseClass;

    frame_function->f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_defaults_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_testCaseClass;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_source_name_5 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_selector );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = MAKE_FUNCTION_function_1_wanted_of_function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader( tmp_defaults_1 );
    assert( var_wanted == NULL );
    var_wanted = tmp_assign_source_1;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_filter );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_3 = var_wanted;

    tmp_dir_arg_1 = par_testCaseClass;

    tmp_args_element_name_4 = PyObject_Dir( tmp_dir_arg_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    assert( var_cases == NULL );
    var_cases = tmp_assign_source_2;

    tmp_operand_name_1 = var_cases;

    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
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
    tmp_hasattr_value_1 = par_testCaseClass;

    tmp_hasattr_attr_1 = const_str_plain_runTest;
    tmp_and_right_value_1 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
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


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_3 = LIST_COPY( const_list_str_plain_runTest_list );
    {
        PyObject *old = var_cases;
        assert( old != NULL );
        var_cases = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_source_name_6 = par_self;

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sortTestMethodsUsing );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 121;
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
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_sort_list );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sort_list );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sort_list" );
        exception_tb = NULL;

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_cases;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_cmp_to_key );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmp_to_key );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "cmp_to_key" );
        exception_tb = NULL;

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = par_self;

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_sortTestMethodsUsing );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;

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

            if ( par_testCaseClass )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_testCaseClass,
                    par_testCaseClass
                );

                assert( res == 0 );
            }

            if ( var_wanted )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wanted,
                    var_wanted
                );

                assert( res == 0 );
            }

            if ( var_cases )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cases,
                    var_cases
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

    tmp_return_value = var_cases;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_testCaseClass );
    Py_DECREF( par_testCaseClass );
    par_testCaseClass = NULL;

    Py_XDECREF( var_wanted );
    var_wanted = NULL;

    Py_XDECREF( var_cases );
    var_cases = NULL;

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

    CHECK_OBJECT( (PyObject *)par_testCaseClass );
    Py_DECREF( par_testCaseClass );
    par_testCaseClass = NULL;

    Py_XDECREF( var_wanted );
    var_wanted = NULL;

    Py_XDECREF( var_cases );
    var_cases = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_1_wanted_of_function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_attr = python_pars[ 0 ];
    PyObject *par_cls = python_pars[ 1 ];
    PyObject *par_sel = python_pars[ 2 ];
    PyObject *var_item = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_72e1d79266777c4a33d56340b883bac3, module_nose$loader );
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
    tmp_getattr_target_1 = par_cls;

    tmp_getattr_attr_1 = par_attr;

    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    assert( var_item == NULL );
    var_item = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isfunction );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfunction );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isfunction" );
        exception_tb = NULL;

        exception_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_item;

    frame_function->f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 110;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unbound_method );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unbound_method );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unbound_method" );
        exception_tb = NULL;

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_cls;

    tmp_args_element_name_3 = var_item;

    frame_function->f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_item;
        assert( old != NULL );
        var_item = tmp_assign_source_2;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_ismethod );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ismethod );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ismethod" );
        exception_tb = NULL;

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_item;

    frame_function->f_lineno = 112;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 112;
        goto frame_exception_exit_1;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    branch_end_1:;
    tmp_source_name_1 = par_sel;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_wantMethod );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_item;

    frame_function->f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
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
            if ( par_attr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_attr,
                    par_attr
                );

                assert( res == 0 );
            }

            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );

                assert( res == 0 );
            }

            if ( par_sel )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sel,
                    par_sel
                );

                assert( res == 0 );
            }

            if ( var_item )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_item,
                    var_item
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
    NUITKA_CANNOT_GET_HERE( function_1_wanted_of_function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_attr );
    Py_DECREF( par_attr );
    par_attr = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_sel );
    Py_DECREF( par_sel );
    par_sel = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

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

    CHECK_OBJECT( (PyObject *)par_attr );
    Py_DECREF( par_attr );
    par_attr = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_sel );
    Py_DECREF( par_sel );
    par_sel = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_wanted_of_function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_3__haveVisited_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_path = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_compare_left_1 = par_path;

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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    branch_no_1:;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8f21354a96752ac981634269059373e9, module_nose$loader );
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
    tmp_compexpr_left_1 = par_path;

    tmp_source_name_1 = par_self;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__visitedPaths );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_return_value = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_path )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_path,
                    par_path
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
    NUITKA_CANNOT_GET_HERE( function_3__haveVisited_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

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

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3__haveVisited_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_4__addVisitedPath_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_path = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1d770dee8e17a5a164e8dd2928c76ccd, module_nose$loader );
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
    tmp_compare_left_1 = par_path;

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_self;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__visitedPaths );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_path;

    frame_function->f_lineno = 135;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

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

            if ( par_path )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_path,
                    par_path
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
    NUITKA_CANNOT_GET_HERE( function_4__addVisitedPath_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

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

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4__addVisitedPath_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyCellObject *par_path = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(2 * sizeof(PyCellObject *));
        closure[0] = par_path;
        Py_INCREF( closure[0] );
        closure[1] = par_self;
        Py_INCREF( closure[1] );

        tmp_return_value = Nuitka_Generator_New(
            genobj_1_loadTestsFromDir_of_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader_context,
            const_str_plain_loadTestsFromDir,
#if PYTHON_VERSION >= 350
            NULL,
#endif
            codeobj_8b3f28ee7a046d7d089eefaf991705b5,
            closure,
            2
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void genobj_1_loadTestsFromDir_of_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_plugins = NULL;
    PyObject *var_paths_added = NULL;
    PyObject *var_entries = NULL;
    PyObject *var_entry = NULL;
    PyCellObject *var_entry_path = PyCell_EMPTY();
    PyObject *var_is_file = NULL;
    PyObject *var_wanted = NULL;
    PyObject *var_is_dir = NULL;
    PyObject *var_is_package = NULL;
    PyObject *var_tests = NULL;
    PyObject *var_test = NULL;
    PyObject *var_p = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
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
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_expression_name_3;
    PyObject *tmp_expression_name_4;
    PyObject *tmp_expression_name_5;
    PyObject *tmp_expression_name_6;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_operand_name_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_839167fe6751b586ec6c694bbf4f97dd, module_nose$loader );
    generator->m_frame = cache_frame_generator;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing += 1;
#endif

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->f_exc_type == Py_None ) generator->m_frame->f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->f_exc_type );
    generator->m_frame->f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->f_exc_value );
    generator->m_frame->f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->f_exc_traceback );
#endif

    // Framed code:
    // Throwing into not started generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            exception_lineno = 137;
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_debug );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_31d63731dfc77b26c105b432d67a5617;
    tmp_args_element_name_2 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "path" );
        exception_tb = NULL;

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 143;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_config );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        goto frame_exception_exit_1;
    }
    assert( var_plugins == NULL );
    var_plugins = tmp_assign_source_1;

    tmp_source_name_4 = var_plugins;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_beforeDirectory );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "path" );
        exception_tb = NULL;

        exception_lineno = 145;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 145;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_config );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_addPaths );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 146;
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
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_add_path );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_path );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "add_path" );
        exception_tb = NULL;

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "path" );
        exception_tb = NULL;

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_config );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 147;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    assert( var_paths_added == NULL );
    var_paths_added = tmp_assign_source_2;

    branch_no_1:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

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

        exception_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_listdir );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "path" );
        exception_tb = NULL;

        exception_lineno = 149;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    assert( var_entries == NULL );
    var_entries = tmp_assign_source_3;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_sort_list );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sort_list );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sort_list" );
        exception_tb = NULL;

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_entries;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_regex_last_key );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_regex_last_key );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "regex_last_key" );
        exception_tb = NULL;

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_config );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_testMatch );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_1 = var_entries;

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
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
            generator->m_frame->f_lineno = 151;
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
        PyObject *old = var_entry;
        var_entry = tmp_assign_source_6;
        Py_INCREF( var_entry );
        Py_XDECREF( old );
    }

    tmp_source_name_11 = var_entry;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_startswith );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 154;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 154;
        goto try_except_handler_2;
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
    goto loop_start_1;
    branch_no_2:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_op_abspath );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_op_abspath );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "op_abspath" );
        exception_tb = NULL;

        exception_lineno = 156;
        goto try_except_handler_2;
    }

    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_op_join );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_op_join );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "op_join" );
        exception_tb = NULL;

        exception_lineno = 156;
        goto try_except_handler_2;
    }

    tmp_args_element_name_11 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "path" );
        exception_tb = NULL;

        exception_lineno = 156;
        goto try_except_handler_2;
    }

    tmp_args_element_name_12 = var_entry;

    generator->m_frame->f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto try_except_handler_2;
    }
    {
        PyObject *old = PyCell_GET( var_entry_path );
        PyCell_SET( var_entry_path, tmp_assign_source_7 );
        Py_XDECREF( old );
    }

    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_op_isfile );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_op_isfile );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "op_isfile" );
        exception_tb = NULL;

        exception_lineno = 157;
        goto try_except_handler_2;
    }

    tmp_args_element_name_13 = PyCell_GET( var_entry_path );

    if ( tmp_args_element_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "entry_path" );
        exception_tb = NULL;

        exception_lineno = 157;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 157;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_is_file;
        var_is_file = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = Py_False;
    {
        PyObject *old = var_wanted;
        var_wanted = tmp_assign_source_9;
        Py_INCREF( var_wanted );
        Py_XDECREF( old );
    }

    tmp_cond_value_3 = var_is_file;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_10 = Py_False;
    {
        PyObject *old = var_is_dir;
        var_is_dir = tmp_assign_source_10;
        Py_INCREF( var_is_dir );
        Py_XDECREF( old );
    }

    tmp_source_name_13 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 161;
        goto try_except_handler_2;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_selector );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        goto try_except_handler_2;
    }
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_wantFile );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        goto try_except_handler_2;
    }
    tmp_args_element_name_14 = PyCell_GET( var_entry_path );

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "entry_path" );
        exception_tb = NULL;

        exception_lineno = 161;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 161;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_wanted;
        assert( old != NULL );
        var_wanted = tmp_assign_source_11;
        Py_DECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_op_isdir );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_op_isdir );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "op_isdir" );
        exception_tb = NULL;

        exception_lineno = 163;
        goto try_except_handler_2;
    }

    tmp_args_element_name_15 = PyCell_GET( var_entry_path );

    if ( tmp_args_element_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "entry_path" );
        exception_tb = NULL;

        exception_lineno = 163;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 163;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_is_dir;
        var_is_dir = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_cond_value_4 = var_is_dir;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_14 = var_entry;

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_startswith );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 167;
    tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_str_plain___tuple, 0 ) );

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto try_except_handler_2;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 167;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    goto loop_start_1;
    branch_no_5:;
    tmp_source_name_16 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 169;
        goto try_except_handler_2;
    }

    tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_selector );
    if ( tmp_source_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        goto try_except_handler_2;
    }
    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_wantDirectory );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        goto try_except_handler_2;
    }
    tmp_args_element_name_16 = PyCell_GET( var_entry_path );

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "entry_path" );
        exception_tb = NULL;

        exception_lineno = 169;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 169;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_wanted;
        assert( old != NULL );
        var_wanted = tmp_assign_source_13;
        Py_DECREF( old );
    }

    branch_no_4:;
    branch_end_3:;
    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_ispackage );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ispackage );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ispackage" );
        exception_tb = NULL;

        exception_lineno = 170;
        goto try_except_handler_2;
    }

    tmp_args_element_name_17 = PyCell_GET( var_entry_path );

    if ( tmp_args_element_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "entry_path" );
        exception_tb = NULL;

        exception_lineno = 170;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_is_package;
        var_is_package = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_and_left_value_1 = var_wanted;

    if ( tmp_and_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "wanted" );
        exception_tb = NULL;

        exception_lineno = 177;
        goto try_except_handler_2;
    }

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
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
    tmp_source_name_17 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 177;
        goto try_except_handler_2;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__haveVisited );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto try_except_handler_2;
    }
    tmp_args_element_name_18 = PyCell_GET( var_entry_path );

    if ( tmp_args_element_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "entry_path" );
        exception_tb = NULL;

        exception_lineno = 177;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto try_except_handler_2;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto try_except_handler_2;
    }
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


        exception_lineno = 177;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_18 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 178;
        goto try_except_handler_2;
    }

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__addVisitedPath );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_2;
    }
    tmp_args_element_name_19 = PyCell_GET( var_entry_path );

    if ( tmp_args_element_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "entry_path" );
        exception_tb = NULL;

        exception_lineno = 178;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 178;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_7 = var_is_file;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_19 = var_plugins;

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_beforeContext );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 180;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_18 );
    Py_DECREF( tmp_called_name_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_20 = var_entry;

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_endswith );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 181;
    tmp_cond_value_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, &PyTuple_GET_ITEM( const_tuple_str_digest_802d97a8584e66528f40ec5b87c9e84a_tuple, 0 ) );

    Py_DECREF( tmp_called_name_19 );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto try_except_handler_2;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 181;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_21 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 182;
        goto try_except_handler_2;
    }

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_loadTestsFromName );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyCell_GET( var_entry_path );

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "entry_path" );
        exception_tb = NULL;

        exception_lineno = 183;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_42ffd18cca719075e9303c95295ac21c );
    generator->m_frame->f_lineno = 183;
    tmp_expression_name_1 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto try_except_handler_2;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        goto try_except_handler_2;
    }
    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_22 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 185;
        goto try_except_handler_2;
    }

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_loadTestsFromFile );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto try_except_handler_2;
    }
    tmp_args_element_name_20 = PyCell_GET( var_entry_path );

    if ( tmp_args_element_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "entry_path" );
        exception_tb = NULL;

        exception_lineno = 185;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_expression_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    if ( tmp_expression_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto try_except_handler_2;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto try_except_handler_2;
    }
    branch_end_8:;
    tmp_source_name_23 = var_plugins;

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_afterContext );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 186;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_22 );
    Py_DECREF( tmp_called_name_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_7;
    branch_no_7:;
    tmp_cond_value_9 = var_is_package;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_24 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 190;
        goto try_except_handler_2;
    }

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_loadTestsFromName );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto try_except_handler_2;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyCell_GET( var_entry_path );

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "entry_path" );
        exception_tb = NULL;

        exception_lineno = 191;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_42ffd18cca719075e9303c95295ac21c );
    generator->m_frame->f_lineno = 191;
    tmp_expression_name_3 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_expression_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_2;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto try_except_handler_2;
    }
    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_25 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 194;
        goto try_except_handler_2;
    }

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_suiteClass );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto try_except_handler_2;
    }
    tmp_args_element_name_21 = MAKE_FUNCTION_function_1_lambda_of_genobj_1_loadTestsFromDir_of_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader( var_entry_path, generator->m_closure[1] );
    generator->m_frame->f_lineno = 195;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_expression_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_expression_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto try_except_handler_2;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto try_except_handler_2;
    }
    branch_end_9:;
    branch_end_7:;
    branch_no_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
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

    tmp_assign_source_15 = PyList_New( 0 );
    assert( var_tests == NULL );
    var_tests = tmp_assign_source_15;

    tmp_source_name_26 = var_plugins;

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_loadTestsFromDir );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_22 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_args_element_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_25 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "path" );
        exception_tb = NULL;

        exception_lineno = 197;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 197;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_called_name_25 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
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
            generator->m_frame->f_lineno = 197;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_assign_source_18 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_test;
        var_test = tmp_assign_source_18;
        Py_INCREF( var_test );
        Py_XDECREF( old );
    }

    tmp_source_name_27 = var_tests;

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_append );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto try_except_handler_3;
    }
    tmp_args_element_name_23 = var_test;

    generator->m_frame->f_lineno = 198;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Tried code:
    tmp_cond_value_10 = var_tests;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_28 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 202;
        goto try_except_handler_4;
    }

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_suiteClass );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto try_except_handler_4;
    }
    tmp_args_element_name_24 = var_tests;

    generator->m_frame->f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_expression_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    if ( tmp_expression_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto try_except_handler_4;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto try_except_handler_4;
    }
    branch_no_10:;
    goto try_end_3;
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

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != -1 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, generator->m_frame, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = PyExc_KeyboardInterrupt;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyExc_SystemExit;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_3 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == generator->m_frame) generator->m_frame->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    goto branch_end_11;
    branch_no_11:;
    tmp_source_name_29 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 206;
        goto frame_exception_exit_1;
    }

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_suiteClass );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_25 = PyList_New( 1 );
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {
        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_args_element_name_25 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 206;
        goto frame_exception_exit_1;
    }

    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_args_element_name_25 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 206;
        goto frame_exception_exit_1;
    }

    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_exc_info );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_args_element_name_25 );

        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 206;
    tmp_dircall_arg2_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_29 );
    Py_DECREF( tmp_called_name_29 );
    if ( tmp_dircall_arg2_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_args_element_name_25 );

        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_list_element_1 = impl_function_6_complex_call_helper_star_list_of___internal__( dir_call_args );
    }
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_args_element_name_25 );

        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_25, 0, tmp_list_element_1 );
    generator->m_frame->f_lineno = 206;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_expression_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
    }

    Py_DECREF( tmp_called_name_28 );
    Py_DECREF( tmp_args_element_name_25 );
    if ( tmp_expression_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    branch_end_11:;
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( genobj_1_loadTestsFromDir_of_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader );
    return;
    // End of try:
    try_end_3:;
    tmp_source_name_32 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 209;
        goto frame_exception_exit_1;
    }

    tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_config );
    if ( tmp_source_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_11 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_addPaths );
    Py_DECREF( tmp_source_name_31 );
    if ( tmp_cond_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_11 );

        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_iter_arg_3 = var_paths_added;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "paths_added" );
        exception_tb = NULL;

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_19;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator;

    tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 210;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_assign_source_21 = tmp_for_loop_3__iter_value;

    {
        PyObject *old = var_p;
        var_p = tmp_assign_source_21;
        Py_INCREF( var_p );
        Py_XDECREF( old );
    }

    tmp_called_name_30 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_remove_path );

    if (unlikely( tmp_called_name_30 == NULL ))
    {
        tmp_called_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_remove_path );
    }

    if ( tmp_called_name_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "remove_path" );
        exception_tb = NULL;

        exception_lineno = 211;
        goto try_except_handler_5;
    }

    tmp_args_element_name_26 = var_p;

    generator->m_frame->f_lineno = 211;
    {
        PyObject *call_args[] = { tmp_args_element_name_26 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto try_except_handler_5;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    branch_no_12:;
    tmp_source_name_33 = var_plugins;

    tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_afterDirectory );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_27 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_args_element_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_31 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "path" );
        exception_tb = NULL;

        exception_lineno = 212;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 212;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
    }

    Py_DECREF( tmp_called_name_31 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing -= 1;
#endif

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        int needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_tb->tb_frame != generator->m_frame )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( generator->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    generator->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_path,
                    generator->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_plugins )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_plugins,
                    var_plugins
                );

                assert( res == 0 );
            }

            if ( var_paths_added )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_paths_added,
                    var_paths_added
                );

                assert( res == 0 );
            }

            if ( var_entries )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_entries,
                    var_entries
                );

                assert( res == 0 );
            }

            if ( var_entry )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_entry,
                    var_entry
                );

                assert( res == 0 );
            }

            if ( var_entry_path->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_entry_path,
                    var_entry_path->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_is_file )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_is_file,
                    var_is_file
                );

                assert( res == 0 );
            }

            if ( var_wanted )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wanted,
                    var_wanted
                );

                assert( res == 0 );
            }

            if ( var_is_dir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_is_dir,
                    var_is_dir
                );

                assert( res == 0 );
            }

            if ( var_is_package )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_is_package,
                    var_is_package
                );

                assert( res == 0 );
            }

            if ( var_tests )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tests,
                    var_tests
                );

                assert( res == 0 );
            }

            if ( var_test )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test,
                    var_test
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



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;

    goto try_end_5;
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

    Py_XDECREF( var_plugins );
    var_plugins = NULL;

    Py_XDECREF( var_paths_added );
    var_paths_added = NULL;

    Py_XDECREF( var_entries );
    var_entries = NULL;

    Py_XDECREF( var_entry );
    var_entry = NULL;

    CHECK_OBJECT( (PyObject *)var_entry_path );
    Py_DECREF( var_entry_path );
    var_entry_path = NULL;

    Py_XDECREF( var_is_file );
    var_is_file = NULL;

    Py_XDECREF( var_wanted );
    var_wanted = NULL;

    Py_XDECREF( var_is_dir );
    var_is_dir = NULL;

    Py_XDECREF( var_is_package );
    var_is_package = NULL;

    Py_XDECREF( var_tests );
    var_tests = NULL;

    Py_XDECREF( var_test );
    var_test = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)var_plugins );
    Py_DECREF( var_plugins );
    var_plugins = NULL;

    Py_XDECREF( var_paths_added );
    var_paths_added = NULL;

    CHECK_OBJECT( (PyObject *)var_entries );
    Py_DECREF( var_entries );
    var_entries = NULL;

    Py_XDECREF( var_entry );
    var_entry = NULL;

    CHECK_OBJECT( (PyObject *)var_entry_path );
    Py_DECREF( var_entry_path );
    var_entry_path = NULL;

    Py_XDECREF( var_is_file );
    var_is_file = NULL;

    Py_XDECREF( var_wanted );
    var_wanted = NULL;

    Py_XDECREF( var_is_dir );
    var_is_dir = NULL;

    Py_XDECREF( var_is_package );
    var_is_package = NULL;

    CHECK_OBJECT( (PyObject *)var_tests );
    Py_DECREF( var_tests );
    var_tests = NULL;

    Py_XDECREF( var_test );
    var_test = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;


    RESTORE_ERROR_OCCURRED( PyExc_StopIteration, NULL, NULL );
    Py_INCREF( PyExc_StopIteration );

    generator->m_yielded = NULL;
    return;

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    generator->m_yielded = NULL;
    return;

}


static PyObject *impl_function_1_lambda_of_genobj_1_loadTestsFromDir_of_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_42445f9454ae39ec321aaa9baceb30e1, module_nose$loader );
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
    tmp_source_name_1 = PyCell_GET( self->m_closure[1] );

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_loadTestsFromDir );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "entry_path" );
        exception_tb = NULL;

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 195;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
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
    goto function_return_exit;

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
            if ( self->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    self->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_entry_path,
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
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_lambda_of_genobj_1_loadTestsFromDir_of_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_6_loadTestsFromFile_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_filename = python_pars[ 1 ];
    PyObject *var_test = NULL;
    PyObject *var_tests = NULL;
    PyObject *var_exc = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ce603aaa341d556b1255804e99ea14d5, module_nose$loader );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 219;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_debug );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_8903548e855b7b14d8ff44b59f5efc81;
    tmp_args_element_name_2 = par_filename;

    frame_function->f_lineno = 219;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    // Tried code:
    tmp_source_name_4 = par_self;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_config );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto try_except_handler_3;
    }
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto try_except_handler_3;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_loadTestsFromFile );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto try_except_handler_3;
    }
    tmp_args_element_name_3 = par_filename;

    PyThreadState_GET()->frame->f_lineno = 222;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto try_except_handler_3;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto try_except_handler_3;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

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
            PyThreadState_GET()->frame->f_lineno = 221;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_test;
        var_test = tmp_assign_source_5;
        Py_INCREF( var_test );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_append_value_1 = var_test;

    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_6_loadTestsFromFile_of_class_1_TestLoader_of_nose$loader );
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
    NUITKA_CANNOT_GET_HERE( function_6_loadTestsFromFile_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    outline_result_1:;
    tmp_assign_source_1 = tmp_outline_return_value_1;
    assert( var_tests == NULL );
    var_tests = tmp_assign_source_1;

    tmp_cond_value_1 = var_tests;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
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
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_filter );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_4 = Py_None;
    tmp_args_element_name_5 = var_tests;

    frame_function->f_lineno = 227;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_tests;
        assert( old != NULL );
        var_tests = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_source_name_5 = par_self;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_suiteClass );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto try_except_handler_2;
    }
    tmp_args_element_name_6 = var_tests;

    frame_function->f_lineno = 228;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_open_filename_1 = par_filename;

    tmp_open_mode_1 = const_str_plain_r;
    tmp_source_name_6 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto try_except_handler_2;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_close );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 231;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_1 = const_str_digest_d6f393258f5d526288331a73af0bdbda;
    tmp_right_name_1 = par_filename;

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 232;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 233;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_2;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_6_loadTestsFromFile_of_class_1_TestLoader_of_nose$loader );
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != -1 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_function, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_KeyboardInterrupt;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_SystemExit;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 234;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_exc_info );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 237;
    tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        goto frame_exception_exit_1;
    }
    assert( var_exc == NULL );
    var_exc = tmp_assign_source_7;

    tmp_source_name_8 = par_self;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_suiteClass );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = PyList_New( 1 );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_subscribed_name_1 = var_exc;

    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_subscribed_name_2 = var_exc;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_subscribed_name_3 = var_exc;

    tmp_subscript_name_3 = const_int_pos_2;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = PyTuple_New( 3 );
    tmp_tuple_element_3 = par_filename;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 2, tmp_tuple_element_3 );
    tmp_dict_key_1 = const_str_plain_address;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 240;
    tmp_list_element_1 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_7, 0, tmp_list_element_1 );
    frame_function->f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_2:;
    // End of try:

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

            if ( par_filename )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_filename,
                    par_filename
                );

                assert( res == 0 );
            }

            if ( var_test )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test,
                    var_test
                );

                assert( res == 0 );
            }

            if ( var_tests )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tests,
                    var_tests
                );

                assert( res == 0 );
            }

            if ( var_exc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_exc,
                    var_exc
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
    NUITKA_CANNOT_GET_HERE( function_6_loadTestsFromFile_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    Py_XDECREF( var_test );
    var_test = NULL;

    Py_XDECREF( var_tests );
    var_tests = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    Py_XDECREF( var_test );
    var_test = NULL;

    Py_XDECREF( var_tests );
    var_tests = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6_loadTestsFromFile_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyCellObject *par_generator = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_module = python_pars[ 2 ];
    PyObject *var_generate = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_99e8a172770540cbc1dc81b0c7924e0c, module_nose$loader );
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
    tmp_defaults_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyCell_GET( par_generator );

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "generator" );
        exception_tb = NULL;

        exception_lineno = 249;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_module;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = MAKE_FUNCTION_function_1_generate_of_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader( tmp_defaults_1, par_generator, par_self );
    assert( var_generate == NULL );
    var_generate = tmp_assign_source_1;

    tmp_source_name_1 = PyCell_GET( par_self );

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_suiteClass );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_generate;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = PyCell_GET( par_generator );

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "generator" );
        exception_tb = NULL;

        exception_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_context;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = Py_False;
    tmp_dict_key_2 = const_str_plain_can_split;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 262;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
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
            if ( par_self->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self->ob_ref
                );

                assert( res == 0 );
            }

            if ( par_generator->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_generator,
                    par_generator->ob_ref
                );

                assert( res == 0 );
            }

            if ( par_module )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module,
                    par_module
                );

                assert( res == 0 );
            }

            if ( var_generate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_generate,
                    var_generate
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
    NUITKA_CANNOT_GET_HERE( function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_generator );
    Py_DECREF( par_generator );
    par_generator = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)var_generate );
    Py_DECREF( var_generate );
    var_generate = NULL;

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

    CHECK_OBJECT( (PyObject *)par_generator );
    Py_DECREF( par_generator );
    par_generator = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    Py_XDECREF( var_generate );
    var_generate = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_1_generate_of_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_g = PyCell_NEW1( python_pars[ 0 ] );
    PyCellObject *par_m = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(4 * sizeof(PyCellObject *));
        closure[0] = par_g;
        Py_INCREF( closure[0] );
        closure[1] = self->m_closure[0];
        Py_INCREF( closure[1] );
        closure[2] = par_m;
        Py_INCREF( closure[2] );
        closure[3] = self->m_closure[1];
        Py_INCREF( closure[3] );

        tmp_return_value = Nuitka_Generator_New(
            genobj_1_generate_of_function_1_generate_of_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader_context,
            const_str_plain_generate,
#if PYTHON_VERSION >= 350
            NULL,
#endif
            codeobj_1d54a2ae618fc0b077ce9a0cb4a00e2e,
            closure,
            4
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_generate_of_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_generate_of_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void genobj_1_generate_of_function_1_generate_of_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_test = NULL;
    PyObject *var_test_func = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_exc = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_046cecd69054adc931e69d5f44dbd5ff, module_nose$loader );
    generator->m_frame = cache_frame_generator;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing += 1;
#endif

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->f_exc_type == Py_None ) generator->m_frame->f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->f_exc_type );
    generator->m_frame->f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->f_exc_value );
    generator->m_frame->f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->f_exc_traceback );
#endif

    // Framed code:
    // Throwing into not started generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            exception_lineno = 249;
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    // Tried code:
    tmp_called_name_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "g" );
        exception_tb = NULL;

        exception_lineno = 251;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 251;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto try_except_handler_2;
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
            generator->m_frame->f_lineno = 251;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_test;
        var_test = tmp_assign_source_3;
        Py_INCREF( var_test );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_1 = PyCell_GET( generator->m_closure[3] );

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 252;
        goto try_except_handler_4;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parseGeneratedTest );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto try_except_handler_4;
    }
    tmp_args_element_name_1 = var_test;

    generator->m_frame->f_lineno = 252;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto try_except_handler_4;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_5 == NULL )
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


        exception_lineno = 252;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_6 == NULL )
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


        exception_lineno = 252;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                goto try_except_handler_4;
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

        goto try_except_handler_4;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_test_func;
        var_test_func = tmp_assign_source_7;
        Py_INCREF( var_test_func );
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_arg;
        var_arg = tmp_assign_source_8;
        Py_INCREF( var_arg );
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

    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_callable );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_2 = var_test_func;

    generator->m_frame->f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_3;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 253;
        goto try_except_handler_3;
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
    tmp_getattr_target_1 = PyCell_GET( generator->m_closure[2] );

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "m" );
        exception_tb = NULL;

        exception_lineno = 254;
        goto try_except_handler_3;
    }

    tmp_getattr_attr_1 = var_test_func;

    tmp_assign_source_9 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_test_func;
        assert( old != NULL );
        var_test_func = tmp_assign_source_9;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_FunctionTestCase );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FunctionTestCase );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FunctionTestCase" );
        exception_tb = NULL;

        exception_lineno = 255;
        goto try_except_handler_3;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_test_func;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = var_arg;

    tmp_dict_key_1 = const_str_plain_arg;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "g" );
        exception_tb = NULL;

        exception_lineno = 255;
        goto try_except_handler_3;
    }

    tmp_dict_key_2 = const_str_plain_descriptor;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    generator->m_frame->f_lineno = 255;
    tmp_expression_name_1 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto try_except_handler_3;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

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

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != -1 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, generator->m_frame, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_KeyboardInterrupt;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
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
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == generator->m_frame) generator->m_frame->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 259;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_exc_info );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 259;
    tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        goto frame_exception_exit_1;
    }
    assert( var_exc == NULL );
    var_exc = tmp_assign_source_10;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_subscribed_name_1 = var_exc;

    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_subscribed_name_2 = var_exc;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_subscribed_name_3 = var_exc;

    tmp_subscript_name_3 = const_int_pos_2;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_test_address );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_test_address );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "test_address" );
        exception_tb = NULL;

        exception_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "generator" );
        exception_tb = NULL;

        exception_lineno = 261;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 261;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_dict_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 261;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_address;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    generator->m_frame->f_lineno = 261;
    tmp_expression_name_2 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_expression_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        goto frame_exception_exit_1;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( genobj_1_generate_of_function_1_generate_of_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader );
    return;
    // End of try:
    try_end_3:;

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing -= 1;
#endif

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        int needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_tb->tb_frame != generator->m_frame )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( generator->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_g,
                    generator->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[2]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    generator->m_closure[2]->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_test )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test,
                    var_test
                );

                assert( res == 0 );
            }

            if ( var_test_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test_func,
                    var_test_func
                );

                assert( res == 0 );
            }

            if ( var_arg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arg,
                    var_arg
                );

                assert( res == 0 );
            }

            if ( var_exc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_exc,
                    var_exc
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[3]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    generator->m_closure[3]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_generator,
                    generator->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;

    goto try_end_4;
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

    Py_XDECREF( var_test );
    var_test = NULL;

    Py_XDECREF( var_test_func );
    var_test_func = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( var_test );
    var_test = NULL;

    Py_XDECREF( var_test_func );
    var_test_func = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;


    RESTORE_ERROR_OCCURRED( PyExc_StopIteration, NULL, NULL );
    Py_INCREF( PyExc_StopIteration );

    generator->m_yielded = NULL;
    return;

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    generator->m_yielded = NULL;
    return;

}


static PyObject *impl_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyCellObject *par_generator = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_cls = python_pars[ 2 ];
    PyObject *var_inst = NULL;
    PyObject *var_method = NULL;
    PyObject *var_generate = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_59f1379f2a842b69c2c86e8f98ab741b, module_nose$loader );
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
    tmp_hasattr_source_1 = PyCell_GET( par_generator );

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "generator" );
        exception_tb = NULL;

        exception_lineno = 276;
        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_im_class;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = PyCell_GET( par_generator );

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "generator" );
        exception_tb = NULL;

        exception_lineno = 277;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_im_class );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_cls;
        assert( old != NULL );
        par_cls = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_1 = par_cls;

    frame_function->f_lineno = 278;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        goto frame_exception_exit_1;
    }
    assert( var_inst == NULL );
    var_inst = tmp_assign_source_2;

    tmp_source_name_2 = PyCell_GET( par_generator );

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "generator" );
        exception_tb = NULL;

        exception_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        goto frame_exception_exit_1;
    }
    assert( var_method == NULL );
    var_method = tmp_assign_source_3;

    tmp_getattr_target_1 = var_inst;

    tmp_getattr_attr_1 = var_method;

    tmp_assign_source_4 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( par_generator );
        PyCell_SET( par_generator, tmp_assign_source_4 );
        Py_XDECREF( old );
    }

    tmp_defaults_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyCell_GET( par_generator );

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "generator" );
        exception_tb = NULL;

        exception_lineno = 282;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_cls;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_5 = MAKE_FUNCTION_function_1_generate_of_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader( tmp_defaults_1, par_generator, par_self );
    assert( var_generate == NULL );
    var_generate = tmp_assign_source_5;

    tmp_source_name_3 = PyCell_GET( par_self );

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_suiteClass );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_generate;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = PyCell_GET( par_generator );

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "generator" );
        exception_tb = NULL;

        exception_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_context;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = Py_False;
    tmp_dict_key_2 = const_str_plain_can_split;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 306;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
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
            if ( par_self->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self->ob_ref
                );

                assert( res == 0 );
            }

            if ( par_generator->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_generator,
                    par_generator->ob_ref
                );

                assert( res == 0 );
            }

            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );

                assert( res == 0 );
            }

            if ( var_inst )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_inst,
                    var_inst
                );

                assert( res == 0 );
            }

            if ( var_method )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_method,
                    var_method
                );

                assert( res == 0 );
            }

            if ( var_generate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_generate,
                    var_generate
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
    NUITKA_CANNOT_GET_HERE( function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_generator );
    Py_DECREF( par_generator );
    par_generator = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)var_inst );
    Py_DECREF( var_inst );
    var_inst = NULL;

    CHECK_OBJECT( (PyObject *)var_method );
    Py_DECREF( var_method );
    var_method = NULL;

    CHECK_OBJECT( (PyObject *)var_generate );
    Py_DECREF( var_generate );
    var_generate = NULL;

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

    CHECK_OBJECT( (PyObject *)par_generator );
    Py_DECREF( par_generator );
    par_generator = NULL;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( var_inst );
    var_inst = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

    Py_XDECREF( var_generate );
    var_generate = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_1_generate_of_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_g = PyCell_NEW1( python_pars[ 0 ] );
    PyCellObject *par_c = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(4 * sizeof(PyCellObject *));
        closure[0] = par_c;
        Py_INCREF( closure[0] );
        closure[1] = par_g;
        Py_INCREF( closure[1] );
        closure[2] = self->m_closure[0];
        Py_INCREF( closure[2] );
        closure[3] = self->m_closure[1];
        Py_INCREF( closure[3] );

        tmp_return_value = Nuitka_Generator_New(
            genobj_1_generate_of_function_1_generate_of_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader_context,
            const_str_plain_generate,
#if PYTHON_VERSION >= 350
            NULL,
#endif
            codeobj_02ec43b569a2ea6561213d0b6c3e2b11,
            closure,
            4
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_generate_of_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_generate_of_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void genobj_1_generate_of_function_1_generate_of_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_test = NULL;
    PyObject *var_test_func = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_exc = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_expression_name_3;
    PyObject *tmp_expression_name_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_3031e09bdf4d04d57711943007f2dd9a, module_nose$loader );
    generator->m_frame = cache_frame_generator;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing += 1;
#endif

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->f_exc_type == Py_None ) generator->m_frame->f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->f_exc_type );
    generator->m_frame->f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->f_exc_value );
    generator->m_frame->f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->f_exc_traceback );
#endif

    // Framed code:
    // Throwing into not started generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            exception_lineno = 282;
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    // Tried code:
    tmp_called_name_1 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "g" );
        exception_tb = NULL;

        exception_lineno = 284;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 284;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto try_except_handler_2;
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
            generator->m_frame->f_lineno = 284;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_test;
        var_test = tmp_assign_source_3;
        Py_INCREF( var_test );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_1 = PyCell_GET( generator->m_closure[3] );

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 285;
        goto try_except_handler_4;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parseGeneratedTest );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_4;
    }
    tmp_args_element_name_1 = var_test;

    generator->m_frame->f_lineno = 285;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_4;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_5 == NULL )
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


        exception_lineno = 285;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_6 == NULL )
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


        exception_lineno = 285;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                goto try_except_handler_4;
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

        goto try_except_handler_4;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_test_func;
        var_test_func = tmp_assign_source_7;
        Py_INCREF( var_test_func );
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_arg;
        var_arg = tmp_assign_source_8;
        Py_INCREF( var_arg );
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

    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_callable );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_2 = var_test_func;

    generator->m_frame->f_lineno = 286;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        goto try_except_handler_3;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 286;
        goto try_except_handler_3;
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unbound_method );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unbound_method );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unbound_method" );
        exception_tb = NULL;

        exception_lineno = 287;
        goto try_except_handler_3;
    }

    tmp_args_element_name_3 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "c" );
        exception_tb = NULL;

        exception_lineno = 287;
        goto try_except_handler_3;
    }

    tmp_getattr_target_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "c" );
        exception_tb = NULL;

        exception_lineno = 287;
        goto try_except_handler_3;
    }

    tmp_getattr_attr_1 = var_test_func;

    tmp_args_element_name_4 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        goto try_except_handler_3;
    }
    generator->m_frame->f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_test_func;
        assert( old != NULL );
        var_test_func = tmp_assign_source_9;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_ismethod );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ismethod );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ismethod" );
        exception_tb = NULL;

        exception_lineno = 288;
        goto try_except_handler_3;
    }

    tmp_args_element_name_5 = var_test_func;

    generator->m_frame->f_lineno = 288;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        goto try_except_handler_3;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 288;
        goto try_except_handler_3;
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
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_MethodTestCase );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MethodTestCase );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "MethodTestCase" );
        exception_tb = NULL;

        exception_lineno = 289;
        goto try_except_handler_3;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_test_func;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = var_arg;

    tmp_dict_key_1 = const_str_plain_arg;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "g" );
        exception_tb = NULL;

        exception_lineno = 289;
        goto try_except_handler_3;
    }

    tmp_dict_key_2 = const_str_plain_descriptor;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    generator->m_frame->f_lineno = 289;
    tmp_expression_name_1 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        goto try_except_handler_3;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        goto try_except_handler_3;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_callable );
    assert( tmp_called_name_7 != NULL );
    tmp_args_element_name_6 = var_test_func;

    generator->m_frame->f_lineno = 290;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        goto try_except_handler_3;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 290;
        goto try_except_handler_3;
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
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_MethodTestCase );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MethodTestCase );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "MethodTestCase" );
        exception_tb = NULL;

        exception_lineno = 295;
        goto try_except_handler_3;
    }

    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "g" );
        exception_tb = NULL;

        exception_lineno = 295;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_3 = var_test_func;

    tmp_dict_key_3 = const_str_plain_test;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = var_arg;

    tmp_dict_key_4 = const_str_plain_arg;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    generator->m_frame->f_lineno = 295;
    tmp_expression_name_2 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_expression_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        goto try_except_handler_3;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        goto try_except_handler_3;
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 297;
        goto try_except_handler_3;
    }

    tmp_args_element_name_7 = PyExc_TypeError;
    tmp_left_name_1 = const_str_digest_9587b43cab77c61a4313fe4df4f6039c;
    tmp_right_name_1 = var_test_func;

    tmp_args_element_name_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        goto try_except_handler_3;
    }
    generator->m_frame->f_lineno = 299;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_expression_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_expression_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        goto try_except_handler_3;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        goto try_except_handler_3;
    }
    branch_end_3:;
    branch_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

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

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != -1 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, generator->m_frame, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_KeyboardInterrupt;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == generator->m_frame) generator->m_frame->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_exc_info );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 303;
    tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS( tmp_called_name_10 );
    Py_DECREF( tmp_called_name_10 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    assert( var_exc == NULL );
    var_exc = tmp_assign_source_10;

    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 304;
        goto frame_exception_exit_1;
    }

    tmp_args_name_3 = PyTuple_New( 3 );
    tmp_subscribed_name_1 = var_exc;

    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_subscribed_name_2 = var_exc;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
    tmp_subscribed_name_3 = var_exc;

    tmp_subscript_name_3 = const_int_pos_2;
    tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_3, 2, tmp_tuple_element_3 );
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_test_address );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_test_address );
    }

    if ( tmp_called_name_12 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "test_address" );
        exception_tb = NULL;

        exception_lineno = 305;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = PyCell_GET( generator->m_closure[2] );

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "generator" );
        exception_tb = NULL;

        exception_lineno = 305;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 305;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 305;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_address;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    generator->m_frame->f_lineno = 305;
    tmp_expression_name_4 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_expression_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        goto frame_exception_exit_1;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    branch_end_4:;
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( genobj_1_generate_of_function_1_generate_of_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader );
    return;
    // End of try:
    try_end_3:;

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing -= 1;
#endif

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        int needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_tb->tb_frame != generator->m_frame )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( generator->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_g,
                    generator->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    generator->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_test )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test,
                    var_test
                );

                assert( res == 0 );
            }

            if ( var_test_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test_func,
                    var_test_func
                );

                assert( res == 0 );
            }

            if ( var_arg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arg,
                    var_arg
                );

                assert( res == 0 );
            }

            if ( var_exc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_exc,
                    var_exc
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[3]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    generator->m_closure[3]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[2]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_generator,
                    generator->m_closure[2]->ob_ref
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;

    goto try_end_4;
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

    Py_XDECREF( var_test );
    var_test = NULL;

    Py_XDECREF( var_test_func );
    var_test_func = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( var_test );
    var_test = NULL;

    Py_XDECREF( var_test_func );
    var_test_func = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;


    RESTORE_ERROR_OCCURRED( PyExc_StopIteration, NULL, NULL );
    Py_INCREF( PyExc_StopIteration );

    generator->m_yielded = NULL;
    return;

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    generator->m_yielded = NULL;
    return;

}


static PyObject *impl_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyCellObject *par_module = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_path = python_pars[ 2 ];
    PyObject *par_discovered = python_pars[ 3 ];
    PyObject *var_tests = NULL;
    PyObject *var_test_classes = NULL;
    PyObject *var_test_funcs = NULL;
    PyObject *var_item = NULL;
    PyObject *var_test = NULL;
    PyObject *var_module_paths = NULL;
    PyObject *var_module_path = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dir_arg_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
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
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e41e4b1af7f523b08d834b786d572891, module_nose$loader );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 314;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_debug );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_b5083345ce96b6a793f6011b564c9970;
    tmp_args_element_name_2 = PyCell_GET( par_module );

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "module" );
        exception_tb = NULL;

        exception_lineno = 314;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 314;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_tests == NULL );
    var_tests = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_test_classes == NULL );
    var_test_classes = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( var_test_funcs == NULL );
    var_test_funcs = tmp_assign_source_3;

    tmp_operand_name_1 = par_discovered;

    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
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
    tmp_source_name_3 = PyCell_GET( par_self );

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_selector );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_wantModule );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = PyCell_GET( par_module );

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "module" );
        exception_tb = NULL;

        exception_lineno = 321;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 321;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 321;
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
    tmp_dir_arg_1 = PyCell_GET( par_module );

    if ( tmp_dir_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "module" );
        exception_tb = NULL;

        exception_lineno = 322;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = PyObject_Dir( tmp_dir_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
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
            frame_function->f_lineno = 322;
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
        PyObject *old = var_item;
        var_item = tmp_assign_source_6;
        Py_INCREF( var_item );
        Py_XDECREF( old );
    }

    tmp_getattr_target_1 = PyCell_GET( par_module );

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "module" );
        exception_tb = NULL;

        exception_lineno = 323;
        goto try_except_handler_2;
    }

    tmp_getattr_attr_1 = var_item;

    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_7 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_test;
        var_test = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isclass );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isclass );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isclass" );
        exception_tb = NULL;

        exception_lineno = 325;
        goto try_except_handler_2;
    }

    tmp_args_element_name_4 = var_test;

    frame_function->f_lineno = 325;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 325;
        goto try_except_handler_2;
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
    tmp_source_name_5 = PyCell_GET( par_self );

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 326;
        goto try_except_handler_2;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_selector );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        goto try_except_handler_2;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_wantClass );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        goto try_except_handler_2;
    }
    tmp_args_element_name_5 = var_test;

    frame_function->f_lineno = 326;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        goto try_except_handler_2;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 326;
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
    tmp_source_name_6 = var_test_classes;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        goto try_except_handler_2;
    }
    tmp_args_element_name_6 = var_test;

    frame_function->f_lineno = 327;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isfunction );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfunction );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isfunction" );
        exception_tb = NULL;

        exception_lineno = 328;
        goto try_except_handler_2;
    }

    tmp_args_element_name_7 = var_test;

    frame_function->f_lineno = 328;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_and_left_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 328;
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_source_name_8 = PyCell_GET( par_self );

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 328;
        goto try_except_handler_2;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_selector );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto try_except_handler_2;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_wantFunction );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto try_except_handler_2;
    }
    tmp_args_element_name_8 = var_test;

    frame_function->f_lineno = 328;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto try_except_handler_2;
    }
    tmp_cond_value_4 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_4 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 328;
        goto try_except_handler_2;
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
    tmp_source_name_9 = var_test_funcs;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        goto try_except_handler_2;
    }
    tmp_args_element_name_9 = var_test;

    frame_function->f_lineno = 329;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    branch_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
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

    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_sort_list );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sort_list );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sort_list" );
        exception_tb = NULL;

        exception_lineno = 330;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_test_classes;

    tmp_args_element_name_11 = MAKE_FUNCTION_function_1_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader(  );
    frame_function->f_lineno = 330;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_sort_list );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sort_list );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sort_list" );
        exception_tb = NULL;

        exception_lineno = 331;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_test_funcs;

    tmp_args_element_name_13 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_func_lineno );

    if (unlikely( tmp_args_element_name_13 == NULL ))
    {
        tmp_args_element_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_func_lineno );
    }

    if ( tmp_args_element_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "func_lineno" );
        exception_tb = NULL;

        exception_lineno = 331;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 331;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_11 = LOOKUP_BUILTIN( const_str_plain_map );
    assert( tmp_called_name_11 != NULL );
    tmp_args_element_name_14 = MAKE_FUNCTION_function_2_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader( par_module, par_self );
    tmp_left_name_1 = var_test_classes;

    tmp_right_name_1 = var_test_funcs;

    tmp_args_element_name_15 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_14 );

        exception_lineno = 333;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 333;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_14 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_tests;
        assert( old != NULL );
        var_tests = tmp_assign_source_8;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_getattr_target_2 = PyCell_GET( par_module );

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "module" );
        exception_tb = NULL;

        exception_lineno = 338;
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = const_str_plain___path__;
    tmp_getattr_default_2 = PyList_New( 0 );
    tmp_assign_source_9 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    Py_DECREF( tmp_getattr_default_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        goto frame_exception_exit_1;
    }
    assert( var_module_paths == NULL );
    var_module_paths = tmp_assign_source_9;

    tmp_cond_value_5 = par_path;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

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

        exception_lineno = 341;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_path );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        goto frame_exception_exit_1;
    }
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_normcase );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 341;
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_path );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 341;
        goto frame_exception_exit_1;
    }
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_realpath );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 341;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_17 = par_path;

    frame_function->f_lineno = 341;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_args_element_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 341;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 341;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_path;
        assert( old != NULL );
        par_path = tmp_assign_source_10;
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_iter_arg_2 = var_module_paths;

    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_11;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 343;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_module_path;
        var_module_path = tmp_assign_source_13;
        Py_INCREF( var_module_path );
        Py_XDECREF( old );
    }

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 344;
        goto try_except_handler_3;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_debug );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        goto try_except_handler_3;
    }
    tmp_args_element_name_18 = const_str_digest_a02cf8425d54550ba6dfc17b81cd557b;
    tmp_args_element_name_19 = var_module_path;

    frame_function->f_lineno = 344;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 345;
        goto try_except_handler_3;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_debug );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        goto try_except_handler_3;
    }
    tmp_args_element_name_20 = const_str_digest_9300bd1f5f2c46bf806df0bf427d83a7;
    tmp_args_element_name_21 = par_path;

    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 346;
        goto try_except_handler_3;
    }

    tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_path );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 346;
        goto try_except_handler_3;
    }
    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_normcase );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 346;
        goto try_except_handler_3;
    }
    tmp_args_element_name_23 = var_module_path;

    frame_function->f_lineno = 346;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_args_element_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 346;
        goto try_except_handler_3;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 347;
        goto try_except_handler_3;
    }

    tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_path );
    if ( tmp_source_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_22 );

        exception_lineno = 347;
        goto try_except_handler_3;
    }
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_realpath );
    Py_DECREF( tmp_source_name_18 );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_22 );

        exception_lineno = 347;
        goto try_except_handler_3;
    }
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_22 );
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 347;
        goto try_except_handler_3;
    }

    tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_path );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_22 );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 347;
        goto try_except_handler_3;
    }
    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_normcase );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_22 );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 347;
        goto try_except_handler_3;
    }
    tmp_args_element_name_26 = var_module_path;

    frame_function->f_lineno = 347;
    {
        PyObject *call_args[] = { tmp_args_element_name_26 };
        tmp_args_element_name_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_args_element_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_22 );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 347;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 347;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_args_element_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_element_name_25 );
    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_22 );

        exception_lineno = 347;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 347;
    {
        PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_24 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_22 );
    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_23 = PyCell_GET( par_self );

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 348;
        goto try_except_handler_3;
    }

    tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_config );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        goto try_except_handler_3;
    }
    tmp_or_left_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_traverseNamespace );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        goto try_except_handler_3;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_3 );

        exception_lineno = 348;
        goto try_except_handler_3;
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
    tmp_operand_name_2 = par_path;

    tmp_or_right_value_3 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_or_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        goto try_except_handler_3;
    }
    Py_INCREF( tmp_or_right_value_3 );
    tmp_or_left_value_2 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_or_left_value_2 = tmp_or_left_value_3;
    or_end_3:;
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 349;
        goto try_except_handler_3;
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
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 349;
        goto try_except_handler_3;
    }

    tmp_source_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_path );
    if ( tmp_source_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto try_except_handler_3;
    }
    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_realpath );
    Py_DECREF( tmp_source_name_25 );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto try_except_handler_3;
    }
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 350;
        goto try_except_handler_3;
    }

    tmp_source_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_path );
    if ( tmp_source_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );

        exception_lineno = 350;
        goto try_except_handler_3;
    }
    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_normcase );
    Py_DECREF( tmp_source_name_27 );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );

        exception_lineno = 350;
        goto try_except_handler_3;
    }
    tmp_args_element_name_28 = var_module_path;

    frame_function->f_lineno = 350;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_args_element_name_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    if ( tmp_args_element_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );

        exception_lineno = 350;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 350;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_source_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_args_element_name_27 );
    if ( tmp_source_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto try_except_handler_3;
    }
    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_startswith );
    Py_DECREF( tmp_source_name_24 );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto try_except_handler_3;
    }
    tmp_args_element_name_29 = par_path;

    frame_function->f_lineno = 350;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_or_right_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto try_except_handler_3;
    }
    tmp_cond_value_6 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_cond_value_6 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 349;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 353;
        goto try_except_handler_3;
    }

    tmp_source_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_path );
    if ( tmp_source_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        goto try_except_handler_3;
    }
    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_isdir );
    Py_DECREF( tmp_source_name_29 );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        goto try_except_handler_3;
    }
    tmp_args_element_name_30 = var_module_path;

    frame_function->f_lineno = 353;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_cond_value_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        goto try_except_handler_3;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 353;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_31 = var_tests;

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_extend );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        goto try_except_handler_3;
    }
    tmp_source_name_32 = PyCell_GET( par_self );

    if ( tmp_source_name_32 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 354;
        goto try_except_handler_3;
    }

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_loadTestsFromDir );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_23 );

        exception_lineno = 354;
        goto try_except_handler_3;
    }
    tmp_args_element_name_32 = var_module_path;

    frame_function->f_lineno = 354;
    {
        PyObject *call_args[] = { tmp_args_element_name_32 };
        tmp_args_element_name_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    if ( tmp_args_element_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_23 );

        exception_lineno = 354;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 354;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_element_name_31 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    branch_no_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_source_name_35 = PyCell_GET( par_self );

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 356;
        goto frame_exception_exit_1;
    }

    tmp_source_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_config );
    if ( tmp_source_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_source_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_34 );
    if ( tmp_source_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_loadTestsFromModule );
    Py_DECREF( tmp_source_name_33 );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_33 = PyCell_GET( par_module );

    if ( tmp_args_element_name_33 == NULL )
    {
        Py_DECREF( tmp_called_name_25 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "module" );
        exception_tb = NULL;

        exception_lineno = 356;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_34 = par_path;

    frame_function->f_lineno = 356;
    {
        PyObject *call_args[] = { tmp_args_element_name_33, tmp_args_element_name_34 };
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_called_name_25 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_14;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator;

    tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 356;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_assign_source_16 = tmp_for_loop_3__iter_value;

    {
        PyObject *old = var_test;
        var_test = tmp_assign_source_16;
        Py_INCREF( var_test );
        Py_XDECREF( old );
    }

    tmp_source_name_36 = var_tests;

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_append );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto try_except_handler_4;
    }
    tmp_args_element_name_35 = var_test;

    frame_function->f_lineno = 357;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
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

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    tmp_source_name_37 = PyCell_GET( par_self );

    if ( tmp_source_name_37 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 359;
        goto frame_exception_exit_1;
    }

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_suiteClass );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        goto frame_exception_exit_1;
    }
    tmp_called_name_28 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_ContextList );

    if (unlikely( tmp_called_name_28 == NULL ))
    {
        tmp_called_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ContextList );
    }

    if ( tmp_called_name_28 == NULL )
    {
        Py_DECREF( tmp_called_name_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ContextList" );
        exception_tb = NULL;

        exception_lineno = 359;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_tests;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = PyCell_GET( par_module );

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_27 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "module" );
        exception_tb = NULL;

        exception_lineno = 359;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_context;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 359;
    tmp_args_element_name_36 = CALL_FUNCTION( tmp_called_name_28, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_27 );

        exception_lineno = 359;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 359;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    Py_DECREF( tmp_args_element_name_36 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
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
            if ( par_self->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self->ob_ref
                );

                assert( res == 0 );
            }

            if ( par_module->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module,
                    par_module->ob_ref
                );

                assert( res == 0 );
            }

            if ( par_path )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_path,
                    par_path
                );

                assert( res == 0 );
            }

            if ( par_discovered )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_discovered,
                    par_discovered
                );

                assert( res == 0 );
            }

            if ( var_tests )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tests,
                    var_tests
                );

                assert( res == 0 );
            }

            if ( var_test_classes )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test_classes,
                    var_test_classes
                );

                assert( res == 0 );
            }

            if ( var_test_funcs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test_funcs,
                    var_test_funcs
                );

                assert( res == 0 );
            }

            if ( var_item )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_item,
                    var_item
                );

                assert( res == 0 );
            }

            if ( var_test )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test,
                    var_test
                );

                assert( res == 0 );
            }

            if ( var_module_paths )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module_paths,
                    var_module_paths
                );

                assert( res == 0 );
            }

            if ( var_module_path )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module_path,
                    var_module_path
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
    NUITKA_CANNOT_GET_HERE( function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_discovered );
    Py_DECREF( par_discovered );
    par_discovered = NULL;

    CHECK_OBJECT( (PyObject *)var_tests );
    Py_DECREF( var_tests );
    var_tests = NULL;

    CHECK_OBJECT( (PyObject *)var_test_classes );
    Py_DECREF( var_test_classes );
    var_test_classes = NULL;

    CHECK_OBJECT( (PyObject *)var_test_funcs );
    Py_DECREF( var_test_funcs );
    var_test_funcs = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_test );
    var_test = NULL;

    CHECK_OBJECT( (PyObject *)var_module_paths );
    Py_DECREF( var_module_paths );
    var_module_paths = NULL;

    Py_XDECREF( var_module_path );
    var_module_path = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    Py_XDECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_discovered );
    Py_DECREF( par_discovered );
    par_discovered = NULL;

    Py_XDECREF( var_tests );
    var_tests = NULL;

    Py_XDECREF( var_test_classes );
    var_test_classes = NULL;

    Py_XDECREF( var_test_funcs );
    var_test_funcs = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_test );
    var_test = NULL;

    Py_XDECREF( var_module_paths );
    var_module_paths = NULL;

    Py_XDECREF( var_module_path );
    var_module_path = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_1_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ab641dbe9770db27a096c9a201e84b54, module_nose$loader );
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
    tmp_source_name_1 = par_x;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
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
            if ( par_x )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_x,
                    par_x
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
    NUITKA_CANNOT_GET_HERE( function_1_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_2_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9e4ce94bce2e2109687fe7d9efc8f672, module_nose$loader );
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
    tmp_source_name_1 = PyCell_GET( self->m_closure[1] );

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 332;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_makeTest );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_t;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "module" );
        exception_tb = NULL;

        exception_lineno = 332;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_parent;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 332;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
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
            if ( par_t )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_t,
                    par_t
                );

                assert( res == 0 );
            }

            if ( self->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    self->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module,
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
    NUITKA_CANNOT_GET_HERE( function_2_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_10_loadTestsFromName_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_module = python_pars[ 2 ];
    PyObject *par_discovered = python_pars[ 3 ];
    PyObject *var_suite = NULL;
    PyObject *var_plug_tests = NULL;
    PyObject *var_addr = NULL;
    PyObject *var_parent = NULL;
    PyObject *var_obj = NULL;
    PyObject *var_exc = NULL;
    PyCellObject *var_path = PyCell_EMPTY();
    PyObject *var_package = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_list_element_4;
    PyObject *tmp_list_element_5;
    PyObject *tmp_list_element_6;
    PyObject *tmp_operand_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b8889f363fa4d404f3b3758bf783b58f, module_nose$loader );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 369;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_debug );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_28f618c1740dc5ba4a5351fdbc02bfdc;
    tmp_args_element_name_2 = par_name;

    tmp_args_element_name_3 = par_module;

    frame_function->f_lineno = 369;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = PyCell_GET( par_self );

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 371;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_suiteClass );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        goto frame_exception_exit_1;
    }
    assert( var_suite == NULL );
    var_suite = tmp_assign_source_1;

    tmp_source_name_5 = PyCell_GET( par_self );

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 374;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_config );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_loadTestsFromName );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_name;

    tmp_args_element_name_5 = par_module;

    frame_function->f_lineno = 374;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    assert( var_plug_tests == NULL );
    var_plug_tests = tmp_assign_source_2;

    tmp_cond_value_1 = var_plug_tests;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
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
    tmp_called_name_3 = var_suite;

    tmp_args_element_name_6 = var_plug_tests;

    frame_function->f_lineno = 376;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_TestAddress );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TestAddress );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "TestAddress" );
        exception_tb = NULL;

        exception_lineno = 378;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_name;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_6 = PyCell_GET( par_self );

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 378;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_workingDir );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_workingDir;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 378;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    assert( var_addr == NULL );
    var_addr = tmp_assign_source_3;

    tmp_cond_value_2 = par_module;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_7 = var_addr;

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_call );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 389;
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
    tmp_source_name_8 = var_addr;

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_call );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_name;
        assert( old != NULL );
        par_name = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_3:;
    // Tried code:
    tmp_source_name_9 = PyCell_GET( par_self );

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 391;
        goto try_except_handler_2;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_resolve );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = par_name;

    tmp_args_element_name_8 = par_module;

    frame_function->f_lineno = 391;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        goto try_except_handler_2;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_6 == NULL )
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


        exception_lineno = 391;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_7 == NULL )
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


        exception_lineno = 391;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;

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

                goto try_except_handler_2;
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

        goto try_except_handler_2;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    assert( var_parent == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_parent = tmp_assign_source_8;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    assert( var_obj == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_obj = tmp_assign_source_9;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isclass );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isclass );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isclass" );
        exception_tb = NULL;

        exception_lineno = 392;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_parent;

    frame_function->f_lineno = 394;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_and_left_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 394;
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_getattr_target_1 = var_parent;

    tmp_getattr_attr_1 = const_str_plain___module__;
    tmp_getattr_default_1 = Py_None;
    tmp_compexpr_left_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_module;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___name__ );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 394;
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
    Py_DECREF( tmp_and_left_value_2 );
    tmp_isinstance_inst_1 = var_obj;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 394;
        goto frame_exception_exit_1;
    }

    tmp_operand_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_2 );
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_value_4 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_4 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 394;
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
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_transplant_class );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transplant_class );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "transplant_class" );
        exception_tb = NULL;

        exception_lineno = 395;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_parent;

    tmp_source_name_11 = par_module;

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___name__ );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 395;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_parent;
        assert( old != NULL );
        var_parent = tmp_assign_source_10;
        Py_DECREF( old );
    }

    tmp_getattr_target_2 = var_parent;

    tmp_source_name_12 = var_obj;

    tmp_getattr_attr_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
    if ( tmp_getattr_attr_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
    Py_DECREF( tmp_getattr_attr_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_obj;
        assert( old != NULL );
        var_obj = tmp_assign_source_11;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 397;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_debug );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = const_str_digest_861ff2bc38a033ec441ff737e4af6577;
    tmp_args_element_name_13 = var_parent;

    tmp_args_element_name_14 = var_obj;

    tmp_args_element_name_15 = par_module;

    frame_function->f_lineno = 397;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_isinstance_inst_2 = var_obj;

    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 398;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_9 = var_suite;

    tmp_args_element_name_16 = PyList_New( 1 );
    tmp_list_element_1 = var_obj;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_16, 0, tmp_list_element_1 );
    frame_function->f_lineno = 399;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_5;
    branch_no_5:;
    tmp_called_name_10 = var_suite;

    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_ContextList );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ContextList );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ContextList" );
        exception_tb = NULL;

        exception_lineno = 401;
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyList_New( 1 );
    tmp_source_name_14 = PyCell_GET( par_self );

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 401;
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_makeTest );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 401;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_18 = var_obj;

    tmp_args_element_name_19 = var_parent;

    frame_function->f_lineno = 401;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
        tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 401;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_tuple_element_2, 0, tmp_list_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_parent;

    tmp_dict_key_2 = const_str_plain_context;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 402;
    tmp_args_element_name_17 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 402;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_5:;
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_15 = var_addr;

    tmp_cond_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_module );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 404;
        goto frame_exception_exit_1;
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
    // Tried code:
    tmp_source_name_16 = var_addr;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_filename );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        goto try_except_handler_3;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_resolve_name );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_name );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_name" );
        exception_tb = NULL;

        exception_lineno = 407;
        goto try_except_handler_3;
    }

    tmp_source_name_17 = var_addr;

    tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_module );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 407;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        goto try_except_handler_3;
    }
    {
        PyObject *old = par_module;
        assert( old != NULL );
        par_module = tmp_assign_source_12;
        Py_DECREF( old );
    }

    goto branch_end_7;
    branch_no_7:;
    tmp_source_name_20 = PyCell_GET( par_self );

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 409;
        goto try_except_handler_3;
    }

    tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_config );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        goto try_except_handler_3;
    }
    tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_source_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        goto try_except_handler_3;
    }
    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_beforeImport );
    Py_DECREF( tmp_source_name_18 );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        goto try_except_handler_3;
    }
    tmp_source_name_21 = var_addr;

    tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_filename );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 410;
        goto try_except_handler_3;
    }
    tmp_source_name_22 = var_addr;

    tmp_args_element_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_module );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_21 );

        exception_lineno = 410;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 410;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_21 );
    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_source_name_24 = PyCell_GET( par_self );

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 417;
        goto try_except_handler_4;
    }

    tmp_source_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_importer );
    if ( tmp_source_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 417;
        goto try_except_handler_4;
    }
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_importFromPath );
    Py_DECREF( tmp_source_name_23 );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 417;
        goto try_except_handler_4;
    }
    tmp_source_name_25 = var_addr;

    tmp_args_element_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_filename );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 418;
        goto try_except_handler_4;
    }
    tmp_source_name_26 = var_addr;

    tmp_args_element_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_module );
    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_23 );

        exception_lineno = 418;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 418;
    {
        PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_23 );
    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        goto try_except_handler_4;
    }
    {
        PyObject *old = par_module;
        assert( old != NULL );
        par_module = tmp_assign_source_13;
        Py_DECREF( old );
    }

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

    tmp_source_name_29 = PyCell_GET( par_self );

    if ( tmp_source_name_29 == NULL )
    {

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 420;
        goto try_except_handler_3;
    }

    tmp_source_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_config );
    if ( tmp_source_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 420;
        goto try_except_handler_3;
    }
    tmp_source_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_28 );
    if ( tmp_source_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 420;
        goto try_except_handler_3;
    }
    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_afterImport );
    Py_DECREF( tmp_source_name_27 );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 420;
        goto try_except_handler_3;
    }
    tmp_source_name_30 = var_addr;

    tmp_args_element_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_filename );
    if ( tmp_args_element_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 421;
        goto try_except_handler_3;
    }
    tmp_source_name_31 = var_addr;

    tmp_args_element_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_module );
    if ( tmp_args_element_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_25 );
        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 421;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 421;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_25 );
    Py_DECREF( tmp_args_element_name_26 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 421;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    tmp_source_name_34 = PyCell_GET( par_self );

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 420;
        goto try_except_handler_3;
    }

    tmp_source_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_config );
    if ( tmp_source_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        goto try_except_handler_3;
    }
    tmp_source_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_33 );
    if ( tmp_source_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        goto try_except_handler_3;
    }
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_afterImport );
    Py_DECREF( tmp_source_name_32 );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        goto try_except_handler_3;
    }
    tmp_source_name_35 = var_addr;

    tmp_args_element_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_filename );
    if ( tmp_args_element_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 421;
        goto try_except_handler_3;
    }
    tmp_source_name_36 = var_addr;

    tmp_args_element_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_module );
    if ( tmp_args_element_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_args_element_name_27 );

        exception_lineno = 421;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 421;
    {
        PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_element_name_27 );
    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    branch_end_7:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
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
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = PyExc_KeyboardInterrupt;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyExc_SystemExit;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 1, tmp_tuple_element_3 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 422;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_37 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 425;
        goto frame_exception_exit_1;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_exc_info );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 425;
    tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS( tmp_called_name_18 );
    Py_DECREF( tmp_called_name_18 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
        goto frame_exception_exit_1;
    }
    assert( var_exc == NULL );
    var_exc = tmp_assign_source_14;

    tmp_called_name_19 = var_suite;

    tmp_args_element_name_29 = PyList_New( 1 );
    tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_called_name_20 == NULL ))
    {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_called_name_20 == NULL )
    {
        Py_DECREF( tmp_args_element_name_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 426;
        goto frame_exception_exit_1;
    }

    tmp_args_name_3 = PyTuple_New( 3 );
    tmp_subscribed_name_1 = var_exc;

    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_29 );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 426;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_subscribed_name_2 = var_exc;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_29 );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 426;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
    tmp_subscribed_name_3 = var_exc;

    tmp_subscript_name_3 = const_int_pos_2;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_29 );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 426;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_3, 2, tmp_tuple_element_4 );
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_source_name_38 = var_addr;

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_totuple );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_29 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 427;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 427;
    tmp_dict_value_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_21 );
    Py_DECREF( tmp_called_name_21 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_29 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 427;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_address;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    frame_function->f_lineno = 427;
    tmp_list_element_3 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_29 );

        exception_lineno = 427;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_29, 0, tmp_list_element_3 );
    frame_function->f_lineno = 427;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_args_element_name_29 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 427;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_8:;
    // End of try:
    try_end_3:;
    tmp_source_name_39 = var_addr;

    tmp_cond_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_call );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 428;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 428;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_40 = PyCell_GET( par_self );

    if ( tmp_source_name_40 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 429;
        goto frame_exception_exit_1;
    }

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_loadTestsFromName );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        goto frame_exception_exit_1;
    }
    tmp_source_name_41 = var_addr;

    tmp_args_element_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_call );
    if ( tmp_args_element_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_22 );

        exception_lineno = 429;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_31 = par_module;

    frame_function->f_lineno = 429;
    {
        PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    Py_DECREF( tmp_args_element_name_30 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_42 = PyCell_GET( par_self );

    if ( tmp_source_name_42 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 431;
        goto frame_exception_exit_1;
    }

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_loadTestsFromModule );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
        goto frame_exception_exit_1;
    }
    tmp_args_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_5 = par_module;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
    tmp_source_name_43 = var_addr;

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_filename );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_name_4 );

        exception_lineno = 432;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_5 );
    tmp_kw_name_4 = _PyDict_NewPresized( 1 );
    tmp_dict_value_4 = par_discovered;

    tmp_dict_key_4 = const_str_plain_discovered;
    PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 433;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 433;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_9:;
    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_44 = var_addr;

    tmp_cond_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_filename );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 434;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 434;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_45 = var_addr;

    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_filename );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_path );
        PyCell_SET( var_path, tmp_assign_source_15 );
        Py_XDECREF( old );
    }

    tmp_source_name_46 = var_addr;

    tmp_cond_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_call );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 436;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_called_name_24 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_getpackage );

    if (unlikely( tmp_called_name_24 == NULL ))
    {
        tmp_called_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getpackage );
    }

    if ( tmp_called_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "getpackage" );
        exception_tb = NULL;

        exception_lineno = 437;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_32 = PyCell_GET( var_path );

    if ( tmp_args_element_name_32 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;

        exception_lineno = 437;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 437;
    {
        PyObject *call_args[] = { tmp_args_element_name_32 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 437;
        goto frame_exception_exit_1;
    }
    assert( var_package == NULL );
    var_package = tmp_assign_source_16;

    tmp_compare_left_3 = var_package;

    tmp_compare_right_3 = Py_None;
    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_2 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_name_25 = var_suite;

    tmp_args_element_name_33 = PyList_New( 1 );
    tmp_called_name_26 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_called_name_26 == NULL ))
    {
        tmp_called_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_called_name_26 == NULL )
    {
        Py_DECREF( tmp_args_element_name_33 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 440;
        goto frame_exception_exit_1;
    }

    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_6 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_6 );
    tmp_left_name_1 = const_str_digest_7aa8bcd4db230f35b6db18af080c2f19;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_47 = var_addr;

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_call );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_33 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 443;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = PyCell_GET( var_path );

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_args_element_name_33 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;

        exception_lineno = 443;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_7 );
    tmp_tuple_element_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_33 );
        Py_DECREF( tmp_args_name_5 );

        exception_lineno = 441;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_6 );
    tmp_kw_name_5 = _PyDict_NewPresized( 1 );
    tmp_source_name_48 = var_addr;

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_totuple );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_33 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_5 );

        exception_lineno = 444;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 444;
    tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_27 );
    Py_DECREF( tmp_called_name_27 );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_33 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_5 );

        exception_lineno = 444;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_address;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    frame_function->f_lineno = 444;
    tmp_list_element_4 = CALL_FUNCTION( tmp_called_name_26, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_args_name_5 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_list_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_33 );

        exception_lineno = 444;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_33, 0, tmp_list_element_4 );
    frame_function->f_lineno = 444;
    {
        PyObject *call_args[] = { tmp_args_element_name_33 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_args_element_name_33 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_12:;
    tmp_source_name_49 = PyCell_GET( par_self );

    if ( tmp_source_name_49 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 445;
        goto frame_exception_exit_1;
    }

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_loadTestsFromName );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        goto frame_exception_exit_1;
    }
    tmp_args_name_6 = PyTuple_New( 1 );
    tmp_source_name_50 = var_addr;

    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_call );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_args_name_6 );

        exception_lineno = 445;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
    tmp_kw_name_6 = _PyDict_NewPresized( 1 );
    tmp_dict_value_6 = var_package;

    tmp_dict_key_6 = const_str_plain_module;
    PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 445;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_28, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_28 );
    Py_DECREF( tmp_args_name_6 );
    Py_DECREF( tmp_kw_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_11;
    branch_no_11:;
    tmp_called_name_29 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_op_isdir );

    if (unlikely( tmp_called_name_29 == NULL ))
    {
        tmp_called_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_op_isdir );
    }

    if ( tmp_called_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "op_isdir" );
        exception_tb = NULL;

        exception_lineno = 447;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_34 = PyCell_GET( var_path );

    if ( tmp_args_element_name_34 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;

        exception_lineno = 447;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 447;
    {
        PyObject *call_args[] = { tmp_args_element_name_34 };
        tmp_cond_value_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
    }

    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 447;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        exception_lineno = 447;
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
    tmp_called_name_30 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_LazySuite );

    if (unlikely( tmp_called_name_30 == NULL ))
    {
        tmp_called_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazySuite );
    }

    if ( tmp_called_name_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "LazySuite" );
        exception_tb = NULL;

        exception_lineno = 454;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_35 = MAKE_FUNCTION_function_1_lambda_of_function_10_loadTestsFromName_of_class_1_TestLoader_of_nose$loader( var_path, par_self );
    frame_function->f_lineno = 455;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_args_element_name_35 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_13;
    branch_no_13:;
    tmp_called_name_31 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_op_isfile );

    if (unlikely( tmp_called_name_31 == NULL ))
    {
        tmp_called_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_op_isfile );
    }

    if ( tmp_called_name_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "op_isfile" );
        exception_tb = NULL;

        exception_lineno = 456;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_36 = PyCell_GET( var_path );

    if ( tmp_args_element_name_36 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;

        exception_lineno = 456;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 456;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_cond_value_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
    }

    if ( tmp_cond_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        exception_lineno = 456;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_51 = PyCell_GET( par_self );

    if ( tmp_source_name_51 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 457;
        goto frame_exception_exit_1;
    }

    tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_loadTestsFromFile );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 457;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_37 = PyCell_GET( var_path );

    if ( tmp_args_element_name_37 == NULL )
    {
        Py_DECREF( tmp_called_name_32 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;

        exception_lineno = 457;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 457;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_called_name_32 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 457;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_14;
    branch_no_14:;
    tmp_called_name_33 = var_suite;

    tmp_args_element_name_38 = PyList_New( 1 );
    tmp_called_name_34 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_called_name_34 == NULL ))
    {
        tmp_called_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_called_name_34 == NULL )
    {
        Py_DECREF( tmp_args_element_name_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 460;
        goto frame_exception_exit_1;
    }

    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_9 = PyExc_OSError;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_9 );
    tmp_left_name_2 = const_str_digest_d9dd9a6820304fafe182bafc09ac205d;
    tmp_right_name_2 = PyCell_GET( var_path );

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_38 );
        Py_DECREF( tmp_args_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;

        exception_lineno = 460;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_38 );
        Py_DECREF( tmp_args_name_7 );

        exception_lineno = 460;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_9 );
    tmp_kw_name_7 = _PyDict_NewPresized( 1 );
    tmp_source_name_52 = var_addr;

    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_totuple );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_38 );
        Py_DECREF( tmp_args_name_7 );
        Py_DECREF( tmp_kw_name_7 );

        exception_lineno = 461;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 461;
    tmp_dict_value_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_35 );
    Py_DECREF( tmp_called_name_35 );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_38 );
        Py_DECREF( tmp_args_name_7 );
        Py_DECREF( tmp_kw_name_7 );

        exception_lineno = 461;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = const_str_plain_address;
    PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    frame_function->f_lineno = 461;
    tmp_list_element_5 = CALL_FUNCTION( tmp_called_name_34, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_args_name_7 );
    Py_DECREF( tmp_kw_name_7 );
    if ( tmp_list_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_38 );

        exception_lineno = 461;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_38, 0, tmp_list_element_5 );
    frame_function->f_lineno = 461;
    {
        PyObject *call_args[] = { tmp_args_element_name_38 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, call_args );
    }

    Py_DECREF( tmp_args_element_name_38 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_14:;
    branch_end_13:;
    branch_end_11:;
    goto branch_end_10;
    branch_no_10:;
    tmp_called_name_36 = var_suite;

    tmp_args_element_name_39 = PyList_New( 1 );
    tmp_called_name_37 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_called_name_37 == NULL ))
    {
        tmp_called_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_called_name_37 == NULL )
    {
        Py_DECREF( tmp_args_element_name_39 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 466;
        goto frame_exception_exit_1;
    }

    tmp_args_name_8 = PyTuple_New( 2 );
    tmp_tuple_element_10 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_10 );
    tmp_left_name_3 = const_str_digest_6917656b7edc50e67ef40b68d6b4b3b4;
    tmp_right_name_3 = par_name;

    tmp_tuple_element_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_39 );
        Py_DECREF( tmp_args_name_8 );

        exception_lineno = 466;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_10 );
    tmp_kw_name_8 = _PyDict_NewPresized( 1 );
    tmp_source_name_53 = var_addr;

    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_totuple );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_39 );
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_kw_name_8 );

        exception_lineno = 467;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 467;
    tmp_dict_value_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_38 );
    Py_DECREF( tmp_called_name_38 );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_39 );
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_kw_name_8 );

        exception_lineno = 467;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = const_str_plain_address;
    PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    frame_function->f_lineno = 467;
    tmp_list_element_6 = CALL_FUNCTION( tmp_called_name_37, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    Py_DECREF( tmp_kw_name_8 );
    if ( tmp_list_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_39 );

        exception_lineno = 467;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_39, 0, tmp_list_element_6 );
    frame_function->f_lineno = 467;
    {
        PyObject *call_args[] = { tmp_args_element_name_39 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_args_element_name_39 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 467;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_10:;
    branch_end_6:;
    branch_end_2:;

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
            if ( par_self->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self->ob_ref
                );

                assert( res == 0 );
            }

            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
                );

                assert( res == 0 );
            }

            if ( par_module )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module,
                    par_module
                );

                assert( res == 0 );
            }

            if ( par_discovered )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_discovered,
                    par_discovered
                );

                assert( res == 0 );
            }

            if ( var_suite )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_suite,
                    var_suite
                );

                assert( res == 0 );
            }

            if ( var_plug_tests )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_plug_tests,
                    var_plug_tests
                );

                assert( res == 0 );
            }

            if ( var_addr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_addr,
                    var_addr
                );

                assert( res == 0 );
            }

            if ( var_parent )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parent,
                    var_parent
                );

                assert( res == 0 );
            }

            if ( var_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    var_obj
                );

                assert( res == 0 );
            }

            if ( var_exc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_exc,
                    var_exc
                );

                assert( res == 0 );
            }

            if ( var_path->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_path,
                    var_path->ob_ref
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
    NUITKA_CANNOT_GET_HERE( function_10_loadTestsFromName_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_discovered );
    Py_DECREF( par_discovered );
    par_discovered = NULL;

    CHECK_OBJECT( (PyObject *)var_suite );
    Py_DECREF( var_suite );
    var_suite = NULL;

    CHECK_OBJECT( (PyObject *)var_plug_tests );
    Py_DECREF( var_plug_tests );
    var_plug_tests = NULL;

    Py_XDECREF( var_addr );
    var_addr = NULL;

    Py_XDECREF( var_parent );
    var_parent = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    CHECK_OBJECT( (PyObject *)var_path );
    Py_DECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_package );
    var_package = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_discovered );
    Py_DECREF( par_discovered );
    par_discovered = NULL;

    Py_XDECREF( var_suite );
    var_suite = NULL;

    Py_XDECREF( var_plug_tests );
    var_plug_tests = NULL;

    Py_XDECREF( var_addr );
    var_addr = NULL;

    Py_XDECREF( var_parent );
    var_parent = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    CHECK_OBJECT( (PyObject *)var_path );
    Py_DECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_package );
    var_package = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_10_loadTestsFromName_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_1_lambda_of_function_10_loadTestsFromName_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_71805391bb3442eb1d24c60374039392, module_nose$loader );
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
    tmp_source_name_1 = PyCell_GET( self->m_closure[1] );

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 455;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_loadTestsFromDir );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "path" );
        exception_tb = NULL;

        exception_lineno = 455;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 455;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
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
    goto function_return_exit;

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
            if ( self->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    self->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_path,
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
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_lambda_of_function_10_loadTestsFromName_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_11_loadTestsFromNames_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_names = python_pars[ 1 ];
    PyObject *par_module = python_pars[ 2 ];
    PyObject *var_plug_res = NULL;
    PyObject *var_suite = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4bd1c2eab3d7180084e0572a0c53679d, module_nose$loader );
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
    tmp_source_name_3 = par_self;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_config );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_loadTestsFromNames );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_names;

    tmp_args_element_name_2 = par_module;

    frame_function->f_lineno = 473;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        goto frame_exception_exit_1;
    }
    assert( var_plug_res == NULL );
    var_plug_res = tmp_assign_source_1;

    tmp_cond_value_1 = var_plug_res;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 474;
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
    // Tried code:
    tmp_iter_arg_1 = var_plug_res;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 475;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_3 == NULL )
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


        exception_lineno = 475;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_4 == NULL )
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


        exception_lineno = 475;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

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

                goto try_except_handler_2;
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

        goto try_except_handler_2;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    assert( var_suite == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_suite = tmp_assign_source_5;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_names;
        assert( old != NULL );
        par_names = tmp_assign_source_6;
        Py_INCREF( par_names );
        Py_DECREF( old );
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

    tmp_cond_value_2 = var_suite;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 476;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_suiteClass );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 477;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = PyList_New( 2 );
    tmp_source_name_5 = par_self;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_suiteClass );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 478;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_suite;

    frame_function->f_lineno = 478;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 478;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_1 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 479;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_TestLoader );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 479;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_loadTestsFromNames );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 479;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_self;

    tmp_args_element_name_6 = par_names;

    tmp_args_element_name_7 = par_module;

    frame_function->f_lineno = 479;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 479;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_3, 1, tmp_list_element_1 );
    frame_function->f_lineno = 479;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 479;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    branch_no_1:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 481;
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_TestLoader );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 481;
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_loadTestsFromNames );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 481;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = par_self;

    tmp_args_element_name_9 = par_names;

    tmp_args_element_name_10 = par_module;

    frame_function->f_lineno = 481;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 481;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
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

            if ( par_module )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module,
                    par_module
                );

                assert( res == 0 );
            }

            if ( var_plug_res )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_plug_res,
                    var_plug_res
                );

                assert( res == 0 );
            }

            if ( var_suite )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_suite,
                    var_suite
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
    NUITKA_CANNOT_GET_HERE( function_11_loadTestsFromNames_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)var_plug_res );
    Py_DECREF( var_plug_res );
    var_plug_res = NULL;

    Py_XDECREF( var_suite );
    var_suite = NULL;

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

    Py_XDECREF( par_names );
    par_names = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    Py_XDECREF( var_plug_res );
    var_plug_res = NULL;

    Py_XDECREF( var_suite );
    var_suite = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_11_loadTestsFromNames_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_12_loadTestsFromTestCase_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_testCaseClass = python_pars[ 1 ];
    PyObject *var_cases = NULL;
    PyObject *var_plugins = NULL;
    PyObject *var_case = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_object_name_1;
    PyObject *tmp_object_name_2;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_type_name_1;
    PyObject *tmp_type_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_cases == NULL );
    var_cases = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_524fdd6cace140d63fa5d5dafed780e2, module_nose$loader );
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

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_config );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 487;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 487;
        goto frame_exception_exit_1;
    }
    assert( var_plugins == NULL );
    var_plugins = tmp_assign_source_2;

    tmp_source_name_3 = var_plugins;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_loadTestsFromTestCase );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 488;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_testCaseClass;

    frame_function->f_lineno = 488;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 488;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 488;
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
            frame_function->f_lineno = 488;
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
        PyObject *old = var_case;
        var_case = tmp_assign_source_5;
        Py_INCREF( var_case );
        Py_XDECREF( old );
    }

    tmp_source_name_4 = var_cases;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 489;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = var_case;

    frame_function->f_lineno = 489;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 489;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 488;
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

    tmp_cond_value_1 = var_cases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 493;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_TestLoader );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TestLoader );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "TestLoader" );
        exception_tb = NULL;

        exception_lineno = 494;
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    tmp_source_name_5 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 494;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_loadTestsFromTestCase );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 494;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_testCaseClass;

    frame_function->f_lineno = 494;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 494;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_6 = var_cases;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_extend );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 495;
        goto frame_exception_exit_1;
    }
    // Tried code:
    tmp_type_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_TestLoader );

    if (unlikely( tmp_type_name_2 == NULL ))
    {
        tmp_type_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TestLoader );
    }

    if ( tmp_type_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "TestLoader" );
        exception_tb = NULL;

        exception_lineno = 497;
        goto try_except_handler_3;
    }

    tmp_object_name_2 = par_self;

    tmp_source_name_7 = BUILTIN_SUPER( tmp_type_name_2, tmp_object_name_2 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 497;
        goto try_except_handler_3;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_loadTestsFromTestCase );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 497;
        goto try_except_handler_3;
    }
    tmp_args_element_name_5 = par_testCaseClass;

    PyThreadState_GET()->frame->f_lineno = 497;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 497;
        goto try_except_handler_3;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 496;
        goto try_except_handler_3;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_6;

    tmp_assign_source_7 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_7;

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_1__$0;

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
            PyThreadState_GET()->frame->f_lineno = 496;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_case;
        var_case = tmp_assign_source_9;
        Py_INCREF( var_case );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_append_value_1 = var_case;

    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 496;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 496;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_12_loadTestsFromTestCase_of_class_1_TestLoader_of_nose$loader );
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
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_12_loadTestsFromTestCase_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_4 = tmp_outline_return_value_1;
    frame_function->f_lineno = 496;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 496;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = par_self;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_suiteClass );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 498;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_cases;

    frame_function->f_lineno = 498;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 498;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_testCaseClass )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_testCaseClass,
                    par_testCaseClass
                );

                assert( res == 0 );
            }

            if ( var_cases )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cases,
                    var_cases
                );

                assert( res == 0 );
            }

            if ( var_plugins )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_plugins,
                    var_plugins
                );

                assert( res == 0 );
            }

            if ( var_case )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_case,
                    var_case
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
    NUITKA_CANNOT_GET_HERE( function_12_loadTestsFromTestCase_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_testCaseClass );
    Py_DECREF( par_testCaseClass );
    par_testCaseClass = NULL;

    CHECK_OBJECT( (PyObject *)var_cases );
    Py_DECREF( var_cases );
    var_cases = NULL;

    CHECK_OBJECT( (PyObject *)var_plugins );
    Py_DECREF( var_plugins );
    var_plugins = NULL;

    Py_XDECREF( var_case );
    var_case = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_testCaseClass );
    Py_DECREF( par_testCaseClass );
    par_testCaseClass = NULL;

    CHECK_OBJECT( (PyObject *)var_cases );
    Py_DECREF( var_cases );
    var_cases = NULL;

    Py_XDECREF( var_plugins );
    var_plugins = NULL;

    Py_XDECREF( var_case );
    var_case = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_12_loadTestsFromTestCase_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cls = python_pars[ 1 ];
    PyObject *var_wanted = NULL;
    PyObject *var_case = NULL;
    PyObject *var_cases = NULL;
    PyObject *var_test = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dir_arg_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_be31f596dca9e9ead924cf19efa12551, module_nose$loader );
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
    tmp_defaults_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_cls;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_source_name_1 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_selector );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 508;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = MAKE_FUNCTION_function_1_wanted_of_function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader( tmp_defaults_1 );
    assert( var_wanted == NULL );
    var_wanted = tmp_assign_source_1;

    // Tried code:
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_filter );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = var_wanted;

    tmp_dir_arg_1 = par_cls;

    tmp_args_element_name_2 = PyObject_Dir( tmp_dir_arg_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 516;
        goto try_except_handler_2;
    }
    PyThreadState_GET()->frame->f_lineno = 516;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 516;
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
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
            PyThreadState_GET()->frame->f_lineno = 515;
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
        PyObject *old = var_case;
        var_case = tmp_assign_source_6;
        Py_INCREF( var_case );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_source_name_2 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_makeTest );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        goto try_except_handler_2;
    }
    tmp_getattr_target_1 = par_cls;

    tmp_getattr_attr_1 = var_case;

    tmp_args_element_name_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 515;
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = par_cls;

    PyThreadState_GET()->frame->f_lineno = 515;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader );
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
    NUITKA_CANNOT_GET_HERE( function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    outline_result_1:;
    tmp_assign_source_2 = tmp_outline_return_value_1;
    assert( var_cases == NULL );
    var_cases = tmp_assign_source_2;

    tmp_source_name_5 = par_self;

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_config );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 517;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 517;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_loadTestsFromTestClass );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 517;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_cls;

    frame_function->f_lineno = 517;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 517;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 517;
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
            frame_function->f_lineno = 517;
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
        PyObject *old = var_test;
        var_test = tmp_assign_source_9;
        Py_INCREF( var_test );
        Py_XDECREF( old );
    }

    tmp_source_name_6 = var_cases;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 518;
        goto try_except_handler_3;
    }
    tmp_args_element_name_6 = var_test;

    frame_function->f_lineno = 518;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 518;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 517;
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

    tmp_source_name_7 = par_self;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_suiteClass );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 519;
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_ContextList );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ContextList );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ContextList" );
        exception_tb = NULL;

        exception_lineno = 519;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_cases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_cls;

    tmp_dict_key_1 = const_str_plain_context;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 519;
    tmp_args_element_name_7 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 519;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 519;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 519;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );

                assert( res == 0 );
            }

            if ( var_wanted )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wanted,
                    var_wanted
                );

                assert( res == 0 );
            }

            if ( var_case )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_case,
                    var_case
                );

                assert( res == 0 );
            }

            if ( var_cases )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cases,
                    var_cases
                );

                assert( res == 0 );
            }

            if ( var_test )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test,
                    var_test
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
    NUITKA_CANNOT_GET_HERE( function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)var_wanted );
    Py_DECREF( var_wanted );
    var_wanted = NULL;

    Py_XDECREF( var_case );
    var_case = NULL;

    CHECK_OBJECT( (PyObject *)var_cases );
    Py_DECREF( var_cases );
    var_cases = NULL;

    Py_XDECREF( var_test );
    var_test = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( var_wanted );
    var_wanted = NULL;

    Py_XDECREF( var_case );
    var_case = NULL;

    Py_XDECREF( var_cases );
    var_cases = NULL;

    Py_XDECREF( var_test );
    var_test = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_1_wanted_of_function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_attr = python_pars[ 0 ];
    PyObject *par_cls = python_pars[ 1 ];
    PyObject *par_sel = python_pars[ 2 ];
    PyObject *var_item = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a4c60ab2a3cf95fef7f46fd36e1d909e, module_nose$loader );
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
    tmp_getattr_target_1 = par_cls;

    tmp_getattr_attr_1 = par_attr;

    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 509;
        goto frame_exception_exit_1;
    }
    assert( var_item == NULL );
    var_item = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isfunction );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfunction );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isfunction" );
        exception_tb = NULL;

        exception_lineno = 510;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_item;

    frame_function->f_lineno = 510;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 510;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 510;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unbound_method );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unbound_method );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unbound_method" );
        exception_tb = NULL;

        exception_lineno = 511;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_cls;

    tmp_args_element_name_3 = var_item;

    frame_function->f_lineno = 511;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 511;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_item;
        assert( old != NULL );
        var_item = tmp_assign_source_2;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_ismethod );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ismethod );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ismethod" );
        exception_tb = NULL;

        exception_lineno = 512;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_item;

    frame_function->f_lineno = 512;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 512;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 512;
        goto frame_exception_exit_1;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    branch_end_1:;
    tmp_source_name_1 = par_sel;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_wantMethod );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 514;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_item;

    frame_function->f_lineno = 514;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 514;
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
            if ( par_attr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_attr,
                    par_attr
                );

                assert( res == 0 );
            }

            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );

                assert( res == 0 );
            }

            if ( par_sel )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sel,
                    par_sel
                );

                assert( res == 0 );
            }

            if ( var_item )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_item,
                    var_item
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
    NUITKA_CANNOT_GET_HERE( function_1_wanted_of_function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_attr );
    Py_DECREF( par_attr );
    par_attr = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_sel );
    Py_DECREF( par_sel );
    par_sel = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

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

    CHECK_OBJECT( (PyObject *)par_attr );
    Py_DECREF( par_attr );
    par_attr = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_sel );
    Py_DECREF( par_sel );
    par_sel = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_wanted_of_function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_14_makeTest_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_obj = python_pars[ 1 ];
    PyObject *par_parent = python_pars[ 2 ];
    PyObject *var_exc = NULL;
    PyObject *var_addr = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_717a02d681332eb38e711aa2be9ce057, module_nose$loader );
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
    // Tried code:
    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__makeTest );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 523;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_obj;

    tmp_args_element_name_2 = par_parent;

    frame_function->f_lineno = 523;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 523;
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_14_makeTest_of_class_1_TestLoader_of_nose$loader );
    return NULL;
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
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_KeyboardInterrupt;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_SystemExit;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 524;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 527;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_exc_info );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 527;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 527;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 527;
        goto frame_exception_exit_1;
    }
    assert( var_exc == NULL );
    var_exc = tmp_assign_source_1;

    // Tried code:
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_test_address );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_test_address );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "test_address" );
        exception_tb = NULL;

        exception_lineno = 529;
        goto try_except_handler_3;
    }

    tmp_args_element_name_3 = par_obj;

    frame_function->f_lineno = 529;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 529;
        goto try_except_handler_3;
    }
    assert( var_addr == NULL );
    var_addr = tmp_assign_source_2;

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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != -1 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_function, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_KeyboardInterrupt;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 530;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_3 = Py_None;
    assert( var_addr == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_addr = tmp_assign_source_3;

    branch_end_2:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_14_makeTest_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 534;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_subscribed_name_1 = var_exc;

    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 534;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_subscribed_name_2 = var_exc;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 534;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_subscribed_name_3 = var_exc;

    tmp_subscript_name_3 = const_int_pos_2;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 534;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_addr;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "addr" );
        exception_tb = NULL;

        exception_lineno = 534;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_address;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 534;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 534;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;
    // End of try:

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

            if ( par_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    par_obj
                );

                assert( res == 0 );
            }

            if ( par_parent )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parent,
                    par_parent
                );

                assert( res == 0 );
            }

            if ( var_exc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_exc,
                    var_exc
                );

                assert( res == 0 );
            }

            if ( var_addr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_addr,
                    var_addr
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
    NUITKA_CANNOT_GET_HERE( function_14_makeTest_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_parent );
    Py_DECREF( par_parent );
    par_parent = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    Py_XDECREF( var_addr );
    var_addr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_parent );
    Py_DECREF( par_parent );
    par_parent = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    Py_XDECREF( var_addr );
    var_addr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_14_makeTest_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_15__makeTest_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_obj = python_pars[ 1 ];
    PyObject *par_parent = python_pars[ 2 ];
    PyObject *var_plug_tests = NULL;
    PyObject *var_addr = NULL;
    PyObject *var_test = NULL;
    PyObject *var_exc = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_plug_tests == NULL );
    var_plug_tests = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b9c6634566cd6e2ada92e502986a5a0d, module_nose$loader );
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
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_test_address );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_test_address );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "test_address" );
        exception_tb = NULL;

        exception_lineno = 542;
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_obj;

    frame_function->f_lineno = 542;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        goto try_except_handler_2;
    }
    assert( var_addr == NULL );
    var_addr = tmp_assign_source_2;

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
    tmp_compare_right_1 = PyExc_KeyboardInterrupt;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 543;
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
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_3 = Py_None;
    assert( var_addr == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_addr = tmp_assign_source_3;

    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_15__makeTest_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_source_name_3 = par_self;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_config );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_makeTest );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_obj;

    tmp_args_element_name_3 = par_parent;

    frame_function->f_lineno = 547;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
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
            frame_function->f_lineno = 547;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_test;
        var_test = tmp_assign_source_6;
        Py_INCREF( var_test );
        Py_XDECREF( old );
    }

    tmp_source_name_4 = var_plug_tests;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 548;
        goto try_except_handler_3;
    }
    tmp_args_element_name_4 = var_test;

    frame_function->f_lineno = 548;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 548;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    // Tried code:
    tmp_cond_value_1 = var_plug_tests;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_5 = par_self;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_suiteClass );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 552;
        goto try_except_handler_4;
    }
    tmp_args_element_name_5 = var_plug_tests;

    frame_function->f_lineno = 552;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 552;
        goto try_except_handler_4;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    goto try_end_3;
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
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_KeyboardInterrupt;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_SystemExit;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 553;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 556;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_exc_info );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 556;
    tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
        goto frame_exception_exit_1;
    }
    assert( var_exc == NULL );
    var_exc = tmp_assign_source_7;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 557;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_subscribed_name_1 = var_exc;

    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 557;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_subscribed_name_2 = var_exc;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 557;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_subscribed_name_3 = var_exc;

    tmp_subscript_name_3 = const_int_pos_2;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 557;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_addr;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "addr" );
        exception_tb = NULL;

        exception_lineno = 557;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_address;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 557;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 557;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_3:;
    // End of try:
    try_end_3:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isfunction );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfunction );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isfunction" );
        exception_tb = NULL;

        exception_lineno = 559;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_obj;

    frame_function->f_lineno = 559;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_and_left_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 559;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 559;
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_and_left_value_2 = par_parent;

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 559;
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
    tmp_isinstance_inst_1 = par_parent;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_types );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "types" );
        exception_tb = NULL;

        exception_lineno = 559;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ModuleType );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 559;
        goto frame_exception_exit_1;
    }
    tmp_operand_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 559;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 559;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    Py_INCREF( tmp_and_right_value_1 );
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
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 559;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unbound_method );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unbound_method );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unbound_method" );
        exception_tb = NULL;

        exception_lineno = 562;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_parent;

    tmp_args_element_name_8 = par_obj;

    frame_function->f_lineno = 562;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_obj;
        assert( old != NULL );
        par_obj = tmp_assign_source_8;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_isinstance_inst_2 = par_obj;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 564;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_TestCase );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 564;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 564;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_return_value = par_obj;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_5;
    branch_no_5:;
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isclass );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isclass );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isclass" );
        exception_tb = NULL;

        exception_lineno = 566;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = par_obj;

    frame_function->f_lineno = 566;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 566;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 566;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_and_left_value_3 = par_parent;

    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 567;
        goto frame_exception_exit_1;
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
    tmp_source_name_9 = par_obj;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___module__ );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 567;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_parent;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___name__ );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 567;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 567;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_4 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_cond_value_4 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 567;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_transplant_class );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transplant_class );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "transplant_class" );
        exception_tb = NULL;

        exception_lineno = 568;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = par_obj;

    tmp_source_name_11 = par_parent;

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___name__ );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 568;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 568;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 568;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_obj;
        assert( old != NULL );
        par_obj = tmp_assign_source_9;
        Py_DECREF( old );
    }

    branch_no_7:;
    tmp_called_name_11 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_11 != NULL );
    tmp_args_element_name_12 = par_obj;

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;

        exception_lineno = 569;
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 569;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_TestCase );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 569;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 569;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 569;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 569;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_13 = par_self;

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_loadTestsFromTestCase );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 570;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = par_obj;

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;

        exception_lineno = 570;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 570;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 570;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_14 = par_self;

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_loadTestsFromTestClass );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 572;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = par_obj;

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;

        exception_lineno = 572;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 572;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 572;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_8:;
    goto branch_end_6;
    branch_no_6:;
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_ismethod );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ismethod );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ismethod" );
        exception_tb = NULL;

        exception_lineno = 573;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = par_obj;

    frame_function->f_lineno = 573;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_cond_value_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 573;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 573;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_compare_left_3 = par_parent;

    tmp_compare_right_3 = Py_None;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_15 = par_obj;

    tmp_assign_source_10 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_15 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_parent;
        assert( old != NULL );
        par_parent = tmp_assign_source_10;
        Py_DECREF( old );
    }

    branch_no_10:;
    tmp_called_name_15 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_15 != NULL );
    tmp_args_element_name_17 = par_parent;

    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 576;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_TestCase );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 576;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 576;
    {
        PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_cond_value_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 576;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 576;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_called_name_16 = par_parent;

    tmp_source_name_17 = par_obj;

    tmp_args_element_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain___name__ );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 577;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 577;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 577;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_11;
    branch_no_11:;
    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isgenerator );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isgenerator );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isgenerator" );
        exception_tb = NULL;

        exception_lineno = 579;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_20 = par_obj;

    frame_function->f_lineno = 579;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_cond_value_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 579;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 579;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_18 = par_self;

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_loadTestsFromGeneratorMethod );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 580;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_21 = par_obj;

    tmp_args_element_name_22 = par_parent;

    frame_function->f_lineno = 580;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 580;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_12;
    branch_no_12:;
    tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_MethodTestCase );

    if (unlikely( tmp_called_name_19 == NULL ))
    {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MethodTestCase );
    }

    if ( tmp_called_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "MethodTestCase" );
        exception_tb = NULL;

        exception_lineno = 582;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_23 = par_obj;

    frame_function->f_lineno = 582;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 582;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_12:;
    branch_end_11:;
    goto branch_end_9;
    branch_no_9:;
    tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isfunction );

    if (unlikely( tmp_called_name_20 == NULL ))
    {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfunction );
    }

    if ( tmp_called_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isfunction" );
        exception_tb = NULL;

        exception_lineno = 583;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_24 = par_obj;

    frame_function->f_lineno = 583;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_cond_value_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 583;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        exception_lineno = 583;
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
    tmp_and_left_value_4 = par_parent;

    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 584;
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
    tmp_source_name_19 = par_obj;

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain___module__ );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 584;
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = par_parent;

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain___name__ );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 584;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_4 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 584;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_10 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    Py_INCREF( tmp_and_left_value_4 );
    tmp_cond_value_10 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        exception_lineno = 584;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_called_name_21 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_transplant_func );

    if (unlikely( tmp_called_name_21 == NULL ))
    {
        tmp_called_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transplant_func );
    }

    if ( tmp_called_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "transplant_func" );
        exception_tb = NULL;

        exception_lineno = 585;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_25 = par_obj;

    tmp_source_name_21 = par_parent;

    tmp_args_element_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain___name__ );
    if ( tmp_args_element_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 585;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_args_element_name_26 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_obj;
        assert( old != NULL );
        par_obj = tmp_assign_source_11;
        Py_DECREF( old );
    }

    branch_no_14:;
    tmp_called_name_22 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isgenerator );

    if (unlikely( tmp_called_name_22 == NULL ))
    {
        tmp_called_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isgenerator );
    }

    if ( tmp_called_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isgenerator" );
        exception_tb = NULL;

        exception_lineno = 586;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_27 = par_obj;

    if ( tmp_args_element_name_27 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;

        exception_lineno = 586;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 586;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_cond_value_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    if ( tmp_cond_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_11 );

        exception_lineno = 586;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_22 = par_self;

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_loadTestsFromGenerator );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_28 = par_obj;

    if ( tmp_args_element_name_28 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;

        exception_lineno = 587;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_29 = par_parent;

    frame_function->f_lineno = 587;
    {
        PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_29 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_15;
    branch_no_15:;
    tmp_called_name_24 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_FunctionTestCase );

    if (unlikely( tmp_called_name_24 == NULL ))
    {
        tmp_called_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FunctionTestCase );
    }

    if ( tmp_called_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FunctionTestCase" );
        exception_tb = NULL;

        exception_lineno = 589;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_30 = par_obj;

    if ( tmp_args_element_name_30 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;

        exception_lineno = 589;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 589;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 589;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_15:;
    goto branch_end_13;
    branch_no_13:;
    tmp_called_name_25 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_called_name_25 == NULL ))
    {
        tmp_called_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_called_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 591;
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_left_name_1 = const_str_digest_a99c30b0f5bb099333fcf85ac2a60e26;
    tmp_right_name_1 = par_obj;

    tmp_tuple_element_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 592;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_addr;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "addr" );
        exception_tb = NULL;

        exception_lineno = 593;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_address;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 593;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 593;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_13:;
    branch_end_9:;
    branch_end_6:;
    branch_end_5:;

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

            if ( par_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    par_obj
                );

                assert( res == 0 );
            }

            if ( par_parent )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parent,
                    par_parent
                );

                assert( res == 0 );
            }

            if ( var_plug_tests )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_plug_tests,
                    var_plug_tests
                );

                assert( res == 0 );
            }

            if ( var_addr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_addr,
                    var_addr
                );

                assert( res == 0 );
            }

            if ( var_test )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test,
                    var_test
                );

                assert( res == 0 );
            }

            if ( var_exc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_exc,
                    var_exc
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
    NUITKA_CANNOT_GET_HERE( function_15__makeTest_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( par_parent );
    par_parent = NULL;

    CHECK_OBJECT( (PyObject *)var_plug_tests );
    Py_DECREF( var_plug_tests );
    var_plug_tests = NULL;

    Py_XDECREF( var_addr );
    var_addr = NULL;

    Py_XDECREF( var_test );
    var_test = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( par_parent );
    par_parent = NULL;

    CHECK_OBJECT( (PyObject *)var_plug_tests );
    Py_DECREF( var_plug_tests );
    var_plug_tests = NULL;

    Py_XDECREF( var_addr );
    var_addr = NULL;

    Py_XDECREF( var_test );
    var_test = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_15__makeTest_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_16_resolve_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_module = python_pars[ 2 ];
    PyObject *var_obj = NULL;
    PyObject *var_parts = NULL;
    PyObject *var_part = NULL;
    PyObject *var_parent = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = par_module;

    assert( var_obj == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_obj = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a405ac4959036683c1fcda4f725cd324, module_nose$loader );
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
    tmp_source_name_1 = par_name;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_split );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 599;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 599;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 599;
        goto frame_exception_exit_1;
    }
    assert( var_parts == NULL );
    var_parts = tmp_assign_source_2;

    tmp_iter_arg_1 = var_parts;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 600;
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
            frame_function->f_lineno = 600;
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
        PyObject *old = var_part;
        var_part = tmp_assign_source_5;
        Py_INCREF( var_part );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_obj;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;

        exception_lineno = 601;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_1 );
    tmp_getattr_target_1 = var_obj;

    if ( tmp_getattr_target_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;

        exception_lineno = 601;
        goto try_except_handler_3;
    }

    tmp_getattr_attr_1 = var_part;

    tmp_getattr_default_1 = Py_None;
    tmp_tuple_element_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_2 );

        exception_lineno = 601;
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_1 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 601;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_7 == NULL )
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


        exception_lineno = 601;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_8 == NULL )
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


        exception_lineno = 601;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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
    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_parent;
        var_parent = tmp_assign_source_9;
        Py_INCREF( var_parent );
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_obj;
        var_obj = tmp_assign_source_10;
        Py_INCREF( var_obj );
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

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 600;
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

    tmp_compare_left_1 = var_obj;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;

        exception_lineno = 602;
        goto frame_exception_exit_1;
    }

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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Failure );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Failure" );
        exception_tb = NULL;

        exception_lineno = 604;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = PyExc_ValueError;
    tmp_left_name_1 = const_str_digest_bafa40cc413984521fd190fad2ed6c6d;
    tmp_right_name_1 = par_name;

    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 604;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 604;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 604;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_obj;
        var_obj = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_parent;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "parent" );
        exception_tb = NULL;

        exception_lineno = 605;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_obj;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;

        exception_lineno = 605;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
                );

                assert( res == 0 );
            }

            if ( par_module )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module,
                    par_module
                );

                assert( res == 0 );
            }

            if ( var_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    var_obj
                );

                assert( res == 0 );
            }

            if ( var_parts )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parts,
                    var_parts
                );

                assert( res == 0 );
            }

            if ( var_part )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_part,
                    var_part
                );

                assert( res == 0 );
            }

            if ( var_parent )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parent,
                    var_parent
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
    NUITKA_CANNOT_GET_HERE( function_16_resolve_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    CHECK_OBJECT( (PyObject *)var_parts );
    Py_DECREF( var_parts );
    var_parts = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_parent );
    var_parent = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_parts );
    var_parts = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_parent );
    var_parent = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_16_resolve_of_class_1_TestLoader_of_nose$loader );
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


static PyObject *impl_function_17_parseGeneratedTest_of_class_1_TestLoader_of_nose$loader( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_test = python_pars[ 1 ];
    PyObject *var_test_func = NULL;
    PyObject *var_arg = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3662c677432810ab9901161545427acc, module_nose$loader );
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
    tmp_isinstance_inst_1 = par_test;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 613;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_iter_arg_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_test;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_tuple_empty;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    assert( tmp_assign_source_1 != NULL );
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 614;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_3 == NULL )
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


        exception_lineno = 614;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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

                goto try_except_handler_2;
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

        goto try_except_handler_2;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    assert( var_test_func == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_test_func = tmp_assign_source_4;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    assert( var_arg == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_arg = tmp_assign_source_5;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_len_arg_1 = par_test;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 615;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 615;
        goto frame_exception_exit_1;
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
    // Tried code:
    tmp_iter_arg_2 = PyTuple_New( 2 );
    tmp_subscribed_name_1 = par_test;

    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_2 );

        exception_lineno = 616;
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_tuple_empty;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_2 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 616;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_7 == NULL )
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


        exception_lineno = 616;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_8 == NULL )
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


        exception_lineno = 616;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;

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

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;

    assert( var_test_func == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_test_func = tmp_assign_source_9;

    tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;

    assert( var_arg == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_arg = tmp_assign_source_10;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_1 );
    Py_DECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_2 );
    Py_DECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_len_arg_2 = par_test;

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 618;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 618;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 618;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    // Tried code:
    tmp_iter_arg_3 = PyTuple_New( 2 );
    tmp_subscribed_name_2 = par_test;

    tmp_subscript_name_2 = const_int_0;
    tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_3 );

        exception_lineno = 619;
        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_3, 0, tmp_tuple_element_3 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = par_test;

    tmp_tuple_element_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_3 );

        exception_lineno = 619;
        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_3, 1, tmp_tuple_element_3 );
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 619;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_3__source_iter == NULL );
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_11;

    tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;

    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_5, 0 );
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


        exception_lineno = 619;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_3__element_1 == NULL );
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_12;

    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;

    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_6, 1 );
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


        exception_lineno = 619;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_3__element_2 == NULL );
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_13;

    tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

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

                goto try_except_handler_4;
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

        goto try_except_handler_4;
    }
    goto try_end_3;
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

    Py_XDECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_14 = tmp_tuple_unpack_3__element_1;

    assert( var_test_func == NULL );
    Py_INCREF( tmp_assign_source_14 );
    var_test_func = tmp_assign_source_14;

    tmp_assign_source_15 = tmp_tuple_unpack_3__element_2;

    assert( var_arg == NULL );
    Py_INCREF( tmp_assign_source_15 );
    var_arg = tmp_assign_source_15;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__element_1 );
    Py_DECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__element_2 );
    Py_DECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    branch_end_2:;
    branch_end_1:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_test_func;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "test_func" );
        exception_tb = NULL;

        exception_lineno = 620;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_arg;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "arg" );
        exception_tb = NULL;

        exception_lineno = 620;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_test )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test,
                    par_test
                );

                assert( res == 0 );
            }

            if ( var_test_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test_func,
                    var_test_func
                );

                assert( res == 0 );
            }

            if ( var_arg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arg,
                    var_arg
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
    NUITKA_CANNOT_GET_HERE( function_17_parseGeneratedTest_of_class_1_TestLoader_of_nose$loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    Py_XDECREF( var_test_func );
    var_test_func = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    Py_XDECREF( var_test_func );
    var_test_func = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_17_parseGeneratedTest_of_class_1_TestLoader_of_nose$loader );
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



static PyObject *MAKE_FUNCTION_function_10_loadTestsFromName_of_class_1_TestLoader_of_nose$loader( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_10_loadTestsFromName_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_loadTestsFromName,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b8889f363fa4d404f3b3758bf783b58f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_ace7670f40fe17ba87c5f1c2567cf3cc
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_loadTestsFromNames_of_class_1_TestLoader_of_nose$loader( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_11_loadTestsFromNames_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_loadTestsFromNames,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4bd1c2eab3d7180084e0572a0c53679d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_8174e4c487ea21ec1caf99f6c38167e9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_loadTestsFromTestCase_of_class_1_TestLoader_of_nose$loader(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_12_loadTestsFromTestCase_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_loadTestsFromTestCase,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_524fdd6cace140d63fa5d5dafed780e2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_ecd842a01e91f929ca164746079a4106
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_loadTestsFromTestClass,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_be31f596dca9e9ead924cf19efa12551,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_c21418fc916dcf2c5f8ee56d4b2979a0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_makeTest_of_class_1_TestLoader_of_nose$loader( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_14_makeTest_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_makeTest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_717a02d681332eb38e711aa2be9ce057,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15__makeTest_of_class_1_TestLoader_of_nose$loader( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_15__makeTest_of_class_1_TestLoader_of_nose$loader,
        const_str_plain__makeTest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b9c6634566cd6e2ada92e502986a5a0d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_3d248abb735e9643ab9289aa3eb6f98b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_resolve_of_class_1_TestLoader_of_nose$loader(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_16_resolve_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_resolve,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a405ac4959036683c1fcda4f725cd324,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_88fcfe7a496424a4abce1827b15e7465
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_parseGeneratedTest_of_class_1_TestLoader_of_nose$loader(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_17_parseGeneratedTest_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_parseGeneratedTest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3662c677432810ab9901161545427acc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_eba877c67da748ce70d0b7979ee26762
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_TestLoader_of_nose$loader( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_1_TestLoader_of_nose$loader,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d25ccf95d8906183a6390091e1fd8515,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_67e3840bd3c445f8431a7a1527016cae
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_generate_of_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader( PyObject *defaults, PyCellObject *closure_generator, PyCellObject *closure_self )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(2 * sizeof(PyCellObject *));
    closure[0] = closure_generator;
    Py_INCREF( closure[0] );
    closure[1] = closure_self;
    Py_INCREF( closure[1] );


    PyObject *result = Nuitka_Function_New(
        impl_function_1_generate_of_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_generate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1d54a2ae618fc0b077ce9a0cb4a00e2e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        Py_None,
        closure,
        2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_generate_of_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader( PyObject *defaults, PyCellObject *closure_generator, PyCellObject *closure_self )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(2 * sizeof(PyCellObject *));
    closure[0] = closure_generator;
    Py_INCREF( closure[0] );
    closure[1] = closure_self;
    Py_INCREF( closure[1] );


    PyObject *result = Nuitka_Function_New(
        impl_function_1_generate_of_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_generate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_02ec43b569a2ea6561213d0b6c3e2b11,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        Py_None,
        closure,
        2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_lambda_of_function_10_loadTestsFromName_of_class_1_TestLoader_of_nose$loader( PyCellObject *closure_path, PyCellObject *closure_self )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(2 * sizeof(PyCellObject *));
    closure[0] = closure_path;
    Py_INCREF( closure[0] );
    closure[1] = closure_self;
    Py_INCREF( closure[1] );


    PyObject *result = Nuitka_Function_New(
        impl_function_1_lambda_of_function_10_loadTestsFromName_of_class_1_TestLoader_of_nose$loader,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_71805391bb3442eb1d24c60374039392,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        Py_None,
        closure,
        2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ab641dbe9770db27a096c9a201e84b54,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_lambda_of_genobj_1_loadTestsFromDir_of_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader( PyCellObject *closure_entry_path, PyCellObject *closure_self )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(2 * sizeof(PyCellObject *));
    closure[0] = closure_entry_path;
    Py_INCREF( closure[0] );
    closure[1] = closure_self;
    Py_INCREF( closure[1] );


    PyObject *result = Nuitka_Function_New(
        impl_function_1_lambda_of_genobj_1_loadTestsFromDir_of_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_42445f9454ae39ec321aaa9baceb30e1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        Py_None,
        closure,
        2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_wanted_of_function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_wanted_of_function_13_loadTestsFromTestClass_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_wanted,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a4c60ab2a3cf95fef7f46fd36e1d909e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_wanted_of_function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_wanted_of_function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_wanted,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_72e1d79266777c4a33d56340b883bac3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_getTestCaseNames_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_getTestCaseNames,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e00473447787b4332bcfc9d4d2d33bb4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_fced2ede167894e7c6a068da64df51e0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader( PyCellObject *closure_module, PyCellObject *closure_self )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(2 * sizeof(PyCellObject *));
    closure[0] = closure_module;
    Py_INCREF( closure[0] );
    closure[1] = closure_self;
    Py_INCREF( closure[1] );


    PyObject *result = Nuitka_Function_New(
        impl_function_2_lambda_of_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9e4ce94bce2e2109687fe7d9efc8f672,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        Py_None,
        closure,
        2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__haveVisited_of_class_1_TestLoader_of_nose$loader(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3__haveVisited_of_class_1_TestLoader_of_nose$loader,
        const_str_plain__haveVisited,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8f21354a96752ac981634269059373e9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__addVisitedPath_of_class_1_TestLoader_of_nose$loader(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4__addVisitedPath_of_class_1_TestLoader_of_nose$loader,
        const_str_plain__addVisitedPath,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1d770dee8e17a5a164e8dd2928c76ccd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5_loadTestsFromDir_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_loadTestsFromDir,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_839167fe6751b586ec6c694bbf4f97dd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_c5a99b448ccf6b68fa710b56dfb7d9e9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_loadTestsFromFile_of_class_1_TestLoader_of_nose$loader(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_6_loadTestsFromFile_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_loadTestsFromFile,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ce603aaa341d556b1255804e99ea14d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_8cbef258d5e894fb4a8bfabd10a765e6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_7_loadTestsFromGenerator_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_loadTestsFromGenerator,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_99e8a172770540cbc1dc81b0c7924e0c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_ff05de07c412a3882062055038d7671a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_8_loadTestsFromGeneratorMethod_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_loadTestsFromGeneratorMethod,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_59f1379f2a842b69c2c86e8f98ab741b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_f479a3f0512b9648c741cf414e78af4a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_9_loadTestsFromModule_of_class_1_TestLoader_of_nose$loader,
        const_str_plain_loadTestsFromModule,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e41e4b1af7f523b08d834b786d572891,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$loader,
        const_str_digest_5dc712863adc896cbe3b9899c334254b
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nose$loader =
{
    PyModuleDef_HEAD_INIT,
    "nose.loader",   /* m_name */
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

MOD_INIT_DECL( nose$loader )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nose$loader );
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

    // puts( "in initnose$loader" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nose$loader = Py_InitModule4(
        "nose.loader",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nose$loader = PyModule_Create( &mdef_nose$loader );
#endif

    moduledict_nose$loader = (PyDictObject *)((PyModuleObject *)module_nose$loader)->md_dict;

    CHECK_OBJECT( module_nose$loader );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_6fbd26c2ed3ec428c6e494e7dc8a7b6d, module_nose$loader );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nose$loader );

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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_name_1;
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
    PyObject *tmp_import_globals_23;
    PyObject *tmp_import_globals_24;
    PyObject *tmp_import_globals_25;
    PyObject *tmp_import_globals_26;
    PyObject *tmp_import_globals_27;
    PyObject *tmp_import_globals_28;
    PyObject *tmp_import_globals_29;
    PyObject *tmp_import_globals_30;
    PyObject *tmp_import_globals_31;
    PyObject *tmp_import_globals_32;
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
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_import_name_from_25;
    PyObject *tmp_import_name_from_26;
    PyObject *tmp_import_name_from_27;
    PyObject *tmp_key_name_1;
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
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_3b6597bbcfecf00696e1b5f1ae684b31;
    UPDATE_STRING_DICT0( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_eea9031ec4525e779b4332bfc3247ce8;
    UPDATE_STRING_DICT0( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "generators");
    UPDATE_STRING_DICT0( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_generators, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_43c3194c7dbca60d0f46d55cdb84f956, module_nose$loader );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 11;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_logging, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 12;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 13;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 14;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_unittest, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unittest, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 15;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_types, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_inspect, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_isfunction_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_isfunction );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isfunction, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_c4a41d45d3f3273121ae80a944790f18, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_unbound_method_str_plain_ismethod_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_unbound_method );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unbound_method, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_c4a41d45d3f3273121ae80a944790f18, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_unbound_method_str_plain_ismethod_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ismethod );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_ismethod, tmp_assign_source_11 );
    tmp_import_globals_9 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_098b633ed352e092df3872ffdfb2bf14, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_FunctionTestCase_str_plain_MethodTestCase_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_FunctionTestCase );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_FunctionTestCase, tmp_assign_source_12 );
    tmp_import_globals_10 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_098b633ed352e092df3872ffdfb2bf14, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_FunctionTestCase_str_plain_MethodTestCase_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_MethodTestCase );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_MethodTestCase, tmp_assign_source_13 );
    tmp_import_globals_11 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_50ec6eec50305057aff101793edbb556, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_Failure_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Failure );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Failure, tmp_assign_source_14 );
    tmp_import_globals_12 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_Config_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Config );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Config, tmp_assign_source_15 );
    tmp_import_globals_13 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_7775affb36096bf2cf44236037c47ff7, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_plain_Importer_str_plain_add_path_str_plain_remove_path_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Importer );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_Importer, tmp_assign_source_16 );
    tmp_import_globals_14 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_7775affb36096bf2cf44236037c47ff7, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_plain_Importer_str_plain_add_path_str_plain_remove_path_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_add_path );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_add_path, tmp_assign_source_17 );
    tmp_import_globals_15 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_7775affb36096bf2cf44236037c47ff7, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_Importer_str_plain_add_path_str_plain_remove_path_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_remove_path );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_remove_path, tmp_assign_source_18 );
    tmp_import_globals_16 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_98d91f128fd7fd52ac6f0b9dd6d45d3f, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_defaultSelector_str_plain_TestAddress_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_defaultSelector );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_defaultSelector, tmp_assign_source_19 );
    tmp_import_globals_17 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_98d91f128fd7fd52ac6f0b9dd6d45d3f, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_plain_defaultSelector_str_plain_TestAddress_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_TestAddress );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_TestAddress, tmp_assign_source_20 );
    tmp_import_globals_18 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_18, tmp_import_globals_18, const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_func_lineno );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_func_lineno, tmp_assign_source_21 );
    tmp_import_globals_19 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_19, tmp_import_globals_19, const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_getpackage );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_getpackage, tmp_assign_source_22 );
    tmp_import_globals_20 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_20, tmp_import_globals_20, const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_isclass );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isclass, tmp_assign_source_23 );
    tmp_import_globals_21 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_21, tmp_import_globals_21, const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_isgenerator );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_isgenerator, tmp_assign_source_24 );
    tmp_import_globals_22 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_22, tmp_import_globals_22, const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_ispackage );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_ispackage, tmp_assign_source_25 );
    tmp_import_globals_23 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_23, tmp_import_globals_23, const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_regex_last_key );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_regex_last_key, tmp_assign_source_26 );
    tmp_import_globals_24 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_24, tmp_import_globals_24, const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_resolve_name );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_resolve_name, tmp_assign_source_27 );
    tmp_import_globals_25 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_20 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_25, tmp_import_globals_25, const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_transplant_func );
    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_transplant_func, tmp_assign_source_28 );
    tmp_import_globals_26 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_21 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_26, tmp_import_globals_26, const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_transplant_class );
    Py_DECREF( tmp_import_name_from_21 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_transplant_class, tmp_assign_source_29 );
    tmp_import_globals_27 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_22 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_27, tmp_import_globals_27, const_tuple_5fd4acbbbad4fb3010e974e0123efdc4_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_test_address );
    Py_DECREF( tmp_import_name_from_22 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_test_address, tmp_assign_source_30 );
    tmp_import_globals_28 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 26;
    tmp_import_name_from_23 = IMPORT_MODULE( const_str_digest_43d74df3a60b2618a5a31c88b0fd4e9c, tmp_import_globals_28, tmp_import_globals_28, const_tuple_df41b7e068bb8d04a999872fba248500_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_ContextSuiteFactory );
    Py_DECREF( tmp_import_name_from_23 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_ContextSuiteFactory, tmp_assign_source_31 );
    tmp_import_globals_29 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 26;
    tmp_import_name_from_24 = IMPORT_MODULE( const_str_digest_43d74df3a60b2618a5a31c88b0fd4e9c, tmp_import_globals_29, tmp_import_globals_29, const_tuple_df41b7e068bb8d04a999872fba248500_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_ContextList );
    Py_DECREF( tmp_import_name_from_24 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_ContextList, tmp_assign_source_32 );
    tmp_import_globals_30 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 26;
    tmp_import_name_from_25 = IMPORT_MODULE( const_str_digest_43d74df3a60b2618a5a31c88b0fd4e9c, tmp_import_globals_30, tmp_import_globals_30, const_tuple_df41b7e068bb8d04a999872fba248500_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_LazySuite );
    Py_DECREF( tmp_import_name_from_25 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_LazySuite, tmp_assign_source_33 );
    tmp_import_globals_31 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 27;
    tmp_import_name_from_26 = IMPORT_MODULE( const_str_digest_c4a41d45d3f3273121ae80a944790f18, tmp_import_globals_31, tmp_import_globals_31, const_tuple_str_plain_sort_list_str_plain_cmp_to_key_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_sort_list );
    Py_DECREF( tmp_import_name_from_26 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_sort_list, tmp_assign_source_34 );
    tmp_import_globals_32 = ((PyModuleObject *)module_nose$loader)->md_dict;
    frame_module->f_lineno = 27;
    tmp_import_name_from_27 = IMPORT_MODULE( const_str_digest_c4a41d45d3f3273121ae80a944790f18, tmp_import_globals_32, tmp_import_globals_32, const_tuple_str_plain_sort_list_str_plain_cmp_to_key_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_cmp_to_key );
    Py_DECREF( tmp_import_name_from_27 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_cmp_to_key, tmp_assign_source_35 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getLogger );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 30;
    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_6fbd26c2ed3ec428c6e494e7dc8a7b6d_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_36 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_37 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_normpath );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_op_normpath, tmp_assign_source_37 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_38 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_op_abspath, tmp_assign_source_38 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_path );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_39 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_op_join, tmp_assign_source_39 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 37;
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_40 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_isdir );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_op_isdir, tmp_assign_source_40 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_path );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_41 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_op_isfile, tmp_assign_source_41 );
    tmp_assign_source_42 = LIST_COPY( const_list_str_plain_TestLoader_str_plain_defaultTestLoader_list );
    UPDATE_STRING_DICT1( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_42 );
    // Tried code:
    tmp_assign_source_43 = PyTuple_New( 1 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 44;
        goto try_except_handler_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_TestLoader );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_43 );

        exception_lineno = 44;
        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_43, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_43;

    tmp_assign_source_44 = impl_class_1_TestLoader_of_nose$loader( NULL );
    assert( tmp_assign_source_44 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_44;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
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
    tmp_assign_source_45 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_45 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_45;

    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_TestLoader;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 44;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_46;

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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_47 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_TestLoader, tmp_assign_source_47 );
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

    tmp_assign_source_48 = GET_STRING_DICT_VALUE( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_TestLoader );

    if (unlikely( tmp_assign_source_48 == NULL ))
    {
        tmp_assign_source_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TestLoader );
    }

    if ( tmp_assign_source_48 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "TestLoader" );
        exception_tb = NULL;

        exception_lineno = 622;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_nose$loader, (Nuitka_StringObject *)const_str_plain_defaultTestLoader, tmp_assign_source_48 );

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

    return MOD_RETURN_VALUE( module_nose$loader );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

// Generated code for Python source for module 'nose.core'
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

// The _module_nose$core is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_nose$core;
PyDictObject *moduledict_nose$core;

// The module constants used
static PyObject *const_str_plain_setuptools_incompat;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_tolist;
extern PyObject *const_str_plain_plug_runner;
static PyObject *const_str_plain_plug_loader;
static PyObject *const_tuple_be87cabb525229fc842bb51e5766ac15_tuple;
static PyObject *const_str_digest_04bbfbc193a9faf3e2efeb6cce988154;
extern PyObject *const_str_plain_decode;
static PyObject *const_tuple_str_plain_Config_str_plain_all_config_files_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_getAllConfigFiles;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_digest_bb1f241f2000ed1fe809be4d2e88ea72;
static PyObject *const_tuple_tuple_str_dot_tuple_tuple;
extern PyObject *const_str_plain_module;
extern PyObject *const_str_plain_suite;
extern PyObject *const_str_plain_extraplugins;
extern PyObject *const_str_plain_wrap;
extern PyObject *const_tuple_empty;
static PyObject *const_list_str_plain_collector_list;
extern PyObject *const_str_plain_version;
static PyObject *const_str_digest_6cd870d69d7ebd158fbf2a47fb3a9de5;
extern PyObject *const_str_plain_addplugins;
extern PyObject *const_str_plain_sort;
extern PyObject *const_str_plain_prepareTestLoader;
extern PyObject *const_str_plain_stream;
extern PyObject *const_str_plain_manager;
static PyObject *const_dict_fc6bbcaf457680988b22d8a7ded150f1;
static PyObject *const_tuple_str_plain_FinalizingSuiteWrapper_tuple;
extern PyObject *const_tuple_str_plain___main___tuple;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_collector;
extern PyObject *const_str_plain_FinalizingSuiteWrapper;
extern PyObject *const_str_plain_add_option;
extern PyObject *const_str_plain_descriptions;
extern PyObject *const_str_plain_parser;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf;
extern PyObject *const_str_plain_addPlugins;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_prepareTestRunner;
extern PyObject *const_str_digest_f80a0064de2c0801af33f61a4f9bf7e7;
extern PyObject *const_str_plain_cfg_files;
extern PyObject *const_str_plain_defaultTestLoader;
static PyObject *const_dict_fc65952fb006a55a05401979eaa9fa85;
extern PyObject *const_str_plain_close;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_extra_args;
extern PyObject *const_tuple_int_pos_3_int_0_tuple;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_basename;
extern PyObject *const_str_dot;
static PyObject *const_str_digest_62cd5bd477daf607627ab75c3b95b93b;
extern PyObject *const_str_plain_argv;
static PyObject *const_str_plain_DummyParser;
extern PyObject *const_str_plain_loadTestsFromNames;
extern PyObject *const_str_plain_conf;
extern PyObject *const_str_plain_nose;
extern PyObject *const_str_plain_plugins;
extern PyObject *const_str_plain___main__;
extern PyObject *const_str_plain_suiteClass;
extern PyObject *const_str_plain_verbosity;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_workingDir;
static PyObject *const_str_plain_testLoader;
static PyObject *const_dict_34c149098db8d1000734acc1b33e3cf8;
extern PyObject *const_str_plain_printSummary;
static PyObject *const_str_digest_dadadb7403d8efa045c798679da7469f;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_str_plain_pop;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_eb863c9d405693e91f6e9b93971bf5c2;
extern PyObject *const_tuple_int_pos_2_int_pos_4_tuple;
extern PyObject *const_str_digest_f65c0a7d4cdaee5f484bffe48dc96c38;
static PyObject *const_tuple_str_plain_NOSE_IGNORE_CONFIG_FILES_false_tuple;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_loader;
static PyObject *const_tuple_str_plain_isclass_str_plain_tolist_tuple;
static PyObject *const_str_digest_359160922274612681d81229aefa8a72;
static PyObject *const_str_plain_NOSE_IGNORE_CONFIG_FILES;
static PyObject *const_tuple_a420d857a66a31c5957938d0670a269b_tuple;
static PyObject *const_list_523169a8b1bdf1eb3e7946f2cdd5980c_list;
static PyObject *const_tuple_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf_tuple;
extern PyObject *const_str_digest_43d74df3a60b2618a5a31c88b0fd4e9c;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_arg_str_plain_kw_tuple;
static PyObject *const_str_plain_makeConfig;
extern PyObject *const_int_pos_7;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_main;
extern PyObject *const_int_pos_3;
static PyObject *const_str_digest_5931886963c252333c3e30c254ab6ca8;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_f3e8e1dd5b10d184f85d91c02593e654;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_exclude;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_help;
static PyObject *const_str_plain_ld;
extern PyObject *const_str_plain_arg;
static PyObject *const_str_digest_0540b65bf13e89a8357256b9d5f8c8cd;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_setOutputStream;
extern PyObject *const_str_plain_wasSuccessful;
extern PyObject *const_str_plain_TextTestResult;
static PyObject *const_str_digest_981f6232ff21b43f7dbe100cba7eb3a6;
extern PyObject *const_str_plain_opts;
extern PyObject *const_str_plain_TextTestRunner;
static PyObject *const_str_digest_488e66037d8e2e4c769f35de5e2951ce;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_6ec6b910a8a3ff1c7f3b855dfdd0dd1e;
extern PyObject *const_str_plain_addOptions;
extern PyObject *const_str_plain_testNames;
extern PyObject *const_str_plain_text;
extern PyObject *const_str_plain_configure;
static PyObject *const_tuple_66329060cf4862f2ad835d84ed993986_tuple;
static PyObject *const_str_plain_createTests;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_run;
extern PyObject *const_str_digest_cc4f589119d7c98419ab44ebd707de36;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_time;
static PyObject *const_dict_ebbb7b18eb591ca54037ac0420c58db2;
static PyObject *const_tuple_str_plain_name_str_plain_kw_tuple;
static PyObject *const_str_digest_b40ef506a82c97f3590e964b1aa48791;
extern PyObject *const_str_plain_exit;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_success;
static PyObject *const_str_plain___loader__;
extern PyObject *const_tuple_str_plain_self_str_plain_arg_str_plain_kw_tuple;
extern PyObject *const_str_plain_config;
static PyObject *const_tuple_str_plain_help_str_empty_tuple;
extern PyObject *const_tuple_str_plain___version___tuple;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_isclass;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_PluginManager;
extern PyObject *const_str_plain_showPlugins;
extern PyObject *const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a;
static PyObject *const_tuple_88f2d9e60c5bbe352cbc76d81a74498f_tuple;
extern PyObject *const_str_plain_generators;
static PyObject *const_str_plain_usage;
static PyObject *const_tuple_f88ef594a0aef4965fd24fa9ea0adef5_tuple;
extern PyObject *const_str_plain_runTests;
static PyObject *const_tuple_str_plain_defaultTestLoader_tuple;
static PyObject *const_str_digest_a92b3b87194be37fb2d6a62fea0e2e72;
static PyObject *const_str_digest_3a6916cad14226b83e974e232b0133fe;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_run_exit;
extern PyObject *const_str_plain_score;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain_stdout;
static PyObject *const_tuple_e1503296fc64942a518b97a34bbd10aa_tuple;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_doc;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_Config;
static PyObject *const_str_digest_5230517fb8174d2e6312567d5f6f4579;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_v;
static PyObject *const_str_digest_cae2cb99fca30d43e1a00723689dbd8c;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_files;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_finalize;
extern PyObject *const_str_plain_log;
static PyObject *const_tuple_str_plain_self_str_plain_env_tuple;
extern PyObject *const_str_digest_b8872718382dd39ffa4013e303d20ce5;
extern PyObject *const_str_plain_DefaultPluginManager;
extern PyObject *const_tuple_str_plain_TextTestResult_tuple;
static PyObject *const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple;
extern PyObject *const_tuple_int_pos_2_int_pos_7_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_plug_runner_str_plain_result_tuple;
extern PyObject *const_str_plain_chdir;
static PyObject *const_str_digest_7e01470d8db1f7ed190981c784354d62;
static PyObject *const_str_plain_compat_24;
extern PyObject *const_str_plain___stdout__;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_core;
static PyObject *const_tuple_str_digest_3a6916cad14226b83e974e232b0133fe_tuple;
static PyObject *const_str_plain_defaultTest;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_testRunner;
static PyObject *const_tuple_0b908cc21487f041de9e8381a942bb39_tuple;
static PyObject *const_str_plain_initial_indent;
extern PyObject *const_str_plain_unittest;
static PyObject *const_str_digest_04906fc59dfc72f13c9d5300edc0c815;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_all_config_files;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_parseArgs;
extern PyObject *const_str_plain_textwrap;
static PyObject *const_tuple_02935bea8df95a9a654795642144a6bd_tuple;
static PyObject *const_str_digest_15aa605822a6158e9ce9d873c7998f77;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_prepareTest;
extern PyObject *const_str_plain_printErrors;
static PyObject *const_str_digest_5fb9be99434fcd24ff3c492278fa1217;
static PyObject *const_str_plain_subsequent_indent;
static PyObject *const_str_digest_770d9eae4a9db649d06f4fb177f18268;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_stop;
static PyObject *const_str_digest_3bfa354ad37b57aa656656ee968db24a;
static PyObject *const_str_digest_a19e5ee8cfde43746285c9b19ba85a68;
extern PyObject *const_str_plain_get_data;
extern PyObject *const_str_plain_wrapper;
extern PyObject *const_str_plain_kw;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_report;
extern PyObject *const_str_plain_TestProgram;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
extern PyObject *const_str_plain_RestrictedPluginManager;
static PyObject *const_tuple_3b0eb8040894593655974a7c5f85b090_tuple;
extern PyObject *const_str_digest_6fbd26c2ed3ec428c6e494e7dc8a7b6d;
extern PyObject *const_str_plain_runmodule;
extern PyObject *const_str_plain_wrapped;
static PyObject *const_tuple_e4f6b6648b6bf6c5cc7862029c80c389_tuple;
extern PyObject *const_str_plain_env;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain__makeResult;
static PyObject *const_str_digest_44fe4951a8f4a5de50a4e9c9350f0d94;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_setuptools_incompat = UNSTREAM_STRING( &constant_bin[ 24821 ], 19, 1 );
    const_str_plain_plug_loader = UNSTREAM_STRING( &constant_bin[ 24840 ], 11, 1 );
    const_tuple_be87cabb525229fc842bb51e5766ac15_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_be87cabb525229fc842bb51e5766ac15_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_be87cabb525229fc842bb51e5766ac15_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_be87cabb525229fc842bb51e5766ac15_tuple, 2, const_str_plain_descriptions ); Py_INCREF( const_str_plain_descriptions );
    PyTuple_SET_ITEM( const_tuple_be87cabb525229fc842bb51e5766ac15_tuple, 3, const_str_plain_verbosity ); Py_INCREF( const_str_plain_verbosity );
    PyTuple_SET_ITEM( const_tuple_be87cabb525229fc842bb51e5766ac15_tuple, 4, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    const_str_digest_04bbfbc193a9faf3e2efeb6cce988154 = UNSTREAM_STRING( &constant_bin[ 24851 ], 41, 0 );
    const_tuple_str_plain_Config_str_plain_all_config_files_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Config_str_plain_all_config_files_tuple, 0, const_str_plain_Config ); Py_INCREF( const_str_plain_Config );
    PyTuple_SET_ITEM( const_tuple_str_plain_Config_str_plain_all_config_files_tuple, 1, const_str_plain_all_config_files ); Py_INCREF( const_str_plain_all_config_files );
    const_str_plain_getAllConfigFiles = UNSTREAM_STRING( &constant_bin[ 24892 ], 17, 1 );
    const_tuple_tuple_str_dot_tuple_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_tuple_str_dot_tuple_tuple, 0, const_tuple_str_dot_tuple ); Py_INCREF( const_tuple_str_dot_tuple );
    const_list_str_plain_collector_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_collector_list, 0, const_str_plain_collector ); Py_INCREF( const_str_plain_collector );
    const_str_digest_6cd870d69d7ebd158fbf2a47fb3a9de5 = UNSTREAM_STRING( &constant_bin[ 24909 ], 1442, 0 );
    const_dict_fc6bbcaf457680988b22d8a7ded150f1 = _PyDict_NewPresized( 1 );
    const_tuple_f88ef594a0aef4965fd24fa9ea0adef5_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f88ef594a0aef4965fd24fa9ea0adef5_tuple, 0, const_str_plain_report ); Py_INCREF( const_str_plain_report );
    PyTuple_SET_ITEM( const_tuple_f88ef594a0aef4965fd24fa9ea0adef5_tuple, 1, const_str_plain_prepareTest ); Py_INCREF( const_str_plain_prepareTest );
    PyTuple_SET_ITEM( const_tuple_f88ef594a0aef4965fd24fa9ea0adef5_tuple, 2, const_str_plain_prepareTestLoader ); Py_INCREF( const_str_plain_prepareTestLoader );
    PyTuple_SET_ITEM( const_tuple_f88ef594a0aef4965fd24fa9ea0adef5_tuple, 3, const_str_plain_prepareTestRunner ); Py_INCREF( const_str_plain_prepareTestRunner );
    PyTuple_SET_ITEM( const_tuple_f88ef594a0aef4965fd24fa9ea0adef5_tuple, 4, const_str_plain_setOutputStream ); Py_INCREF( const_str_plain_setOutputStream );
    PyDict_SetItem( const_dict_fc6bbcaf457680988b22d8a7ded150f1, const_str_plain_exclude, const_tuple_f88ef594a0aef4965fd24fa9ea0adef5_tuple );
    assert( PyDict_Size( const_dict_fc6bbcaf457680988b22d8a7ded150f1 ) == 1 );
    const_tuple_str_plain_FinalizingSuiteWrapper_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FinalizingSuiteWrapper_tuple, 0, const_str_plain_FinalizingSuiteWrapper ); Py_INCREF( const_str_plain_FinalizingSuiteWrapper );
    const_dict_fc65952fb006a55a05401979eaa9fa85 = _PyDict_NewPresized( 2 );
    const_str_plain_subsequent_indent = UNSTREAM_STRING( &constant_bin[ 26351 ], 17, 1 );
    PyDict_SetItem( const_dict_fc65952fb006a55a05401979eaa9fa85, const_str_plain_subsequent_indent, const_str_digest_f65c0a7d4cdaee5f484bffe48dc96c38 );
    const_str_plain_initial_indent = UNSTREAM_STRING( &constant_bin[ 26368 ], 14, 1 );
    PyDict_SetItem( const_dict_fc65952fb006a55a05401979eaa9fa85, const_str_plain_initial_indent, const_str_digest_f65c0a7d4cdaee5f484bffe48dc96c38 );
    assert( PyDict_Size( const_dict_fc65952fb006a55a05401979eaa9fa85 ) == 2 );
    const_str_digest_62cd5bd477daf607627ab75c3b95b93b = UNSTREAM_STRING( &constant_bin[ 26382 ], 13, 0 );
    const_str_plain_DummyParser = UNSTREAM_STRING( &constant_bin[ 26395 ], 11, 1 );
    const_str_plain_testLoader = UNSTREAM_STRING( &constant_bin[ 25259 ], 10, 1 );
    const_dict_34c149098db8d1000734acc1b33e3cf8 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_34c149098db8d1000734acc1b33e3cf8, const_str_plain_argv, const_list_str_plain_collector_list );
    assert( PyDict_Size( const_dict_34c149098db8d1000734acc1b33e3cf8 ) == 1 );
    const_str_digest_dadadb7403d8efa045c798679da7469f = UNSTREAM_STRING( &constant_bin[ 26406 ], 275, 0 );
    const_str_digest_eb863c9d405693e91f6e9b93971bf5c2 = UNSTREAM_STRING( &constant_bin[ 26681 ], 14, 0 );
    const_tuple_str_plain_NOSE_IGNORE_CONFIG_FILES_false_tuple = PyTuple_New( 2 );
    const_str_plain_NOSE_IGNORE_CONFIG_FILES = UNSTREAM_STRING( &constant_bin[ 26695 ], 24, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_IGNORE_CONFIG_FILES_false_tuple, 0, const_str_plain_NOSE_IGNORE_CONFIG_FILES ); Py_INCREF( const_str_plain_NOSE_IGNORE_CONFIG_FILES );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_IGNORE_CONFIG_FILES_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_tuple_str_plain_isclass_str_plain_tolist_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_isclass_str_plain_tolist_tuple, 0, const_str_plain_isclass ); Py_INCREF( const_str_plain_isclass );
    PyTuple_SET_ITEM( const_tuple_str_plain_isclass_str_plain_tolist_tuple, 1, const_str_plain_tolist ); Py_INCREF( const_str_plain_tolist );
    const_str_digest_359160922274612681d81229aefa8a72 = UNSTREAM_STRING( &constant_bin[ 26719 ], 13, 0 );
    const_tuple_a420d857a66a31c5957938d0670a269b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_a420d857a66a31c5957938d0670a269b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a420d857a66a31c5957938d0670a269b_tuple, 1, const_str_plain_env ); Py_INCREF( const_str_plain_env );
    PyTuple_SET_ITEM( const_tuple_a420d857a66a31c5957938d0670a269b_tuple, 2, const_str_plain_plugins ); Py_INCREF( const_str_plain_plugins );
    PyTuple_SET_ITEM( const_tuple_a420d857a66a31c5957938d0670a269b_tuple, 3, const_str_plain_cfg_files ); Py_INCREF( const_str_plain_cfg_files );
    PyTuple_SET_ITEM( const_tuple_a420d857a66a31c5957938d0670a269b_tuple, 4, const_str_plain_manager ); Py_INCREF( const_str_plain_manager );
    const_list_523169a8b1bdf1eb3e7946f2cdd5980c_list = PyList_New( 7 );
    PyList_SET_ITEM( const_list_523169a8b1bdf1eb3e7946f2cdd5980c_list, 0, const_str_plain_TestProgram ); Py_INCREF( const_str_plain_TestProgram );
    PyList_SET_ITEM( const_list_523169a8b1bdf1eb3e7946f2cdd5980c_list, 1, const_str_plain_main ); Py_INCREF( const_str_plain_main );
    PyList_SET_ITEM( const_list_523169a8b1bdf1eb3e7946f2cdd5980c_list, 2, const_str_plain_run ); Py_INCREF( const_str_plain_run );
    PyList_SET_ITEM( const_list_523169a8b1bdf1eb3e7946f2cdd5980c_list, 3, const_str_plain_run_exit ); Py_INCREF( const_str_plain_run_exit );
    PyList_SET_ITEM( const_list_523169a8b1bdf1eb3e7946f2cdd5980c_list, 4, const_str_plain_runmodule ); Py_INCREF( const_str_plain_runmodule );
    PyList_SET_ITEM( const_list_523169a8b1bdf1eb3e7946f2cdd5980c_list, 5, const_str_plain_collector ); Py_INCREF( const_str_plain_collector );
    PyList_SET_ITEM( const_list_523169a8b1bdf1eb3e7946f2cdd5980c_list, 6, const_str_plain_TextTestRunner ); Py_INCREF( const_str_plain_TextTestRunner );
    const_tuple_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf_tuple, 0, const_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf ); Py_INCREF( const_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf );
    const_str_plain_makeConfig = UNSTREAM_STRING( &constant_bin[ 26732 ], 10, 1 );
    const_str_digest_5931886963c252333c3e30c254ab6ca8 = UNSTREAM_STRING( &constant_bin[ 26742 ], 97, 0 );
    const_str_digest_f3e8e1dd5b10d184f85d91c02593e654 = UNSTREAM_STRING( &constant_bin[ 13079 ], 4, 0 );
    const_str_plain_ld = UNSTREAM_STRING( &constant_bin[ 3485 ], 2, 1 );
    const_str_digest_0540b65bf13e89a8357256b9d5f8c8cd = UNSTREAM_STRING( &constant_bin[ 26839 ], 83, 0 );
    const_str_digest_981f6232ff21b43f7dbe100cba7eb3a6 = UNSTREAM_STRING( &constant_bin[ 26922 ], 10, 0 );
    const_str_digest_488e66037d8e2e4c769f35de5e2951ce = UNSTREAM_STRING( &constant_bin[ 26932 ], 170, 0 );
    const_str_digest_6ec6b910a8a3ff1c7f3b855dfdd0dd1e = UNSTREAM_STRING( &constant_bin[ 27102 ], 209, 0 );
    const_tuple_66329060cf4862f2ad835d84ed993986_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_66329060cf4862f2ad835d84ed993986_tuple, 0, const_str_plain_setuptools_incompat ); Py_INCREF( const_str_plain_setuptools_incompat );
    PyTuple_SET_ITEM( const_tuple_66329060cf4862f2ad835d84ed993986_tuple, 1, const_str_plain_plugins ); Py_INCREF( const_str_plain_plugins );
    PyTuple_SET_ITEM( const_tuple_66329060cf4862f2ad835d84ed993986_tuple, 2, const_str_plain_conf ); Py_INCREF( const_str_plain_conf );
    PyTuple_SET_ITEM( const_tuple_66329060cf4862f2ad835d84ed993986_tuple, 3, const_str_plain_loader ); Py_INCREF( const_str_plain_loader );
    PyTuple_SET_ITEM( const_tuple_66329060cf4862f2ad835d84ed993986_tuple, 4, const_str_plain_suite ); Py_INCREF( const_str_plain_suite );
    const_str_plain_createTests = UNSTREAM_STRING( &constant_bin[ 27311 ], 11, 1 );
    const_dict_ebbb7b18eb591ca54037ac0420c58db2 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_ebbb7b18eb591ca54037ac0420c58db2, const_str_plain_subsequent_indent, const_str_digest_b8872718382dd39ffa4013e303d20ce5 );
    PyDict_SetItem( const_dict_ebbb7b18eb591ca54037ac0420c58db2, const_str_plain_initial_indent, const_str_digest_b8872718382dd39ffa4013e303d20ce5 );
    assert( PyDict_Size( const_dict_ebbb7b18eb591ca54037ac0420c58db2 ) == 2 );
    const_tuple_str_plain_name_str_plain_kw_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_kw_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_kw_tuple, 1, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_str_digest_b40ef506a82c97f3590e964b1aa48791 = UNSTREAM_STRING( &constant_bin[ 27322 ], 1470, 0 );
    const_str_plain___loader__ = UNSTREAM_STRING( &constant_bin[ 28792 ], 10, 1 );
    const_tuple_str_plain_help_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_help_str_empty_tuple, 0, const_str_plain_help ); Py_INCREF( const_str_plain_help );
    PyTuple_SET_ITEM( const_tuple_str_plain_help_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_tuple_88f2d9e60c5bbe352cbc76d81a74498f_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_88f2d9e60c5bbe352cbc76d81a74498f_tuple, 0, const_str_plain_PluginManager ); Py_INCREF( const_str_plain_PluginManager );
    PyTuple_SET_ITEM( const_tuple_88f2d9e60c5bbe352cbc76d81a74498f_tuple, 1, const_str_plain_DefaultPluginManager ); Py_INCREF( const_str_plain_DefaultPluginManager );
    PyTuple_SET_ITEM( const_tuple_88f2d9e60c5bbe352cbc76d81a74498f_tuple, 2, const_str_plain_RestrictedPluginManager ); Py_INCREF( const_str_plain_RestrictedPluginManager );
    const_str_plain_usage = UNSTREAM_STRING( &constant_bin[ 28802 ], 5, 1 );
    const_tuple_str_plain_defaultTestLoader_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_defaultTestLoader_tuple, 0, const_str_plain_defaultTestLoader ); Py_INCREF( const_str_plain_defaultTestLoader );
    const_str_digest_a92b3b87194be37fb2d6a62fea0e2e72 = UNSTREAM_STRING( &constant_bin[ 28807 ], 201, 0 );
    const_str_digest_3a6916cad14226b83e974e232b0133fe = UNSTREAM_STRING( &constant_bin[ 29008 ], 15, 0 );
    const_tuple_e1503296fc64942a518b97a34bbd10aa_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_e1503296fc64942a518b97a34bbd10aa_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e1503296fc64942a518b97a34bbd10aa_tuple, 1, const_str_plain_textwrap ); Py_INCREF( const_str_plain_textwrap );
    PyTuple_SET_ITEM( const_tuple_e1503296fc64942a518b97a34bbd10aa_tuple, 2, const_str_plain_DummyParser ); Py_INCREF( const_str_plain_DummyParser );
    PyTuple_SET_ITEM( const_tuple_e1503296fc64942a518b97a34bbd10aa_tuple, 3, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_e1503296fc64942a518b97a34bbd10aa_tuple, 4, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_e1503296fc64942a518b97a34bbd10aa_tuple, 5, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    PyTuple_SET_ITEM( const_tuple_e1503296fc64942a518b97a34bbd10aa_tuple, 6, const_str_plain_opts ); Py_INCREF( const_str_plain_opts );
    PyTuple_SET_ITEM( const_tuple_e1503296fc64942a518b97a34bbd10aa_tuple, 7, const_str_plain_help ); Py_INCREF( const_str_plain_help );
    const_str_digest_5230517fb8174d2e6312567d5f6f4579 = UNSTREAM_STRING( &constant_bin[ 29023 ], 43, 0 );
    const_str_digest_cae2cb99fca30d43e1a00723689dbd8c = UNSTREAM_STRING( &constant_bin[ 29066 ], 17, 0 );
    const_tuple_str_plain_self_str_plain_env_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_env_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_env_tuple, 1, const_str_plain_env ); Py_INCREF( const_str_plain_env );
    const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple, 1, const_str_dot ); Py_INCREF( const_str_dot );
    PyTuple_SET_ITEM( const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple, 7, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple, 8, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple, 9, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple, 10, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_self_str_plain_plug_runner_str_plain_result_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_plug_runner_str_plain_result_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_plug_runner_str_plain_result_tuple, 1, const_str_plain_plug_runner ); Py_INCREF( const_str_plain_plug_runner );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_plug_runner_str_plain_result_tuple, 2, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_digest_7e01470d8db1f7ed190981c784354d62 = UNSTREAM_STRING( &constant_bin[ 29083 ], 62, 0 );
    const_str_plain_compat_24 = UNSTREAM_STRING( &constant_bin[ 29145 ], 9, 1 );
    const_tuple_str_digest_3a6916cad14226b83e974e232b0133fe_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_3a6916cad14226b83e974e232b0133fe_tuple, 0, const_str_digest_3a6916cad14226b83e974e232b0133fe ); Py_INCREF( const_str_digest_3a6916cad14226b83e974e232b0133fe );
    const_str_plain_defaultTest = UNSTREAM_STRING( &constant_bin[ 25087 ], 11, 1 );
    const_tuple_0b908cc21487f041de9e8381a942bb39_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0b908cc21487f041de9e8381a942bb39_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_0b908cc21487f041de9e8381a942bb39_tuple, 1, const_str_plain_nose ); Py_INCREF( const_str_plain_nose );
    PyTuple_SET_ITEM( const_tuple_0b908cc21487f041de9e8381a942bb39_tuple, 2, const_str_plain_ld ); Py_INCREF( const_str_plain_ld );
    PyTuple_SET_ITEM( const_tuple_0b908cc21487f041de9e8381a942bb39_tuple, 3, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    PyTuple_SET_ITEM( const_tuple_0b908cc21487f041de9e8381a942bb39_tuple, 4, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_digest_04906fc59dfc72f13c9d5300edc0c815 = UNSTREAM_STRING( &constant_bin[ 29154 ], 44, 0 );
    const_str_plain_parseArgs = UNSTREAM_STRING( &constant_bin[ 19919 ], 9, 1 );
    const_tuple_02935bea8df95a9a654795642144a6bd_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_02935bea8df95a9a654795642144a6bd_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_02935bea8df95a9a654795642144a6bd_tuple, 1, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    PyTuple_SET_ITEM( const_tuple_02935bea8df95a9a654795642144a6bd_tuple, 2, const_str_plain_wrapper ); Py_INCREF( const_str_plain_wrapper );
    PyTuple_SET_ITEM( const_tuple_02935bea8df95a9a654795642144a6bd_tuple, 3, const_str_plain_wrapped ); Py_INCREF( const_str_plain_wrapped );
    PyTuple_SET_ITEM( const_tuple_02935bea8df95a9a654795642144a6bd_tuple, 4, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_02935bea8df95a9a654795642144a6bd_tuple, 5, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_02935bea8df95a9a654795642144a6bd_tuple, 6, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    const_str_digest_15aa605822a6158e9ce9d873c7998f77 = UNSTREAM_STRING( &constant_bin[ 29198 ], 26, 0 );
    const_str_digest_5fb9be99434fcd24ff3c492278fa1217 = UNSTREAM_STRING( &constant_bin[ 29224 ], 11, 0 );
    const_str_digest_770d9eae4a9db649d06f4fb177f18268 = UNSTREAM_STRING( &constant_bin[ 29235 ], 17, 0 );
    const_str_digest_3bfa354ad37b57aa656656ee968db24a = UNSTREAM_STRING( &constant_bin[ 29252 ], 9, 0 );
    const_str_digest_a19e5ee8cfde43746285c9b19ba85a68 = UNSTREAM_STRING( &constant_bin[ 29261 ], 111, 0 );
    const_tuple_3b0eb8040894593655974a7c5f85b090_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 1, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 2, const_str_plain_defaultTest ); Py_INCREF( const_str_plain_defaultTest );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 3, const_str_plain_argv ); Py_INCREF( const_str_plain_argv );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 4, const_str_plain_testRunner ); Py_INCREF( const_str_plain_testRunner );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 5, const_str_plain_testLoader ); Py_INCREF( const_str_plain_testLoader );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 6, const_str_plain_env ); Py_INCREF( const_str_plain_env );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 7, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 8, const_str_plain_suite ); Py_INCREF( const_str_plain_suite );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 9, const_str_plain_exit ); Py_INCREF( const_str_plain_exit );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 10, const_str_plain_plugins ); Py_INCREF( const_str_plain_plugins );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 11, const_str_plain_addplugins ); Py_INCREF( const_str_plain_addplugins );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 12, const_str_plain_extra_args ); Py_INCREF( const_str_plain_extra_args );
    PyTuple_SET_ITEM( const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 13, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    const_tuple_e4f6b6648b6bf6c5cc7862029c80c389_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e4f6b6648b6bf6c5cc7862029c80c389_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e4f6b6648b6bf6c5cc7862029c80c389_tuple, 1, const_str_plain_argv ); Py_INCREF( const_str_plain_argv );
    PyTuple_SET_ITEM( const_tuple_e4f6b6648b6bf6c5cc7862029c80c389_tuple, 2, const_str_plain___version__ ); Py_INCREF( const_str_plain___version__ );
    PyTuple_SET_ITEM( const_tuple_e4f6b6648b6bf6c5cc7862029c80c389_tuple, 3, const_str_plain_plug_loader ); Py_INCREF( const_str_plain_plug_loader );
    const_str_plain__makeResult = UNSTREAM_STRING( &constant_bin[ 29372 ], 11, 1 );
    const_str_digest_44fe4951a8f4a5de50a4e9c9350f0d94 = UNSTREAM_STRING( &constant_bin[ 29383 ], 9, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nose$core( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_edd9c41d1d2aa5a6fdf772da87c2cce6;
static PyCodeObject *codeobj_f75fe63d594b15cb4194ec637d16d234;
static PyCodeObject *codeobj_69f6a36c75f95312e2427ea26ec8d0b9;
static PyCodeObject *codeobj_b02c2e574d457654cf54bd6df8e6bfa2;
static PyCodeObject *codeobj_02766a5cb0ae3aca17c844615d69edb8;
static PyCodeObject *codeobj_b53d32601d23e65b0d6bdd732796f1d1;
static PyCodeObject *codeobj_80a2427ef1f8f3c69de873b8892823c5;
static PyCodeObject *codeobj_fe6033ce4c339ce7d5d232a74873454a;
static PyCodeObject *codeobj_0728c2698f5a944245128859bb831f5e;
static PyCodeObject *codeobj_d8f522f3e057b80626befab3bd3fce5a;
static PyCodeObject *codeobj_d01f5d9b86a8090fc42eb2447f26ac79;
static PyCodeObject *codeobj_41725a65e0b26dbdf9aea6c786bcfbd9;
static PyCodeObject *codeobj_07f7a01380690ebcb505ad59a560371b;
static PyCodeObject *codeobj_33751983c5cd54d46b6c3b1699630d51;
static PyCodeObject *codeobj_6478923ce95e36391db714d3b33420bc;
static PyCodeObject *codeobj_c9f15a7194f679d9ce09c12fcc1f5ec3;
static PyCodeObject *codeobj_ffee3800fe99541951594852c2460d1c;
static PyCodeObject *codeobj_1ac46c0b5d7055d61f7c6869fd30f2fa;
static PyCodeObject *codeobj_4d28821ac7e5e2a9cf3b3f2a78699fe9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_5230517fb8174d2e6312567d5f6f4579 );
    codeobj_edd9c41d1d2aa5a6fdf772da87c2cce6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TestProgram, 72, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_f75fe63d594b15cb4194ec637d16d234 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TextTestRunner, 27, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_69f6a36c75f95312e2427ea26ec8d0b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 32, const_tuple_be87cabb525229fc842bb51e5766ac15_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b02c2e574d457654cf54bd6df8e6bfa2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 102, const_tuple_3b0eb8040894593655974a7c5f85b090_tuple, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_02766a5cb0ae3aca17c844615d69edb8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 219, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b53d32601d23e65b0d6bdd732796f1d1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__makeResult, 40, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_80a2427ef1f8f3c69de873b8892823c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_option, 221, const_tuple_str_plain_self_str_plain_arg_str_plain_kw_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_fe6033ce4c339ce7d5d232a74873454a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_collector, 312, const_tuple_66329060cf4862f2ad835d84ed993986_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0728c2698f5a944245128859bb831f5e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_core, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_d8f522f3e057b80626befab3bd3fce5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_createTests, 181, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d01f5d9b86a8090fc42eb2447f26ac79 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getAllConfigFiles, 123, const_tuple_str_plain_self_str_plain_env_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_41725a65e0b26dbdf9aea6c786bcfbd9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makeConfig, 130, const_tuple_a420d857a66a31c5957938d0670a269b_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_07f7a01380690ebcb505ad59a560371b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parseArgs, 142, const_tuple_e4f6b6648b6bf6c5cc7862029c80c389_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_33751983c5cd54d46b6c3b1699630d51 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run, 46, const_tuple_02935bea8df95a9a654795642144a6bd_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6478923ce95e36391db714d3b33420bc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run, 271, const_tuple_str_plain_arg_str_plain_kw_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_c9f15a7194f679d9ce09c12fcc1f5ec3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_runTests, 195, const_tuple_str_plain_self_str_plain_plug_runner_str_plain_result_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ffee3800fe99541951594852c2460d1c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_runmodule, 304, const_tuple_str_plain_name_str_plain_kw_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_1ac46c0b5d7055d61f7c6869fd30f2fa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_showPlugins, 213, const_tuple_e1503296fc64942a518b97a34bbd10aa_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4d28821ac7e5e2a9cf3b3f2a78699fe9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_usage, 248, const_tuple_0b908cc21487f041de9e8381a942bb39_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_TextTestRunner_of_nose$core( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_TestProgram_of_nose$core( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl_function_10_complex_call_helper_pos_keywords_star_dict_of___internal__( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl_function_1_complex_call_helper_star_list_star_dict_of___internal__( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl_function_9_complex_call_helper_keywords_star_dict_of___internal__( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_TextTestRunner_of_nose$core( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_TestProgram_of_nose$core( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1_run_of_nose$core(  );


static PyObject *MAKE_FUNCTION_function_2__makeResult_of_class_1_TextTestRunner_of_nose$core(  );


static PyObject *MAKE_FUNCTION_function_2_add_option_of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core(  );


static PyObject *MAKE_FUNCTION_function_2_getAllConfigFiles_of_class_2_TestProgram_of_nose$core( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_runmodule_of_nose$core( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_collector_of_nose$core(  );


static PyObject *MAKE_FUNCTION_function_3_makeConfig_of_class_2_TestProgram_of_nose$core( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_run_of_class_1_TextTestRunner_of_nose$core(  );


static PyObject *MAKE_FUNCTION_function_4_parseArgs_of_class_2_TestProgram_of_nose$core(  );


static PyObject *MAKE_FUNCTION_function_5_createTests_of_class_2_TestProgram_of_nose$core(  );


static PyObject *MAKE_FUNCTION_function_6_runTests_of_class_2_TestProgram_of_nose$core(  );


static PyObject *MAKE_FUNCTION_function_7_showPlugins_of_class_2_TestProgram_of_nose$core(  );


static PyObject *MAKE_FUNCTION_function_8_usage_of_class_2_TestProgram_of_nose$core(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_TextTestRunner_of_nose$core( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var__makeResult = NULL;
    PyObject *var_run = NULL;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_a92b3b87194be37fb2d6a62fea0e2e72;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f75fe63d594b15cb4194ec637d16d234, module_nose$core );
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
    tmp_defaults_1 = PyTuple_New( 4 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 32;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stderr );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_1_TextTestRunner_of_nose$core( tmp_defaults_1 );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;


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

            if ( var___doc__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___doc__,
                    var___doc__
                );

                assert( res == 0 );
            }

            if ( var___init__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___init__,
                    var___init__
                );

                assert( res == 0 );
            }

            if ( var__makeResult )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__makeResult,
                    var__makeResult
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

    tmp_assign_source_4 = MAKE_FUNCTION_function_2__makeResult_of_class_1_TextTestRunner_of_nose$core(  );
    assert( var__makeResult == NULL );
    var__makeResult = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_3_run_of_class_1_TextTestRunner_of_nose$core(  );
    assert( var_run == NULL );
    var_run = tmp_assign_source_5;

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

    if ( var___init__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__
        );

        assert( res == 0 );
    }

    if ( var__makeResult )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__makeResult,
            var__makeResult
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

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_TextTestRunner_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var__makeResult );
    Py_DECREF( var__makeResult );
    var__makeResult = NULL;

    CHECK_OBJECT( (PyObject *)var_run );
    Py_DECREF( var_run );
    var_run = NULL;

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

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_TextTestRunner_of_nose$core );
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


static PyObject *impl_function_1___init___of_class_1_TextTestRunner_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    PyObject *par_descriptions = python_pars[ 2 ];
    PyObject *par_verbosity = python_pars[ 3 ];
    PyObject *par_config = python_pars[ 4 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_69f6a36c75f95312e2427ea26ec8d0b9, module_nose$core );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_Config );

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

        exception_lineno = 35;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 35;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_config;
        assert( old != NULL );
        par_config = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_assattr_name_1 = par_config;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_config, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 37;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_TextTestRunner );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    tmp_args_element_name_2 = par_stream;

    tmp_args_element_name_3 = par_descriptions;

    tmp_args_element_name_4 = par_verbosity;

    frame_function->f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
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

            if ( par_stream )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_stream,
                    par_stream
                );

                assert( res == 0 );
            }

            if ( par_descriptions )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_descriptions,
                    par_descriptions
                );

                assert( res == 0 );
            }

            if ( par_verbosity )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_verbosity,
                    par_verbosity
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_TextTestRunner_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_descriptions );
    Py_DECREF( par_descriptions );
    par_descriptions = NULL;

    CHECK_OBJECT( (PyObject *)par_verbosity );
    Py_DECREF( par_verbosity );
    par_verbosity = NULL;

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

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

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_descriptions );
    Py_DECREF( par_descriptions );
    par_descriptions = NULL;

    CHECK_OBJECT( (PyObject *)par_verbosity );
    Py_DECREF( par_verbosity );
    par_verbosity = NULL;

    Py_XDECREF( par_config );
    par_config = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_TextTestRunner_of_nose$core );
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


static PyObject *impl_function_2__makeResult_of_class_1_TextTestRunner_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b53d32601d23e65b0d6bdd732796f1d1, module_nose$core );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_TextTestResult );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextTestResult );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "TextTestResult" );
        exception_tb = NULL;

        exception_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stream );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_descriptions );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_verbosity );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_config );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 44;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
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
    NUITKA_CANNOT_GET_HERE( function_2__makeResult_of_class_1_TextTestRunner_of_nose$core );
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
    NUITKA_CANNOT_GET_HERE( function_2__makeResult_of_class_1_TextTestRunner_of_nose$core );
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


static PyObject *impl_function_3_run_of_class_1_TextTestRunner_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_test = python_pars[ 1 ];
    PyObject *var_wrapper = NULL;
    PyObject *var_wrapped = NULL;
    PyObject *var_result = NULL;
    PyObject *var_start = NULL;
    PyObject *var_stop = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_33751983c5cd54d46b6c3b1699630d51, module_nose$core );
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


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prepareTest );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_test;

    frame_function->f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    assert( var_wrapper == NULL );
    var_wrapper = tmp_assign_source_1;

    tmp_compare_left_1 = var_wrapper;

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
    tmp_assign_source_2 = var_wrapper;

    {
        PyObject *old = par_test;
        assert( old != NULL );
        par_test = tmp_assign_source_2;
        Py_INCREF( par_test );
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_source_name_6 = par_self;

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_config );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_setOutputStream );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_stream );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    assert( var_wrapped == NULL );
    var_wrapped = tmp_assign_source_3;

    tmp_compare_left_2 = var_wrapped;

    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_1 = var_wrapped;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_stream, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_source_name_8 = par_self;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__makeResult );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 59;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_4;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_time );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 60;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    assert( var_start == NULL );
    var_start = tmp_assign_source_5;

    // Tried code:
    tmp_called_name_5 = par_test;

    tmp_args_element_name_3 = var_result;

    frame_function->f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_KeyboardInterrupt;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_no_3:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_run_of_class_1_TextTestRunner_of_nose$core );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_time );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 65;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    assert( var_stop == NULL );
    var_stop = tmp_assign_source_6;

    tmp_source_name_11 = var_result;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_printErrors );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 66;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_12 = var_result;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_printSummary );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_start;

    tmp_args_element_name_5 = var_stop;

    frame_function->f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_15 = par_self;

    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_config );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_finalize );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_result;

    frame_function->f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
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

            if ( par_test )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_test,
                    par_test
                );

                assert( res == 0 );
            }

            if ( var_wrapper )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wrapper,
                    var_wrapper
                );

                assert( res == 0 );
            }

            if ( var_wrapped )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wrapped,
                    var_wrapped
                );

                assert( res == 0 );
            }

            if ( var_result )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_result,
                    var_result
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

            if ( var_stop )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_stop,
                    var_stop
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

    tmp_return_value = var_result;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_run_of_class_1_TextTestRunner_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_test );
    Py_DECREF( par_test );
    par_test = NULL;

    CHECK_OBJECT( (PyObject *)var_wrapper );
    Py_DECREF( var_wrapper );
    var_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)var_wrapped );
    Py_DECREF( var_wrapped );
    var_wrapped = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    CHECK_OBJECT( (PyObject *)var_start );
    Py_DECREF( var_start );
    var_start = NULL;

    CHECK_OBJECT( (PyObject *)var_stop );
    Py_DECREF( var_stop );
    var_stop = NULL;

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

    Py_XDECREF( par_test );
    par_test = NULL;

    Py_XDECREF( var_wrapper );
    var_wrapper = NULL;

    Py_XDECREF( var_wrapped );
    var_wrapped = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_run_of_class_1_TextTestRunner_of_nose$core );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_2_TestProgram_of_nose$core( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var_verbosity = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_getAllConfigFiles = NULL;
    PyObject *var_makeConfig = NULL;
    PyObject *var_parseArgs = NULL;
    PyObject *var_createTests = NULL;
    PyObject *var_runTests = NULL;
    PyObject *var_showPlugins = NULL;
    PyObject *var_usage = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_b40ef506a82c97f3590e964b1aa48791;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_int_pos_1;
    assert( var_verbosity == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_verbosity = tmp_assign_source_3;

    tmp_defaults_1 = const_tuple_none_str_dot_none_none_none_none_none_none_true_none_none_tuple;
    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_2_TestProgram_of_nose$core( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    tmp_defaults_2 = const_tuple_none_tuple;
    tmp_assign_source_5 = MAKE_FUNCTION_function_2_getAllConfigFiles_of_class_2_TestProgram_of_nose$core( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    assert( var_getAllConfigFiles == NULL );
    var_getAllConfigFiles = tmp_assign_source_5;

    tmp_defaults_3 = const_tuple_none_tuple;
    tmp_assign_source_6 = MAKE_FUNCTION_function_3_makeConfig_of_class_2_TestProgram_of_nose$core( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    assert( var_makeConfig == NULL );
    var_makeConfig = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_4_parseArgs_of_class_2_TestProgram_of_nose$core(  );
    assert( var_parseArgs == NULL );
    var_parseArgs = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_5_createTests_of_class_2_TestProgram_of_nose$core(  );
    assert( var_createTests == NULL );
    var_createTests = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_6_runTests_of_class_2_TestProgram_of_nose$core(  );
    assert( var_runTests == NULL );
    var_runTests = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_function_7_showPlugins_of_class_2_TestProgram_of_nose$core(  );
    assert( var_showPlugins == NULL );
    var_showPlugins = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_function_8_usage_of_class_2_TestProgram_of_nose$core(  );
    assert( var_usage == NULL );
    var_usage = tmp_assign_source_11;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_edd9c41d1d2aa5a6fdf772da87c2cce6, module_nose$core );
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = var_usage;

    frame_function->f_lineno = 265;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_usage;
        assert( old != NULL );
        var_usage = tmp_assign_source_12;
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

            if ( var___doc__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___doc__,
                    var___doc__
                );

                assert( res == 0 );
            }

            if ( var_verbosity )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_verbosity,
                    var_verbosity
                );

                assert( res == 0 );
            }

            if ( var___init__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___init__,
                    var___init__
                );

                assert( res == 0 );
            }

            if ( var_getAllConfigFiles )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_getAllConfigFiles,
                    var_getAllConfigFiles
                );

                assert( res == 0 );
            }

            if ( var_makeConfig )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_makeConfig,
                    var_makeConfig
                );

                assert( res == 0 );
            }

            if ( var_parseArgs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parseArgs,
                    var_parseArgs
                );

                assert( res == 0 );
            }

            if ( var_createTests )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_createTests,
                    var_createTests
                );

                assert( res == 0 );
            }

            if ( var_runTests )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_runTests,
                    var_runTests
                );

                assert( res == 0 );
            }

            if ( var_showPlugins )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_showPlugins,
                    var_showPlugins
                );

                assert( res == 0 );
            }

            if ( var_usage )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_usage,
                    var_usage
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

    if ( var_verbosity )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_verbosity,
            var_verbosity
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

    if ( var_getAllConfigFiles )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getAllConfigFiles,
            var_getAllConfigFiles
        );

        assert( res == 0 );
    }

    if ( var_makeConfig )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_makeConfig,
            var_makeConfig
        );

        assert( res == 0 );
    }

    if ( var_parseArgs )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_parseArgs,
            var_parseArgs
        );

        assert( res == 0 );
    }

    if ( var_createTests )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_createTests,
            var_createTests
        );

        assert( res == 0 );
    }

    if ( var_runTests )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_runTests,
            var_runTests
        );

        assert( res == 0 );
    }

    if ( var_showPlugins )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_showPlugins,
            var_showPlugins
        );

        assert( res == 0 );
    }

    if ( var_usage )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_usage,
            var_usage
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_2_TestProgram_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var_verbosity );
    Py_DECREF( var_verbosity );
    var_verbosity = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_getAllConfigFiles );
    Py_DECREF( var_getAllConfigFiles );
    var_getAllConfigFiles = NULL;

    CHECK_OBJECT( (PyObject *)var_makeConfig );
    Py_DECREF( var_makeConfig );
    var_makeConfig = NULL;

    CHECK_OBJECT( (PyObject *)var_parseArgs );
    Py_DECREF( var_parseArgs );
    var_parseArgs = NULL;

    CHECK_OBJECT( (PyObject *)var_createTests );
    Py_DECREF( var_createTests );
    var_createTests = NULL;

    CHECK_OBJECT( (PyObject *)var_runTests );
    Py_DECREF( var_runTests );
    var_runTests = NULL;

    CHECK_OBJECT( (PyObject *)var_showPlugins );
    Py_DECREF( var_showPlugins );
    var_showPlugins = NULL;

    CHECK_OBJECT( (PyObject *)var_usage );
    Py_DECREF( var_usage );
    var_usage = NULL;

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

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var_verbosity );
    Py_DECREF( var_verbosity );
    var_verbosity = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_getAllConfigFiles );
    Py_DECREF( var_getAllConfigFiles );
    var_getAllConfigFiles = NULL;

    CHECK_OBJECT( (PyObject *)var_makeConfig );
    Py_DECREF( var_makeConfig );
    var_makeConfig = NULL;

    CHECK_OBJECT( (PyObject *)var_parseArgs );
    Py_DECREF( var_parseArgs );
    var_parseArgs = NULL;

    CHECK_OBJECT( (PyObject *)var_createTests );
    Py_DECREF( var_createTests );
    var_createTests = NULL;

    CHECK_OBJECT( (PyObject *)var_runTests );
    Py_DECREF( var_runTests );
    var_runTests = NULL;

    CHECK_OBJECT( (PyObject *)var_showPlugins );
    Py_DECREF( var_showPlugins );
    var_showPlugins = NULL;

    CHECK_OBJECT( (PyObject *)var_usage );
    Py_DECREF( var_usage );
    var_usage = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_2_TestProgram_of_nose$core );
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


static PyObject *impl_function_1___init___of_class_2_TestProgram_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_module = python_pars[ 1 ];
    PyObject *par_defaultTest = python_pars[ 2 ];
    PyObject *par_argv = python_pars[ 3 ];
    PyObject *par_testRunner = python_pars[ 4 ];
    PyObject *par_testLoader = python_pars[ 5 ];
    PyObject *par_env = python_pars[ 6 ];
    PyObject *par_config = python_pars[ 7 ];
    PyObject *par_suite = python_pars[ 8 ];
    PyObject *par_exit = python_pars[ 9 ];
    PyObject *par_plugins = python_pars[ 10 ];
    PyObject *par_addplugins = python_pars[ 11 ];
    PyObject *var_extra_args = NULL;
    PyObject *var_version = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b02c2e574d457654cf54bd6df8e6bfa2, module_nose$core );
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
    tmp_compare_left_1 = par_env;

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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_environ );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_env;
        assert( old != NULL );
        par_env = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = par_config;

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
    tmp_source_name_2 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_makeConfig );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_env;

    tmp_args_element_name_2 = par_plugins;

    frame_function->f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_config;
        assert( old != NULL );
        par_config = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_cond_value_1 = par_addplugins;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_4 = par_config;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_plugins );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_addPlugins );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_addplugins;

    tmp_dict_key_1 = const_str_plain_extraplugins;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 110;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_assattr_name_1 = par_config;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_config, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_suite;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_suite, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_exit;

    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_exit, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = PyDict_New();
    assert( var_extra_args == NULL );
    var_extra_args = tmp_assign_source_3;

    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 2;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_version_info );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    assert( var_version == NULL );
    var_version = tmp_assign_source_4;

    tmp_compexpr_left_1 = var_version;

    tmp_compexpr_right_1 = const_tuple_int_pos_2_int_pos_7_tuple;
    tmp_and_left_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 116;
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
    tmp_compexpr_left_2 = var_version;

    tmp_compexpr_right_2 = const_tuple_int_pos_3_int_0_tuple;
    tmp_and_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
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
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 116;
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
    tmp_dictset_value = par_exit;

    tmp_dictset_dict = var_extra_args;

    tmp_dictset_key = const_str_plain_exit;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_4:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_TestProgram );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_self;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 5 );
    tmp_dict_value_2 = par_module;

    tmp_dict_key_2 = const_str_plain_module;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_defaultTest;

    tmp_dict_key_3 = const_str_plain_defaultTest;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_argv;

    tmp_dict_key_4 = const_str_plain_argv;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_testRunner;

    tmp_dict_key_5 = const_str_plain_testRunner;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = par_testLoader;

    tmp_dict_key_6 = const_str_plain_testLoader;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dircall_arg4_1 = var_extra_args;

    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_unused = impl_function_10_complex_call_helper_pos_keywords_star_dict_of___internal__( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
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

            if ( par_module )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module,
                    par_module
                );

                assert( res == 0 );
            }

            if ( par_defaultTest )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defaultTest,
                    par_defaultTest
                );

                assert( res == 0 );
            }

            if ( par_argv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_argv,
                    par_argv
                );

                assert( res == 0 );
            }

            if ( par_testRunner )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_testRunner,
                    par_testRunner
                );

                assert( res == 0 );
            }

            if ( par_testLoader )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_testLoader,
                    par_testLoader
                );

                assert( res == 0 );
            }

            if ( par_env )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_env,
                    par_env
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

            if ( par_suite )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_suite,
                    par_suite
                );

                assert( res == 0 );
            }

            if ( par_exit )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_exit,
                    par_exit
                );

                assert( res == 0 );
            }

            if ( par_plugins )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_plugins,
                    par_plugins
                );

                assert( res == 0 );
            }

            if ( par_addplugins )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_addplugins,
                    par_addplugins
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

            if ( var_version )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_version,
                    var_version
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_2_TestProgram_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_defaultTest );
    Py_DECREF( par_defaultTest );
    par_defaultTest = NULL;

    CHECK_OBJECT( (PyObject *)par_argv );
    Py_DECREF( par_argv );
    par_argv = NULL;

    CHECK_OBJECT( (PyObject *)par_testRunner );
    Py_DECREF( par_testRunner );
    par_testRunner = NULL;

    CHECK_OBJECT( (PyObject *)par_testLoader );
    Py_DECREF( par_testLoader );
    par_testLoader = NULL;

    CHECK_OBJECT( (PyObject *)par_env );
    Py_DECREF( par_env );
    par_env = NULL;

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_suite );
    Py_DECREF( par_suite );
    par_suite = NULL;

    CHECK_OBJECT( (PyObject *)par_exit );
    Py_DECREF( par_exit );
    par_exit = NULL;

    CHECK_OBJECT( (PyObject *)par_plugins );
    Py_DECREF( par_plugins );
    par_plugins = NULL;

    CHECK_OBJECT( (PyObject *)par_addplugins );
    Py_DECREF( par_addplugins );
    par_addplugins = NULL;

    CHECK_OBJECT( (PyObject *)var_extra_args );
    Py_DECREF( var_extra_args );
    var_extra_args = NULL;

    CHECK_OBJECT( (PyObject *)var_version );
    Py_DECREF( var_version );
    var_version = NULL;

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

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_defaultTest );
    Py_DECREF( par_defaultTest );
    par_defaultTest = NULL;

    CHECK_OBJECT( (PyObject *)par_argv );
    Py_DECREF( par_argv );
    par_argv = NULL;

    CHECK_OBJECT( (PyObject *)par_testRunner );
    Py_DECREF( par_testRunner );
    par_testRunner = NULL;

    CHECK_OBJECT( (PyObject *)par_testLoader );
    Py_DECREF( par_testLoader );
    par_testLoader = NULL;

    Py_XDECREF( par_env );
    par_env = NULL;

    Py_XDECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_suite );
    Py_DECREF( par_suite );
    par_suite = NULL;

    CHECK_OBJECT( (PyObject *)par_exit );
    Py_DECREF( par_exit );
    par_exit = NULL;

    CHECK_OBJECT( (PyObject *)par_plugins );
    Py_DECREF( par_plugins );
    par_plugins = NULL;

    CHECK_OBJECT( (PyObject *)par_addplugins );
    Py_DECREF( par_addplugins );
    par_addplugins = NULL;

    Py_XDECREF( var_extra_args );
    var_extra_args = NULL;

    Py_XDECREF( var_version );
    var_version = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_2_TestProgram_of_nose$core );
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


static PyObject *impl_function_2_getAllConfigFiles_of_class_2_TestProgram_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_env = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d01f5d9b86a8090fc42eb2447f26ac79, module_nose$core );
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
    tmp_or_left_value_1 = par_env;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
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
    tmp_or_right_value_1 = PyDict_New();
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    {
        PyObject *old = par_env;
        assert( old != NULL );
        par_env = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_1 = par_env;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 125;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_NOSE_IGNORE_CONFIG_FILES_false_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 125;
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
    tmp_return_value = PyList_New( 0 );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_all_config_files );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_all_config_files );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "all_config_files" );
        exception_tb = NULL;

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 128;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

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

            if ( par_env )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_env,
                    par_env
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
    NUITKA_CANNOT_GET_HERE( function_2_getAllConfigFiles_of_class_2_TestProgram_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_env );
    Py_DECREF( par_env );
    par_env = NULL;

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

    CHECK_OBJECT( (PyObject *)par_env );
    Py_DECREF( par_env );
    par_env = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_getAllConfigFiles_of_class_2_TestProgram_of_nose$core );
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


static PyObject *impl_function_3_makeConfig_of_class_2_TestProgram_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_env = python_pars[ 1 ];
    PyObject *par_plugins = python_pars[ 2 ];
    PyObject *var_cfg_files = NULL;
    PyObject *var_manager = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_41725a65e0b26dbdf9aea6c786bcfbd9, module_nose$core );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getAllConfigFiles );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_env;

    frame_function->f_lineno = 134;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    assert( var_cfg_files == NULL );
    var_cfg_files = tmp_assign_source_1;

    tmp_cond_value_1 = par_plugins;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_PluginManager );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PluginManager );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PluginManager" );
        exception_tb = NULL;

        exception_lineno = 136;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_plugins;

    tmp_dict_key_1 = const_str_plain_plugins;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 136;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        goto frame_exception_exit_1;
    }
    assert( var_manager == NULL );
    var_manager = tmp_assign_source_2;

    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_DefaultPluginManager );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DefaultPluginManager );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DefaultPluginManager" );
        exception_tb = NULL;

        exception_lineno = 138;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 138;
    tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        goto frame_exception_exit_1;
    }
    assert( var_manager == NULL );
    var_manager = tmp_assign_source_3;

    branch_end_1:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_Config );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Config );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Config" );
        exception_tb = NULL;

        exception_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 3 );
    tmp_dict_value_2 = par_env;

    tmp_dict_key_2 = const_str_plain_env;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = var_cfg_files;

    tmp_dict_key_3 = const_str_plain_files;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = var_manager;

    tmp_dict_key_4 = const_str_plain_plugins;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 140;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
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

            if ( par_env )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_env,
                    par_env
                );

                assert( res == 0 );
            }

            if ( par_plugins )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_plugins,
                    par_plugins
                );

                assert( res == 0 );
            }

            if ( var_cfg_files )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cfg_files,
                    var_cfg_files
                );

                assert( res == 0 );
            }

            if ( var_manager )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_manager,
                    var_manager
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
    NUITKA_CANNOT_GET_HERE( function_3_makeConfig_of_class_2_TestProgram_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_env );
    Py_DECREF( par_env );
    par_env = NULL;

    CHECK_OBJECT( (PyObject *)par_plugins );
    Py_DECREF( par_plugins );
    par_plugins = NULL;

    CHECK_OBJECT( (PyObject *)var_cfg_files );
    Py_DECREF( var_cfg_files );
    var_cfg_files = NULL;

    CHECK_OBJECT( (PyObject *)var_manager );
    Py_DECREF( var_manager );
    var_manager = NULL;

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

    CHECK_OBJECT( (PyObject *)par_env );
    Py_DECREF( par_env );
    par_env = NULL;

    CHECK_OBJECT( (PyObject *)par_plugins );
    Py_DECREF( par_plugins );
    par_plugins = NULL;

    Py_XDECREF( var_cfg_files );
    var_cfg_files = NULL;

    Py_XDECREF( var_manager );
    var_manager = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_makeConfig_of_class_2_TestProgram_of_nose$core );
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


static PyObject *impl_function_4_parseArgs_of_class_2_TestProgram_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_argv = python_pars[ 1 ];
    PyObject *var___version__ = NULL;
    PyObject *var_plug_loader = NULL;
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
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_print_value;
    bool tmp_result;
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
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_07f7a01380690ebcb505ad59a560371b, module_nose$core );
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


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_configure );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_argv;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_3 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_usage );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 145;
    tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_doc;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 145;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_debug );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_62cd5bd477daf607627ab75c3b95b93b;
    tmp_source_name_5 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_config );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 146;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = par_self;

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_config );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_options );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_version );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 150;
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
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$core)->md_dict;
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

    if ( par_argv )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_argv,
            par_argv
        );

        assert( res == 0 );
    }

    if ( var___version__ )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain___version__,
            var___version__
        );

        assert( res == 0 );
    }

    if ( var_plug_loader )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_plug_loader,
            var_plug_loader
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 151;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_nose, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain___version___tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain___version__ );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
    assert( var___version__ == NULL );
    var___version__ = tmp_assign_source_1;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___stdout__ );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_stdout, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 152;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_left_name_1 = const_str_digest_359160922274612681d81229aefa8a72;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_path );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_basename );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_argv );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var___version__;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
    tmp_print_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 154;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_exit );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 154;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_16 = par_self;

    tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_config );
    if ( tmp_source_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_options );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_showPlugins );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 156;
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
    tmp_source_name_17 = par_self;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_showPlugins );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 157;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 158;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_exit );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 158;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_source_name_19 = par_self;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_testLoader );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_defaultTestLoader );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defaultTestLoader );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "defaultTestLoader" );
        exception_tb = NULL;

        exception_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_source_name_20 = par_self;

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_config );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 161;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_config;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 161;
    tmp_assattr_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_8, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_testLoader, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 161;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    goto branch_end_3;
    branch_no_3:;
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_isclass );

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

        exception_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_source_name_21 = par_self;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_testLoader );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 162;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 162;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_22 = par_self;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_testLoader );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto frame_exception_exit_1;
    }
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_source_name_23 = par_self;

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_config );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 163;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_config;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    frame_function->f_lineno = 163;
    tmp_assattr_name_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_10, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_testLoader, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 163;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    branch_no_4:;
    branch_end_3:;
    tmp_source_name_26 = par_self;

    tmp_source_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_config );
    if ( tmp_source_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_source_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_25 );
    if ( tmp_source_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_prepareTestLoader );
    Py_DECREF( tmp_source_name_24 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_source_name_27 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_testLoader );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 164;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 164;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto frame_exception_exit_1;
    }
    assert( var_plug_loader == NULL );
    var_plug_loader = tmp_assign_source_2;

    tmp_compare_left_2 = var_plug_loader;

    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assattr_name_4 = var_plug_loader;

    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_testLoader, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_debug );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = const_str_digest_cae2cb99fca30d43e1a00723689dbd8c;
    tmp_source_name_29 = par_self;

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_testLoader );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 167;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_31 = par_self;

    tmp_source_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_config );
    if ( tmp_source_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_testNames );
    Py_DECREF( tmp_source_name_30 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 171;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_33 = par_self;

    tmp_source_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_config );
    if ( tmp_source_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_testNames );
    Py_DECREF( tmp_source_name_32 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_testNames, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    goto branch_end_6;
    branch_no_6:;
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_tolist );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tolist );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "tolist" );
        exception_tb = NULL;

        exception_lineno = 174;
        goto frame_exception_exit_1;
    }

    tmp_source_name_34 = par_self;

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_defaultTest );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assattr_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_6 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_testNames, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 174;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    branch_end_6:;
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_log );

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

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_debug );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = const_str_digest_eb863c9d405693e91f6e9b93971bf5c2;
    tmp_source_name_36 = par_self;

    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_defaultTest );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 175;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_37 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_debug );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = const_str_digest_770d9eae4a9db649d06f4fb177f18268;
    tmp_source_name_38 = par_self;

    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_testNames );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_40 = par_self;

    tmp_source_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_config );
    if ( tmp_source_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_workingDir );
    Py_DECREF( tmp_source_name_39 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_41 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_41 == NULL ))
    {
        tmp_source_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_41 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_chdir );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto frame_exception_exit_1;
    }
    tmp_source_name_43 = par_self;

    tmp_source_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_config );
    if ( tmp_source_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_workingDir );
    Py_DECREF( tmp_source_name_42 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 178;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    tmp_source_name_44 = par_self;

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_createTests );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 179;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_17 );
    Py_DECREF( tmp_called_name_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
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

            if ( par_argv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_argv,
                    par_argv
                );

                assert( res == 0 );
            }

            if ( var___version__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___version__,
                    var___version__
                );

                assert( res == 0 );
            }

            if ( var_plug_loader )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_plug_loader,
                    var_plug_loader
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
    NUITKA_CANNOT_GET_HERE( function_4_parseArgs_of_class_2_TestProgram_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_argv );
    Py_DECREF( par_argv );
    par_argv = NULL;

    Py_XDECREF( var___version__ );
    var___version__ = NULL;

    CHECK_OBJECT( (PyObject *)var_plug_loader );
    Py_DECREF( var_plug_loader );
    var_plug_loader = NULL;

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

    CHECK_OBJECT( (PyObject *)par_argv );
    Py_DECREF( par_argv );
    par_argv = NULL;

    Py_XDECREF( var___version__ );
    var___version__ = NULL;

    Py_XDECREF( var_plug_loader );
    var_plug_loader = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_parseArgs_of_class_2_TestProgram_of_nose$core );
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


static PyObject *impl_function_5_createTests_of_class_2_TestProgram_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d8f522f3e057b80626befab3bd3fce5a, module_nose$core );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_log );

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

        exception_lineno = 187;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_debug );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_15aa605822a6158e9ce9d873c7998f77;
    tmp_source_name_2 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_suite );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 187;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_self;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_suite );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_5 = par_self;

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_testLoader );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_suiteClass );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_suite );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 191;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_test, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_8 = par_self;

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_testLoader );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_loadTestsFromNames );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_self;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_testNames );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_test, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    branch_end_1:;

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
    NUITKA_CANNOT_GET_HERE( function_5_createTests_of_class_2_TestProgram_of_nose$core );
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
    NUITKA_CANNOT_GET_HERE( function_5_createTests_of_class_2_TestProgram_of_nose$core );
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


static PyObject *impl_function_6_runTests_of_class_2_TestProgram_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_plug_runner = NULL;
    PyObject *var_result = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_operand_name_1;
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
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c9f15a7194f679d9ce09c12fcc1f5ec3, module_nose$core );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_log );

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

        exception_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_debug );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 199;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_3a6916cad14226b83e974e232b0133fe_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_testRunner );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_TextTestRunner );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextTestRunner );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "TextTestRunner" );
        exception_tb = NULL;

        exception_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_source_name_4 = par_self;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_config );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_stream );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_stream;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_source_name_6 = par_self;

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_config );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_verbosity );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_verbosity;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_source_name_7 = par_self;

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_config );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_config;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    frame_function->f_lineno = 203;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_testRunner, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_1:;
    tmp_source_name_10 = par_self;

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_config );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_prepareTestRunner );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_testRunner );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 204;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    assert( var_plug_runner == NULL );
    var_plug_runner = tmp_assign_source_1;

    tmp_compare_left_2 = var_plug_runner;

    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_2 = var_plug_runner;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_testRunner, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_source_name_13 = par_self;

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_testRunner );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_run );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_test );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 207;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_2;

    tmp_source_name_15 = var_result;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_wasSuccessful );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 208;
    tmp_assattr_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_success, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_source_name_16 = par_self;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_exit );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_exit );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = par_self;

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_success );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 210;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_source_name_19 = par_self;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_success );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
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

            if ( var_plug_runner )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_plug_runner,
                    var_plug_runner
                );

                assert( res == 0 );
            }

            if ( var_result )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_result,
                    var_result
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
    NUITKA_CANNOT_GET_HERE( function_6_runTests_of_class_2_TestProgram_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_plug_runner );
    Py_DECREF( var_plug_runner );
    var_plug_runner = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

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

    Py_XDECREF( var_plug_runner );
    var_plug_runner = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6_runTests_of_class_2_TestProgram_of_nose$core );
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


static PyObject *impl_function_7_showPlugins_of_class_2_TestProgram_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_textwrap = NULL;
    PyObject *var_DummyParser = NULL;
    PyObject *var_v = NULL;
    PyObject *var_p = NULL;
    PyObject *var_parser = NULL;
    PyObject *var_opts = NULL;
    PyObject *var_help = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
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
    PyObject *tmp_bases_name_1;
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
    int tmp_cmp_GtE_1;
    int tmp_cmp_GtE_2;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_print_value;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1ac46c0b5d7055d61f7c6869fd30f2fa, module_nose$core );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$core)->md_dict;
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

    if ( var_textwrap )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_textwrap,
            var_textwrap
        );

        assert( res == 0 );
    }

    if ( var_DummyParser )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_DummyParser,
            var_DummyParser
        );

        assert( res == 0 );
    }

    if ( var_v )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_v,
            var_v
        );

        assert( res == 0 );
    }

    if ( var_p )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_p,
            var_p
        );

        assert( res == 0 );
    }

    if ( var_parser )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_parser,
            var_parser
        );

        assert( res == 0 );
    }

    if ( var_opts )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_opts,
            var_opts
        );

        assert( res == 0 );
    }

    if ( var_help )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_help,
            var_help
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 216;
    tmp_assign_source_1 = IMPORT_MODULE( const_str_plain_textwrap, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    assert( var_textwrap == NULL );
    var_textwrap = tmp_assign_source_1;

    tmp_assign_source_2 = impl_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core( NULL );
    assert( tmp_assign_source_2 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_2;

    // Tried code:
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
    tmp_assign_source_3 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = const_tuple_empty;
    tmp_assign_source_3 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_3;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_DummyParser;
    tmp_args_element_name_2 = const_tuple_empty;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_function->f_lineno = 218;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_4;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
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
    tmp_assign_source_5 = tmp_class_creation_1__class;

    assert( var_DummyParser == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_DummyParser = tmp_assign_source_5;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    tmp_source_name_2 = par_self;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_config );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_verbosity );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    assert( var_v == NULL );
    var_v = tmp_assign_source_6;

    tmp_source_name_5 = par_self;

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_config );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sort );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 225;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = par_self;

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_config );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_plugins );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 226;
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
        PyObject *old = var_p;
        var_p = tmp_assign_source_9;
        Py_INCREF( var_p );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = const_str_digest_3bfa354ad37b57aa656656ee968db24a;
    tmp_source_name_8 = var_p;

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_name );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        goto try_except_handler_3;
    }
    tmp_print_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        goto try_except_handler_3;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 227;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        goto try_except_handler_3;
    }
    tmp_compare_left_2 = var_v;

    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto try_except_handler_3;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_2 = const_str_digest_5fb9be99434fcd24ff3c492278fa1217;
    tmp_source_name_9 = var_p;

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_score );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        goto try_except_handler_3;
    }
    tmp_print_value = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        goto try_except_handler_3;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 229;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        goto try_except_handler_3;
    }
    tmp_source_name_10 = const_str_newline;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_join );
    assert( tmp_called_name_3 != NULL );
    tmp_source_name_11 = var_textwrap;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_wrap );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 230;
        goto try_except_handler_3;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_13 = var_p;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_help );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 230;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 230;
    tmp_source_name_12 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 230;
        goto try_except_handler_3;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_strip );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 230;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 230;
    tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 230;
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_ebbb7b18eb591ca54037ac0420c58db2 );
    frame_function->f_lineno = 232;
    tmp_args_element_name_4 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 232;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 232;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_print_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto try_except_handler_3;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 230;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        goto try_except_handler_3;
    }
    tmp_compare_left_3 = var_v;

    tmp_compare_right_3 = const_int_pos_3;
    tmp_cmp_GtE_2 = RICH_COMPARE_BOOL_GE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_GtE_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto try_except_handler_3;
    }
    if ( tmp_cmp_GtE_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_7 = var_DummyParser;

    frame_function->f_lineno = 234;
    tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_parser;
        var_parser = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_source_name_14 = var_p;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_addOptions );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto try_except_handler_3;
    }
    tmp_args_element_name_5 = var_parser;

    frame_function->f_lineno = 235;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_15 = var_parser;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_options );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        goto try_except_handler_3;
    }
    tmp_cond_value_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        goto try_except_handler_3;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 236;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        goto try_except_handler_3;
    }
    tmp_print_value = const_str_digest_981f6232ff21b43f7dbe100cba7eb3a6;
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        goto try_except_handler_3;
    }
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        goto try_except_handler_3;
    }
    tmp_source_name_16 = var_parser;

    tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_options );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto try_except_handler_3;
    }
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_11;
        Py_XDECREF( old );
    }

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
            frame_function->f_lineno = 239;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_3 = tmp_for_loop_2__iter_value;

    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_14 == NULL )
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


        exception_lineno = 239;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_15 == NULL )
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


        exception_lineno = 239;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_15;
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    tmp_assign_source_16 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_opts;
        var_opts = tmp_assign_source_16;
        Py_INCREF( var_opts );
        Py_XDECREF( old );
    }

    tmp_assign_source_17 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_help;
        var_help = tmp_assign_source_17;
        Py_INCREF( var_help );
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

    tmp_left_name_3 = const_str_digest_f3e8e1dd5b10d184f85d91c02593e654;
    tmp_source_name_17 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_join );
    assert( tmp_called_name_9 != NULL );
    tmp_args_element_name_6 = var_opts;

    frame_function->f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto try_except_handler_4;
    }
    tmp_print_value = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto try_except_handler_4;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 240;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto try_except_handler_4;
    }
    tmp_cond_value_2 = var_help;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_18 = const_str_newline;
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_join );
    assert( tmp_called_name_10 != NULL );
    tmp_source_name_19 = var_textwrap;

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_wrap );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 243;
        goto try_except_handler_4;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_source_name_20 = var_help;

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_strip );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 243;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 243;
    tmp_tuple_element_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_12 );
    Py_DECREF( tmp_called_name_12 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 243;
        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_fc65952fb006a55a05401979eaa9fa85 );
    frame_function->f_lineno = 245;
    tmp_args_element_name_7 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 245;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 245;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_print_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        goto try_except_handler_4;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 242;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        goto try_except_handler_4;
    }
    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_3:;
    branch_no_2:;
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        goto try_except_handler_3;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

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

            if ( var_textwrap )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_textwrap,
                    var_textwrap
                );

                assert( res == 0 );
            }

            if ( var_DummyParser )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_DummyParser,
                    var_DummyParser
                );

                assert( res == 0 );
            }

            if ( var_v )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_v,
                    var_v
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

            if ( var_parser )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parser,
                    var_parser
                );

                assert( res == 0 );
            }

            if ( var_opts )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_opts,
                    var_opts
                );

                assert( res == 0 );
            }

            if ( var_help )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_help,
                    var_help
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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_7_showPlugins_of_class_2_TestProgram_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_textwrap );
    Py_DECREF( var_textwrap );
    var_textwrap = NULL;

    CHECK_OBJECT( (PyObject *)var_DummyParser );
    Py_DECREF( var_DummyParser );
    var_DummyParser = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_parser );
    var_parser = NULL;

    Py_XDECREF( var_opts );
    var_opts = NULL;

    Py_XDECREF( var_help );
    var_help = NULL;

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

    Py_XDECREF( var_textwrap );
    var_textwrap = NULL;

    Py_XDECREF( var_DummyParser );
    var_DummyParser = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_parser );
    var_parser = NULL;

    Py_XDECREF( var_opts );
    var_opts = NULL;

    Py_XDECREF( var_help );
    var_help = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_7_showPlugins_of_class_2_TestProgram_of_nose$core );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_add_option = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = MAKE_FUNCTION_function_1___init___of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_2_add_option_of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core(  );
    assert( var_add_option == NULL );
    var_add_option = tmp_assign_source_3;

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

    if ( var___init__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__
        );

        assert( res == 0 );
    }

    if ( var_add_option )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_add_option,
            var_add_option
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_add_option );
    Py_DECREF( var_add_option );
    var_add_option = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_add_option );
    Py_DECREF( var_add_option );
    var_add_option = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_02766a5cb0ae3aca17c844615d69edb8, module_nose$core );
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
    tmp_assattr_name_1 = PyList_New( 0 );
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_options, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core );
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core );
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


static PyObject *impl_function_2_add_option_of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_arg = python_pars[ 1 ];
    PyObject *par_kw = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_80a2427ef1f8f3c69de873b8892823c5, module_nose$core );
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

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_options );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_arg;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = par_kw;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pop );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 222;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_plain_help_str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 222;
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


        exception_lineno = 222;
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

            if ( par_arg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arg,
                    par_arg
                );

                assert( res == 0 );
            }

            if ( par_kw )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    par_kw
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
    NUITKA_CANNOT_GET_HERE( function_2_add_option_of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_arg );
    Py_DECREF( par_arg );
    par_arg = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arg );
    Py_DECREF( par_arg );
    par_arg = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_add_option_of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core );
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


static PyObject *impl_function_8_usage_of_class_2_TestProgram_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *var_nose = NULL;
    PyObject *var_ld = NULL;
    PyObject *var_text = NULL;
    PyObject *var_f = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
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
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4d28821ac7e5e2a9cf3b3f2a78699fe9, module_nose$core );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$core)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_cls )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_cls,
            par_cls
        );

        assert( res == 0 );
    }

    if ( var_nose )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_nose,
            var_nose
        );

        assert( res == 0 );
    }

    if ( var_ld )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ld,
            var_ld
        );

        assert( res == 0 );
    }

    if ( var_text )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_text,
            var_text
        );

        assert( res == 0 );
    }

    if ( var_f )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_f,
            var_f
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 249;
    tmp_assign_source_1 = IMPORT_MODULE( const_str_plain_nose, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto frame_exception_exit_1;
    }
    assert( var_nose == NULL );
    var_nose = tmp_assign_source_1;

    // Tried code:
    tmp_source_name_1 = var_nose;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___loader__ );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto try_except_handler_2;
    }
    assert( var_ld == NULL );
    var_ld = tmp_assign_source_2;

    tmp_source_name_2 = var_ld;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_data );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto try_except_handler_2;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 252;
        goto try_except_handler_2;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 252;
        goto try_except_handler_2;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 252;
        goto try_except_handler_2;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 253;
        goto try_except_handler_2;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 253;
        goto try_except_handler_2;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 253;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain___file__ );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___file__ );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "__file__" );
        exception_tb = NULL;

        exception_lineno = 253;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 253;
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = const_str_digest_44fe4951a8f4a5de50a4e9c9350f0d94;
    frame_function->f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 253;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_2;
    }
    assert( var_text == NULL );
    var_text = tmp_assign_source_3;

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
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
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
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_os );

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

        exception_lineno = 255;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_path );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain___file__ );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___file__ );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "__file__" );
        exception_tb = NULL;

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_digest_44fe4951a8f4a5de50a4e9c9350f0d94;
    frame_function->f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_7 };
        tmp_open_filename_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_open_filename_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_open_mode_1 = const_str_plain_r;
    tmp_assign_source_4 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    Py_DECREF( tmp_open_filename_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    assert( var_f == NULL );
    var_f = tmp_assign_source_4;

    // Tried code:
    tmp_source_name_11 = var_f;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_read );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 258;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        goto try_except_handler_3;
    }
    assert( var_text == NULL );
    var_text = tmp_assign_source_5;

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

    tmp_source_name_12 = var_f;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_close );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 260;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_source_name_13 = var_f;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_close );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 260;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_8_usage_of_class_2_TestProgram_of_nose$core );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_isinstance_inst_1 = var_text;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "text" );
        exception_tb = NULL;

        exception_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_source_name_14 = var_text;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "text" );
        exception_tb = NULL;

        exception_lineno = 263;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_decode );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 263;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_text;
        var_text = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_return_value = var_text;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "text" );
        exception_tb = NULL;

        exception_lineno = 264;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

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
            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );

                assert( res == 0 );
            }

            if ( var_nose )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nose,
                    var_nose
                );

                assert( res == 0 );
            }

            if ( var_ld )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ld,
                    var_ld
                );

                assert( res == 0 );
            }

            if ( var_text )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_text,
                    var_text
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
    NUITKA_CANNOT_GET_HERE( function_8_usage_of_class_2_TestProgram_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)var_nose );
    Py_DECREF( var_nose );
    var_nose = NULL;

    Py_XDECREF( var_ld );
    var_ld = NULL;

    Py_XDECREF( var_text );
    var_text = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( var_nose );
    var_nose = NULL;

    Py_XDECREF( var_ld );
    var_ld = NULL;

    Py_XDECREF( var_text );
    var_text = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_8_usage_of_class_2_TestProgram_of_nose$core );
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


static PyObject *impl_function_1_run_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arg = python_pars[ 0 ];
    PyObject *par_kw = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6478923ce95e36391db714d3b33420bc, module_nose$core );
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
    tmp_ass_subvalue_1 = Py_False;
    tmp_ass_subscribed_1 = par_kw;

    tmp_ass_subscript_1 = const_str_plain_exit;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_TestProgram );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TestProgram );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "TestProgram" );
        exception_tb = NULL;

        exception_lineno = 301;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = par_arg;

    tmp_dircall_arg3_1 = par_kw;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_source_name_1 = impl_function_1_complex_call_helper_star_list_star_dict_of___internal__( dir_call_args );
    }
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_success );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
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
            if ( par_arg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arg,
                    par_arg
                );

                assert( res == 0 );
            }

            if ( par_kw )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    par_kw
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
    NUITKA_CANNOT_GET_HERE( function_1_run_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arg );
    Py_DECREF( par_arg );
    par_arg = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arg );
    Py_DECREF( par_arg );
    par_arg = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_run_of_nose$core );
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


static PyObject *impl_function_2_runmodule_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *par_kw = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ffee3800fe99541951594852c2460d1c, module_nose$core );
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
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_main );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_main );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "main" );
        exception_tb = NULL;

        exception_lineno = 309;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_name;

    tmp_dict_key_1 = const_str_plain_defaultTest;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dircall_arg3_1 = par_kw;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl_function_9_complex_call_helper_keywords_star_dict_of___internal__( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
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
            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
                );

                assert( res == 0 );
            }

            if ( par_kw )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    par_kw
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
    NUITKA_CANNOT_GET_HERE( function_2_runmodule_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_runmodule_of_nose$core );
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


static PyObject *impl_function_3_collector_of_nose$core( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_plugins = NULL;
    PyObject *var_conf = NULL;
    PyObject *var_loader = NULL;
    PyObject *var_suite = NULL;
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fe6033ce4c339ce7d5d232a74873454a, module_nose$core );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_RestrictedPluginManager );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RestrictedPluginManager );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RestrictedPluginManager" );
        exception_tb = NULL;

        exception_lineno = 326;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = PyDict_Copy( const_dict_fc6bbcaf457680988b22d8a7ded150f1 );
    frame_function->f_lineno = 326;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        goto frame_exception_exit_1;
    }
    assert( var_plugins == NULL );
    var_plugins = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_Config );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Config );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Config" );
        exception_tb = NULL;

        exception_lineno = 327;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_all_config_files );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_all_config_files );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "all_config_files" );
        exception_tb = NULL;

        exception_lineno = 327;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 327;
    tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 327;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_files;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_value_2 = var_plugins;

    tmp_dict_key_2 = const_str_plain_plugins;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 328;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    assert( var_conf == NULL );
    var_conf = tmp_assign_source_2;

    tmp_source_name_1 = var_conf;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_configure );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        goto frame_exception_exit_1;
    }
    tmp_kw_name_3 = DEEP_COPY( const_dict_34c149098db8d1000734acc1b33e3cf8 );
    frame_function->f_lineno = 329;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_defaultTestLoader );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defaultTestLoader );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "defaultTestLoader" );
        exception_tb = NULL;

        exception_lineno = 330;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_conf;

    frame_function->f_lineno = 330;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        goto frame_exception_exit_1;
    }
    assert( var_loader == NULL );
    var_loader = tmp_assign_source_3;

    tmp_source_name_2 = var_conf;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_testNames );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 332;
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
    tmp_source_name_3 = var_loader;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_loadTestsFromNames );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = var_conf;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_testNames );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 333;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 333;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        goto frame_exception_exit_1;
    }
    assert( var_suite == NULL );
    var_suite = tmp_assign_source_4;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_5 = var_loader;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_loadTestsFromNames );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 335;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_tuple_str_dot_tuple_tuple, 0 ) );

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        goto frame_exception_exit_1;
    }
    assert( var_suite == NULL );
    var_suite = tmp_assign_source_5;

    branch_end_1:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_FinalizingSuiteWrapper );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FinalizingSuiteWrapper );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FinalizingSuiteWrapper" );
        exception_tb = NULL;

        exception_lineno = 336;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_suite;

    tmp_source_name_6 = var_plugins;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_finalize );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 336;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
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
            if ( var_plugins )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_plugins,
                    var_plugins
                );

                assert( res == 0 );
            }

            if ( var_conf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_conf,
                    var_conf
                );

                assert( res == 0 );
            }

            if ( var_loader )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_loader,
                    var_loader
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
    NUITKA_CANNOT_GET_HERE( function_3_collector_of_nose$core );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_plugins );
    Py_DECREF( var_plugins );
    var_plugins = NULL;

    CHECK_OBJECT( (PyObject *)var_conf );
    Py_DECREF( var_conf );
    var_conf = NULL;

    CHECK_OBJECT( (PyObject *)var_loader );
    Py_DECREF( var_loader );
    var_loader = NULL;

    CHECK_OBJECT( (PyObject *)var_suite );
    Py_DECREF( var_suite );
    var_suite = NULL;

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

    Py_XDECREF( var_plugins );
    var_plugins = NULL;

    Py_XDECREF( var_conf );
    var_conf = NULL;

    Py_XDECREF( var_loader );
    var_loader = NULL;

    Py_XDECREF( var_suite );
    var_suite = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_collector_of_nose$core );
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



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_02766a5cb0ae3aca17c844615d69edb8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_TextTestRunner_of_nose$core( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_1_TextTestRunner_of_nose$core,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_69f6a36c75f95312e2427ea26ec8d0b9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_TestProgram_of_nose$core( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_2_TestProgram_of_nose$core,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b02c2e574d457654cf54bd6df8e6bfa2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_run_of_nose$core(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_run_of_nose$core,
        const_str_plain_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6478923ce95e36391db714d3b33420bc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        const_str_digest_6cd870d69d7ebd158fbf2a47fb3a9de5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__makeResult_of_class_1_TextTestRunner_of_nose$core(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2__makeResult_of_class_1_TextTestRunner_of_nose$core,
        const_str_plain__makeResult,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b53d32601d23e65b0d6bdd732796f1d1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_add_option_of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_add_option_of_class_1_DummyParser_of_function_7_showPlugins_of_class_2_TestProgram_of_nose$core,
        const_str_plain_add_option,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_80a2427ef1f8f3c69de873b8892823c5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_getAllConfigFiles_of_class_2_TestProgram_of_nose$core( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_getAllConfigFiles_of_class_2_TestProgram_of_nose$core,
        const_str_plain_getAllConfigFiles,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d01f5d9b86a8090fc42eb2447f26ac79,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_runmodule_of_nose$core( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_runmodule_of_nose$core,
        const_str_plain_runmodule,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ffee3800fe99541951594852c2460d1c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        const_str_digest_488e66037d8e2e4c769f35de5e2951ce
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_collector_of_nose$core(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_collector_of_nose$core,
        const_str_plain_collector,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fe6033ce4c339ce7d5d232a74873454a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        const_str_digest_dadadb7403d8efa045c798679da7469f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_makeConfig_of_class_2_TestProgram_of_nose$core( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_makeConfig_of_class_2_TestProgram_of_nose$core,
        const_str_plain_makeConfig,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_41725a65e0b26dbdf9aea6c786bcfbd9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        const_str_digest_0540b65bf13e89a8357256b9d5f8c8cd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_run_of_class_1_TextTestRunner_of_nose$core(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_run_of_class_1_TextTestRunner_of_nose$core,
        const_str_plain_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_33751983c5cd54d46b6c3b1699630d51,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        const_str_digest_5931886963c252333c3e30c254ab6ca8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_parseArgs_of_class_2_TestProgram_of_nose$core(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_parseArgs_of_class_2_TestProgram_of_nose$core,
        const_str_plain_parseArgs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_07f7a01380690ebcb505ad59a560371b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        const_str_digest_7e01470d8db1f7ed190981c784354d62
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_createTests_of_class_2_TestProgram_of_nose$core(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5_createTests_of_class_2_TestProgram_of_nose$core,
        const_str_plain_createTests,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d8f522f3e057b80626befab3bd3fce5a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        const_str_digest_6ec6b910a8a3ff1c7f3b855dfdd0dd1e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_runTests_of_class_2_TestProgram_of_nose$core(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_6_runTests_of_class_2_TestProgram_of_nose$core,
        const_str_plain_runTests,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c9f15a7194f679d9ce09c12fcc1f5ec3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        const_str_digest_a19e5ee8cfde43746285c9b19ba85a68
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_showPlugins_of_class_2_TestProgram_of_nose$core(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_7_showPlugins_of_class_2_TestProgram_of_nose$core,
        const_str_plain_showPlugins,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1ac46c0b5d7055d61f7c6869fd30f2fa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        const_str_digest_04bbfbc193a9faf3e2efeb6cce988154
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_usage_of_class_2_TestProgram_of_nose$core(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_8_usage_of_class_2_TestProgram_of_nose$core,
        const_str_plain_usage,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4d28821ac7e5e2a9cf3b3f2a78699fe9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$core,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nose$core =
{
    PyModuleDef_HEAD_INIT,
    "nose.core",   /* m_name */
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

MOD_INIT_DECL( nose$core )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nose$core );
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

    // puts( "in initnose$core" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nose$core = Py_InitModule4(
        "nose.core",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nose$core = PyModule_Create( &mdef_nose$core );
#endif

    moduledict_nose$core = (PyDictObject *)((PyModuleObject *)module_nose$core)->md_dict;

    CHECK_OBJECT( module_nose$core );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf, module_nose$core );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nose$core );

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
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
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
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_04906fc59dfc72f13c9d5300edc0c815;
    UPDATE_STRING_DICT0( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_5230517fb8174d2e6312567d5f6f4579;
    UPDATE_STRING_DICT0( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "generators");
    UPDATE_STRING_DICT0( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_generators, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_0728c2698f5a944245128859bb831f5e, module_nose$core );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 5;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_logging, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 6;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 7;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 8;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_time, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 9;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_unittest, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_unittest, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_Config_str_plain_all_config_files_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Config );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_Config, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_Config_str_plain_all_config_files_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_all_config_files );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_all_config_files, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_6fbd26c2ed3ec428c6e494e7dc8a7b6d, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_defaultTestLoader_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_defaultTestLoader );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_defaultTestLoader, tmp_assign_source_11 );
    tmp_import_globals_9 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_bb1f241f2000ed1fe809be4d2e88ea72, tmp_import_globals_9, tmp_import_globals_9, const_tuple_88f2d9e60c5bbe352cbc76d81a74498f_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_PluginManager );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_PluginManager, tmp_assign_source_12 );
    tmp_import_globals_10 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_bb1f241f2000ed1fe809be4d2e88ea72, tmp_import_globals_10, tmp_import_globals_10, const_tuple_88f2d9e60c5bbe352cbc76d81a74498f_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_DefaultPluginManager );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_DefaultPluginManager, tmp_assign_source_13 );
    tmp_import_globals_11 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_bb1f241f2000ed1fe809be4d2e88ea72, tmp_import_globals_11, tmp_import_globals_11, const_tuple_88f2d9e60c5bbe352cbc76d81a74498f_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_RestrictedPluginManager );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_RestrictedPluginManager, tmp_assign_source_14 );
    tmp_import_globals_12 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_f80a0064de2c0801af33f61a4f9bf7e7, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_TextTestResult_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_TextTestResult );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_TextTestResult, tmp_assign_source_15 );
    tmp_import_globals_13 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_43d74df3a60b2618a5a31c88b0fd4e9c, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_plain_FinalizingSuiteWrapper_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_FinalizingSuiteWrapper );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_FinalizingSuiteWrapper, tmp_assign_source_16 );
    tmp_import_globals_14 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_plain_isclass_str_plain_tolist_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_isclass );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_isclass, tmp_assign_source_17 );
    tmp_import_globals_15 = ((PyModuleObject *)module_nose$core)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_isclass_str_plain_tolist_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_tolist );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_tolist, tmp_assign_source_18 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_logging );

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

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getLogger );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 20;
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_19 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_tuple_int_pos_2_int_pos_4_tuple;
    tmp_assign_source_20 = RICH_COMPARE_GE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_compat_24, tmp_assign_source_20 );
    tmp_assign_source_21 = LIST_COPY( const_list_523169a8b1bdf1eb3e7946f2cdd5980c_list );
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_21 );
    // Tried code:
    tmp_assign_source_22 = PyTuple_New( 1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 27;
        goto try_except_handler_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_TextTestRunner );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        exception_lineno = 27;
        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_22, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_22;

    tmp_assign_source_23 = impl_class_1_TextTestRunner_of_nose$core( NULL );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_23;

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
    tmp_assign_source_24 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_24 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_24;

    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_TextTestRunner;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_25;

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
    tmp_assign_source_26 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_TextTestRunner, tmp_assign_source_26 );
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

    // Tried code:
    tmp_assign_source_27 = PyTuple_New( 1 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 72;
        goto try_except_handler_2;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_TestProgram );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_27 );

        exception_lineno = 72;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_27;

    tmp_assign_source_28 = impl_class_2_TestProgram_of_nose$core( NULL );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_28;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dict_name_2 = tmp_class_creation_2__class_dict;

    tmp_key_name_2 = const_str_plain___metaclass__;
    tmp_assign_source_29 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    tmp_assign_source_29 = SELECT_METACLASS( tmp_bases_name_2, GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_29;

    tmp_called_name_3 = tmp_class_creation_2__metaclass;

    tmp_args_element_name_4 = const_str_plain_TestProgram;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    frame_module->f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_30;

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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_31 = tmp_class_creation_2__class;

    UPDATE_STRING_DICT0( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_TestProgram, tmp_assign_source_31 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Tried code:
    tmp_assign_source_32 = GET_STRING_DICT_VALUE( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_TestProgram );

    if (unlikely( tmp_assign_source_32 == NULL ))
    {
        tmp_assign_source_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TestProgram );
    }

    if ( tmp_assign_source_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "TestProgram" );
        exception_tb = NULL;

        exception_lineno = 268;
        goto try_except_handler_3;
    }

    assert( tmp_assign_unpack_1__assign_source == NULL );
    Py_INCREF( tmp_assign_source_32 );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_32;

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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

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
    tmp_assign_source_33 = tmp_assign_unpack_1__assign_source;

    UPDATE_STRING_DICT0( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_run_exit, tmp_assign_source_33 );
    tmp_assign_source_34 = tmp_assign_unpack_1__assign_source;

    UPDATE_STRING_DICT0( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_main, tmp_assign_source_34 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    tmp_assign_source_35 = MAKE_FUNCTION_function_1_run_of_nose$core(  );
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_run, tmp_assign_source_35 );
    tmp_defaults_1 = const_tuple_str_plain___main___tuple;
    tmp_assign_source_36 = MAKE_FUNCTION_function_2_runmodule_of_nose$core( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_runmodule, tmp_assign_source_36 );
    tmp_assign_source_37 = MAKE_FUNCTION_function_3_collector_of_nose$core(  );
    UPDATE_STRING_DICT1( moduledict_nose$core, (Nuitka_StringObject *)const_str_plain_collector, tmp_assign_source_37 );

    return MOD_RETURN_VALUE( module_nose$core );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

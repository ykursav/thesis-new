// Generated code for Python source for module 'nose.config'
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

// The _module_nose$config is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_nose$config;
PyDictObject *moduledict_nose$config;

// The module constants used
static PyObject *const_str_plain_ignoreFilesDefaultStrings;
static PyObject *const_str_plain__processConfigValue;
static PyObject *const_dict_0aad9534fa3e62cd1e1eaf59333df502;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_39d85037864ca478777aeb81490f19f2;
static PyObject *const_str_digest_d2ffc007c774fa9b740b06b6f1177966;
extern PyObject *const_str_plain_src;
extern PyObject *const_str_plain_found;
static PyObject *const_tuple_6b9c0ca7573737752b56ca7ad4222c37_tuple;
static PyObject *const_str_plain_configureWhere;
extern PyObject *const_str_plain_startswith;
static PyObject *const_tuple_8c82047994ba916b412fd3095354a053_tuple;
static PyObject *const_str_plain_filename_or_filenames;
extern PyObject *const_str_plain_INFO;
extern PyObject *const_str_plain___nonzero__;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_stream;
static PyObject *const_str_plain__readFromFilenames;
static PyObject *const_str_plain_setLevel;
static PyObject *const_str_plain__config_section;
extern PyObject *const_str_plain_category;
extern PyObject *const_str_plain_ignoreFiles;
static PyObject *const_list_9d4ea92b81a63c5bf0a6fb3eb9a08fc8_list;
extern PyObject *const_str_plain_warnings;
static PyObject *const_tuple_7738adb322f69e505949fa388c51e3a1_tuple;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain_NOSE_IGNORE_FILES;
static PyObject *const_tuple_4b14c81808dc2e87522df64b85fddb43_tuple;
extern PyObject *const_str_plain_OptionParser;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_abspath;
extern PyObject *const_str_plain_argv;
static PyObject *const_str_digest_eb071dce39db570ca497ca16af3067e4;
static PyObject *const_tuple_str_plain_NOSE_NOPATH_false_tuple;
extern PyObject *const_str_plain_nose;
static PyObject *const_str_plain_propagate;
extern PyObject *const_str_plain_verbosity;
extern PyObject *const_str_plain_Config;
static PyObject *const_str_plain_warned;
static PyObject *const_str_plain_abs_path;
static PyObject *const_str_digest_7203f3f755a460e0f6bc36982b6b5452;
static PyObject *const_str_digest_1f15e679d47bfd0194ab6dbef47223d7;
extern PyObject *const_tuple_str_chr_44_tuple;
static PyObject *const_str_digest_5a22ce782d8dbd96da9df9440fd1f7fe;
static PyObject *const_list_str_digest_123e5e3534132c1da362a78e1868c5a7_list;
extern PyObject *const_str_plain_os;
static PyObject *const_str_digest_836e3f4ad9298076a8cc770f661569c2;
static PyObject *const_tuple_str_plain_self_str_plain_parser_tuple;
static PyObject *const_str_digest_4e6ed2272ede555bb7c8cba9dde4ecfd;
static PyObject *const_dict_d5bc5f2eb9c84d10500f1da0e37e3be6;
extern PyObject *const_str_digest_571eccf4664cb01ecea1867fcbf66f8d;
extern PyObject *const_str_plain_add_path;
extern PyObject *const_tuple_str_plain_self_str_plain_state_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_addOptions;
static PyObject *const_str_plain_user;
extern PyObject *const_str_plain_configure;
static PyObject *const_str_digest_04be2c7dac29686dbbb0a07c12d2024f;
static PyObject *const_str_plain_handlers;
static PyObject *const_tuple_str_plain_add_path_tuple;
extern PyObject *const_str_plain_plugins;
extern PyObject *const_tuple_str_plain_val_tuple;
static PyObject *const_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc;
static PyObject *const_tuple_bb41c153c3536807d9a14c227da41cba_tuple;
extern PyObject *const_str_plain_NoPlugins;
static PyObject *const_str_digest_91fbaa197d9d7a1f2b31b42049ebd54c;
static PyObject *const_str_plain_configSection;
static PyObject *const_str_digest_27ac0fb8bf72e3cca344a4821e6264e3;
extern PyObject *const_str_plain_showPlugins;
extern PyObject *const_str_plain_absdir;
extern PyObject *const_str_plain_sort;
extern PyObject *const_str_plain_cli;
static PyObject *const_str_digest_abeeea911faf6e4c508eec2b237cfa84;
extern PyObject *const_str_digest_8d9a7968bdcf97bf89ecd9cc70ce5a60;
static PyObject *const_str_digest_1c3a7df390047e8e82d673679cd2c7f4;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_str_plain_include;
static PyObject *const_str_digest_dbc69ed80969cab63601b617b2484878;
static PyObject *const_str_plain_plugincls;
extern PyObject *const_str_plain_filename;
extern PyObject *const_str_plain_files;
static PyObject *const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple;
extern PyObject *const_str_plain_verbose;
static PyObject *const_str_plain_warn_sometimes;
extern PyObject *const_str_plain_kw;
extern PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_str_digest_1da5c4fd148aea5b06f3548bc70913ce;
static PyObject *const_str_digest_196ea0444f26e8065fa576ae341d479c;
extern PyObject *const_str_digest_068eb885e4aaedf6bb189a0c4eb85723;
extern PyObject *const_str_plain_cfg;
extern PyObject *const_str_plain_always;
static PyObject *const_str_plain_byteCompile;
extern PyObject *const_str_plain_module;
static PyObject *const_str_plain_worker;
static PyObject *const_str_digest_fa880cdf31b565712bdf5b14c18be107;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_pluginOpts;
static PyObject *const_str_plain_NOSE_DEBUG_LOG;
extern PyObject *const_str_plain_includeExe;
static PyObject *const_str_plain_NOSE_NOPATH;
static PyObject *const_tuple_0bcbd864cf87e48040420f14b0526312_tuple;
static PyObject *const_tuple_str_plain_NOSE_VERBOSE_int_pos_1_tuple;
static PyObject *const_tuple_str_digest_1da5c4fd148aea5b06f3548bc70913ce_tuple;
extern PyObject *const_str_plain_sections;
extern PyObject *const_tuple_str_plain_nose_tuple;
static PyObject *const_str_plain_user_config_files;
static PyObject *const_str_digest_6658eeed126bc5bcea6bb69b5996d9c9;
static PyObject *const_dict_9f781a4c9b1d670f8f74b41b3c147717;
extern PyObject *const_str_plain_expanduser;
static PyObject *const_dict_54bce8ffa7787d3ba977c8f010ba1de1;
static PyObject *const_str_plain__parseArgs;
extern PyObject *const_str_plain_FALSE;
static PyObject *const_str_plain_parseArgsAndConfigFiles;
static PyObject *const_str_plain_format_help;
static PyObject *const_str_digest_ad76124311328c9d7edab0cff095456f;
static PyObject *const_str_digest_ba12ac0a1b0b778d8e926be39e87e887;
extern PyObject *const_str_plain_parse_args;
static PyObject *const_tuple_str_plain_fileConfig_tuple;
extern PyObject *const_tuple_6e0ce2585290961afef9353bf934255f_tuple;
static PyObject *const_str_digest_7672fa2acb59c4a6c92de94f69138e9f;
static PyObject *const_str_digest_c5dddd2d5596789811d32abaf18eada5;
static PyObject *const_tuple_d64833a062334445a5a6cdcfdde9472a_tuple;
static PyObject *const_str_plain_addHandler;
static PyObject *const_str_digest_edf4f5f8f495d4eaa0f752c5c4dfe51f;
extern PyObject *const_str_digest_d577b8f49b7cb9dcdb74f76e27464b19;
static PyObject *const_str_plain_NoSuchOptionError;
static PyObject *const_dict_eabc5ae09e205b6a867bef8808d820a9;
extern PyObject *const_str_plain_platform;
extern PyObject *const_str_plain_metavar;
extern PyObject *const_str_plain_parser;
static PyObject *const_str_digest_46dff18d8f410293a00ed0040bafdfa9;
static PyObject *const_str_digest_247ff0d2943c7ace596fba542185acf0;
static PyObject *const_str_plain_logger_name;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_cfg_files;
extern PyObject *const_str_plain_add_option;
static PyObject *const_tuple_str_plain_msg_str_plain_kw_str_plain_error_tuple;
extern PyObject *const_str_plain_readline;
static PyObject *const_dict_5a3ce7842b3e50f4fe7dbf97327553be;
static PyObject *const_str_plain_process;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_re;
static PyObject *const_tuple_79d7ef06a7ee1e2d969ad7cc7aaffa22_tuple;
static PyObject *const_str_digest_5a7acf5b3bf49def57e87cf8f93e6c71;
static PyObject *const_str_digest_2d150b08f849ff6ea8376ad2889e2026;
static PyObject *const_tuple_str_plain_NOSE_WHERE_none_tuple;
static PyObject *const_tuple_str_plain_1_str_plain_T_str_plain_TRUE_str_plain_ON_tuple;
extern PyObject *const_str_plain_map;
static PyObject *const_dict_de43cf2019e151511363085f9e8bbc41;
static PyObject *const_tuple_str_plain_self_str_plain_kw_str_plain_env_tuple;
static PyObject *const_tuple_0db0b925d3278094b2f40de26d6f9922_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_NOSE_DEBUG;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain_help;
static PyObject *const_str_plain_debug_loggers;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_NoOptions;
extern PyObject *const_str_plain_optparse;
extern PyObject *const_str_digest_eb2a748be8fdd84357bb51822fa7dd48;
static PyObject *const_str_digest_39a5960ab3640492a976f8a24a17eee5;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_plain_RawConfigParser;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_plain_replace;
static PyObject *const_str_digest_e09aae8d634e626fc756d84c117c1722;
static PyObject *const_str_plain_OptionValueError;
extern PyObject *const_str_digest_84742fd914746eb701afeffc11eaf00f;
static PyObject *const_str_plain_readfp;
extern PyObject *const_str_plain_path;
static PyObject *const_tuple_str_digest_eb2a748be8fdd84357bb51822fa7dd48_tuple;
extern PyObject *const_str_plain_action;
extern PyObject *const_str_plain_doc;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_srcDirs;
static PyObject *const_tuple_str_digest_0754cec1ad269609cd5479d867533609_tuple;
static PyObject *const_str_digest_19196f7bbb2b7faebb0f802afac42301;
static PyObject *const_str_digest_a56522bc05b35d6098aafc8d6499af6a;
static PyObject *const_str_plain__default;
extern PyObject *const_str_plain_DEBUG;
extern PyObject *const_str_plain_getcwd;
static PyObject *const_str_digest_472410cfdb82a12785cd9799b772b75f;
static PyObject *const_str_plain_loggingConfig;
extern PyObject *const_str_plain_default;
static PyObject *const_str_digest_e2b2a911408ce3c18d41f19680e44a70;
extern PyObject *const_str_plain_todict;
extern PyObject *const_str_plain_TRUE;
extern PyObject *const_str_digest_409868245cb421b4cd0ecede43982749;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_str_digest_4971a67e500b768726898a4e98c7eda5;
static PyObject *const_str_digest_c40da24b9fb2f7d79a4e07fe6c8f5b08;
static PyObject *const_str_plain_runOnInit;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_logging;
static PyObject *const_str_plain_Error;
static PyObject *const_str_digest_f8335a2416157008868f35eef6407f96;
static PyObject *const_dict_04428d86bf2c537bffda642e19f6b524;
static PyObject *const_tuple_dc13640dc65775ac0160ac1b58bd69c9_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_d_str_plain_k_str_plain_keys_tuple;
static PyObject *const_str_plain_parserClass;
static PyObject *const_str_digest_73567074a2b202b9dcc688d30c50d278;
extern PyObject *const_str_plain_addPaths;
static PyObject *const_tuple_84c2ba9356ca721c9eff7bd0b9cc6bb7_tuple;
static PyObject *const_dict_db5d7329ac2b5746eee0a9ca8e2c9f4e;
extern PyObject *const_str_plain_stderr;
static PyObject *const_tuple_1e27cba3d2448d85ffff055e6900a6b7_tuple;
static PyObject *const_tuple_0f435e556deced2a12ebeea60b148253_tuple;
extern PyObject *const_str_plain_getTestCaseNamesCompat;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_plain_FILE;
static PyObject *const_str_digest_1a92595c7361d8f0f70eb204001b9699;
static PyObject *const_str_plain_debugLogAbsPath;
static PyObject *const_tuple_b7127426b6dc1183449e630bb2487c88_tuple;
static PyObject *const_str_digest_de63141d92b102cd41958fa85e364bb1;
static PyObject *const_str_digest_2ce7afd8717ea7a575892ba920237c12;
extern PyObject *const_str_plain_ConfigParser;
extern PyObject *const_str_plain_stopOnError;
extern PyObject *const_str_digest_8ff55f2924abba1dc6fcc430fa7ff3a7;
extern PyObject *const_str_plain_tolist;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_sep;
static PyObject *const_str_plain__readConfiguration;
static PyObject *const_list_bf9914a5a55a3f1809365a486b9461cf_list;
extern PyObject *const_str_digest_bb1f241f2000ed1fe809be4d2e88ea72;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_digest_faf4aa980e8a055cb194555d0338737c;
static PyObject *const_str_digest_a5629b96ef13f873e868da20363a52f6;
extern PyObject *const_str_plain_read;
static PyObject *const_str_plain_debugLog;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain_FileHandler;
extern PyObject *const_str_plain_filenames;
extern PyObject *const_tuple_str_plain_OptionParser_tuple;
static PyObject *const_str_digest_afea5b6dbbe565fa76a13fa4a978056d;
static PyObject *const_str_plain_ConfigError;
extern PyObject *const_str_plain_excludedOption;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_begin;
extern PyObject *const_str_plain_val;
static PyObject *const_str_plain_option_blacklist;
extern PyObject *const_str_plain_traverseNamespace;
static PyObject *const_str_digest_b18a177c45550b4f3f516a11bf101257;
extern PyObject *const_str_plain_upper;
static PyObject *const_tuple_str_plain_absdir_str_plain_tolist_tuple;
static PyObject *const_str_plain_ON;
static PyObject *const_tuple_str_digest_205ce5a3ead478d07452774b9e5f1cdf_tuple;
static PyObject *const_str_digest_4081419cdf3d6da0841350ddcee14bd9;
static PyObject *const_str_plain_opt_str;
static PyObject *const_str_plain_handler;
extern PyObject *const_str_plain_value;
static PyObject *const_str_plain_store_false;
static PyObject *const_str_plain_baseFilename;
static PyObject *const_tuple_f7ca98e1bd3012e1fbf3fafe4cfded04_tuple;
extern PyObject *const_str_plain_workingDir;
static PyObject *const_str_digest_dfaa049654d08ecb0c11950216676a17;
static PyObject *const_dict_ed3aad069bb7e0f8bc588f5557c723fb;
static PyObject *const_dict_0b1b7bd353efbaadab6d6121a908c394;
static PyObject *const_tuple_str_digest_c08fd2a2c2e3c7f92c095d89a635364a_tuple;
static PyObject *const_str_digest_ab450bcc059dbc48cfd58aa90dc8a467;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_8d897d303cf773982edc73e5b7ddb26a;
extern PyObject *const_str_plain_error;
static PyObject *const_str_digest_9f75b52e176f2b904bbcdea1aa34477c;
static PyObject *const_str_plain_NOSE_VERBOSE;
static PyObject *const_str_digest_47a765bc7cff965be8de419bdba1fa73;
static PyObject *const_str_plain_OFF;
extern PyObject *const_str_plain__parser;
static PyObject *const_str_plain_dummy_parser;
extern PyObject *const_str_plain_loadPlugins;
static PyObject *const_str_digest_7e4cdf4eed2d7035bf3f13ce9c17cc0f;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_exclude;
static PyObject *const_str_digest_207a5177d480419aff0f9b9adb058ffa;
extern PyObject *const_str_digest_27a7628ab85cd892afa96bd047d5a375;
extern PyObject *const_str_plain_win32;
static PyObject *const_str_plain_NAMES;
extern PyObject *const_str_plain_RuntimeWarning;
static PyObject *const_tuple_46e30b5030a8d486c63aa88ab509b6ea_tuple;
static PyObject *const_tuple_14ee53f6084dc980ddded2b913780fe5_tuple;
extern PyObject *const_str_plain_testNames;
static PyObject *const_str_digest_b73417c3a0f44f8b0832c2d224ed4aa5;
extern PyObject *const_str_plain_store;
static PyObject *const_tuple_str_plain_self_str_plain_doc_tuple;
static PyObject *const_tuple_str_plain_NOSE_DEBUG_tuple;
extern PyObject *const_str_digest_cc4f589119d7c98419ab44ebd707de36;
static PyObject *const_tuple_str_plain_NOSE_DEBUG_LOG_tuple;
extern PyObject *const_str_plain_join;
static PyObject *const_str_plain__orig;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_version;
static PyObject *const_tuple_str_plain_plugins_tuple;
extern PyObject *const_str_plain_config;
static PyObject *const_str_plain_configureLogging;
static PyObject *const_tuple_str_plain_warn_str_plain_filterwarnings_tuple;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_1;
extern PyObject *const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a;
extern PyObject *const_str_digest_85fe97af08c9a213aa891dc673aeaa3e;
extern PyObject *const_str_plain_F;
extern PyObject *const_str_plain_fh;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_flag;
static PyObject *const_str_digest_2621efeb8ad198917a5c1bcbff6364f1;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain_T;
static PyObject *const_str_plain_NOSE_INCLUDE;
extern PyObject *const_str_plain_l;
static PyObject *const_str_plain_lvl;
extern PyObject *const_str_plain_option;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_d;
static PyObject *const_str_digest_d5596ff177ba20582eec6fc06eb451c7;
extern PyObject *const_str_plain_dest;
static PyObject *const_str_plain___getnewargs__;
static PyObject *const_str_plain_VERBOSITY;
static PyObject *const_str_plain_testMatchPat;
static PyObject *const_tuple_9a14ac09d832b88cf7b0bfec961b3286_tuple;
extern PyObject *const_str_digest_8b4c8c81913e132a2fb432c041f3150f;
static PyObject *const_str_plain_WHERE;
extern PyObject *const_str_digest_7775affb36096bf2cf44236037c47ff7;
static PyObject *const_str_plain_logger;
extern PyObject *const_str_digest_68e779b074842129991baeb4e329e7d3;
static PyObject *const_str_digest_75c1113d1333e3f18890bd794bf85661;
static PyObject *const_str_plain_config_section;
static PyObject *const_tuple_str_plain_win32_str_plain_cli_tuple;
static PyObject *const_str_plain_logStream;
static PyObject *const_str_plain__error;
extern PyObject *const_str_plain_all_config_files;
extern PyObject *const_int_0;
static PyObject *const_dict_7d5728b6635b3689b1ea971cfa72798b;
static PyObject *const_str_plain_ConfiguredDefaultsOptionParser;
static PyObject *const_str_digest_dec0544d49eecdf2e1e3bfa8140486eb;
static PyObject *const_str_digest_b05a584dd45626c486fd086a6593c6b3;
static PyObject *const_str_digest_bd5f8fa74dd151fe38cac8082249bc5a;
static PyObject *const_str_digest_19b3dfb89467eff99a42311853b36a80;
extern PyObject *const_str_plain_firstPackageWins;
static PyObject *const_tuple_str_digest_f5bff6b10094bf122ddfd4736bd3472b_tuple;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_plain_PY3WHERE;
static PyObject *const_tuple_67c940dc01e65e2af918d920f31d4e64_tuple;
extern PyObject *const_str_plain_store_true;
static PyObject *const_str_plain_store_const;
static PyObject *const_str_digest_6c10382c0ea0df4dc0af0d724adc3de1;
static PyObject *const_str_plain_NOSE_INCLUDE_EXE;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_plain_copy;
static PyObject *const_str_plain__bool;
static PyObject *const_tuple_str_plain_NoPlugins_tuple;
static PyObject *const_str_plain__applyConfigurationToValues;
static PyObject *const_str_plain_exe_allowed_platforms;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_14f12f91962964aab935b74ab33cb503_tuple;
static PyObject *const_str_digest_205ce5a3ead478d07452774b9e5f1cdf;
extern PyObject *const_str_plain_items;
static PyObject *const_str_plain_NOSE_TESTMATCH;
extern PyObject *const_str_plain_filterwarnings;
static PyObject *const_dict_6c64884cd19a8b9a401ecd3366b98b56;
static PyObject *const_str_digest_acfe98b39c3b98536f4cb8bd4b412aac;
extern PyObject *const_str_digest_6715a9056eb9d39c934c88edc597abe2;
static PyObject *const_tuple_bff6350ecf8e0b627a84689c20888b9d_tuple;
extern PyObject *const_str_plain_exc;
extern PyObject *const_str_plain___repr__;
static PyObject *const_tuple_str_digest_84742fd914746eb701afeffc11eaf00f_tuple;
extern PyObject *const_str_digest_4298185740dd13ed26c899ea60ccf7b2;
static PyObject *const_str_digest_8d881dcdb7033101c8401e951d7ddbb8;
static PyObject *const_tuple_42106a19a652df870c29fb75e6bd56f0_tuple;
static PyObject *const_str_digest_e0e9e466804c04daa0f495bdfa2f54bd;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_482a234752dc81eae41b450d41e71c04;
static PyObject *const_str_plain_Formatter;
static PyObject *const_str_plain_py3where;
extern PyObject *const_str_plain___str__;
static PyObject *const_list_str_plain_help_str_plain_verbose_list;
extern PyObject *const_str_plain___getstate__;
static PyObject *const_str_plain_NOSE_STOP;
extern PyObject *const_str_plain_testMatch;
static PyObject *const_str_digest_209c3a8e98a3696dcd40adff3a58f529;
static PyObject *const_str_plain__readFromFileObject;
extern PyObject *const_str_plain_split;
static PyObject *const_tuple_4892827267518af8d49592eedc550406_tuple;
static PyObject *const_str_plain_get_default_values;
static PyObject *const_str_digest_00f6bb4ae24a38adbf86d65a0bf1ce49;
static PyObject *const_str_digest_0754cec1ad269609cd5479d867533609;
static PyObject *const_tuple_str_plain_self_str_plain_doc_str_plain_env_str_plain_parser_tuple;
extern PyObject *const_tuple_str_plain___tuple;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___setstate__;
static PyObject *const_dict_4961660bac420c2cb880519351ededfc;
static PyObject *const_tuple_766ff684ea9e90c2f53d01a89d8d7055_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_1c7880cf6402d8d11f95934f3d903937_tuple;
static PyObject *const_str_plain_StreamHandler;
static PyObject *const_tuple_74b6afea11e095064fb100964a02a2e7_tuple;
static PyObject *const_str_digest_af312e04583502f5eb717df915e0414f;
extern PyObject *const_str_plain_exists;
static PyObject *const_tuple_str_plain_user_tuple;
static PyObject *const_tuple_str_plain_lib_str_plain_src_tuple;
static PyObject *const_str_plain__file_error;
static PyObject *const_str_plain_NOSE_EXCLUDE;
static PyObject *const_str_plain_NOSE_WHERE;
extern PyObject *const_str_digest_69b6ecec1ddb0b99fd2288f02d4834e9;
static PyObject *const_str_plain_fileConfig;
extern PyObject *const_tuple_str_plain_always_tuple;
extern PyObject *const_str_plain_lib;
static PyObject *const_str_plain_setFormatter;
extern PyObject *const_str_plain_where;
extern PyObject *const_str_plain_values;
static PyObject *const_str_digest_c7abdcb9e7eb473f65830c2cbfd31cc0;
static PyObject *const_str_plain_config_files;
extern PyObject *const_str_plain_reset;
extern PyObject *const_tuple_str_plain_self_str_plain_d_tuple;
extern PyObject *const_str_plain_nosetests;
extern PyObject *const_str_digest_a0843d4e2d48b211091a69495ee11a3d;
static PyObject *const_tuple_str_digest_123e5e3534132c1da362a78e1868c5a7_tuple;
static PyObject *const_str_digest_f5bff6b10094bf122ddfd4736bd3472b;
extern PyObject *const_str_plain_keys;
static PyObject *const_str_plain_file_error;
static PyObject *const_str_digest_11999dc00a131a88f0488f806407972e;
static PyObject *const_str_plain_WARNING;
static PyObject *const_str_digest_33f6ebfa679aaf119394785595d95a2d;
static PyObject *const_str_plain__configTuples;
extern PyObject *const_str_plain_0;
static PyObject *const_str_digest_dfa7168363a6e4048f2d00fcf1bc621c;
static PyObject *const_tuple_str_digest_7672fa2acb59c4a6c92de94f69138e9f_tuple;
static PyObject *const_str_digest_b44925416098c2c50c09201548391371;
static PyObject *const_str_digest_5d1d4e57402da78da790d5bfec50566c;
static PyObject *const_str_digest_f8fab35774214a008f88c48e3ce6506c;
extern PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
static PyObject *const_str_digest_fcb7d8c80a65752732b127e786193e63;
static PyObject *const_str_digest_d9a7fcb464771c0e05009cf575be57c2;
static PyObject *const_tuple_str_digest_d2ffc007c774fa9b740b06b6f1177966_tuple;
static PyObject *const_str_digest_9417b6c135a0ac578925ae2782c78295;
static PyObject *const_str_digest_b041246024923f1165c753b18abd73f2;
static PyObject *const_str_plain_REGEX;
static PyObject *const_tuple_b99b577ca797c7cc090765b881d83b28_tuple;
static PyObject *const_str_plain_getParser;
static PyObject *const_tuple_608aaa6a34606a5cd0f9f85c7b5c3dde_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_dont_write_bytecode;
extern PyObject *const_str_digest_929845dec7a1cd690fd2a7adb2e935eb;
static PyObject *const_str_digest_123e5e3534132c1da362a78e1868c5a7;
static PyObject *const_str_plain_FILES;
static PyObject *const_str_plain_const;
extern PyObject *const_str_plain_filter;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
static PyObject *const_tuple_str_plain_NOSE_STOP_false_tuple;
extern PyObject *const_str_plain_env;
extern PyObject *const_str_plain_get_option;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_tuple_str_digest_5a7acf5b3bf49def57e87cf8f93e6c71_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_ignoreFilesDefaultStrings = UNSTREAM_STRING( &constant_bin[ 17701 ], 25, 1 );
    const_str_plain__processConfigValue = UNSTREAM_STRING( &constant_bin[ 17726 ], 19, 1 );
    const_dict_0aad9534fa3e62cd1e1eaf59333df502 = _PyDict_NewPresized( 5 );
    PyDict_SetItem( const_dict_0aad9534fa3e62cd1e1eaf59333df502, const_str_plain_action, const_str_plain_store );
    PyDict_SetItem( const_dict_0aad9534fa3e62cd1e1eaf59333df502, const_str_plain_dest, const_str_plain_testNames );
    PyDict_SetItem( const_dict_0aad9534fa3e62cd1e1eaf59333df502, const_str_plain_default, Py_None );
    const_str_plain_NAMES = UNSTREAM_STRING( &constant_bin[ 17745 ], 5, 1 );
    PyDict_SetItem( const_dict_0aad9534fa3e62cd1e1eaf59333df502, const_str_plain_metavar, const_str_plain_NAMES );
    const_str_digest_19b3dfb89467eff99a42311853b36a80 = UNSTREAM_STRING( &constant_bin[ 17750 ], 184, 0 );
    PyDict_SetItem( const_dict_0aad9534fa3e62cd1e1eaf59333df502, const_str_plain_help, const_str_digest_19b3dfb89467eff99a42311853b36a80 );
    assert( PyDict_Size( const_dict_0aad9534fa3e62cd1e1eaf59333df502 ) == 5 );
    const_str_digest_39d85037864ca478777aeb81490f19f2 = UNSTREAM_STRING( &constant_bin[ 17934 ], 14, 0 );
    const_str_digest_d2ffc007c774fa9b740b06b6f1177966 = UNSTREAM_STRING( &constant_bin[ 17948 ], 10, 0 );
    const_tuple_6b9c0ca7573737752b56ca7ad4222c37_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_6b9c0ca7573737752b56ca7ad4222c37_tuple, 0, const_str_digest_8ff55f2924abba1dc6fcc430fa7ff3a7 ); Py_INCREF( const_str_digest_8ff55f2924abba1dc6fcc430fa7ff3a7 );
    const_str_digest_b18a177c45550b4f3f516a11bf101257 = UNSTREAM_STRING( &constant_bin[ 17958 ], 7, 0 );
    PyTuple_SET_ITEM( const_tuple_6b9c0ca7573737752b56ca7ad4222c37_tuple, 1, const_str_digest_b18a177c45550b4f3f516a11bf101257 ); Py_INCREF( const_str_digest_b18a177c45550b4f3f516a11bf101257 );
    const_str_plain_configureWhere = UNSTREAM_STRING( &constant_bin[ 17965 ], 14, 1 );
    const_tuple_8c82047994ba916b412fd3095354a053_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_8c82047994ba916b412fd3095354a053_tuple, 0, const_str_digest_068eb885e4aaedf6bb189a0c4eb85723 ); Py_INCREF( const_str_digest_068eb885e4aaedf6bb189a0c4eb85723 );
    const_str_digest_ab450bcc059dbc48cfd58aa90dc8a467 = UNSTREAM_STRING( &constant_bin[ 17979 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_8c82047994ba916b412fd3095354a053_tuple, 1, const_str_digest_ab450bcc059dbc48cfd58aa90dc8a467 ); Py_INCREF( const_str_digest_ab450bcc059dbc48cfd58aa90dc8a467 );
    const_str_plain_filename_or_filenames = UNSTREAM_STRING( &constant_bin[ 17988 ], 21, 1 );
    const_str_plain__readFromFilenames = UNSTREAM_STRING( &constant_bin[ 18009 ], 18, 1 );
    const_str_plain_setLevel = UNSTREAM_STRING( &constant_bin[ 18027 ], 8, 1 );
    const_str_plain__config_section = UNSTREAM_STRING( &constant_bin[ 18035 ], 15, 1 );
    const_list_9d4ea92b81a63c5bf0a6fb3eb9a08fc8_list = PyList_New( 3 );
    const_str_digest_1c3a7df390047e8e82d673679cd2c7f4 = UNSTREAM_STRING( &constant_bin[ 18050 ], 3, 0 );
    PyList_SET_ITEM( const_list_9d4ea92b81a63c5bf0a6fb3eb9a08fc8_list, 0, const_str_digest_1c3a7df390047e8e82d673679cd2c7f4 ); Py_INCREF( const_str_digest_1c3a7df390047e8e82d673679cd2c7f4 );
    const_str_digest_39a5960ab3640492a976f8a24a17eee5 = UNSTREAM_STRING( &constant_bin[ 18053 ], 2, 0 );
    PyList_SET_ITEM( const_list_9d4ea92b81a63c5bf0a6fb3eb9a08fc8_list, 1, const_str_digest_39a5960ab3640492a976f8a24a17eee5 ); Py_INCREF( const_str_digest_39a5960ab3640492a976f8a24a17eee5 );
    const_str_digest_1f15e679d47bfd0194ab6dbef47223d7 = UNSTREAM_STRING( &constant_bin[ 18055 ], 11, 0 );
    PyList_SET_ITEM( const_list_9d4ea92b81a63c5bf0a6fb3eb9a08fc8_list, 2, const_str_digest_1f15e679d47bfd0194ab6dbef47223d7 ); Py_INCREF( const_str_digest_1f15e679d47bfd0194ab6dbef47223d7 );
    const_tuple_7738adb322f69e505949fa388c51e3a1_tuple = PyTuple_New( 2 );
    const_str_digest_a5629b96ef13f873e868da20363a52f6 = UNSTREAM_STRING( &constant_bin[ 18066 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_7738adb322f69e505949fa388c51e3a1_tuple, 0, const_str_digest_a5629b96ef13f873e868da20363a52f6 ); Py_INCREF( const_str_digest_a5629b96ef13f873e868da20363a52f6 );
    PyTuple_SET_ITEM( const_tuple_7738adb322f69e505949fa388c51e3a1_tuple, 1, const_str_digest_a0843d4e2d48b211091a69495ee11a3d ); Py_INCREF( const_str_digest_a0843d4e2d48b211091a69495ee11a3d );
    const_str_plain_NOSE_IGNORE_FILES = UNSTREAM_STRING( &constant_bin[ 18068 ], 17, 1 );
    const_tuple_4b14c81808dc2e87522df64b85fddb43_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4b14c81808dc2e87522df64b85fddb43_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4b14c81808dc2e87522df64b85fddb43_tuple, 1, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    const_str_plain_config_section = UNSTREAM_STRING( &constant_bin[ 18036 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_4b14c81808dc2e87522df64b85fddb43_tuple, 2, const_str_plain_config_section ); Py_INCREF( const_str_plain_config_section );
    PyTuple_SET_ITEM( const_tuple_4b14c81808dc2e87522df64b85fddb43_tuple, 3, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    const_str_plain_file_error = UNSTREAM_STRING( &constant_bin[ 18085 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_4b14c81808dc2e87522df64b85fddb43_tuple, 4, const_str_plain_file_error ); Py_INCREF( const_str_plain_file_error );
    const_str_digest_eb071dce39db570ca497ca16af3067e4 = UNSTREAM_STRING( &constant_bin[ 18095 ], 81, 0 );
    const_tuple_str_plain_NOSE_NOPATH_false_tuple = PyTuple_New( 2 );
    const_str_plain_NOSE_NOPATH = UNSTREAM_STRING( &constant_bin[ 18176 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_NOPATH_false_tuple, 0, const_str_plain_NOSE_NOPATH ); Py_INCREF( const_str_plain_NOSE_NOPATH );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_NOPATH_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_plain_propagate = UNSTREAM_STRING( &constant_bin[ 18187 ], 9, 1 );
    const_str_plain_warned = UNSTREAM_STRING( &constant_bin[ 18196 ], 6, 1 );
    const_str_plain_abs_path = UNSTREAM_STRING( &constant_bin[ 18202 ], 8, 1 );
    const_str_digest_7203f3f755a460e0f6bc36982b6b5452 = UNSTREAM_STRING( &constant_bin[ 18210 ], 27, 0 );
    const_str_digest_5a22ce782d8dbd96da9df9440fd1f7fe = UNSTREAM_STRING( &constant_bin[ 18237 ], 28, 0 );
    const_list_str_digest_123e5e3534132c1da362a78e1868c5a7_list = PyList_New( 1 );
    const_str_digest_123e5e3534132c1da362a78e1868c5a7 = UNSTREAM_STRING( &constant_bin[ 18265 ], 9, 0 );
    PyList_SET_ITEM( const_list_str_digest_123e5e3534132c1da362a78e1868c5a7_list, 0, const_str_digest_123e5e3534132c1da362a78e1868c5a7 ); Py_INCREF( const_str_digest_123e5e3534132c1da362a78e1868c5a7 );
    const_str_digest_836e3f4ad9298076a8cc770f661569c2 = UNSTREAM_STRING( &constant_bin[ 18274 ], 14, 0 );
    const_tuple_str_plain_self_str_plain_parser_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_parser_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_parser_tuple, 1, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    const_str_digest_4e6ed2272ede555bb7c8cba9dde4ecfd = UNSTREAM_STRING( &constant_bin[ 18288 ], 301, 0 );
    const_dict_d5bc5f2eb9c84d10500f1da0e37e3be6 = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_d5bc5f2eb9c84d10500f1da0e37e3be6, const_str_plain_action, const_str_plain_append );
    PyDict_SetItem( const_dict_d5bc5f2eb9c84d10500f1da0e37e3be6, const_str_plain_dest, const_str_plain_files );
    const_str_plain_FILES = UNSTREAM_STRING( &constant_bin[ 18080 ], 5, 1 );
    PyDict_SetItem( const_dict_d5bc5f2eb9c84d10500f1da0e37e3be6, const_str_plain_metavar, const_str_plain_FILES );
    const_str_digest_8d897d303cf773982edc73e5b7ddb26a = UNSTREAM_STRING( &constant_bin[ 18589 ], 131, 0 );
    PyDict_SetItem( const_dict_d5bc5f2eb9c84d10500f1da0e37e3be6, const_str_plain_help, const_str_digest_8d897d303cf773982edc73e5b7ddb26a );
    assert( PyDict_Size( const_dict_d5bc5f2eb9c84d10500f1da0e37e3be6 ) == 4 );
    const_str_plain_user = UNSTREAM_STRING( &constant_bin[ 18720 ], 4, 1 );
    const_str_digest_04be2c7dac29686dbbb0a07c12d2024f = UNSTREAM_STRING( &constant_bin[ 18724 ], 16, 0 );
    const_str_plain_handlers = UNSTREAM_STRING( &constant_bin[ 18740 ], 8, 1 );
    const_tuple_str_plain_add_path_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_add_path_tuple, 0, const_str_plain_add_path ); Py_INCREF( const_str_plain_add_path );
    const_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc = UNSTREAM_STRING( &constant_bin[ 1721 ], 2, 0 );
    const_tuple_bb41c153c3536807d9a14c227da41cba_tuple = PyTuple_New( 2 );
    const_str_digest_00f6bb4ae24a38adbf86d65a0bf1ce49 = UNSTREAM_STRING( &constant_bin[ 18748 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_bb41c153c3536807d9a14c227da41cba_tuple, 0, const_str_digest_00f6bb4ae24a38adbf86d65a0bf1ce49 ); Py_INCREF( const_str_digest_00f6bb4ae24a38adbf86d65a0bf1ce49 );
    const_str_digest_dec0544d49eecdf2e1e3bfa8140486eb = UNSTREAM_STRING( &constant_bin[ 18750 ], 20, 0 );
    PyTuple_SET_ITEM( const_tuple_bb41c153c3536807d9a14c227da41cba_tuple, 1, const_str_digest_dec0544d49eecdf2e1e3bfa8140486eb ); Py_INCREF( const_str_digest_dec0544d49eecdf2e1e3bfa8140486eb );
    const_str_digest_91fbaa197d9d7a1f2b31b42049ebd54c = UNSTREAM_STRING( &constant_bin[ 18770 ], 261, 0 );
    const_str_plain_configSection = UNSTREAM_STRING( &constant_bin[ 19031 ], 13, 1 );
    const_str_digest_27ac0fb8bf72e3cca344a4821e6264e3 = UNSTREAM_STRING( &constant_bin[ 19044 ], 20, 0 );
    const_str_digest_abeeea911faf6e4c508eec2b237cfa84 = UNSTREAM_STRING( &constant_bin[ 19064 ], 138, 0 );
    const_str_digest_dbc69ed80969cab63601b617b2484878 = UNSTREAM_STRING( &constant_bin[ 19202 ], 32, 0 );
    const_str_plain_plugincls = UNSTREAM_STRING( &constant_bin[ 19234 ], 9, 1 );
    const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_fileConfig = UNSTREAM_STRING( &constant_bin[ 19243 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 1, const_str_plain_fileConfig ); Py_INCREF( const_str_plain_fileConfig );
    PyTuple_SET_ITEM( const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 2, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    const_str_plain_handler = UNSTREAM_STRING( &constant_bin[ 18740 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 3, const_str_plain_handler ); Py_INCREF( const_str_plain_handler );
    const_str_plain_logger = UNSTREAM_STRING( &constant_bin[ 19253 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 4, const_str_plain_logger ); Py_INCREF( const_str_plain_logger );
    PyTuple_SET_ITEM( const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 5, const_str_plain_found ); Py_INCREF( const_str_plain_found );
    const_str_plain_debugLogAbsPath = UNSTREAM_STRING( &constant_bin[ 19259 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 6, const_str_plain_debugLogAbsPath ); Py_INCREF( const_str_plain_debugLogAbsPath );
    PyTuple_SET_ITEM( const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 7, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    const_str_plain_lvl = UNSTREAM_STRING( &constant_bin[ 19274 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 8, const_str_plain_lvl ); Py_INCREF( const_str_plain_lvl );
    PyTuple_SET_ITEM( const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 9, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_plain_debug_loggers = UNSTREAM_STRING( &constant_bin[ 19277 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 10, const_str_plain_debug_loggers ); Py_INCREF( const_str_plain_debug_loggers );
    const_str_plain_logger_name = UNSTREAM_STRING( &constant_bin[ 19290 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 11, const_str_plain_logger_name ); Py_INCREF( const_str_plain_logger_name );
    PyTuple_SET_ITEM( const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 12, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    const_str_plain_warn_sometimes = UNSTREAM_STRING( &constant_bin[ 19301 ], 14, 1 );
    const_str_digest_1da5c4fd148aea5b06f3548bc70913ce = UNSTREAM_STRING( &constant_bin[ 19315 ], 17, 0 );
    const_str_digest_196ea0444f26e8065fa576ae341d479c = UNSTREAM_STRING( &constant_bin[ 19332 ], 156, 0 );
    const_str_plain_byteCompile = UNSTREAM_STRING( &constant_bin[ 19488 ], 11, 1 );
    const_str_plain_worker = UNSTREAM_STRING( &constant_bin[ 19499 ], 6, 1 );
    const_str_digest_fa880cdf31b565712bdf5b14c18be107 = UNSTREAM_STRING( &constant_bin[ 19505 ], 175, 0 );
    const_str_plain_pluginOpts = UNSTREAM_STRING( &constant_bin[ 19680 ], 10, 1 );
    const_str_plain_NOSE_DEBUG_LOG = UNSTREAM_STRING( &constant_bin[ 19690 ], 14, 1 );
    const_tuple_0bcbd864cf87e48040420f14b0526312_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_0bcbd864cf87e48040420f14b0526312_tuple, 0, const_str_digest_d577b8f49b7cb9dcdb74f76e27464b19 ); Py_INCREF( const_str_digest_d577b8f49b7cb9dcdb74f76e27464b19 );
    PyTuple_SET_ITEM( const_tuple_0bcbd864cf87e48040420f14b0526312_tuple, 1, const_str_digest_6715a9056eb9d39c934c88edc597abe2 ); Py_INCREF( const_str_digest_6715a9056eb9d39c934c88edc597abe2 );
    const_str_digest_247ff0d2943c7ace596fba542185acf0 = UNSTREAM_STRING( &constant_bin[ 19704 ], 11, 0 );
    PyTuple_SET_ITEM( const_tuple_0bcbd864cf87e48040420f14b0526312_tuple, 2, const_str_digest_247ff0d2943c7ace596fba542185acf0 ); Py_INCREF( const_str_digest_247ff0d2943c7ace596fba542185acf0 );
    const_tuple_str_plain_NOSE_VERBOSE_int_pos_1_tuple = PyTuple_New( 2 );
    const_str_plain_NOSE_VERBOSE = UNSTREAM_STRING( &constant_bin[ 19715 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_VERBOSE_int_pos_1_tuple, 0, const_str_plain_NOSE_VERBOSE ); Py_INCREF( const_str_plain_NOSE_VERBOSE );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_VERBOSE_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_str_digest_1da5c4fd148aea5b06f3548bc70913ce_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_1da5c4fd148aea5b06f3548bc70913ce_tuple, 0, const_str_digest_1da5c4fd148aea5b06f3548bc70913ce ); Py_INCREF( const_str_digest_1da5c4fd148aea5b06f3548bc70913ce );
    const_str_plain_user_config_files = UNSTREAM_STRING( &constant_bin[ 19727 ], 17, 1 );
    const_str_digest_6658eeed126bc5bcea6bb69b5996d9c9 = UNSTREAM_STRING( &constant_bin[ 19744 ], 169, 0 );
    const_dict_9f781a4c9b1d670f8f74b41b3c147717 = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_9f781a4c9b1d670f8f74b41b3c147717, const_str_plain_action, const_str_plain_append );
    const_str_plain_py3where = UNSTREAM_STRING( &constant_bin[ 17950 ], 8, 1 );
    PyDict_SetItem( const_dict_9f781a4c9b1d670f8f74b41b3c147717, const_str_plain_dest, const_str_plain_py3where );
    const_str_plain_PY3WHERE = UNSTREAM_STRING( &constant_bin[ 18580 ], 8, 1 );
    PyDict_SetItem( const_dict_9f781a4c9b1d670f8f74b41b3c147717, const_str_plain_metavar, const_str_plain_PY3WHERE );
    PyDict_SetItem( const_dict_9f781a4c9b1d670f8f74b41b3c147717, const_str_plain_help, const_str_digest_4e6ed2272ede555bb7c8cba9dde4ecfd );
    assert( PyDict_Size( const_dict_9f781a4c9b1d670f8f74b41b3c147717 ) == 4 );
    const_dict_54bce8ffa7787d3ba977c8f010ba1de1 = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_54bce8ffa7787d3ba977c8f010ba1de1, const_str_plain_action, const_str_plain_append );
    PyDict_SetItem( const_dict_54bce8ffa7787d3ba977c8f010ba1de1, const_str_plain_dest, const_str_plain_ignoreFiles );
    const_str_plain_REGEX = UNSTREAM_STRING( &constant_bin[ 19913 ], 5, 1 );
    PyDict_SetItem( const_dict_54bce8ffa7787d3ba977c8f010ba1de1, const_str_plain_metavar, const_str_plain_REGEX );
    PyDict_SetItem( const_dict_54bce8ffa7787d3ba977c8f010ba1de1, const_str_plain_help, const_str_digest_91fbaa197d9d7a1f2b31b42049ebd54c );
    assert( PyDict_Size( const_dict_54bce8ffa7787d3ba977c8f010ba1de1 ) == 4 );
    const_str_plain__parseArgs = UNSTREAM_STRING( &constant_bin[ 19918 ], 10, 1 );
    const_str_plain_parseArgsAndConfigFiles = UNSTREAM_STRING( &constant_bin[ 19928 ], 23, 1 );
    const_str_plain_format_help = UNSTREAM_STRING( &constant_bin[ 19951 ], 11, 1 );
    const_str_digest_ad76124311328c9d7edab0cff095456f = UNSTREAM_STRING( &constant_bin[ 19962 ], 45, 0 );
    const_str_digest_ba12ac0a1b0b778d8e926be39e87e887 = UNSTREAM_STRING( &constant_bin[ 20007 ], 26, 0 );
    const_tuple_str_plain_fileConfig_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fileConfig_tuple, 0, const_str_plain_fileConfig ); Py_INCREF( const_str_plain_fileConfig );
    const_str_digest_7672fa2acb59c4a6c92de94f69138e9f = UNSTREAM_STRING( &constant_bin[ 20033 ], 36, 0 );
    const_str_digest_c5dddd2d5596789811d32abaf18eada5 = UNSTREAM_STRING( &constant_bin[ 20069 ], 2, 0 );
    const_tuple_d64833a062334445a5a6cdcfdde9472a_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d64833a062334445a5a6cdcfdde9472a_tuple, 0, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_d64833a062334445a5a6cdcfdde9472a_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_d64833a062334445a5a6cdcfdde9472a_tuple, 2, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_d64833a062334445a5a6cdcfdde9472a_tuple, 3, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_addHandler = UNSTREAM_STRING( &constant_bin[ 20071 ], 10, 1 );
    const_str_digest_edf4f5f8f495d4eaa0f752c5c4dfe51f = UNSTREAM_STRING( &constant_bin[ 20081 ], 31, 0 );
    const_str_plain_NoSuchOptionError = UNSTREAM_STRING( &constant_bin[ 20112 ], 17, 1 );
    const_dict_eabc5ae09e205b6a867bef8808d820a9 = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_eabc5ae09e205b6a867bef8808d820a9, const_str_plain_action, const_str_plain_store_true );
    PyDict_SetItem( const_dict_eabc5ae09e205b6a867bef8808d820a9, const_str_plain_dest, const_str_plain_showPlugins );
    PyDict_SetItem( const_dict_eabc5ae09e205b6a867bef8808d820a9, const_str_plain_default, Py_False );
    const_str_digest_e0e9e466804c04daa0f495bdfa2f54bd = UNSTREAM_STRING( &constant_bin[ 20129 ], 91, 0 );
    PyDict_SetItem( const_dict_eabc5ae09e205b6a867bef8808d820a9, const_str_plain_help, const_str_digest_e0e9e466804c04daa0f495bdfa2f54bd );
    assert( PyDict_Size( const_dict_eabc5ae09e205b6a867bef8808d820a9 ) == 4 );
    const_str_digest_46dff18d8f410293a00ed0040bafdfa9 = UNSTREAM_STRING( &constant_bin[ 20220 ], 15, 0 );
    const_tuple_str_plain_msg_str_plain_kw_str_plain_error_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_kw_str_plain_error_tuple, 0, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_kw_str_plain_error_tuple, 1, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_kw_str_plain_error_tuple, 2, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    const_dict_5a3ce7842b3e50f4fe7dbf97327553be = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_5a3ce7842b3e50f4fe7dbf97327553be, const_str_plain_action, const_str_plain_append );
    PyDict_SetItem( const_dict_5a3ce7842b3e50f4fe7dbf97327553be, const_str_plain_dest, const_str_plain_include );
    PyDict_SetItem( const_dict_5a3ce7842b3e50f4fe7dbf97327553be, const_str_plain_metavar, const_str_plain_REGEX );
    const_str_digest_7e4cdf4eed2d7035bf3f13ce9c17cc0f = UNSTREAM_STRING( &constant_bin[ 20235 ], 247, 0 );
    PyDict_SetItem( const_dict_5a3ce7842b3e50f4fe7dbf97327553be, const_str_plain_help, const_str_digest_7e4cdf4eed2d7035bf3f13ce9c17cc0f );
    assert( PyDict_Size( const_dict_5a3ce7842b3e50f4fe7dbf97327553be ) == 4 );
    const_str_plain_process = UNSTREAM_STRING( &constant_bin[ 953 ], 7, 1 );
    const_tuple_79d7ef06a7ee1e2d969ad7cc7aaffa22_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_79d7ef06a7ee1e2d969ad7cc7aaffa22_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_79d7ef06a7ee1e2d969ad7cc7aaffa22_tuple, 1, const_str_plain_filenames ); Py_INCREF( const_str_plain_filenames );
    PyTuple_SET_ITEM( const_tuple_79d7ef06a7ee1e2d969ad7cc7aaffa22_tuple, 2, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_79d7ef06a7ee1e2d969ad7cc7aaffa22_tuple, 3, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_79d7ef06a7ee1e2d969ad7cc7aaffa22_tuple, 4, const_str_plain_cfg ); Py_INCREF( const_str_plain_cfg );
    PyTuple_SET_ITEM( const_tuple_79d7ef06a7ee1e2d969ad7cc7aaffa22_tuple, 5, const_str_plain_exc ); Py_INCREF( const_str_plain_exc );
    const_str_digest_5a7acf5b3bf49def57e87cf8f93e6c71 = UNSTREAM_STRING( &constant_bin[ 20482 ], 11, 0 );
    const_str_digest_2d150b08f849ff6ea8376ad2889e2026 = UNSTREAM_STRING( &constant_bin[ 20493 ], 51, 0 );
    const_tuple_str_plain_NOSE_WHERE_none_tuple = PyTuple_New( 2 );
    const_str_plain_NOSE_WHERE = UNSTREAM_STRING( &constant_bin[ 20544 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_WHERE_none_tuple, 0, const_str_plain_NOSE_WHERE ); Py_INCREF( const_str_plain_NOSE_WHERE );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_WHERE_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_1_str_plain_T_str_plain_TRUE_str_plain_ON_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_1_str_plain_T_str_plain_TRUE_str_plain_ON_tuple, 0, const_str_plain_1 ); Py_INCREF( const_str_plain_1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_1_str_plain_T_str_plain_TRUE_str_plain_ON_tuple, 1, const_str_plain_T ); Py_INCREF( const_str_plain_T );
    PyTuple_SET_ITEM( const_tuple_str_plain_1_str_plain_T_str_plain_TRUE_str_plain_ON_tuple, 2, const_str_plain_TRUE ); Py_INCREF( const_str_plain_TRUE );
    const_str_plain_ON = UNSTREAM_STRING( &constant_bin[ 20554 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_1_str_plain_T_str_plain_TRUE_str_plain_ON_tuple, 3, const_str_plain_ON ); Py_INCREF( const_str_plain_ON );
    const_dict_de43cf2019e151511363085f9e8bbc41 = _PyDict_NewPresized( 3 );
    const_str_plain_store_false = UNSTREAM_STRING( &constant_bin[ 20556 ], 11, 1 );
    PyDict_SetItem( const_dict_de43cf2019e151511363085f9e8bbc41, const_str_plain_action, const_str_plain_store_false );
    PyDict_SetItem( const_dict_de43cf2019e151511363085f9e8bbc41, const_str_plain_dest, const_str_plain_includeExe );
    const_str_digest_afea5b6dbbe565fa76a13fa4a978056d = UNSTREAM_STRING( &constant_bin[ 20567 ], 111, 0 );
    PyDict_SetItem( const_dict_de43cf2019e151511363085f9e8bbc41, const_str_plain_help, const_str_digest_afea5b6dbbe565fa76a13fa4a978056d );
    assert( PyDict_Size( const_dict_de43cf2019e151511363085f9e8bbc41 ) == 3 );
    const_tuple_str_plain_self_str_plain_kw_str_plain_env_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kw_str_plain_env_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kw_str_plain_env_tuple, 1, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kw_str_plain_env_tuple, 2, const_str_plain_env ); Py_INCREF( const_str_plain_env );
    const_tuple_0db0b925d3278094b2f40de26d6f9922_tuple = PyTuple_New( 2 );
    const_str_digest_75c1113d1333e3f18890bd794bf85661 = UNSTREAM_STRING( &constant_bin[ 18275 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_0db0b925d3278094b2f40de26d6f9922_tuple, 0, const_str_digest_75c1113d1333e3f18890bd794bf85661 ); Py_INCREF( const_str_digest_75c1113d1333e3f18890bd794bf85661 );
    const_str_digest_e2b2a911408ce3c18d41f19680e44a70 = UNSTREAM_STRING( &constant_bin[ 20678 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_0db0b925d3278094b2f40de26d6f9922_tuple, 1, const_str_digest_e2b2a911408ce3c18d41f19680e44a70 ); Py_INCREF( const_str_digest_e2b2a911408ce3c18d41f19680e44a70 );
    const_str_plain_NOSE_DEBUG = UNSTREAM_STRING( &constant_bin[ 19690 ], 10, 1 );
    const_str_plain_NoOptions = UNSTREAM_STRING( &constant_bin[ 20687 ], 9, 1 );
    const_str_plain_RawConfigParser = UNSTREAM_STRING( &constant_bin[ 20696 ], 15, 1 );
    const_str_digest_e09aae8d634e626fc756d84c117c1722 = UNSTREAM_STRING( &constant_bin[ 20711 ], 8, 0 );
    const_str_plain_OptionValueError = UNSTREAM_STRING( &constant_bin[ 20719 ], 16, 1 );
    const_str_plain_readfp = UNSTREAM_STRING( &constant_bin[ 20735 ], 6, 1 );
    const_tuple_str_digest_eb2a748be8fdd84357bb51822fa7dd48_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_eb2a748be8fdd84357bb51822fa7dd48_tuple, 0, const_str_digest_eb2a748be8fdd84357bb51822fa7dd48 ); Py_INCREF( const_str_digest_eb2a748be8fdd84357bb51822fa7dd48 );
    const_tuple_str_digest_0754cec1ad269609cd5479d867533609_tuple = PyTuple_New( 1 );
    const_str_digest_0754cec1ad269609cd5479d867533609 = UNSTREAM_STRING( &constant_bin[ 20741 ], 7, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_0754cec1ad269609cd5479d867533609_tuple, 0, const_str_digest_0754cec1ad269609cd5479d867533609 ); Py_INCREF( const_str_digest_0754cec1ad269609cd5479d867533609 );
    const_str_digest_19196f7bbb2b7faebb0f802afac42301 = UNSTREAM_STRING( &constant_bin[ 20748 ], 21, 0 );
    const_str_digest_a56522bc05b35d6098aafc8d6499af6a = UNSTREAM_STRING( &constant_bin[ 20769 ], 45, 0 );
    const_str_plain__default = UNSTREAM_STRING( &constant_bin[ 20814 ], 8, 1 );
    const_str_digest_472410cfdb82a12785cd9799b772b75f = UNSTREAM_STRING( &constant_bin[ 20822 ], 16, 0 );
    const_str_plain_loggingConfig = UNSTREAM_STRING( &constant_bin[ 20838 ], 13, 1 );
    const_str_digest_4971a67e500b768726898a4e98c7eda5 = UNSTREAM_STRING( &constant_bin[ 20851 ], 50, 0 );
    const_str_digest_c40da24b9fb2f7d79a4e07fe6c8f5b08 = UNSTREAM_STRING( &constant_bin[ 20901 ], 5, 0 );
    const_str_plain_runOnInit = UNSTREAM_STRING( &constant_bin[ 20906 ], 9, 1 );
    const_str_plain_Error = UNSTREAM_STRING( &constant_bin[ 13741 ], 5, 1 );
    const_str_digest_f8335a2416157008868f35eef6407f96 = UNSTREAM_STRING( &constant_bin[ 20915 ], 53, 0 );
    const_dict_04428d86bf2c537bffda642e19f6b524 = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_04428d86bf2c537bffda642e19f6b524, const_str_plain_action, const_str_plain_append );
    PyDict_SetItem( const_dict_04428d86bf2c537bffda642e19f6b524, const_str_plain_dest, const_str_plain_where );
    const_str_plain_WHERE = UNSTREAM_STRING( &constant_bin[ 18583 ], 5, 1 );
    PyDict_SetItem( const_dict_04428d86bf2c537bffda642e19f6b524, const_str_plain_metavar, const_str_plain_WHERE );
    const_str_digest_9f75b52e176f2b904bbcdea1aa34477c = UNSTREAM_STRING( &constant_bin[ 20968 ], 264, 0 );
    PyDict_SetItem( const_dict_04428d86bf2c537bffda642e19f6b524, const_str_plain_help, const_str_digest_9f75b52e176f2b904bbcdea1aa34477c );
    assert( PyDict_Size( const_dict_04428d86bf2c537bffda642e19f6b524 ) == 4 );
    const_tuple_dc13640dc65775ac0160ac1b58bd69c9_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_dc13640dc65775ac0160ac1b58bd69c9_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_dc13640dc65775ac0160ac1b58bd69c9_tuple, 1, const_str_plain_where ); Py_INCREF( const_str_plain_where );
    PyTuple_SET_ITEM( const_tuple_dc13640dc65775ac0160ac1b58bd69c9_tuple, 2, const_str_plain_add_path ); Py_INCREF( const_str_plain_add_path );
    PyTuple_SET_ITEM( const_tuple_dc13640dc65775ac0160ac1b58bd69c9_tuple, 3, const_str_plain_warned ); Py_INCREF( const_str_plain_warned );
    PyTuple_SET_ITEM( const_tuple_dc13640dc65775ac0160ac1b58bd69c9_tuple, 4, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_dc13640dc65775ac0160ac1b58bd69c9_tuple, 5, const_str_plain_abs_path ); Py_INCREF( const_str_plain_abs_path );
    const_tuple_str_plain_self_str_plain_d_str_plain_k_str_plain_keys_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_d_str_plain_k_str_plain_keys_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_d_str_plain_k_str_plain_keys_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_d_str_plain_k_str_plain_keys_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_d_str_plain_k_str_plain_keys_tuple, 3, const_str_plain_keys ); Py_INCREF( const_str_plain_keys );
    const_str_plain_parserClass = UNSTREAM_STRING( &constant_bin[ 21232 ], 11, 1 );
    const_str_digest_73567074a2b202b9dcc688d30c50d278 = UNSTREAM_STRING( &constant_bin[ 21243 ], 6, 0 );
    const_tuple_84c2ba9356ca721c9eff7bd0b9cc6bb7_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_84c2ba9356ca721c9eff7bd0b9cc6bb7_tuple, 0, const_str_digest_04be2c7dac29686dbbb0a07c12d2024f ); Py_INCREF( const_str_digest_04be2c7dac29686dbbb0a07c12d2024f );
    const_str_digest_209c3a8e98a3696dcd40adff3a58f529 = UNSTREAM_STRING( &constant_bin[ 21249 ], 12, 0 );
    PyTuple_SET_ITEM( const_tuple_84c2ba9356ca721c9eff7bd0b9cc6bb7_tuple, 1, const_str_digest_209c3a8e98a3696dcd40adff3a58f529 ); Py_INCREF( const_str_digest_209c3a8e98a3696dcd40adff3a58f529 );
    const_dict_db5d7329ac2b5746eee0a9ca8e2c9f4e = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_db5d7329ac2b5746eee0a9ca8e2c9f4e, const_str_plain_action, const_str_plain_append );
    PyDict_SetItem( const_dict_db5d7329ac2b5746eee0a9ca8e2c9f4e, const_str_plain_dest, const_str_plain_exclude );
    PyDict_SetItem( const_dict_db5d7329ac2b5746eee0a9ca8e2c9f4e, const_str_plain_metavar, const_str_plain_REGEX );
    const_str_digest_dfa7168363a6e4048f2d00fcf1bc621c = UNSTREAM_STRING( &constant_bin[ 21261 ], 60, 0 );
    PyDict_SetItem( const_dict_db5d7329ac2b5746eee0a9ca8e2c9f4e, const_str_plain_help, const_str_digest_dfa7168363a6e4048f2d00fcf1bc621c );
    assert( PyDict_Size( const_dict_db5d7329ac2b5746eee0a9ca8e2c9f4e ) == 4 );
    const_tuple_1e27cba3d2448d85ffff055e6900a6b7_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_1e27cba3d2448d85ffff055e6900a6b7_tuple, 0, const_str_digest_c5dddd2d5596789811d32abaf18eada5 ); Py_INCREF( const_str_digest_c5dddd2d5596789811d32abaf18eada5 );
    PyTuple_SET_ITEM( const_tuple_1e27cba3d2448d85ffff055e6900a6b7_tuple, 1, const_str_digest_73567074a2b202b9dcc688d30c50d278 ); Py_INCREF( const_str_digest_73567074a2b202b9dcc688d30c50d278 );
    const_tuple_0f435e556deced2a12ebeea60b148253_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_0f435e556deced2a12ebeea60b148253_tuple, 0, const_str_digest_571eccf4664cb01ecea1867fcbf66f8d ); Py_INCREF( const_str_digest_571eccf4664cb01ecea1867fcbf66f8d );
    PyTuple_SET_ITEM( const_tuple_0f435e556deced2a12ebeea60b148253_tuple, 1, const_str_digest_836e3f4ad9298076a8cc770f661569c2 ); Py_INCREF( const_str_digest_836e3f4ad9298076a8cc770f661569c2 );
    const_str_plain_FILE = UNSTREAM_STRING( &constant_bin[ 18080 ], 4, 1 );
    const_str_digest_1a92595c7361d8f0f70eb204001b9699 = UNSTREAM_STRING( &constant_bin[ 21321 ], 270, 0 );
    const_tuple_b7127426b6dc1183449e630bb2487c88_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b7127426b6dc1183449e630bb2487c88_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b7127426b6dc1183449e630bb2487c88_tuple, 1, const_str_plain_argv ); Py_INCREF( const_str_plain_argv );
    PyTuple_SET_ITEM( const_tuple_b7127426b6dc1183449e630bb2487c88_tuple, 2, const_str_plain_cfg_files ); Py_INCREF( const_str_plain_cfg_files );
    PyTuple_SET_ITEM( const_tuple_b7127426b6dc1183449e630bb2487c88_tuple, 3, const_str_plain_warn_sometimes ); Py_INCREF( const_str_plain_warn_sometimes );
    PyTuple_SET_ITEM( const_tuple_b7127426b6dc1183449e630bb2487c88_tuple, 4, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    const_str_digest_de63141d92b102cd41958fa85e364bb1 = UNSTREAM_STRING( &constant_bin[ 21591 ], 9, 0 );
    const_str_digest_2ce7afd8717ea7a575892ba920237c12 = UNSTREAM_STRING( &constant_bin[ 21600 ], 192, 0 );
    const_str_plain__readConfiguration = UNSTREAM_STRING( &constant_bin[ 21792 ], 18, 1 );
    const_list_bf9914a5a55a3f1809365a486b9461cf_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_bf9914a5a55a3f1809365a486b9461cf_list, 0, const_str_digest_de63141d92b102cd41958fa85e364bb1 ); Py_INCREF( const_str_digest_de63141d92b102cd41958fa85e364bb1 );
    const_str_digest_11999dc00a131a88f0488f806407972e = UNSTREAM_STRING( &constant_bin[ 21810 ], 10, 0 );
    PyList_SET_ITEM( const_list_bf9914a5a55a3f1809365a486b9461cf_list, 1, const_str_digest_11999dc00a131a88f0488f806407972e ); Py_INCREF( const_str_digest_11999dc00a131a88f0488f806407972e );
    const_str_digest_faf4aa980e8a055cb194555d0338737c = UNSTREAM_STRING( &constant_bin[ 21820 ], 19, 0 );
    const_str_plain_debugLog = UNSTREAM_STRING( &constant_bin[ 19259 ], 8, 1 );
    const_str_plain_FileHandler = UNSTREAM_STRING( &constant_bin[ 21839 ], 11, 1 );
    const_str_plain_ConfigError = UNSTREAM_STRING( &constant_bin[ 21850 ], 11, 1 );
    const_str_plain_option_blacklist = UNSTREAM_STRING( &constant_bin[ 21861 ], 16, 1 );
    const_tuple_str_plain_absdir_str_plain_tolist_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_absdir_str_plain_tolist_tuple, 0, const_str_plain_absdir ); Py_INCREF( const_str_plain_absdir );
    PyTuple_SET_ITEM( const_tuple_str_plain_absdir_str_plain_tolist_tuple, 1, const_str_plain_tolist ); Py_INCREF( const_str_plain_tolist );
    const_tuple_str_digest_205ce5a3ead478d07452774b9e5f1cdf_tuple = PyTuple_New( 1 );
    const_str_digest_205ce5a3ead478d07452774b9e5f1cdf = UNSTREAM_STRING( &constant_bin[ 21877 ], 7, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_205ce5a3ead478d07452774b9e5f1cdf_tuple, 0, const_str_digest_205ce5a3ead478d07452774b9e5f1cdf ); Py_INCREF( const_str_digest_205ce5a3ead478d07452774b9e5f1cdf );
    const_str_digest_4081419cdf3d6da0841350ddcee14bd9 = UNSTREAM_STRING( &constant_bin[ 21884 ], 27, 0 );
    const_str_plain_opt_str = UNSTREAM_STRING( &constant_bin[ 21911 ], 7, 1 );
    const_str_plain_baseFilename = UNSTREAM_STRING( &constant_bin[ 21918 ], 12, 1 );
    const_tuple_f7ca98e1bd3012e1fbf3fafe4cfded04_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_f7ca98e1bd3012e1fbf3fafe4cfded04_tuple, 0, const_str_digest_27ac0fb8bf72e3cca344a4821e6264e3 ); Py_INCREF( const_str_digest_27ac0fb8bf72e3cca344a4821e6264e3 );
    PyTuple_SET_ITEM( const_tuple_f7ca98e1bd3012e1fbf3fafe4cfded04_tuple, 1, const_str_digest_472410cfdb82a12785cd9799b772b75f ); Py_INCREF( const_str_digest_472410cfdb82a12785cd9799b772b75f );
    const_str_digest_f8fab35774214a008f88c48e3ce6506c = UNSTREAM_STRING( &constant_bin[ 21930 ], 14, 0 );
    PyTuple_SET_ITEM( const_tuple_f7ca98e1bd3012e1fbf3fafe4cfded04_tuple, 2, const_str_digest_f8fab35774214a008f88c48e3ce6506c ); Py_INCREF( const_str_digest_f8fab35774214a008f88c48e3ce6506c );
    const_str_digest_dfaa049654d08ecb0c11950216676a17 = UNSTREAM_STRING( &constant_bin[ 21944 ], 47, 0 );
    const_dict_ed3aad069bb7e0f8bc588f5557c723fb = _PyDict_NewPresized( 4 );
    const_str_plain_store_const = UNSTREAM_STRING( &constant_bin[ 21991 ], 11, 1 );
    PyDict_SetItem( const_dict_ed3aad069bb7e0f8bc588f5557c723fb, const_str_plain_action, const_str_plain_store_const );
    PyDict_SetItem( const_dict_ed3aad069bb7e0f8bc588f5557c723fb, const_str_plain_dest, const_str_plain_verbosity );
    const_str_plain_const = UNSTREAM_STRING( &constant_bin[ 13339 ], 5, 1 );
    PyDict_SetItem( const_dict_ed3aad069bb7e0f8bc588f5557c723fb, const_str_plain_const, const_int_0 );
    PyDict_SetItem( const_dict_ed3aad069bb7e0f8bc588f5557c723fb, const_str_plain_help, const_str_digest_46dff18d8f410293a00ed0040bafdfa9 );
    assert( PyDict_Size( const_dict_ed3aad069bb7e0f8bc588f5557c723fb ) == 4 );
    const_dict_0b1b7bd353efbaadab6d6121a908c394 = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_0b1b7bd353efbaadab6d6121a908c394, const_str_plain_action, const_str_plain_store_true );
    PyDict_SetItem( const_dict_0b1b7bd353efbaadab6d6121a908c394, const_str_plain_dest, const_str_plain_version );
    PyDict_SetItem( const_dict_0b1b7bd353efbaadab6d6121a908c394, const_str_plain_default, Py_False );
    PyDict_SetItem( const_dict_0b1b7bd353efbaadab6d6121a908c394, const_str_plain_help, const_str_digest_5a22ce782d8dbd96da9df9440fd1f7fe );
    assert( PyDict_Size( const_dict_0b1b7bd353efbaadab6d6121a908c394 ) == 4 );
    const_tuple_str_digest_c08fd2a2c2e3c7f92c095d89a635364a_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c08fd2a2c2e3c7f92c095d89a635364a_tuple, 0, const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a ); Py_INCREF( const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a );
    const_str_digest_47a765bc7cff965be8de419bdba1fa73 = UNSTREAM_STRING( &constant_bin[ 22002 ], 7, 0 );
    const_str_plain_OFF = UNSTREAM_STRING( &constant_bin[ 22009 ], 3, 1 );
    const_str_plain_dummy_parser = UNSTREAM_STRING( &constant_bin[ 22012 ], 12, 1 );
    const_str_digest_207a5177d480419aff0f9b9adb058ffa = UNSTREAM_STRING( &constant_bin[ 22024 ], 40, 0 );
    const_tuple_46e30b5030a8d486c63aa88ab509b6ea_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_46e30b5030a8d486c63aa88ab509b6ea_tuple, 0, const_str_digest_8b4c8c81913e132a2fb432c041f3150f ); Py_INCREF( const_str_digest_8b4c8c81913e132a2fb432c041f3150f );
    PyTuple_SET_ITEM( const_tuple_46e30b5030a8d486c63aa88ab509b6ea_tuple, 1, const_str_digest_e09aae8d634e626fc756d84c117c1722 ); Py_INCREF( const_str_digest_e09aae8d634e626fc756d84c117c1722 );
    const_tuple_14ee53f6084dc980ddded2b913780fe5_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_14ee53f6084dc980ddded2b913780fe5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_14ee53f6084dc980ddded2b913780fe5_tuple, 1, const_str_plain_cfg ); Py_INCREF( const_str_plain_cfg );
    PyTuple_SET_ITEM( const_tuple_14ee53f6084dc980ddded2b913780fe5_tuple, 2, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_14ee53f6084dc980ddded2b913780fe5_tuple, 3, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_14ee53f6084dc980ddded2b913780fe5_tuple, 4, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_14ee53f6084dc980ddded2b913780fe5_tuple, 5, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_b73417c3a0f44f8b0832c2d224ed4aa5 = UNSTREAM_STRING( &constant_bin[ 22064 ], 10, 0 );
    const_tuple_str_plain_self_str_plain_doc_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_doc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_doc_tuple, 1, const_str_plain_doc ); Py_INCREF( const_str_plain_doc );
    const_tuple_str_plain_NOSE_DEBUG_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_DEBUG_tuple, 0, const_str_plain_NOSE_DEBUG ); Py_INCREF( const_str_plain_NOSE_DEBUG );
    const_tuple_str_plain_NOSE_DEBUG_LOG_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_DEBUG_LOG_tuple, 0, const_str_plain_NOSE_DEBUG_LOG ); Py_INCREF( const_str_plain_NOSE_DEBUG_LOG );
    const_str_plain__orig = UNSTREAM_STRING( &constant_bin[ 22074 ], 5, 1 );
    const_tuple_str_plain_plugins_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_plugins_tuple, 0, const_str_plain_plugins ); Py_INCREF( const_str_plain_plugins );
    const_str_plain_configureLogging = UNSTREAM_STRING( &constant_bin[ 22079 ], 16, 1 );
    const_tuple_str_plain_warn_str_plain_filterwarnings_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_warn_str_plain_filterwarnings_tuple, 0, const_str_plain_warn ); Py_INCREF( const_str_plain_warn );
    PyTuple_SET_ITEM( const_tuple_str_plain_warn_str_plain_filterwarnings_tuple, 1, const_str_plain_filterwarnings ); Py_INCREF( const_str_plain_filterwarnings );
    const_str_digest_2621efeb8ad198917a5c1bcbff6364f1 = UNSTREAM_STRING( &constant_bin[ 22095 ], 46, 0 );
    const_str_plain_NOSE_INCLUDE = UNSTREAM_STRING( &constant_bin[ 19471 ], 12, 1 );
    const_str_digest_d5596ff177ba20582eec6fc06eb451c7 = UNSTREAM_STRING( &constant_bin[ 22141 ], 23, 0 );
    const_str_plain___getnewargs__ = UNSTREAM_STRING( &constant_bin[ 22164 ], 14, 1 );
    const_str_plain_VERBOSITY = UNSTREAM_STRING( &constant_bin[ 22178 ], 9, 1 );
    const_str_plain_testMatchPat = UNSTREAM_STRING( &constant_bin[ 22187 ], 12, 1 );
    const_tuple_9a14ac09d832b88cf7b0bfec961b3286_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_9a14ac09d832b88cf7b0bfec961b3286_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_config_files = UNSTREAM_STRING( &constant_bin[ 19732 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_9a14ac09d832b88cf7b0bfec961b3286_tuple, 1, const_str_plain_config_files ); Py_INCREF( const_str_plain_config_files );
    PyTuple_SET_ITEM( const_tuple_9a14ac09d832b88cf7b0bfec961b3286_tuple, 2, const_str_plain_filename_or_filenames ); Py_INCREF( const_str_plain_filename_or_filenames );
    PyTuple_SET_ITEM( const_tuple_9a14ac09d832b88cf7b0bfec961b3286_tuple, 3, const_str_plain_filenames ); Py_INCREF( const_str_plain_filenames );
    PyTuple_SET_ITEM( const_tuple_9a14ac09d832b88cf7b0bfec961b3286_tuple, 4, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_9a14ac09d832b88cf7b0bfec961b3286_tuple, 5, const_str_plain_fh ); Py_INCREF( const_str_plain_fh );
    const_tuple_str_plain_win32_str_plain_cli_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_win32_str_plain_cli_tuple, 0, const_str_plain_win32 ); Py_INCREF( const_str_plain_win32 );
    PyTuple_SET_ITEM( const_tuple_str_plain_win32_str_plain_cli_tuple, 1, const_str_plain_cli ); Py_INCREF( const_str_plain_cli );
    const_str_plain_logStream = UNSTREAM_STRING( &constant_bin[ 22199 ], 9, 1 );
    const_str_plain__error = UNSTREAM_STRING( &constant_bin[ 6720 ], 6, 1 );
    const_dict_7d5728b6635b3689b1ea971cfa72798b = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_7d5728b6635b3689b1ea971cfa72798b, const_str_plain_action, const_str_plain_store_true );
    PyDict_SetItem( const_dict_7d5728b6635b3689b1ea971cfa72798b, const_str_plain_default, Py_False );
    PyDict_SetItem( const_dict_7d5728b6635b3689b1ea971cfa72798b, const_str_plain_dest, const_str_plain_firstPackageWins );
    PyDict_SetItem( const_dict_7d5728b6635b3689b1ea971cfa72798b, const_str_plain_help, const_str_digest_6658eeed126bc5bcea6bb69b5996d9c9 );
    assert( PyDict_Size( const_dict_7d5728b6635b3689b1ea971cfa72798b ) == 4 );
    const_str_plain_ConfiguredDefaultsOptionParser = UNSTREAM_STRING( &constant_bin[ 22208 ], 30, 1 );
    const_str_digest_b05a584dd45626c486fd086a6593c6b3 = UNSTREAM_STRING( &constant_bin[ 22238 ], 44, 0 );
    const_str_digest_bd5f8fa74dd151fe38cac8082249bc5a = UNSTREAM_STRING( &constant_bin[ 22282 ], 42, 0 );
    const_tuple_str_digest_f5bff6b10094bf122ddfd4736bd3472b_tuple = PyTuple_New( 1 );
    const_str_digest_f5bff6b10094bf122ddfd4736bd3472b = UNSTREAM_STRING( &constant_bin[ 22324 ], 20, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_f5bff6b10094bf122ddfd4736bd3472b_tuple, 0, const_str_digest_f5bff6b10094bf122ddfd4736bd3472b ); Py_INCREF( const_str_digest_f5bff6b10094bf122ddfd4736bd3472b );
    const_tuple_67c940dc01e65e2af918d920f31d4e64_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_67c940dc01e65e2af918d920f31d4e64_tuple, 0, const_str_digest_27a7628ab85cd892afa96bd047d5a375 ); Py_INCREF( const_str_digest_27a7628ab85cd892afa96bd047d5a375 );
    PyTuple_SET_ITEM( const_tuple_67c940dc01e65e2af918d920f31d4e64_tuple, 1, const_str_digest_47a765bc7cff965be8de419bdba1fa73 ); Py_INCREF( const_str_digest_47a765bc7cff965be8de419bdba1fa73 );
    const_str_digest_6c10382c0ea0df4dc0af0d724adc3de1 = UNSTREAM_STRING( &constant_bin[ 22344 ], 67, 0 );
    const_str_plain_NOSE_INCLUDE_EXE = UNSTREAM_STRING( &constant_bin[ 19471 ], 16, 1 );
    const_str_plain__bool = UNSTREAM_STRING( &constant_bin[ 5781 ], 5, 1 );
    const_tuple_str_plain_NoPlugins_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NoPlugins_tuple, 0, const_str_plain_NoPlugins ); Py_INCREF( const_str_plain_NoPlugins );
    const_str_plain__applyConfigurationToValues = UNSTREAM_STRING( &constant_bin[ 22411 ], 27, 1 );
    const_str_plain_exe_allowed_platforms = UNSTREAM_STRING( &constant_bin[ 22438 ], 21, 1 );
    const_tuple_14f12f91962964aab935b74ab33cb503_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_14f12f91962964aab935b74ab33cb503_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_14f12f91962964aab935b74ab33cb503_tuple, 1, const_str_plain_state ); Py_INCREF( const_str_plain_state );
    PyTuple_SET_ITEM( const_tuple_14f12f91962964aab935b74ab33cb503_tuple, 2, const_str_plain_plugincls ); Py_INCREF( const_str_plain_plugincls );
    PyTuple_SET_ITEM( const_tuple_14f12f91962964aab935b74ab33cb503_tuple, 3, const_str_plain_dummy_parser ); Py_INCREF( const_str_plain_dummy_parser );
    const_str_plain_NOSE_TESTMATCH = UNSTREAM_STRING( &constant_bin[ 19187 ], 14, 1 );
    const_dict_6c64884cd19a8b9a401ecd3366b98b56 = _PyDict_NewPresized( 5 );
    PyDict_SetItem( const_dict_6c64884cd19a8b9a401ecd3366b98b56, const_str_plain_action, const_str_plain_store );
    PyDict_SetItem( const_dict_6c64884cd19a8b9a401ecd3366b98b56, const_str_plain_dest, const_str_plain_verbosity );
    PyDict_SetItem( const_dict_6c64884cd19a8b9a401ecd3366b98b56, const_str_plain_type, const_str_plain_int );
    PyDict_SetItem( const_dict_6c64884cd19a8b9a401ecd3366b98b56, const_str_plain_metavar, const_str_plain_VERBOSITY );
    PyDict_SetItem( const_dict_6c64884cd19a8b9a401ecd3366b98b56, const_str_plain_help, const_str_digest_2621efeb8ad198917a5c1bcbff6364f1 );
    assert( PyDict_Size( const_dict_6c64884cd19a8b9a401ecd3366b98b56 ) == 5 );
    const_str_digest_acfe98b39c3b98536f4cb8bd4b412aac = UNSTREAM_STRING( &constant_bin[ 22459 ], 1348, 0 );
    const_tuple_bff6350ecf8e0b627a84689c20888b9d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_bff6350ecf8e0b627a84689c20888b9d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bff6350ecf8e0b627a84689c20888b9d_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_bff6350ecf8e0b627a84689c20888b9d_tuple, 2, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_bff6350ecf8e0b627a84689c20888b9d_tuple, 3, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_bff6350ecf8e0b627a84689c20888b9d_tuple, 4, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    PyTuple_SET_ITEM( const_tuple_bff6350ecf8e0b627a84689c20888b9d_tuple, 5, const_str_plain_opt_str ); Py_INCREF( const_str_plain_opt_str );
    PyTuple_SET_ITEM( const_tuple_bff6350ecf8e0b627a84689c20888b9d_tuple, 6, const_str_plain_option ); Py_INCREF( const_str_plain_option );
    const_tuple_str_digest_84742fd914746eb701afeffc11eaf00f_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_84742fd914746eb701afeffc11eaf00f_tuple, 0, const_str_digest_84742fd914746eb701afeffc11eaf00f ); Py_INCREF( const_str_digest_84742fd914746eb701afeffc11eaf00f );
    const_str_digest_8d881dcdb7033101c8401e951d7ddbb8 = UNSTREAM_STRING( &constant_bin[ 23807 ], 73, 0 );
    const_tuple_42106a19a652df870c29fb75e6bd56f0_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_42106a19a652df870c29fb75e6bd56f0_tuple, 0, const_str_plain_1 ); Py_INCREF( const_str_plain_1 );
    PyTuple_SET_ITEM( const_tuple_42106a19a652df870c29fb75e6bd56f0_tuple, 1, const_str_plain_0 ); Py_INCREF( const_str_plain_0 );
    PyTuple_SET_ITEM( const_tuple_42106a19a652df870c29fb75e6bd56f0_tuple, 2, const_str_plain_F ); Py_INCREF( const_str_plain_F );
    PyTuple_SET_ITEM( const_tuple_42106a19a652df870c29fb75e6bd56f0_tuple, 3, const_str_plain_T ); Py_INCREF( const_str_plain_T );
    PyTuple_SET_ITEM( const_tuple_42106a19a652df870c29fb75e6bd56f0_tuple, 4, const_str_plain_TRUE ); Py_INCREF( const_str_plain_TRUE );
    PyTuple_SET_ITEM( const_tuple_42106a19a652df870c29fb75e6bd56f0_tuple, 5, const_str_plain_FALSE ); Py_INCREF( const_str_plain_FALSE );
    PyTuple_SET_ITEM( const_tuple_42106a19a652df870c29fb75e6bd56f0_tuple, 6, const_str_plain_ON ); Py_INCREF( const_str_plain_ON );
    PyTuple_SET_ITEM( const_tuple_42106a19a652df870c29fb75e6bd56f0_tuple, 7, const_str_plain_OFF ); Py_INCREF( const_str_plain_OFF );
    const_str_digest_482a234752dc81eae41b450d41e71c04 = UNSTREAM_STRING( &constant_bin[ 23880 ], 68, 0 );
    const_str_plain_Formatter = UNSTREAM_STRING( &constant_bin[ 23948 ], 9, 1 );
    const_list_str_plain_help_str_plain_verbose_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_help_str_plain_verbose_list, 0, const_str_plain_help ); Py_INCREF( const_str_plain_help );
    PyList_SET_ITEM( const_list_str_plain_help_str_plain_verbose_list, 1, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    const_str_plain_NOSE_STOP = UNSTREAM_STRING( &constant_bin[ 23596 ], 9, 1 );
    const_str_plain__readFromFileObject = UNSTREAM_STRING( &constant_bin[ 23957 ], 19, 1 );
    const_tuple_4892827267518af8d49592eedc550406_tuple = PyTuple_New( 2 );
    const_str_digest_b041246024923f1165c753b18abd73f2 = UNSTREAM_STRING( &constant_bin[ 23976 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_4892827267518af8d49592eedc550406_tuple, 0, const_str_digest_b041246024923f1165c753b18abd73f2 ); Py_INCREF( const_str_digest_b041246024923f1165c753b18abd73f2 );
    PyTuple_SET_ITEM( const_tuple_4892827267518af8d49592eedc550406_tuple, 1, const_str_digest_4298185740dd13ed26c899ea60ccf7b2 ); Py_INCREF( const_str_digest_4298185740dd13ed26c899ea60ccf7b2 );
    const_str_plain_get_default_values = UNSTREAM_STRING( &constant_bin[ 23978 ], 18, 1 );
    const_tuple_str_plain_self_str_plain_doc_str_plain_env_str_plain_parser_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_doc_str_plain_env_str_plain_parser_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_doc_str_plain_env_str_plain_parser_tuple, 1, const_str_plain_doc ); Py_INCREF( const_str_plain_doc );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_doc_str_plain_env_str_plain_parser_tuple, 2, const_str_plain_env ); Py_INCREF( const_str_plain_env );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_doc_str_plain_env_str_plain_parser_tuple, 3, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    const_dict_4961660bac420c2cb880519351ededfc = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_4961660bac420c2cb880519351ededfc, const_str_plain_action, const_str_plain_store_false );
    PyDict_SetItem( const_dict_4961660bac420c2cb880519351ededfc, const_str_plain_default, Py_True );
    PyDict_SetItem( const_dict_4961660bac420c2cb880519351ededfc, const_str_plain_dest, const_str_plain_byteCompile );
    const_str_digest_d9a7fcb464771c0e05009cf575be57c2 = UNSTREAM_STRING( &constant_bin[ 23996 ], 105, 0 );
    PyDict_SetItem( const_dict_4961660bac420c2cb880519351ededfc, const_str_plain_help, const_str_digest_d9a7fcb464771c0e05009cf575be57c2 );
    assert( PyDict_Size( const_dict_4961660bac420c2cb880519351ededfc ) == 4 );
    const_tuple_766ff684ea9e90c2f53d01a89d8d7055_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_766ff684ea9e90c2f53d01a89d8d7055_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_766ff684ea9e90c2f53d01a89d8d7055_tuple, 1, const_str_plain_argv ); Py_INCREF( const_str_plain_argv );
    PyTuple_SET_ITEM( const_tuple_766ff684ea9e90c2f53d01a89d8d7055_tuple, 2, const_str_plain_doc ); Py_INCREF( const_str_plain_doc );
    PyTuple_SET_ITEM( const_tuple_766ff684ea9e90c2f53d01a89d8d7055_tuple, 3, const_str_plain_env ); Py_INCREF( const_str_plain_env );
    PyTuple_SET_ITEM( const_tuple_766ff684ea9e90c2f53d01a89d8d7055_tuple, 4, const_str_plain_cfg_files ); Py_INCREF( const_str_plain_cfg_files );
    PyTuple_SET_ITEM( const_tuple_766ff684ea9e90c2f53d01a89d8d7055_tuple, 5, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_766ff684ea9e90c2f53d01a89d8d7055_tuple, 6, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    const_tuple_1c7880cf6402d8d11f95934f3d903937_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_1c7880cf6402d8d11f95934f3d903937_tuple, 0, const_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc ); Py_INCREF( const_str_digest_c2f14c10f6977a3d227a6c2b34ac61bc );
    PyTuple_SET_ITEM( const_tuple_1c7880cf6402d8d11f95934f3d903937_tuple, 1, const_str_digest_929845dec7a1cd690fd2a7adb2e935eb ); Py_INCREF( const_str_digest_929845dec7a1cd690fd2a7adb2e935eb );
    const_str_plain_StreamHandler = UNSTREAM_STRING( &constant_bin[ 24101 ], 13, 1 );
    const_tuple_74b6afea11e095064fb100964a02a2e7_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_74b6afea11e095064fb100964a02a2e7_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_74b6afea11e095064fb100964a02a2e7_tuple, 1, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    PyTuple_SET_ITEM( const_tuple_74b6afea11e095064fb100964a02a2e7_tuple, 2, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_74b6afea11e095064fb100964a02a2e7_tuple, 3, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_74b6afea11e095064fb100964a02a2e7_tuple, 4, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_74b6afea11e095064fb100964a02a2e7_tuple, 5, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_74b6afea11e095064fb100964a02a2e7_tuple, 6, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_74b6afea11e095064fb100964a02a2e7_tuple, 7, const_str_plain_exc ); Py_INCREF( const_str_plain_exc );
    PyTuple_SET_ITEM( const_tuple_74b6afea11e095064fb100964a02a2e7_tuple, 8, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_digest_af312e04583502f5eb717df915e0414f = UNSTREAM_STRING( &constant_bin[ 24114 ], 52, 0 );
    const_tuple_str_plain_user_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_user_tuple, 0, const_str_plain_user ); Py_INCREF( const_str_plain_user );
    const_tuple_str_plain_lib_str_plain_src_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_lib_str_plain_src_tuple, 0, const_str_plain_lib ); Py_INCREF( const_str_plain_lib );
    PyTuple_SET_ITEM( const_tuple_str_plain_lib_str_plain_src_tuple, 1, const_str_plain_src ); Py_INCREF( const_str_plain_src );
    const_str_plain__file_error = UNSTREAM_STRING( &constant_bin[ 24166 ], 11, 1 );
    const_str_plain_NOSE_EXCLUDE = UNSTREAM_STRING( &constant_bin[ 21308 ], 12, 1 );
    const_str_plain_setFormatter = UNSTREAM_STRING( &constant_bin[ 24177 ], 12, 1 );
    const_str_digest_c7abdcb9e7eb473f65830c2cbfd31cc0 = UNSTREAM_STRING( &constant_bin[ 24189 ], 57, 0 );
    const_tuple_str_digest_123e5e3534132c1da362a78e1868c5a7_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_123e5e3534132c1da362a78e1868c5a7_tuple, 0, const_str_digest_123e5e3534132c1da362a78e1868c5a7 ); Py_INCREF( const_str_digest_123e5e3534132c1da362a78e1868c5a7 );
    const_str_plain_WARNING = UNSTREAM_STRING( &constant_bin[ 24246 ], 7, 1 );
    const_str_digest_33f6ebfa679aaf119394785595d95a2d = UNSTREAM_STRING( &constant_bin[ 24253 ], 64, 0 );
    const_str_plain__configTuples = UNSTREAM_STRING( &constant_bin[ 24317 ], 13, 1 );
    const_tuple_str_digest_7672fa2acb59c4a6c92de94f69138e9f_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7672fa2acb59c4a6c92de94f69138e9f_tuple, 0, const_str_digest_7672fa2acb59c4a6c92de94f69138e9f ); Py_INCREF( const_str_digest_7672fa2acb59c4a6c92de94f69138e9f );
    const_str_digest_b44925416098c2c50c09201548391371 = UNSTREAM_STRING( &constant_bin[ 24330 ], 246, 0 );
    const_str_digest_5d1d4e57402da78da790d5bfec50566c = UNSTREAM_STRING( &constant_bin[ 24576 ], 56, 0 );
    const_str_digest_fcb7d8c80a65752732b127e786193e63 = UNSTREAM_STRING( &constant_bin[ 24632 ], 53, 0 );
    const_tuple_str_digest_d2ffc007c774fa9b740b06b6f1177966_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d2ffc007c774fa9b740b06b6f1177966_tuple, 0, const_str_digest_d2ffc007c774fa9b740b06b6f1177966 ); Py_INCREF( const_str_digest_d2ffc007c774fa9b740b06b6f1177966 );
    const_str_digest_9417b6c135a0ac578925ae2782c78295 = UNSTREAM_STRING( &constant_bin[ 24685 ], 108, 0 );
    const_tuple_b99b577ca797c7cc090765b881d83b28_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b99b577ca797c7cc090765b881d83b28_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b99b577ca797c7cc090765b881d83b28_tuple, 1, const_str_plain_fh ); Py_INCREF( const_str_plain_fh );
    PyTuple_SET_ITEM( const_tuple_b99b577ca797c7cc090765b881d83b28_tuple, 2, const_str_plain_cfg ); Py_INCREF( const_str_plain_cfg );
    PyTuple_SET_ITEM( const_tuple_b99b577ca797c7cc090765b881d83b28_tuple, 3, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_b99b577ca797c7cc090765b881d83b28_tuple, 4, const_str_plain_exc ); Py_INCREF( const_str_plain_exc );
    const_str_plain_getParser = UNSTREAM_STRING( &constant_bin[ 24793 ], 9, 1 );
    const_tuple_608aaa6a34606a5cd0f9f85c7b5c3dde_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_608aaa6a34606a5cd0f9f85c7b5c3dde_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_608aaa6a34606a5cd0f9f85c7b5c3dde_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_608aaa6a34606a5cd0f9f85c7b5c3dde_tuple, 2, const_str_plain_config_files ); Py_INCREF( const_str_plain_config_files );
    PyTuple_SET_ITEM( const_tuple_608aaa6a34606a5cd0f9f85c7b5c3dde_tuple, 3, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_608aaa6a34606a5cd0f9f85c7b5c3dde_tuple, 4, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_608aaa6a34606a5cd0f9f85c7b5c3dde_tuple, 5, const_str_plain_exc ); Py_INCREF( const_str_plain_exc );
    const_str_plain_dont_write_bytecode = UNSTREAM_STRING( &constant_bin[ 24802 ], 19, 1 );
    const_tuple_str_plain_NOSE_STOP_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_STOP_false_tuple, 0, const_str_plain_NOSE_STOP ); Py_INCREF( const_str_plain_NOSE_STOP );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_STOP_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_tuple_str_digest_5a7acf5b3bf49def57e87cf8f93e6c71_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_5a7acf5b3bf49def57e87cf8f93e6c71_tuple, 0, const_str_digest_5a7acf5b3bf49def57e87cf8f93e6c71 ); Py_INCREF( const_str_digest_5a7acf5b3bf49def57e87cf8f93e6c71 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nose$config( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bba69498cf79bc998f424c3f4e616163;
static PyCodeObject *codeobj_ceda7daf4e6b1e4c14998c54f0418d24;
static PyCodeObject *codeobj_009e19fd48b145724d38597a2dd92eb5;
static PyCodeObject *codeobj_d0f348e5c880895a3eeeed2cd8652985;
static PyCodeObject *codeobj_1f1a0e82fba51adef0a11a17c18f2cdc;
static PyCodeObject *codeobj_a00608ca032770d8a48eb27cfaf5d6d2;
static PyCodeObject *codeobj_b9817aaf66e6feacc79bc7a9e7631649;
static PyCodeObject *codeobj_f5afaec90790e7721d6e8b63ceb336e9;
static PyCodeObject *codeobj_7866bdb0491076d726f23511c8bfe581;
static PyCodeObject *codeobj_9fdfbbcb4ec3855526970aa864953a6d;
static PyCodeObject *codeobj_679a4acf3f23a48a3e14227f18e40556;
static PyCodeObject *codeobj_beb5cea7fb6f412f17f110c4f37dcc6e;
static PyCodeObject *codeobj_92a74577de7d04cb645a43a54c82a0f3;
static PyCodeObject *codeobj_36637658154754c07fed5f9b5a04b752;
static PyCodeObject *codeobj_b27722d56144b0b88db05f19cf27d471;
static PyCodeObject *codeobj_264c3192103797e8b525b1ffb17b7b3d;
static PyCodeObject *codeobj_accc713d205b8fc077b428224a68651e;
static PyCodeObject *codeobj_0a06b96454ffb7096b6fac304dad1b9c;
static PyCodeObject *codeobj_46ed19d6edf043398f4dae2a5e6341a5;
static PyCodeObject *codeobj_8027ca91ba34242fe6f5e78bec38a893;
static PyCodeObject *codeobj_4b8f742214a5f031c875f01196f98748;
static PyCodeObject *codeobj_db21283a9bcca37e2615270848a6c9e7;
static PyCodeObject *codeobj_2fe5996fd8e3aebecd1188a19c3e34ed;
static PyCodeObject *codeobj_5582bf1ec4f2e7b862a81dcf9cb53547;
static PyCodeObject *codeobj_0c354865906d665a1cb1acb8ba449526;
static PyCodeObject *codeobj_c3d4753a02d01586ff9ed21c71a9f1e2;
static PyCodeObject *codeobj_17b9efb5255841cffda98d4880cbd083;
static PyCodeObject *codeobj_774b202136fc577b79baa02eef286e58;
static PyCodeObject *codeobj_ed8f6e0f4639eb340ec9a6d03915ee71;
static PyCodeObject *codeobj_f383a7e9f7c2bcbaaca10e0010b294ad;
static PyCodeObject *codeobj_9d3bfeb6b5e9f66d1e06118d380da111;
static PyCodeObject *codeobj_5efa9b796250bb6b84d399a82da43a4e;
static PyCodeObject *codeobj_e66aeaf0a6fac48a27194002d940add4;
static PyCodeObject *codeobj_2052a219499f3ee90913a1424631b329;
static PyCodeObject *codeobj_3dfa4f4f7afec3cfc42c0499bb49add2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_ad76124311328c9d7edab0cff095456f );
    codeobj_bba69498cf79bc998f424c3f4e616163 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 52, const_tuple_str_plain_msg_str_plain_kw_str_plain_error_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS );
    codeobj_ceda7daf4e6b1e4c14998c54f0418d24 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getnewargs__, 623, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_009e19fd48b145724d38597a2dd92eb5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getstate__, 223, const_tuple_str_plain_self_str_plain_state_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0f348e5c880895a3eeeed2cd8652985 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getstate__, 617, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1f1a0e82fba51adef0a11a17c18f2cdc = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 32, const_tuple_str_plain_self_str_plain_name_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a00608ca032770d8a48eb27cfaf5d6d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 45, const_tuple_4b14c81808dc2e87522df64b85fddb43_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b9817aaf66e6feacc79bc7a9e7631649 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 180, const_tuple_str_plain_self_str_plain_kw_str_plain_env_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_f5afaec90790e7721d6e8b63ceb336e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___nonzero__, 626, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7866bdb0491076d726f23511c8bfe581 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 246, const_tuple_str_plain_self_str_plain_d_str_plain_k_str_plain_keys_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9fdfbbcb4ec3855526970aa864953a6d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setstate__, 234, const_tuple_14f12f91962964aab935b74ab33cb503_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_679a4acf3f23a48a3e14227f18e40556 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setstate__, 620, const_tuple_str_plain_self_str_plain_state_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_beb5cea7fb6f412f17f110c4f37dcc6e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__applyConfigurationToValues, 110, const_tuple_74b6afea11e095064fb100964a02a2e7_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_92a74577de7d04cb645a43a54c82a0f3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__bool, 660, const_tuple_str_plain_val_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_36637658154754c07fed5f9b5a04b752 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__configTuples, 55, const_tuple_14ee53f6084dc980ddded2b913780fe5_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b27722d56144b0b88db05f19cf27d471 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parseArgs, 257, const_tuple_b7127426b6dc1183449e630bb2487c88_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_264c3192103797e8b525b1ffb17b7b3d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__processConfigValue, 102, const_tuple_bff6350ecf8e0b627a84689c20888b9d_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_accc713d205b8fc077b428224a68651e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__readConfiguration, 87, const_tuple_9a14ac09d832b88cf7b0bfec961b3286_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0a06b96454ffb7096b6fac304dad1b9c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__readFromFileObject, 74, const_tuple_b99b577ca797c7cc090765b881d83b28_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_46ed19d6edf043398f4dae2a5e6341a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__readFromFilenames, 62, const_tuple_79d7ef06a7ee1e2d969ad7cc7aaffa22_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8027ca91ba34242fe6f5e78bec38a893 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_all_config_files, 637, const_tuple_str_plain_user_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4b8f742214a5f031c875f01196f98748 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_config, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_db21283a9bcca37e2615270848a6c9e7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_configure, 271, const_tuple_766ff684ea9e90c2f53d01a89d8d7055_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2fe5996fd8e3aebecd1188a19c3e34ed = MAKE_CODEOBJ( module_filename_obj, const_str_plain_configureLogging, 349, const_tuple_2049a1ef34714ca4dde1875520091cc2_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5582bf1ec4f2e7b862a81dcf9cb53547 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_configureWhere, 408, const_tuple_dc13640dc65775ac0160ac1b58bd69c9_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0c354865906d665a1cb1acb8ba449526 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_default, 439, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c3d4753a02d01586ff9ed21c71a9f1e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flag, 648, const_tuple_str_plain_val_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_17b9efb5255841cffda98d4880cbd083 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getParser, 444, const_tuple_str_plain_self_str_plain_doc_str_plain_env_str_plain_parser_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_774b202136fc577b79baa02eef286e58 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_help, 596, const_tuple_str_plain_self_str_plain_doc_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ed8f6e0f4639eb340ec9a6d03915ee71 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parseArgsAndConfigFiles, 127, const_tuple_608aaa6a34606a5cd0f9f85c7b5c3dde_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f383a7e9f7c2bcbaaca10e0010b294ad = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pluginOpts, 601, const_tuple_str_plain_self_str_plain_parser_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9d3bfeb6b5e9f66d1e06118d380da111 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset, 604, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5efa9b796250bb6b84d399a82da43a4e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_todict, 607, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e66aeaf0a6fac48a27194002d940add4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update, 610, const_tuple_str_plain_self_str_plain_d_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2052a219499f3ee90913a1424631b329 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_user_config_files, 630, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3dfa4f4f7afec3cfc42c0499bb49add2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_warn_sometimes, 258, const_tuple_d64833a062334445a5a6cdcfdde9472a_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_NoSuchOptionError_of_nose$config( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_ConfigError_of_nose$config( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_ConfiguredDefaultsOptionParser_of_nose$config( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_Config_of_nose$config( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_NoOptions_of_nose$config( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_10_getParser_of_class_4_Config_of_nose$config( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_11_help_of_class_4_Config_of_nose$config( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_12_pluginOpts_of_class_4_Config_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_13_reset_of_class_4_Config_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_14_todict_of_class_4_Config_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_15_update_of_class_4_Config_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_1___getstate___of_class_5_NoOptions_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_NoSuchOptionError_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_Config_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_1_lambda_of_function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( PyCellObject *closure_error );


static PyObject *MAKE_FUNCTION_function_1_user_config_files_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_1_warn_sometimes_of_function_5__parseArgs_of_class_4_Config_of_nose$config( PyObject *defaults, PyCellObject *closure_self );


static PyObject *MAKE_FUNCTION_function_2___getstate___of_class_4_Config_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_2___setstate___of_class_5_NoOptions_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_2__configTuples_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_2_all_config_files_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_3___getnewargs___of_class_5_NoOptions_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_3___setstate___of_class_4_Config_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_3__readFromFilenames_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_3_flag_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_4___nonzero___of_class_5_NoOptions_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_4___repr___of_class_4_Config_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_4__bool_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_4__readFromFileObject_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_5__parseArgs_of_class_4_Config_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_5__readConfiguration_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_6__processConfigValue_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_6_configure_of_class_4_Config_of_nose$config( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_7__applyConfigurationToValues_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_7_configureLogging_of_class_4_Config_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_8_configureWhere_of_class_4_Config_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_8_parseArgsAndConfigFiles_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );


static PyObject *MAKE_FUNCTION_function_9_default_of_class_4_Config_of_nose$config(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_NoSuchOptionError_of_nose$config( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = MAKE_FUNCTION_function_1___init___of_class_1_NoSuchOptionError_of_nose$config(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_2;

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

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_NoSuchOptionError_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_NoSuchOptionError_of_nose$config );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_1_NoSuchOptionError_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1f1a0e82fba51adef0a11a17c18f2cdc, module_nose$config );
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
    tmp_source_name_1 = PyExc_Exception;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = par_self;

    tmp_args_element_name_2 = par_name;

    frame_function->f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_name;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_name, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
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

            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_NoSuchOptionError_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_NoSuchOptionError_of_nose$config );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_2_ConfigError_of_nose$config( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

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

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_2_ConfigError_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_2_ConfigError_of_nose$config );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_3_ConfiguredDefaultsOptionParser_of_nose$config( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var__configTuples = NULL;
    PyObject *var__readFromFilenames = NULL;
    PyObject *var__readFromFileObject = NULL;
    PyObject *var__readConfiguration = NULL;
    PyObject *var__processConfigValue = NULL;
    PyObject *var__applyConfigurationToValues = NULL;
    PyObject *var_parseArgsAndConfigFiles = NULL;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_33f6ebfa679aaf119394785595d95a2d;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_defaults_1 = const_tuple_none_none_tuple;
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2__configTuples_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );
    assert( var__configTuples == NULL );
    var__configTuples = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_3__readFromFilenames_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );
    assert( var__readFromFilenames == NULL );
    var__readFromFilenames = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_4__readFromFileObject_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );
    assert( var__readFromFileObject == NULL );
    var__readFromFileObject = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_5__readConfiguration_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );
    assert( var__readConfiguration == NULL );
    var__readConfiguration = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_6__processConfigValue_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );
    assert( var__processConfigValue == NULL );
    var__processConfigValue = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_7__applyConfigurationToValues_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );
    assert( var__applyConfigurationToValues == NULL );
    var__applyConfigurationToValues = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_function_8_parseArgsAndConfigFiles_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  );
    assert( var_parseArgsAndConfigFiles == NULL );
    var_parseArgsAndConfigFiles = tmp_assign_source_10;

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

    if ( var___init__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__
        );

        assert( res == 0 );
    }

    if ( var__configTuples )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__configTuples,
            var__configTuples
        );

        assert( res == 0 );
    }

    if ( var__readFromFilenames )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__readFromFilenames,
            var__readFromFilenames
        );

        assert( res == 0 );
    }

    if ( var__readFromFileObject )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__readFromFileObject,
            var__readFromFileObject
        );

        assert( res == 0 );
    }

    if ( var__readConfiguration )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__readConfiguration,
            var__readConfiguration
        );

        assert( res == 0 );
    }

    if ( var__processConfigValue )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__processConfigValue,
            var__processConfigValue
        );

        assert( res == 0 );
    }

    if ( var__applyConfigurationToValues )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__applyConfigurationToValues,
            var__applyConfigurationToValues
        );

        assert( res == 0 );
    }

    if ( var_parseArgsAndConfigFiles )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_parseArgsAndConfigFiles,
            var_parseArgsAndConfigFiles
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_3_ConfiguredDefaultsOptionParser_of_nose$config );
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

    CHECK_OBJECT( (PyObject *)var__configTuples );
    Py_DECREF( var__configTuples );
    var__configTuples = NULL;

    CHECK_OBJECT( (PyObject *)var__readFromFilenames );
    Py_DECREF( var__readFromFilenames );
    var__readFromFilenames = NULL;

    CHECK_OBJECT( (PyObject *)var__readFromFileObject );
    Py_DECREF( var__readFromFileObject );
    var__readFromFileObject = NULL;

    CHECK_OBJECT( (PyObject *)var__readConfiguration );
    Py_DECREF( var__readConfiguration );
    var__readConfiguration = NULL;

    CHECK_OBJECT( (PyObject *)var__processConfigValue );
    Py_DECREF( var__processConfigValue );
    var__processConfigValue = NULL;

    CHECK_OBJECT( (PyObject *)var__applyConfigurationToValues );
    Py_DECREF( var__applyConfigurationToValues );
    var__applyConfigurationToValues = NULL;

    CHECK_OBJECT( (PyObject *)var_parseArgsAndConfigFiles );
    Py_DECREF( var_parseArgsAndConfigFiles );
    var_parseArgsAndConfigFiles = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_parser = python_pars[ 1 ];
    PyObject *par_config_section = python_pars[ 2 ];
    PyCellObject *par_error = PyCell_NEW1( python_pars[ 3 ] );
    PyObject *par_file_error = python_pars[ 4 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a00608ca032770d8a48eb27cfaf5d6d2, module_nose$config );
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
    tmp_assattr_name_1 = par_parser;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__parser, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_config_section;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__config_section, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = PyCell_GET( par_error );

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;

        exception_lineno = 48;
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
    tmp_source_name_2 = par_self;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__parser );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_error );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( par_error );
        PyCell_SET( par_error, tmp_assign_source_1 );
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_assattr_name_3 = PyCell_GET( par_error );

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__error, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = par_file_error;

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
    tmp_assign_source_2 = MAKE_FUNCTION_function_1_lambda_of_function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( par_error );
    {
        PyObject *old = par_file_error;
        assert( old != NULL );
        par_file_error = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_assattr_name_4 = par_file_error;

    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__file_error, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
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

            if ( par_parser )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parser,
                    par_parser
                );

                assert( res == 0 );
            }

            if ( par_config_section )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_config_section,
                    par_config_section
                );

                assert( res == 0 );
            }

            if ( par_error->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_error,
                    par_error->ob_ref
                );

                assert( res == 0 );
            }

            if ( par_file_error )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_file_error,
                    par_file_error
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

    CHECK_OBJECT( (PyObject *)par_config_section );
    Py_DECREF( par_config_section );
    par_config_section = NULL;

    CHECK_OBJECT( (PyObject *)par_error );
    Py_DECREF( par_error );
    par_error = NULL;

    CHECK_OBJECT( (PyObject *)par_file_error );
    Py_DECREF( par_file_error );
    par_file_error = NULL;

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

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

    CHECK_OBJECT( (PyObject *)par_config_section );
    Py_DECREF( par_config_section );
    par_config_section = NULL;

    CHECK_OBJECT( (PyObject *)par_error );
    Py_DECREF( par_error );
    par_error = NULL;

    Py_XDECREF( par_file_error );
    par_file_error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
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


static PyObject *impl_function_1_lambda_of_function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    PyObject *par_kw = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bba69498cf79bc998f424c3f4e616163, module_nose$config );
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
    tmp_called_name_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "error" );
        exception_tb = NULL;

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_msg;

    frame_function->f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
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
            if ( par_msg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_msg,
                    par_msg
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

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_error,
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
    NUITKA_CANNOT_GET_HERE( function_1_lambda_of_function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

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
    NUITKA_CANNOT_GET_HERE( function_1_lambda_of_function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
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


static PyObject *impl_function_2__configTuples_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cfg = python_pars[ 1 ];
    PyObject *par_filename = python_pars[ 2 ];
    PyObject *var_config = NULL;
    PyObject *var_name = NULL;
    PyObject *var_value = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_config == NULL );
    var_config = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_36637658154754c07fed5f9b5a04b752, module_nose$config );
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

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__config_section );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_cfg;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sections );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 57;
    tmp_compare_right_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_3 = par_cfg;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_items );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__config_section );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
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
            frame_function->f_lineno = 58;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto try_except_handler_3;
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


        exception_lineno = 58;
        goto try_except_handler_3;
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


        exception_lineno = 58;
        goto try_except_handler_3;
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
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_7;
        Py_INCREF( var_name );
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_8;
        Py_INCREF( var_value );
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

    tmp_source_name_5 = var_config;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_name;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_value;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_filename;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 2, tmp_tuple_element_1 );
    frame_function->f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
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

            if ( par_cfg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cfg,
                    par_cfg
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

            if ( var_config )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_config,
                    var_config
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

            if ( var_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    var_value
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

    tmp_return_value = var_config;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2__configTuples_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cfg );
    Py_DECREF( par_cfg );
    par_cfg = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)var_config );
    Py_DECREF( var_config );
    var_config = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cfg );
    Py_DECREF( par_cfg );
    par_cfg = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)var_config );
    Py_DECREF( var_config );
    var_config = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2__configTuples_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
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


static PyObject *impl_function_3__readFromFilenames_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_filenames = python_pars[ 1 ];
    PyObject *var_config = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_cfg = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_config == NULL );
    var_config = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_46ed19d6edf043398f4dae2a5e6341a5, module_nose$config );
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
    tmp_iter_arg_1 = par_filenames;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
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
            frame_function->f_lineno = 64;
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
        PyObject *old = var_filename;
        var_filename = tmp_assign_source_4;
        Py_INCREF( var_filename );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_ConfigParser );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConfigParser );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConfigParser" );
        exception_tb = NULL;

        exception_lineno = 65;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_RawConfigParser );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 65;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_cfg;
        var_cfg = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_2 = var_cfg;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_read );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = var_filename;

    frame_function->f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_ConfigParser );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConfigParser );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConfigParser" );
        exception_tb = NULL;

        exception_lineno = 68;
        goto try_except_handler_2;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Error );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto try_except_handler_2;
    }
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 68;
        goto try_except_handler_2;
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
    tmp_assign_source_6 = PyThreadState_GET()->exc_value;
    assert( var_exc == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_exc = tmp_assign_source_6;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_ConfigError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConfigError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConfigError" );
        exception_tb = NULL;

        exception_lineno = 69;
        goto try_except_handler_2;
    }

    tmp_left_name_1 = const_str_digest_dbc69ed80969cab63601b617b2484878;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_filename;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_str_arg_1 = var_exc;

    tmp_tuple_element_1 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 70;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_2;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 70;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_2;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_source_name_4 = var_config;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_extend );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_2;
    }
    tmp_source_name_5 = par_self;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__configTuples );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 71;
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = var_cfg;

    tmp_args_element_name_5 = var_filename;

    frame_function->f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 71;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
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

            if ( par_filenames )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_filenames,
                    par_filenames
                );

                assert( res == 0 );
            }

            if ( var_config )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_config,
                    var_config
                );

                assert( res == 0 );
            }

            if ( var_filename )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_filename,
                    var_filename
                );

                assert( res == 0 );
            }

            if ( var_cfg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cfg,
                    var_cfg
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = var_config;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3__readFromFilenames_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_filenames );
    Py_DECREF( par_filenames );
    par_filenames = NULL;

    CHECK_OBJECT( (PyObject *)var_config );
    Py_DECREF( var_config );
    var_config = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_cfg );
    var_cfg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_filenames );
    Py_DECREF( par_filenames );
    par_filenames = NULL;

    CHECK_OBJECT( (PyObject *)var_config );
    Py_DECREF( var_config );
    var_config = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_cfg );
    var_cfg = NULL;

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
    NUITKA_CANNOT_GET_HERE( function_3__readFromFilenames_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
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


static PyObject *impl_function_4__readFromFileObject_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_fh = python_pars[ 1 ];
    PyObject *var_cfg = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_exc = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0a06b96454ffb7096b6fac304dad1b9c, module_nose$config );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_ConfigParser );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConfigParser );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConfigParser" );
        exception_tb = NULL;

        exception_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_RawConfigParser );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 75;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    assert( var_cfg == NULL );
    var_cfg = tmp_assign_source_1;

    // Tried code:
    tmp_source_name_2 = par_fh;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto try_except_handler_2;
    }
    assert( var_filename == NULL );
    var_filename = tmp_assign_source_2;

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


        exception_lineno = 78;
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
    tmp_assign_source_3 = const_str_digest_c40da24b9fb2f7d79a4e07fe6c8f5b08;
    assert( var_filename == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_filename = tmp_assign_source_3;

    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_4__readFromFileObject_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_source_name_3 = var_cfg;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_readfp );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = par_fh;

    frame_function->f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_ConfigParser );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConfigParser );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConfigParser" );
        exception_tb = NULL;

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Error );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_4 = PyThreadState_GET()->exc_value;
    assert( var_exc == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_exc = tmp_assign_source_4;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_ConfigError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConfigError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConfigError" );
        exception_tb = NULL;

        exception_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_dbc69ed80969cab63601b617b2484878;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_filename;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_str_arg_1 = var_exc;

    tmp_tuple_element_1 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 84;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:
    try_end_2:;
    tmp_source_name_5 = par_self;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__configTuples );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_cfg;

    tmp_args_element_name_4 = var_filename;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;

        exception_lineno = 85;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_fh )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fh,
                    par_fh
                );

                assert( res == 0 );
            }

            if ( var_cfg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cfg,
                    var_cfg
                );

                assert( res == 0 );
            }

            if ( var_filename )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_filename,
                    var_filename
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
    NUITKA_CANNOT_GET_HERE( function_4__readFromFileObject_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fh );
    Py_DECREF( par_fh );
    par_fh = NULL;

    CHECK_OBJECT( (PyObject *)var_cfg );
    Py_DECREF( var_cfg );
    var_cfg = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fh );
    Py_DECREF( par_fh );
    par_fh = NULL;

    Py_XDECREF( var_cfg );
    var_cfg = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

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
    NUITKA_CANNOT_GET_HERE( function_4__readFromFileObject_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
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


static PyObject *impl_function_5__readConfiguration_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_config_files = python_pars[ 1 ];
    PyObject *var_filename_or_filenames = NULL;
    PyObject *var_filenames = NULL;
    PyObject *var_config = NULL;
    PyObject *var_fh = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_list_element_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_accc713d205b8fc077b428224a68651e, module_nose$config );
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
    // Tried code:
    tmp_source_name_1 = par_config_files;

    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_readline );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
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

    tmp_assign_source_2 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

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


        exception_lineno = 90;
        goto try_except_handler_2;
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
    tmp_assign_source_3 = par_config_files;

    assert( var_filename_or_filenames == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_filename_or_filenames = tmp_assign_source_3;

    tmp_isinstance_inst_1 = var_filename_or_filenames;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_basestring );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_4 = PyList_New( 1 );
    tmp_list_element_1 = var_filename_or_filenames;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_4, 0, tmp_list_element_1 );
    assert( var_filenames == NULL );
    var_filenames = tmp_assign_source_4;

    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_5 = var_filename_or_filenames;

    assert( var_filenames == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_filenames = tmp_assign_source_5;

    branch_end_2:;
    tmp_source_name_2 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__readFromFilenames );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = var_filenames;

    frame_function->f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_2;
    }
    assert( var_config == NULL );
    var_config = tmp_assign_source_6;

    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_5__readConfiguration_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator;

    tmp_compare_right_2 = Py_True;
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
    tmp_assign_source_7 = par_config_files;

    assert( var_fh == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_fh = tmp_assign_source_7;

    tmp_source_name_3 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__readFromFileObject );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = var_fh;

    frame_function->f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_config;
        var_config = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    branch_no_3:;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    tmp_return_value = var_config;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "config" );
        exception_tb = NULL;

        exception_lineno = 100;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_config_files )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_config_files,
                    par_config_files
                );

                assert( res == 0 );
            }

            if ( var_filename_or_filenames )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_filename_or_filenames,
                    var_filename_or_filenames
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

            if ( var_config )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_config,
                    var_config
                );

                assert( res == 0 );
            }

            if ( var_fh )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fh,
                    var_fh
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
    NUITKA_CANNOT_GET_HERE( function_5__readConfiguration_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_config_files );
    Py_DECREF( par_config_files );
    par_config_files = NULL;

    Py_XDECREF( var_filename_or_filenames );
    var_filename_or_filenames = NULL;

    Py_XDECREF( var_filenames );
    var_filenames = NULL;

    Py_XDECREF( var_config );
    var_config = NULL;

    Py_XDECREF( var_fh );
    var_fh = NULL;

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

    CHECK_OBJECT( (PyObject *)par_config_files );
    Py_DECREF( par_config_files );
    par_config_files = NULL;

    Py_XDECREF( var_filename_or_filenames );
    var_filename_or_filenames = NULL;

    Py_XDECREF( var_filenames );
    var_filenames = NULL;

    Py_XDECREF( var_config );
    var_config = NULL;

    Py_XDECREF( var_fh );
    var_fh = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5__readConfiguration_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
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


static PyObject *impl_function_6__processConfigValue_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_value = python_pars[ 2 ];
    PyObject *par_values = python_pars[ 3 ];
    PyObject *par_parser = python_pars[ 4 ];
    PyObject *var_opt_str = NULL;
    PyObject *var_option = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_264c3192103797e8b525b1ffb17b7b3d, module_nose$config );
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
    tmp_left_name_1 = const_str_digest_85fe97af08c9a213aa891dc673aeaa3e;
    tmp_right_name_1 = par_name;

    tmp_assign_source_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    assert( var_opt_str == NULL );
    var_opt_str = tmp_assign_source_1;

    tmp_source_name_1 = par_parser;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_option );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_opt_str;

    frame_function->f_lineno = 104;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    assert( var_option == NULL );
    var_option = tmp_assign_source_2;

    tmp_compare_left_1 = var_option;

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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_NoSuchOptionError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NoSuchOptionError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NoSuchOptionError" );
        exception_tb = NULL;

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_name;

    frame_function->f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 106;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = var_option;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_process );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_opt_str;

    tmp_args_element_name_4 = par_value;

    tmp_args_element_name_5 = par_values;

    tmp_args_element_name_6 = par_parser;

    frame_function->f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
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

            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
                );

                assert( res == 0 );
            }

            if ( par_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    par_value
                );

                assert( res == 0 );
            }

            if ( par_values )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_values,
                    par_values
                );

                assert( res == 0 );
            }

            if ( par_parser )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parser,
                    par_parser
                );

                assert( res == 0 );
            }

            if ( var_opt_str )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_opt_str,
                    var_opt_str
                );

                assert( res == 0 );
            }

            if ( var_option )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_option,
                    var_option
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
    NUITKA_CANNOT_GET_HERE( function_6__processConfigValue_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

    CHECK_OBJECT( (PyObject *)var_opt_str );
    Py_DECREF( var_opt_str );
    var_opt_str = NULL;

    CHECK_OBJECT( (PyObject *)var_option );
    Py_DECREF( var_option );
    var_option = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

    Py_XDECREF( var_opt_str );
    var_opt_str = NULL;

    Py_XDECREF( var_option );
    var_option = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6__processConfigValue_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
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


static PyObject *impl_function_7__applyConfigurationToValues_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_parser = python_pars[ 1 ];
    PyObject *par_config = python_pars[ 2 ];
    PyObject *par_values = python_pars[ 3 ];
    PyObject *var_name = NULL;
    PyObject *var_value = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_exc = NULL;
    PyObject *var_msg = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
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
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_beb5cea7fb6f412f17f110c4f37dcc6e, module_nose$config );
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
    tmp_iter_arg_1 = par_config;

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
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
            frame_function->f_lineno = 111;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        exception_lineno = 111;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 111;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


        exception_lineno = 111;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_3;
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_7;
        Py_INCREF( var_name );
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_8;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;

    {
        PyObject *old = var_filename;
        var_filename = tmp_assign_source_9;
        Py_INCREF( var_filename );
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_3 );
    Py_DECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_compare_left_1 = var_name;

    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_option_blacklist );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_option_blacklist );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "option_blacklist" );
        exception_tb = NULL;

        exception_lineno = 112;
        goto try_except_handler_2;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    goto loop_start_1;
    branch_no_1:;
    // Tried code:
    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__processConfigValue );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto try_except_handler_4;
    }
    tmp_args_element_name_1 = var_name;

    tmp_args_element_name_2 = var_value;

    tmp_args_element_name_3 = par_values;

    tmp_args_element_name_4 = par_parser;

    frame_function->f_lineno = 115;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
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
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_NoSuchOptionError );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NoSuchOptionError );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NoSuchOptionError" );
        exception_tb = NULL;

        exception_lineno = 116;
        goto try_except_handler_2;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        goto try_except_handler_2;
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
    tmp_assign_source_10 = PyThreadState_GET()->exc_value;
    {
        PyObject *old = var_exc;
        var_exc = tmp_assign_source_10;
        Py_INCREF( var_exc );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__file_error );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_left_name_1 = const_str_digest_dfaa049654d08ecb0c11950216676a17;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_filename;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
    tmp_source_name_3 = var_exc;

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_name );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 119;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 118;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = var_name;

    tmp_dict_key_1 = const_str_plain_name;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = var_filename;

    tmp_dict_key_2 = const_str_plain_filename;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 120;
    tmp_unused = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_optparse );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_optparse );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "optparse" );
        exception_tb = NULL;

        exception_lineno = 121;
        goto try_except_handler_2;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_OptionValueError );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto try_except_handler_2;
    }
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 121;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_11 = PyThreadState_GET()->exc_value;
    {
        PyObject *old = var_exc;
        var_exc = tmp_assign_source_11;
        Py_INCREF( var_exc );
        Py_XDECREF( old );
    }

    tmp_str_arg_1 = var_exc;

    tmp_source_name_5 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto try_except_handler_2;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_replace );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto try_except_handler_2;
    }
    tmp_left_name_2 = const_str_digest_85fe97af08c9a213aa891dc673aeaa3e;
    tmp_right_name_2 = var_name;

    tmp_args_element_name_5 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 122;
        goto try_except_handler_2;
    }
    tmp_operand_name_1 = var_name;

    tmp_args_element_name_6 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 122;
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = const_int_pos_1;
    frame_function->f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_msg;
        var_msg = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_source_name_6 = par_self;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__file_error );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        goto try_except_handler_2;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_left_name_3 = const_str_digest_dbc69ed80969cab63601b617b2484878;
    tmp_right_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_filename;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_msg;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_4 );
    tmp_tuple_element_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 123;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_3 = var_name;

    tmp_dict_key_3 = const_str_plain_name;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = var_filename;

    tmp_dict_key_4 = const_str_plain_filename;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 125;
    tmp_unused = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_3:;
    branch_end_2:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_7__applyConfigurationToValues_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // End of try:
    try_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
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

            if ( par_parser )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parser,
                    par_parser
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

            if ( par_values )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_values,
                    par_values
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

            if ( var_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    var_value
                );

                assert( res == 0 );
            }

            if ( var_filename )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_filename,
                    var_filename
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

            if ( var_msg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_msg,
                    var_msg
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
    NUITKA_CANNOT_GET_HERE( function_7__applyConfigurationToValues_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_7__applyConfigurationToValues_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
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


static PyObject *impl_function_8_parseArgsAndConfigFiles_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_config_files = python_pars[ 2 ];
    PyObject *var_values = NULL;
    PyObject *var_config = NULL;
    PyObject *var_exc = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
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
    PyObject *tmp_str_arg_1;
    PyObject *tmp_str_arg_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ed8f6e0f4639eb340ec9a6d03915ee71, module_nose$config );
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

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__parser );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_default_values );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 128;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    assert( var_values == NULL );
    var_values = tmp_assign_source_1;

    tmp_assign_source_2 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_2 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__readConfiguration );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = par_config_files;

    frame_function->f_lineno = 130;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto try_except_handler_3;
    }
    assert( var_config == NULL );
    var_config = tmp_assign_source_3;

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

    tmp_assign_source_4 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

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
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_ConfigError );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConfigError );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConfigError" );
        exception_tb = NULL;

        exception_lineno = 131;
        goto try_except_handler_2;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto try_except_handler_2;
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
    tmp_assign_source_5 = PyThreadState_GET()->exc_value;
    assert( var_exc == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_exc = tmp_assign_source_5;

    tmp_source_name_4 = par_self;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__error );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_2;
    }
    tmp_str_arg_1 = var_exc;

    tmp_args_element_name_2 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 132;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_8_parseArgsAndConfigFiles_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator;

    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code:
    tmp_source_name_5 = par_self;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__applyConfigurationToValues );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto try_except_handler_4;
    }
    tmp_source_name_6 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__parser );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 135;
        goto try_except_handler_4;
    }
    tmp_args_element_name_4 = var_config;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "config" );
        exception_tb = NULL;

        exception_lineno = 135;
        goto try_except_handler_4;
    }

    tmp_args_element_name_5 = var_values;

    frame_function->f_lineno = 135;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
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
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_ConfigError );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConfigError );
    }

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConfigError" );
        exception_tb = NULL;

        exception_lineno = 136;
        goto try_except_handler_2;
    }

    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_6 = PyThreadState_GET()->exc_value;
    {
        PyObject *old = var_exc;
        var_exc = tmp_assign_source_6;
        Py_INCREF( var_exc );
        Py_XDECREF( old );
    }

    tmp_source_name_7 = par_self;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__error );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto try_except_handler_2;
    }
    tmp_str_arg_2 = var_exc;

    tmp_args_element_name_6 = PyObject_Str( tmp_str_arg_2 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 137;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 137;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_3:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_8_parseArgsAndConfigFiles_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // End of try:
    try_end_2:;
    branch_no_2:;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    tmp_source_name_9 = par_self;

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__parser );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_parse_args );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = par_args;

    tmp_args_element_name_8 = var_values;

    frame_function->f_lineno = 138;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        goto frame_exception_exit_1;
    }
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    par_args
                );

                assert( res == 0 );
            }

            if ( par_config_files )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_config_files,
                    par_config_files
                );

                assert( res == 0 );
            }

            if ( var_values )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_values,
                    var_values
                );

                assert( res == 0 );
            }

            if ( var_config )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_config,
                    var_config
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
    NUITKA_CANNOT_GET_HERE( function_8_parseArgsAndConfigFiles_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_config_files );
    Py_DECREF( par_config_files );
    par_config_files = NULL;

    CHECK_OBJECT( (PyObject *)var_values );
    Py_DECREF( var_values );
    var_values = NULL;

    Py_XDECREF( var_config );
    var_config = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_config_files );
    Py_DECREF( par_config_files );
    par_config_files = NULL;

    Py_XDECREF( var_values );
    var_values = NULL;

    Py_XDECREF( var_config );
    var_config = NULL;

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
    NUITKA_CANNOT_GET_HERE( function_8_parseArgsAndConfigFiles_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_4_Config_of_nose$config( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var___getstate__ = NULL;
    PyObject *var___setstate__ = NULL;
    PyObject *var___repr__ = NULL;
    PyObject *var___str__ = NULL;
    PyObject *var__parseArgs = NULL;
    PyObject *var_configure = NULL;
    PyObject *var_configureLogging = NULL;
    PyObject *var_configureWhere = NULL;
    PyObject *var_default = NULL;
    PyObject *var_getParser = NULL;
    PyObject *var_help = NULL;
    PyObject *var_pluginOpts = NULL;
    PyObject *var_reset = NULL;
    PyObject *var_todict = NULL;
    PyObject *var_update = NULL;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_acfe98b39c3b98536f4cb8bd4b412aac;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_4_Config_of_nose$config(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2___getstate___of_class_4_Config_of_nose$config(  );
    assert( var___getstate__ == NULL );
    var___getstate__ = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_3___setstate___of_class_4_Config_of_nose$config(  );
    assert( var___setstate__ == NULL );
    var___setstate__ = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_4___repr___of_class_4_Config_of_nose$config(  );
    assert( var___repr__ == NULL );
    var___repr__ = tmp_assign_source_6;

    tmp_assign_source_7 = var___repr__;

    assert( var___str__ == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var___str__ = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_5__parseArgs_of_class_4_Config_of_nose$config(  );
    assert( var__parseArgs == NULL );
    var__parseArgs = tmp_assign_source_8;

    tmp_defaults_1 = const_tuple_none_none_tuple;
    tmp_assign_source_9 = MAKE_FUNCTION_function_6_configure_of_class_4_Config_of_nose$config( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var_configure == NULL );
    var_configure = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_function_7_configureLogging_of_class_4_Config_of_nose$config(  );
    assert( var_configureLogging == NULL );
    var_configureLogging = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_function_8_configureWhere_of_class_4_Config_of_nose$config(  );
    assert( var_configureWhere == NULL );
    var_configureWhere = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_function_9_default_of_class_4_Config_of_nose$config(  );
    assert( var_default == NULL );
    var_default = tmp_assign_source_12;

    tmp_defaults_2 = const_tuple_none_tuple;
    tmp_assign_source_13 = MAKE_FUNCTION_function_10_getParser_of_class_4_Config_of_nose$config( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    assert( var_getParser == NULL );
    var_getParser = tmp_assign_source_13;

    tmp_defaults_3 = const_tuple_none_tuple;
    tmp_assign_source_14 = MAKE_FUNCTION_function_11_help_of_class_4_Config_of_nose$config( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    assert( var_help == NULL );
    var_help = tmp_assign_source_14;

    tmp_assign_source_15 = MAKE_FUNCTION_function_12_pluginOpts_of_class_4_Config_of_nose$config(  );
    assert( var_pluginOpts == NULL );
    var_pluginOpts = tmp_assign_source_15;

    tmp_assign_source_16 = MAKE_FUNCTION_function_13_reset_of_class_4_Config_of_nose$config(  );
    assert( var_reset == NULL );
    var_reset = tmp_assign_source_16;

    tmp_assign_source_17 = MAKE_FUNCTION_function_14_todict_of_class_4_Config_of_nose$config(  );
    assert( var_todict == NULL );
    var_todict = tmp_assign_source_17;

    tmp_assign_source_18 = MAKE_FUNCTION_function_15_update_of_class_4_Config_of_nose$config(  );
    assert( var_update == NULL );
    var_update = tmp_assign_source_18;

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

    if ( var___init__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__
        );

        assert( res == 0 );
    }

    if ( var___getstate__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___getstate__,
            var___getstate__
        );

        assert( res == 0 );
    }

    if ( var___setstate__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___setstate__,
            var___setstate__
        );

        assert( res == 0 );
    }

    if ( var___repr__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___repr__,
            var___repr__
        );

        assert( res == 0 );
    }

    if ( var___str__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___str__,
            var___str__
        );

        assert( res == 0 );
    }

    if ( var__parseArgs )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__parseArgs,
            var__parseArgs
        );

        assert( res == 0 );
    }

    if ( var_configure )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_configure,
            var_configure
        );

        assert( res == 0 );
    }

    if ( var_configureLogging )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_configureLogging,
            var_configureLogging
        );

        assert( res == 0 );
    }

    if ( var_configureWhere )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_configureWhere,
            var_configureWhere
        );

        assert( res == 0 );
    }

    if ( var_default )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_default,
            var_default
        );

        assert( res == 0 );
    }

    if ( var_getParser )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getParser,
            var_getParser
        );

        assert( res == 0 );
    }

    if ( var_help )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_help,
            var_help
        );

        assert( res == 0 );
    }

    if ( var_pluginOpts )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_pluginOpts,
            var_pluginOpts
        );

        assert( res == 0 );
    }

    if ( var_reset )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_reset,
            var_reset
        );

        assert( res == 0 );
    }

    if ( var_todict )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_todict,
            var_todict
        );

        assert( res == 0 );
    }

    if ( var_update )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_update,
            var_update
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_4_Config_of_nose$config );
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

    CHECK_OBJECT( (PyObject *)var___getstate__ );
    Py_DECREF( var___getstate__ );
    var___getstate__ = NULL;

    CHECK_OBJECT( (PyObject *)var___setstate__ );
    Py_DECREF( var___setstate__ );
    var___setstate__ = NULL;

    CHECK_OBJECT( (PyObject *)var___repr__ );
    Py_DECREF( var___repr__ );
    var___repr__ = NULL;

    CHECK_OBJECT( (PyObject *)var___str__ );
    Py_DECREF( var___str__ );
    var___str__ = NULL;

    CHECK_OBJECT( (PyObject *)var__parseArgs );
    Py_DECREF( var__parseArgs );
    var__parseArgs = NULL;

    CHECK_OBJECT( (PyObject *)var_configure );
    Py_DECREF( var_configure );
    var_configure = NULL;

    CHECK_OBJECT( (PyObject *)var_configureLogging );
    Py_DECREF( var_configureLogging );
    var_configureLogging = NULL;

    CHECK_OBJECT( (PyObject *)var_configureWhere );
    Py_DECREF( var_configureWhere );
    var_configureWhere = NULL;

    CHECK_OBJECT( (PyObject *)var_default );
    Py_DECREF( var_default );
    var_default = NULL;

    CHECK_OBJECT( (PyObject *)var_getParser );
    Py_DECREF( var_getParser );
    var_getParser = NULL;

    CHECK_OBJECT( (PyObject *)var_help );
    Py_DECREF( var_help );
    var_help = NULL;

    CHECK_OBJECT( (PyObject *)var_pluginOpts );
    Py_DECREF( var_pluginOpts );
    var_pluginOpts = NULL;

    CHECK_OBJECT( (PyObject *)var_reset );
    Py_DECREF( var_reset );
    var_reset = NULL;

    CHECK_OBJECT( (PyObject *)var_todict );
    Py_DECREF( var_todict );
    var_todict = NULL;

    CHECK_OBJECT( (PyObject *)var_update );
    Py_DECREF( var_update );
    var_update = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_4_Config_of_nose$config );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_kw = python_pars[ 1 ];
    PyObject *var_env = NULL;
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
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_name_15;
    PyObject *tmp_assattr_name_16;
    PyObject *tmp_assattr_name_17;
    PyObject *tmp_assattr_name_18;
    PyObject *tmp_assattr_name_19;
    PyObject *tmp_assattr_name_20;
    PyObject *tmp_assattr_name_21;
    PyObject *tmp_assattr_name_22;
    PyObject *tmp_assattr_name_23;
    PyObject *tmp_assattr_name_24;
    PyObject *tmp_assattr_name_25;
    PyObject *tmp_assattr_name_26;
    PyObject *tmp_assattr_name_27;
    PyObject *tmp_assattr_name_28;
    PyObject *tmp_assattr_name_29;
    PyObject *tmp_assattr_name_30;
    PyObject *tmp_assattr_name_31;
    PyObject *tmp_assattr_name_32;
    PyObject *tmp_assattr_name_33;
    PyObject *tmp_assattr_name_34;
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
    PyObject *tmp_assattr_target_16;
    PyObject *tmp_assattr_target_17;
    PyObject *tmp_assattr_target_18;
    PyObject *tmp_assattr_target_19;
    PyObject *tmp_assattr_target_20;
    PyObject *tmp_assattr_target_21;
    PyObject *tmp_assattr_target_22;
    PyObject *tmp_assattr_target_23;
    PyObject *tmp_assattr_target_24;
    PyObject *tmp_assattr_target_25;
    PyObject *tmp_assattr_target_26;
    PyObject *tmp_assattr_target_27;
    PyObject *tmp_assattr_target_28;
    PyObject *tmp_assattr_target_29;
    PyObject *tmp_assattr_target_30;
    PyObject *tmp_assattr_target_31;
    PyObject *tmp_assattr_target_32;
    PyObject *tmp_assattr_target_33;
    PyObject *tmp_assattr_target_34;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_operand_name_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b9817aaf66e6feacc79bc7a9e7631649, module_nose$config );
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
    tmp_source_name_1 = par_kw;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pop );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto try_except_handler_2;
    }
    tmp_call_arg_element_1 = const_str_plain_env;
    tmp_call_arg_element_2 = PyDict_New();
    frame_function->f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1, tmp_call_arg_element_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        goto try_except_handler_2;
    }
    assert( tmp_assign_unpack_1__assign_source == NULL );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_1;

    tmp_assattr_name_1 = tmp_assign_unpack_1__assign_source;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_env, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
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
    tmp_assign_source_2 = tmp_assign_unpack_1__assign_source;

    assert( var_env == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_env = tmp_assign_source_2;

    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    tmp_assattr_name_2 = const_tuple_empty;
    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_args, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = var_env;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_plain_NOSE_TESTMATCH;
    tmp_left_name_1 = const_str_digest_d5596ff177ba20582eec6fc06eb451c7;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sep );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 184;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_testMatchPat, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 183;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_compile );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_testMatchPat );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 185;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_testMatch, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 185;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_source_name_6 = var_env;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_get );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 186;
    tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_plain_NOSE_NOPATH_false_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_addPaths, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = const_str_plain_nosetests;
    tmp_assattr_target_6 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_configSection, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = var_env;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_get );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 188;
    tmp_assattr_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_plain_NOSE_DEBUG_tuple, 0 ) );

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_7 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_debug, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 188;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    tmp_source_name_8 = var_env;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_get );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 189;
    tmp_assattr_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_plain_NOSE_DEBUG_LOG_tuple, 0 ) );

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assattr_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_8 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_debugLog, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        exception_lineno = 189;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_8 );
    tmp_assattr_name_9 = Py_None;
    tmp_assattr_target_9 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_exclude, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_10 = Py_False;
    tmp_assattr_target_10 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_getTestCaseNamesCompat, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = var_env;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_get );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_str_plain_NOSE_INCLUDE_EXE;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 193;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_platform );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_exe_allowed_platforms );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exe_allowed_platforms );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "exe_allowed_platforms" );
        exception_tb = NULL;

        exception_lineno = 193;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assattr_name_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assattr_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_11 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_includeExe, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_11 );

        exception_lineno = 192;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_11 );
    tmp_assattr_name_12 = LIST_COPY( const_list_9d4ea92b81a63c5bf0a6fb3eb9a08fc8_list );
    tmp_assattr_target_12 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_ignoreFilesDefaultStrings, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 194;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );
    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_map );
    assert( tmp_called_name_8 != NULL );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 198;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_compile );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = par_self;

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ignoreFilesDefaultStrings );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 198;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assattr_name_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assattr_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_13 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_ignoreFiles, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_13 );

        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_13 );
    tmp_assattr_name_14 = Py_None;
    tmp_assattr_target_14 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_include, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_15 = Py_None;
    tmp_assattr_target_15 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_loggingConfig, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_sys );

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

        exception_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_stderr );
    if ( tmp_assattr_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_16 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_logStream, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_16 );

        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_16 );
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_NoOptions );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NoOptions );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NoOptions" );
        exception_tb = NULL;

        exception_lineno = 202;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 202;
    tmp_assattr_name_17 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
    if ( tmp_assattr_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_17 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_options, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_17 );

        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_17 );
    tmp_assattr_name_18 = Py_None;
    tmp_assattr_target_18 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_parser, tmp_assattr_name_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_NoPlugins );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NoPlugins );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NoPlugins" );
        exception_tb = NULL;

        exception_lineno = 204;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 204;
    tmp_assattr_name_19 = CALL_FUNCTION_NO_ARGS( tmp_called_name_10 );
    if ( tmp_assattr_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_19 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_plugins, tmp_assattr_name_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_19 );

        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_19 );
    tmp_assattr_name_20 = const_tuple_str_plain_lib_str_plain_src_tuple;
    tmp_assattr_target_20 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_srcDirs, tmp_assattr_name_20 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_21 = Py_True;
    tmp_assattr_target_21 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_runOnInit, tmp_assattr_name_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = var_env;

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_get );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 207;
    tmp_assattr_name_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_str_plain_NOSE_STOP_false_tuple, 0 ) );

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_assattr_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_22 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_22, const_str_plain_stopOnError, tmp_assattr_name_22 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_22 );

        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_22 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 208;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_stderr );
    if ( tmp_assattr_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_23 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_23, const_str_plain_stream, tmp_assattr_name_23 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_23 );

        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_23 );
    tmp_assattr_name_24 = PyList_New( 0 );
    tmp_assattr_target_24 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_24, const_str_plain_testNames, tmp_assattr_name_24 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_24 );

        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_24 );
    tmp_source_name_16 = var_env;

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_get );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 210;
    tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_str_plain_NOSE_VERBOSE_int_pos_1_tuple, 0 ) );

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_25 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assattr_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_25 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_25, const_str_plain_verbosity, tmp_assattr_name_25 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_25 );

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_25 );
    tmp_assattr_name_26 = const_tuple_empty;
    tmp_assattr_target_26 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_26, const_str_plain_where, tmp_assattr_name_26 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_27 = const_tuple_empty;
    tmp_assattr_target_27 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_27, const_str_plain_py3where, tmp_assattr_name_27 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 213;
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_getcwd );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 213;
    tmp_assattr_name_28 = CALL_FUNCTION_NO_ARGS( tmp_called_name_13 );
    Py_DECREF( tmp_called_name_13 );
    if ( tmp_assattr_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_28 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_28, const_str_plain_workingDir, tmp_assattr_name_28 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_28 );

        exception_lineno = 213;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_28 );
    tmp_assattr_name_29 = Py_False;
    tmp_assattr_target_29 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_29, const_str_plain_traverseNamespace, tmp_assattr_name_29 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_30 = Py_False;
    tmp_assattr_target_30 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_30, const_str_plain_firstPackageWins, tmp_assattr_name_30 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_31 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_OptionParser );

    if (unlikely( tmp_assattr_name_31 == NULL ))
    {
        tmp_assattr_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptionParser );
    }

    if ( tmp_assattr_name_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OptionParser" );
        exception_tb = NULL;

        exception_lineno = 216;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_31 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_31, const_str_plain_parserClass, tmp_assattr_name_31 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_32 = Py_False;
    tmp_assattr_target_32 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_32, const_str_plain_worker, tmp_assattr_name_32 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = par_self;

    tmp_source_name_18 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_19 );
    if ( tmp_source_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_copy );
    Py_DECREF( tmp_source_name_18 );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 219;
    tmp_assattr_name_33 = CALL_FUNCTION_NO_ARGS( tmp_called_name_14 );
    Py_DECREF( tmp_called_name_14 );
    if ( tmp_assattr_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_33 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_33, const_str_plain__default, tmp_assattr_name_33 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_33 );

        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_33 );
    tmp_source_name_20 = par_self;

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_update );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = par_kw;

    frame_function->f_lineno = 220;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_22 = par_self;

    tmp_source_name_21 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_22 );
    if ( tmp_source_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_copy );
    Py_DECREF( tmp_source_name_21 );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 221;
    tmp_assattr_name_34 = CALL_FUNCTION_NO_ARGS( tmp_called_name_16 );
    Py_DECREF( tmp_called_name_16 );
    if ( tmp_assattr_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_34 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_34, const_str_plain__orig, tmp_assattr_name_34 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_34 );

        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_34 );

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

            if ( par_kw )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    par_kw
                );

                assert( res == 0 );
            }

            if ( var_env )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_env,
                    var_env
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    CHECK_OBJECT( (PyObject *)var_env );
    Py_DECREF( var_env );
    var_env = NULL;

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

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_env );
    var_env = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_2___getstate___of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_state = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_subscript_2;
    PyObject *tmp_delsubscr_subscript_3;
    PyObject *tmp_delsubscr_subscript_4;
    PyObject *tmp_delsubscr_subscript_5;
    PyObject *tmp_delsubscr_target_1;
    PyObject *tmp_delsubscr_target_2;
    PyObject *tmp_delsubscr_target_3;
    PyObject *tmp_delsubscr_target_4;
    PyObject *tmp_delsubscr_target_5;
    PyObject *tmp_frame_locals;
    bool tmp_result;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_009e19fd48b145724d38597a2dd92eb5, module_nose$config );
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

    tmp_source_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_copy );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 224;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    assert( var_state == NULL );
    var_state = tmp_assign_source_1;

    tmp_delsubscr_target_1 = var_state;

    tmp_delsubscr_subscript_1 = const_str_plain_stream;
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    tmp_delsubscr_target_2 = var_state;

    tmp_delsubscr_subscript_2 = const_str_plain__orig;
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_2, tmp_delsubscr_subscript_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_delsubscr_target_3 = var_state;

    tmp_delsubscr_subscript_3 = const_str_plain__default;
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_3, tmp_delsubscr_subscript_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        goto frame_exception_exit_1;
    }
    tmp_delsubscr_target_4 = var_state;

    tmp_delsubscr_subscript_4 = const_str_plain_env;
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_4, tmp_delsubscr_subscript_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto frame_exception_exit_1;
    }
    tmp_delsubscr_target_5 = var_state;

    tmp_delsubscr_subscript_5 = const_str_plain_logStream;
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_5, tmp_delsubscr_subscript_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_plugins );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_state;

    tmp_ass_subscript_1 = const_str_plain_plugins;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
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

            if ( var_state )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_state,
                    var_state
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

    tmp_return_value = var_state;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2___getstate___of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_state );
    Py_DECREF( var_state );
    var_state = NULL;

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

    Py_XDECREF( var_state );
    var_state = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2___getstate___of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_3___setstate___of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_state = python_pars[ 1 ];
    PyObject *var_plugincls = NULL;
    PyObject *var_dummy_parser = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_frame_locals;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9fdfbbcb4ec3855526970aa864953a6d, module_nose$config );
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
    tmp_source_name_1 = par_state;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pop );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 235;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_plugins_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    assert( var_plugincls == NULL );
    var_plugincls = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_update );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_state;

    frame_function->f_lineno = 236;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_worker, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = var_plugincls;

    frame_function->f_lineno = 239;
    tmp_assattr_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_plugins, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_4 = par_self;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_plugins );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_loadPlugins );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 240;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_parserClass );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 242;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        goto frame_exception_exit_1;
    }
    assert( var_dummy_parser == NULL );
    var_dummy_parser = tmp_assign_source_2;

    tmp_source_name_7 = par_self;

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_plugins );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_addOptions );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_dummy_parser;

    tmp_args_element_name_3 = PyDict_New();
    frame_function->f_lineno = 243;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = par_self;

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_plugins );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_configure );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_self;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_options );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 244;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_self;

    frame_function->f_lineno = 244;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
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

            if ( par_state )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_state,
                    par_state
                );

                assert( res == 0 );
            }

            if ( var_plugincls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_plugincls,
                    var_plugincls
                );

                assert( res == 0 );
            }

            if ( var_dummy_parser )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dummy_parser,
                    var_dummy_parser
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
    NUITKA_CANNOT_GET_HERE( function_3___setstate___of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    CHECK_OBJECT( (PyObject *)var_plugincls );
    Py_DECREF( var_plugincls );
    var_plugincls = NULL;

    CHECK_OBJECT( (PyObject *)var_dummy_parser );
    Py_DECREF( var_dummy_parser );
    var_dummy_parser = NULL;

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

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    Py_XDECREF( var_plugincls );
    var_plugincls = NULL;

    Py_XDECREF( var_dummy_parser );
    var_dummy_parser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3___setstate___of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_4___repr___of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_d = NULL;
    PyObject *var_k = NULL;
    PyObject *var_keys = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
    PyObject *tmp_args_element_name_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7866bdb0491076d726f23511c8bfe581, module_nose$config );
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

    tmp_source_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_copy );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 247;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    assert( var_d == NULL );
    var_d = tmp_assign_source_1;

    tmp_ass_subvalue_1 = PyDict_New();
    tmp_ass_subscribed_1 = var_d;

    tmp_ass_subscript_1 = const_str_plain_env;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto frame_exception_exit_1;
    }
    // Tried code:
    tmp_source_name_3 = var_d;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_keys );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        goto try_except_handler_2;
    }
    PyThreadState_GET()->frame->f_lineno = 250;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
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
            PyThreadState_GET()->frame->f_lineno = 250;
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
        PyObject *old = var_k;
        var_k = tmp_assign_source_6;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_source_name_4 = var_k;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_startswith );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto try_except_handler_2;
    }
    PyThreadState_GET()->frame->f_lineno = 251;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_plain___tuple, 0 ) );

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 251;
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
    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_append_value_1 = var_k;

    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        goto try_except_handler_2;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_4___repr___of_class_4_Config_of_nose$config );
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
    NUITKA_CANNOT_GET_HERE( function_4___repr___of_class_4_Config_of_nose$config );
    return NULL;
    outline_result_1:;
    tmp_assign_source_2 = tmp_outline_return_value_1;
    assert( var_keys == NULL );
    var_keys = tmp_assign_source_2;

    tmp_source_name_5 = var_keys;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sort );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 252;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_1 = const_str_digest_b73417c3a0f44f8b0832c2d224ed4aa5;
    tmp_source_name_6 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
    assert( tmp_called_name_5 != NULL );
    // Tried code:
    tmp_iter_arg_2 = var_keys;

    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_3;
    }
    assert( tmp_list_contraction_2__$0 == NULL );
    tmp_list_contraction_2__$0 = tmp_assign_source_7;

    tmp_assign_source_8 = PyList_New( 0 );
    assert( tmp_list_contraction_2__contraction_result == NULL );
    tmp_list_contraction_2__contraction_result = tmp_assign_source_8;

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_2__$0;

    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 253;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_2__iter_value_0;
        tmp_list_contraction_2__iter_value_0 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = tmp_list_contraction_2__iter_value_0;

    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_10;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_append_list_2 = tmp_list_contraction_2__contraction_result;

    tmp_left_name_2 = const_str_digest_69b6ecec1ddb0b99fd2288f02d4834e9;
    tmp_right_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_k;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
    tmp_subscribed_name_1 = var_d;

    tmp_subscript_name_1 = var_k;

    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 253;
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
    tmp_append_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_list_contraction_2__contraction_result;

    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_4___repr___of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__$0 );
    Py_DECREF( tmp_list_contraction_2__$0 );
    tmp_list_contraction_2__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__contraction_result );
    Py_DECREF( tmp_list_contraction_2__contraction_result );
    tmp_list_contraction_2__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
    tmp_list_contraction_2__iter_value_0 = NULL;

    goto outline_result_2;
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

    Py_XDECREF( tmp_list_contraction_2__$0 );
    tmp_list_contraction_2__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_2__contraction_result );
    tmp_list_contraction_2__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
    tmp_list_contraction_2__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4___repr___of_class_4_Config_of_nose$config );
    return NULL;
    outline_result_2:;
    tmp_args_element_name_1 = tmp_outline_return_value_2;
    frame_function->f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
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

            if ( var_d )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_d,
                    var_d
                );

                assert( res == 0 );
            }

            if ( var_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    var_k
                );

                assert( res == 0 );
            }

            if ( var_keys )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keys,
                    var_keys
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
    NUITKA_CANNOT_GET_HERE( function_4___repr___of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)var_keys );
    Py_DECREF( var_keys );
    var_keys = NULL;

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

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_keys );
    var_keys = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4___repr___of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_5__parseArgs_of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_argv = python_pars[ 1 ];
    PyObject *par_cfg_files = python_pars[ 2 ];
    PyObject *var_warn_sometimes = NULL;
    PyObject *var_parser = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_defaults_1 = const_tuple_none_none_tuple;
    tmp_assign_source_1 = MAKE_FUNCTION_function_1_warn_sometimes_of_function_5__parseArgs_of_class_4_Config_of_nose$config( INCREASE_REFCOUNT( tmp_defaults_1 ), par_self );
    assert( var_warn_sometimes == NULL );
    var_warn_sometimes = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b27722d56144b0b88db05f19cf27d471, module_nose$config );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_ConfiguredDefaultsOptionParser );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConfiguredDefaultsOptionParser );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConfiguredDefaultsOptionParser" );
        exception_tb = NULL;

        exception_lineno = 267;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_source_name_1 = PyCell_GET( par_self );

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getParser );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 268;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 268;
    tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 268;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = PyCell_GET( par_self );

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_configSection );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 268;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_warn_sometimes;

    tmp_dict_key_1 = const_str_plain_file_error;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 268;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        goto frame_exception_exit_1;
    }
    assert( var_parser == NULL );
    var_parser = tmp_assign_source_2;

    tmp_source_name_3 = var_parser;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_parseArgsAndConfigFiles );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = par_argv;

    tmp_args_element_name_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 269;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_cfg_files;

    frame_function->f_lineno = 269;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
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

            if ( par_argv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_argv,
                    par_argv
                );

                assert( res == 0 );
            }

            if ( par_cfg_files )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cfg_files,
                    par_cfg_files
                );

                assert( res == 0 );
            }

            if ( var_warn_sometimes )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_warn_sometimes,
                    var_warn_sometimes
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
    NUITKA_CANNOT_GET_HERE( function_5__parseArgs_of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_argv );
    Py_DECREF( par_argv );
    par_argv = NULL;

    CHECK_OBJECT( (PyObject *)par_cfg_files );
    Py_DECREF( par_cfg_files );
    par_cfg_files = NULL;

    CHECK_OBJECT( (PyObject *)var_warn_sometimes );
    Py_DECREF( var_warn_sometimes );
    var_warn_sometimes = NULL;

    CHECK_OBJECT( (PyObject *)var_parser );
    Py_DECREF( var_parser );
    var_parser = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cfg_files );
    Py_DECREF( par_cfg_files );
    par_cfg_files = NULL;

    CHECK_OBJECT( (PyObject *)var_warn_sometimes );
    Py_DECREF( var_warn_sometimes );
    var_warn_sometimes = NULL;

    Py_XDECREF( var_parser );
    var_parser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5__parseArgs_of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_1_warn_sometimes_of_function_5__parseArgs_of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_filename = python_pars[ 2 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3dfa4f4f7afec3cfc42c0499bb49add2, module_nose$config );
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
    tmp_source_name_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 259;
        goto frame_exception_exit_1;
    }

    tmp_hasattr_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_plugins );
    if ( tmp_hasattr_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        goto frame_exception_exit_1;
    }
    tmp_hasattr_attr_1 = const_str_plain_excludedOption;
    tmp_and_left_value_1 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    Py_DECREF( tmp_hasattr_value_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
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
    tmp_source_name_3 = PyCell_GET( self->m_closure[0] );

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_plugins );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_excludedOption );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_name;

    frame_function->f_lineno = 260;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 260;
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
    tmp_left_name_1 = const_str_digest_482a234752dc81eae41b450d41e71c04;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_name;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_filename;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_msg;
        assert( old != NULL );
        par_msg = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_warn );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warn" );
        exception_tb = NULL;

        exception_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_msg;

    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
    }

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RuntimeWarning" );
        exception_tb = NULL;

        exception_lineno = 264;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 264;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_ConfigError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConfigError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConfigError" );
        exception_tb = NULL;

        exception_lineno = 266;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_msg;

    frame_function->f_lineno = 266;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 266;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
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
            if ( par_msg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_msg,
                    par_msg
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

            if ( par_filename )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_filename,
                    par_filename
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_warn_sometimes_of_function_5__parseArgs_of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_warn_sometimes_of_function_5__parseArgs_of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_6_configure_of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_argv = python_pars[ 1 ];
    PyObject *par_doc = python_pars[ 2 ];
    PyObject *var_env = NULL;
    PyObject *var_cfg_files = NULL;
    PyObject *var_options = NULL;
    PyObject *var_args = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
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
    PyObject *tmp_assattr_name_16;
    PyObject *tmp_assattr_name_17;
    PyObject *tmp_assattr_name_18;
    PyObject *tmp_assattr_name_19;
    PyObject *tmp_assattr_name_20;
    PyObject *tmp_assattr_name_21;
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
    PyObject *tmp_assattr_target_16;
    PyObject *tmp_assattr_target_17;
    PyObject *tmp_assattr_target_18;
    PyObject *tmp_assattr_target_19;
    PyObject *tmp_assattr_target_20;
    PyObject *tmp_assattr_target_21;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
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
    int tmp_cmp_GtE_1;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_db21283a9bcca37e2615270848a6c9e7, module_nose$config );
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

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_env );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        goto frame_exception_exit_1;
    }
    assert( var_env == NULL );
    var_env = tmp_assign_source_1;

    tmp_compare_left_1 = par_argv;

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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_sys );

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

        exception_lineno = 278;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_argv );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_argv;
        assert( old != NULL );
        par_argv = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_getattr_target_1 = par_self;

    tmp_getattr_attr_1 = const_str_plain_files;
    tmp_getattr_default_1 = PyList_New( 0 );
    tmp_assign_source_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    Py_DECREF( tmp_getattr_default_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        goto frame_exception_exit_1;
    }
    assert( var_cfg_files == NULL );
    var_cfg_files = tmp_assign_source_3;

    // Tried code:
    tmp_source_name_3 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__parseArgs );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_argv;

    tmp_args_element_name_2 = var_cfg_files;

    frame_function->f_lineno = 281;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto try_except_handler_2;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;

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


        exception_lineno = 281;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;

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


        exception_lineno = 281;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;

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
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    assert( var_options == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_options = tmp_assign_source_7;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    assert( var_args == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_args = tmp_assign_source_8;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_getattr_target_2 = var_options;

    tmp_getattr_attr_2 = const_str_plain_files;
    tmp_getattr_default_2 = PyList_New( 0 );
    tmp_cond_value_1 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    Py_DECREF( tmp_getattr_default_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 284;
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
    // Tried code:
    tmp_source_name_4 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__parseArgs );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_3;
    }
    tmp_args_element_name_3 = par_argv;

    tmp_source_name_5 = var_options;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_files );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 285;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 285;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_3;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_10 == NULL )
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
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_11 == NULL )
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
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;

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
    tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = var_options;
        assert( old != NULL );
        var_options = tmp_assign_source_12;
        Py_INCREF( var_options );
        Py_DECREF( old );
    }

    tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;

    {
        PyObject *old = var_args;
        assert( old != NULL );
        var_args = tmp_assign_source_13;
        Py_INCREF( var_args );
        Py_DECREF( old );
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

    branch_no_2:;
    tmp_assattr_name_1 = var_options;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_options, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = var_args;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        goto frame_exception_exit_1;
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
    tmp_assattr_name_2 = var_args;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_testNames, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_source_name_6 = var_options;

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_testNames );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_8 = par_self;

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_testNames );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_extend );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_tolist );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tolist );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "tolist" );
        exception_tb = NULL;

        exception_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = var_options;

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_testNames );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 291;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 291;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 291;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 291;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    tmp_source_name_10 = var_options;

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_py3where );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 294;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_version_info );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_tuple_int_pos_3_tuple;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 294;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_12 = var_options;

    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_py3where );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = var_options;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_where, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 295;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    branch_no_6:;
    branch_no_5:;
    tmp_source_name_13 = var_options;

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_where );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 299;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    tmp_source_name_14 = var_env;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_get );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 300;
    tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_plain_NOSE_WHERE_none_tuple, 0 ) );

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = var_options;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_where, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 300;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    branch_no_7:;
    tmp_source_name_15 = var_options;

    tmp_cond_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_ignoreFiles );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_8;
    }
    else
    {
        goto branch_yes_8;
    }
    branch_yes_8:;
    tmp_source_name_16 = var_env;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_get );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_NOSE_IGNORE_FILES;
    tmp_call_arg_element_2 = PyList_New( 0 );
    frame_function->f_lineno = 304;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1, tmp_call_arg_element_2 };
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = var_options;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_ignoreFiles, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    branch_no_8:;
    tmp_source_name_17 = var_options;

    tmp_cond_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_include );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 305;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    tmp_source_name_18 = var_env;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_get );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_plain_NOSE_INCLUDE;
    tmp_call_arg_element_4 = PyList_New( 0 );
    frame_function->f_lineno = 306;
    {
        PyObject *call_args[] = { tmp_call_arg_element_3, tmp_call_arg_element_4 };
        tmp_assattr_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_6 = var_options;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_include, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 306;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    branch_no_9:;
    tmp_source_name_19 = var_options;

    tmp_cond_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_exclude );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 307;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_no_10;
    }
    else
    {
        goto branch_yes_10;
    }
    branch_yes_10:;
    tmp_source_name_20 = var_env;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_get );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_plain_NOSE_EXCLUDE;
    tmp_call_arg_element_6 = PyList_New( 0 );
    frame_function->f_lineno = 308;
    {
        PyObject *call_args[] = { tmp_call_arg_element_5, tmp_call_arg_element_6 };
        tmp_assattr_name_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_7 = var_options;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_exclude, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 308;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    branch_no_10:;
    tmp_source_name_21 = var_options;

    tmp_assattr_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_addPaths );
    if ( tmp_assattr_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_8 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_addPaths, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        exception_lineno = 310;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_8 );
    tmp_source_name_22 = var_options;

    tmp_assattr_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_stopOnError );
    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_9 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_stopOnError, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_9 );

        exception_lineno = 311;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_9 );
    tmp_source_name_23 = var_options;

    tmp_assattr_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_verbosity );
    if ( tmp_assattr_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_10 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_verbosity, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        exception_lineno = 312;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    tmp_source_name_24 = var_options;

    tmp_assattr_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_includeExe );
    if ( tmp_assattr_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_11 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_includeExe, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_11 );

        exception_lineno = 313;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_11 );
    tmp_source_name_25 = var_options;

    tmp_assattr_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_traverseNamespace );
    if ( tmp_assattr_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_12 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_traverseNamespace, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 314;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );
    tmp_source_name_26 = var_options;

    tmp_assattr_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_debug );
    if ( tmp_assattr_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_13 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_debug, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_13 );

        exception_lineno = 315;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_13 );
    tmp_source_name_27 = var_options;

    tmp_assattr_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_debugLog );
    if ( tmp_assattr_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_14 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_debugLog, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_14 );

        exception_lineno = 316;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_14 );
    tmp_source_name_28 = var_options;

    tmp_assattr_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_loggingConfig );
    if ( tmp_assattr_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_15 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_loggingConfig, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_15 );

        exception_lineno = 317;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_15 );
    tmp_source_name_29 = var_options;

    tmp_assattr_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_firstPackageWins );
    if ( tmp_assattr_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_16 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_firstPackageWins, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_16 );

        exception_lineno = 318;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_16 );
    tmp_source_name_30 = par_self;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_configureLogging );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 319;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
    Py_DECREF( tmp_called_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_31 = var_options;

    tmp_cond_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_byteCompile );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 321;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_no_11;
    }
    else
    {
        goto branch_yes_11;
    }
    branch_yes_11:;
    tmp_assattr_name_17 = Py_True;
    tmp_assattr_target_17 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_17 == NULL ))
    {
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 322;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_dont_write_bytecode, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        goto frame_exception_exit_1;
    }
    branch_no_11:;
    tmp_source_name_32 = var_options;

    tmp_compare_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_where );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    Py_DECREF( tmp_compare_left_5 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_33 = par_self;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_configureWhere );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_source_name_34 = var_options;

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_where );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 325;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_12:;
    tmp_source_name_35 = var_options;

    tmp_cond_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_testMatch );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 327;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_36 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_36 == NULL ))
    {
        tmp_source_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_36 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 328;
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_compile );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    tmp_source_name_37 = var_options;

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_testMatch );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 328;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assattr_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assattr_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_18 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_testMatch, tmp_assattr_name_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_18 );

        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_18 );
    branch_no_13:;
    tmp_source_name_38 = var_options;

    tmp_cond_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_ignoreFiles );
    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        exception_lineno = 330;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_called_name_12 = LOOKUP_BUILTIN( const_str_plain_map );
    assert( tmp_called_name_12 != NULL );
    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 331;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_compile );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        goto frame_exception_exit_1;
    }
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_tolist );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tolist );
    }

    if ( tmp_called_name_13 == NULL )
    {
        Py_DECREF( tmp_args_element_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "tolist" );
        exception_tb = NULL;

        exception_lineno = 331;
        goto frame_exception_exit_1;
    }

    tmp_source_name_40 = var_options;

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_ignoreFiles );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 331;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 331;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 331;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 331;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assattr_name_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assattr_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_19 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_ignoreFiles, tmp_assattr_name_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_19 );

        exception_lineno = 331;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_19 );
    tmp_source_name_41 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_41 == NULL ))
    {
        tmp_source_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_41 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 332;
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_info );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = const_str_digest_ba12ac0a1b0b778d8e926be39e87e887;
    tmp_source_name_42 = var_options;

    tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_ignoreFiles );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 332;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 332;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_14;
    branch_no_14:;
    tmp_source_name_43 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_43 == NULL ))
    {
        tmp_source_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_43 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 334;
        goto frame_exception_exit_1;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_info );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = const_str_digest_ba12ac0a1b0b778d8e926be39e87e887;
    tmp_source_name_44 = par_self;

    tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_ignoreFilesDefaultStrings );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 334;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 334;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_14:;
    tmp_source_name_45 = var_options;

    tmp_cond_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_include );
    if ( tmp_cond_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        exception_lineno = 336;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_called_name_16 = LOOKUP_BUILTIN( const_str_plain_map );
    assert( tmp_called_name_16 != NULL );
    tmp_source_name_46 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_46 == NULL ))
    {
        tmp_source_name_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_46 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 337;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_compile );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        goto frame_exception_exit_1;
    }
    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_tolist );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tolist );
    }

    if ( tmp_called_name_17 == NULL )
    {
        Py_DECREF( tmp_args_element_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "tolist" );
        exception_tb = NULL;

        exception_lineno = 337;
        goto frame_exception_exit_1;
    }

    tmp_source_name_47 = var_options;

    tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_include );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_16 );

        exception_lineno = 337;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 337;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_args_element_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_16 );

        exception_lineno = 337;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 337;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_assattr_name_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_args_element_name_16 );
    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_assattr_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_20 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_include, tmp_assattr_name_20 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_20 );

        exception_lineno = 337;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_20 );
    tmp_source_name_48 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_log );

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

        exception_lineno = 338;
        goto frame_exception_exit_1;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_info );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_19 = const_str_digest_4081419cdf3d6da0841350ddcee14bd9;
    tmp_source_name_49 = var_options;

    tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_include );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_18 );

        exception_lineno = 338;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 338;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_15:;
    tmp_source_name_50 = var_options;

    tmp_cond_value_11 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_exclude );
    if ( tmp_cond_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_11 );

        exception_lineno = 340;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_called_name_19 = LOOKUP_BUILTIN( const_str_plain_map );
    assert( tmp_called_name_19 != NULL );
    tmp_source_name_51 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_51 == NULL ))
    {
        tmp_source_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_51 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 341;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_compile );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        goto frame_exception_exit_1;
    }
    tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_tolist );

    if (unlikely( tmp_called_name_20 == NULL ))
    {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tolist );
    }

    if ( tmp_called_name_20 == NULL )
    {
        Py_DECREF( tmp_args_element_name_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "tolist" );
        exception_tb = NULL;

        exception_lineno = 341;
        goto frame_exception_exit_1;
    }

    tmp_source_name_52 = var_options;

    tmp_args_element_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_exclude );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_21 );

        exception_lineno = 341;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 341;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_args_element_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_21 );

        exception_lineno = 341;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 341;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_assattr_name_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_assattr_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_21 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_exclude, tmp_assattr_name_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_21 );

        exception_lineno = 341;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_21 );
    tmp_source_name_53 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_53 == NULL ))
    {
        tmp_source_name_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_53 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 342;
        goto frame_exception_exit_1;
    }

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_info );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_24 = const_str_digest_7203f3f755a460e0f6bc36982b6b5452;
    tmp_source_name_54 = var_options;

    tmp_args_element_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_exclude );
    if ( tmp_args_element_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_21 );

        exception_lineno = 342;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 342;
    {
        PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_args_element_name_25 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_16:;
    tmp_source_name_55 = var_options;

    tmp_cond_value_12 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_showPlugins );
    if ( tmp_cond_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_12 );

        exception_lineno = 345;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_no_17;
    }
    else
    {
        goto branch_yes_17;
    }
    branch_yes_17:;
    tmp_source_name_57 = par_self;

    tmp_source_name_56 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_plugins );
    if ( tmp_source_name_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        goto frame_exception_exit_1;
    }
    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_configure );
    Py_DECREF( tmp_source_name_56 );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_26 = var_options;

    tmp_args_element_name_27 = par_self;

    frame_function->f_lineno = 346;
    {
        PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_59 = par_self;

    tmp_source_name_58 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_plugins );
    if ( tmp_source_name_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        goto frame_exception_exit_1;
    }
    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_begin );
    Py_DECREF( tmp_source_name_58 );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 347;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_23 );
    Py_DECREF( tmp_called_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_17:;

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

            if ( par_doc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_doc,
                    par_doc
                );

                assert( res == 0 );
            }

            if ( var_env )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_env,
                    var_env
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

            if ( var_options )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_options,
                    var_options
                );

                assert( res == 0 );
            }

            if ( var_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    var_args
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
    NUITKA_CANNOT_GET_HERE( function_6_configure_of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_argv );
    Py_DECREF( par_argv );
    par_argv = NULL;

    CHECK_OBJECT( (PyObject *)par_doc );
    Py_DECREF( par_doc );
    par_doc = NULL;

    CHECK_OBJECT( (PyObject *)var_env );
    Py_DECREF( var_env );
    var_env = NULL;

    CHECK_OBJECT( (PyObject *)var_cfg_files );
    Py_DECREF( var_cfg_files );
    var_cfg_files = NULL;

    CHECK_OBJECT( (PyObject *)var_options );
    Py_DECREF( var_options );
    var_options = NULL;

    CHECK_OBJECT( (PyObject *)var_args );
    Py_DECREF( var_args );
    var_args = NULL;

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

    Py_XDECREF( par_argv );
    par_argv = NULL;

    CHECK_OBJECT( (PyObject *)par_doc );
    Py_DECREF( par_doc );
    par_doc = NULL;

    Py_XDECREF( var_env );
    var_env = NULL;

    Py_XDECREF( var_cfg_files );
    var_cfg_files = NULL;

    Py_XDECREF( var_options );
    var_options = NULL;

    Py_XDECREF( var_args );
    var_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6_configure_of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_7_configureLogging_of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_fileConfig = NULL;
    PyObject *var_format = NULL;
    PyObject *var_handler = NULL;
    PyObject *var_logger = NULL;
    PyObject *var_found = NULL;
    PyObject *var_debugLogAbsPath = NULL;
    PyObject *var_h = NULL;
    PyObject *var_lvl = NULL;
    PyObject *var_name = NULL;
    PyObject *var_debug_loggers = NULL;
    PyObject *var_logger_name = NULL;
    PyObject *var_l = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    int tmp_cmp_GtE_1;
    int tmp_cmp_GtE_2;
    int tmp_cmp_GtE_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_outline_return_value_1;
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
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2fe5996fd8e3aebecd1188a19c3e34ed, module_nose$config );
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

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_loggingConfig );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 355;
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
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$config)->md_dict;
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

    if ( var_fileConfig )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fileConfig,
            var_fileConfig
        );

        assert( res == 0 );
    }

    if ( var_format )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_format,
            var_format
        );

        assert( res == 0 );
    }

    if ( var_handler )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_handler,
            var_handler
        );

        assert( res == 0 );
    }

    if ( var_logger )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_logger,
            var_logger
        );

        assert( res == 0 );
    }

    if ( var_found )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_found,
            var_found
        );

        assert( res == 0 );
    }

    if ( var_debugLogAbsPath )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_debugLogAbsPath,
            var_debugLogAbsPath
        );

        assert( res == 0 );
    }

    if ( var_h )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_h,
            var_h
        );

        assert( res == 0 );
    }

    if ( var_lvl )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_lvl,
            var_lvl
        );

        assert( res == 0 );
    }

    if ( var_name )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_name,
            var_name
        );

        assert( res == 0 );
    }

    if ( var_debug_loggers )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_debug_loggers,
            var_debug_loggers
        );

        assert( res == 0 );
    }

    if ( var_logger_name )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_logger_name,
            var_logger_name
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

    frame_function->f_lineno = 356;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_39d85037864ca478777aeb81490f19f2, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_fileConfig_tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_fileConfig );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        goto frame_exception_exit_1;
    }
    assert( var_fileConfig == NULL );
    var_fileConfig = tmp_assign_source_1;

    tmp_called_name_1 = var_fileConfig;

    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_loggingConfig );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 357;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 360;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Formatter );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 360;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_7672fa2acb59c4a6c92de94f69138e9f_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        goto frame_exception_exit_1;
    }
    assert( var_format == NULL );
    var_format = tmp_assign_source_2;

    tmp_source_name_4 = par_self;

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_debugLog );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 361;
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 362;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_FileHandler );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_debugLog );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 362;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 362;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        goto frame_exception_exit_1;
    }
    assert( var_handler == NULL );
    var_handler = tmp_assign_source_3;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 364;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_StreamHandler );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_logStream );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 364;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 364;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto frame_exception_exit_1;
    }
    assert( var_handler == NULL );
    var_handler = tmp_assign_source_4;

    branch_end_2:;
    tmp_source_name_9 = var_handler;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_setFormatter );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 365;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_format;

    frame_function->f_lineno = 365;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 365;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 367;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_getLogger );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 367;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_plain_nose_tuple, 0 ) );

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto frame_exception_exit_1;
    }
    assert( var_logger == NULL );
    var_logger = tmp_assign_source_5;

    tmp_assattr_name_1 = const_int_0;
    tmp_assattr_target_1 = var_logger;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_propagate, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = Py_False;
    assert( var_found == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_found = tmp_assign_source_6;

    tmp_source_name_11 = par_self;

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_debugLog );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 373;
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
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 374;
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_path );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_debugLog );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 374;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    assert( var_debugLogAbsPath == NULL );
    var_debugLogAbsPath = tmp_assign_source_7;

    tmp_source_name_15 = var_logger;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_handlers );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_8;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 375;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_h;
        var_h = tmp_assign_source_10;
        Py_INCREF( var_h );
        Py_XDECREF( old );
    }

    tmp_type_arg_1 = var_h;

    tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compexpr_left_1 != NULL );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 376;
        goto try_except_handler_2;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_FileHandler );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 376;
        goto try_except_handler_2;
    }
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 377;
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
    tmp_source_name_17 = var_h;

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_baseFilename );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto try_except_handler_2;
    }
    tmp_compexpr_right_2 = var_debugLogAbsPath;

    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
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

        exception_lineno = 377;
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
    tmp_assign_source_11 = Py_True;
    {
        PyObject *old = var_found;
        var_found = tmp_assign_source_11;
        Py_INCREF( var_found );
        Py_XDECREF( old );
    }

    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
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

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_18 = var_logger;

    tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_handlers );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_12;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 380;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_h;
        var_h = tmp_assign_source_14;
        Py_INCREF( var_h );
        Py_XDECREF( old );
    }

    tmp_type_arg_2 = var_h;

    tmp_compexpr_left_3 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( tmp_compexpr_left_3 != NULL );
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 381;
        goto try_except_handler_3;
    }

    tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_StreamHandler );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 381;
        goto try_except_handler_3;
    }
    tmp_and_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        goto try_except_handler_3;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 382;
        goto try_except_handler_3;
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
    tmp_source_name_20 = var_h;

    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_stream );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        goto try_except_handler_3;
    }
    tmp_source_name_21 = par_self;

    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_logStream );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_4 );

        exception_lineno = 382;
        goto try_except_handler_3;
    }
    tmp_and_right_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        goto try_except_handler_3;
    }
    tmp_cond_value_5 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_5 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 382;
        goto try_except_handler_3;
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
    tmp_assign_source_15 = Py_True;
    {
        PyObject *old = var_found;
        var_found = tmp_assign_source_15;
        Py_INCREF( var_found );
        Py_XDECREF( old );
    }

    branch_no_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
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

    branch_end_3:;
    tmp_cond_value_6 = var_found;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "found" );
        exception_tb = NULL;

        exception_lineno = 384;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 384;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_source_name_22 = var_logger;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_addHandler );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_handler;

    frame_function->f_lineno = 385;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 388;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_WARNING );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        goto frame_exception_exit_1;
    }
    assert( var_lvl == NULL );
    var_lvl = tmp_assign_source_16;

    tmp_source_name_24 = par_self;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_verbosity );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_5;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 389;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_17 = const_int_0;
    {
        PyObject *old = var_lvl;
        assert( old != NULL );
        var_lvl = tmp_assign_source_17;
        Py_INCREF( var_lvl );
        Py_DECREF( old );
    }

    goto branch_end_7;
    branch_no_7:;
    tmp_source_name_25 = par_self;

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_verbosity );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_4;
    tmp_cmp_GtE_2 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 391;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_GtE_2 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 392;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_18 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_DEBUG );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_lvl;
        assert( old != NULL );
        var_lvl = tmp_assign_source_18;
        Py_DECREF( old );
    }

    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_27 = par_self;

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_verbosity );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_pos_3;
    tmp_cmp_GtE_3 = RICH_COMPARE_BOOL_GE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_GtE_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_GtE_3 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 394;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_INFO );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_lvl;
        assert( old != NULL );
        var_lvl = tmp_assign_source_19;
        Py_DECREF( old );
    }

    branch_no_9:;
    branch_end_8:;
    branch_end_7:;
    tmp_source_name_29 = var_logger;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_setLevel );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var_lvl;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "lvl" );
        exception_tb = NULL;

        exception_lineno = 395;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 395;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_30 = par_self;

    tmp_cond_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_debug );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 398;
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
    // Tried code:
    tmp_source_name_32 = par_self;

    tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_debug );
    if ( tmp_source_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        goto try_except_handler_4;
    }
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_split );
    Py_DECREF( tmp_source_name_31 );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        goto try_except_handler_4;
    }
    PyThreadState_GET()->frame->f_lineno = 400;
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        goto try_except_handler_4;
    }
    tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        goto try_except_handler_4;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_21;

    tmp_assign_source_22 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_22;

    loop_start_3:;
    tmp_next_source_3 = tmp_list_contraction_1__$0;

    tmp_assign_source_23 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_23 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 400;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    tmp_assign_source_24 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_24;
        Py_INCREF( var_name );
        Py_XDECREF( old );
    }

    tmp_cond_value_8 = var_name;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_append_value_1 = var_name;

    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        goto try_except_handler_4;
    }
    branch_no_11:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_7_configureLogging_of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
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
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_7_configureLogging_of_class_4_Config_of_nose$config );
    return NULL;
    outline_result_1:;
    tmp_assign_source_20 = tmp_outline_return_value_1;
    assert( var_debug_loggers == NULL );
    var_debug_loggers = tmp_assign_source_20;

    tmp_iter_arg_4 = var_debug_loggers;

    tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_25;

    // Tried code:
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_3__for_iterator;

    tmp_assign_source_26 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_26 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 402;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    tmp_assign_source_27 = tmp_for_loop_3__iter_value;

    {
        PyObject *old = var_logger_name;
        var_logger_name = tmp_assign_source_27;
        Py_INCREF( var_logger_name );
        Py_XDECREF( old );
    }

    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 403;
        goto try_except_handler_5;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_getLogger );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        goto try_except_handler_5;
    }
    tmp_args_element_name_8 = var_logger_name;

    frame_function->f_lineno = 403;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        goto try_except_handler_5;
    }
    {
        PyObject *old = var_l;
        var_l = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    tmp_source_name_34 = var_l;

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_setLevel );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        goto try_except_handler_5;
    }
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 404;
        goto try_except_handler_5;
    }

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_DEBUG );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 404;
        goto try_except_handler_5;
    }
    frame_function->f_lineno = 404;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_36 = var_l;

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_handlers );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        goto try_except_handler_5;
    }
    tmp_and_left_value_3 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        goto try_except_handler_5;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        goto try_except_handler_5;
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
    tmp_source_name_37 = var_logger_name;

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_startswith );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        goto try_except_handler_5;
    }
    frame_function->f_lineno = 405;
    tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_str_plain_nose_tuple, 0 ) );

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        goto try_except_handler_5;
    }
    tmp_and_right_value_3 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        goto try_except_handler_5;
    }
    tmp_cond_value_9 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_9 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_38 = var_l;

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_addHandler );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        goto try_except_handler_5;
    }
    tmp_args_element_name_10 = var_handler;

    frame_function->f_lineno = 406;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    branch_no_12:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        goto try_except_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_3;
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
    try_end_3:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    branch_no_10:;

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

            if ( var_fileConfig )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fileConfig,
                    var_fileConfig
                );

                assert( res == 0 );
            }

            if ( var_format )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_format,
                    var_format
                );

                assert( res == 0 );
            }

            if ( var_handler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_handler,
                    var_handler
                );

                assert( res == 0 );
            }

            if ( var_logger )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_logger,
                    var_logger
                );

                assert( res == 0 );
            }

            if ( var_found )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_found,
                    var_found
                );

                assert( res == 0 );
            }

            if ( var_debugLogAbsPath )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_debugLogAbsPath,
                    var_debugLogAbsPath
                );

                assert( res == 0 );
            }

            if ( var_h )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_h,
                    var_h
                );

                assert( res == 0 );
            }

            if ( var_lvl )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lvl,
                    var_lvl
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

            if ( var_debug_loggers )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_debug_loggers,
                    var_debug_loggers
                );

                assert( res == 0 );
            }

            if ( var_logger_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_logger_name,
                    var_logger_name
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
    NUITKA_CANNOT_GET_HERE( function_7_configureLogging_of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_fileConfig );
    var_fileConfig = NULL;

    Py_XDECREF( var_format );
    var_format = NULL;

    Py_XDECREF( var_handler );
    var_handler = NULL;

    Py_XDECREF( var_logger );
    var_logger = NULL;

    Py_XDECREF( var_found );
    var_found = NULL;

    Py_XDECREF( var_debugLogAbsPath );
    var_debugLogAbsPath = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_lvl );
    var_lvl = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_debug_loggers );
    var_debug_loggers = NULL;

    Py_XDECREF( var_logger_name );
    var_logger_name = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

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

    Py_XDECREF( var_fileConfig );
    var_fileConfig = NULL;

    Py_XDECREF( var_format );
    var_format = NULL;

    Py_XDECREF( var_handler );
    var_handler = NULL;

    Py_XDECREF( var_logger );
    var_logger = NULL;

    Py_XDECREF( var_found );
    var_found = NULL;

    Py_XDECREF( var_debugLogAbsPath );
    var_debugLogAbsPath = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_lvl );
    var_lvl = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_debug_loggers );
    var_debug_loggers = NULL;

    Py_XDECREF( var_logger_name );
    var_logger_name = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_7_configureLogging_of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_8_configureWhere_of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_where = python_pars[ 1 ];
    PyObject *var_add_path = NULL;
    PyObject *var_warned = NULL;
    PyObject *var_path = NULL;
    PyObject *var_abs_path = NULL;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5582bf1ec4f2e7b862a81dcf9cb53547, module_nose$config );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$config)->md_dict;
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

    if ( par_where )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_where,
            par_where
        );

        assert( res == 0 );
    }

    if ( var_add_path )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_add_path,
            var_add_path
        );

        assert( res == 0 );
    }

    if ( var_warned )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_warned,
            var_warned
        );

        assert( res == 0 );
    }

    if ( var_path )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_path,
            var_path
        );

        assert( res == 0 );
    }

    if ( var_abs_path )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_abs_path,
            var_abs_path
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 411;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_7775affb36096bf2cf44236037c47ff7, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_add_path_tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_add_path );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        goto frame_exception_exit_1;
    }
    assert( var_add_path == NULL );
    var_add_path = tmp_assign_source_1;

    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_workingDir, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 412;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_tolist );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tolist );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "tolist" );
        exception_tb = NULL;

        exception_lineno = 413;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_where;

    frame_function->f_lineno = 413;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_where;
        assert( old != NULL );
        par_where = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_assign_source_3 = Py_False;
    assert( var_warned == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_warned = tmp_assign_source_3;

    tmp_iter_arg_1 = par_where;

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 415;
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
            frame_function->f_lineno = 415;
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
        PyObject *old = var_path;
        var_path = tmp_assign_source_6;
        Py_INCREF( var_path );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = par_self;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_workingDir );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 416;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_absdir );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_absdir );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "absdir" );
        exception_tb = NULL;

        exception_lineno = 417;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = var_path;

    frame_function->f_lineno = 417;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 417;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_abs_path;
        var_abs_path = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_abs_path;

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
    tmp_left_name_1 = const_str_digest_af312e04583502f5eb717df915e0414f;
    tmp_right_name_1 = var_path;

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 419;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 420;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_2;
    branch_no_2:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 421;
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_info );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = const_str_digest_19196f7bbb2b7faebb0f802afac42301;
    tmp_args_element_name_4 = var_abs_path;

    frame_function->f_lineno = 421;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_2 = var_abs_path;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_workingDir, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        goto try_except_handler_2;
    }
    tmp_source_name_3 = par_self;

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_addPaths );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 424;
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_os );

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

        exception_lineno = 424;
        goto try_except_handler_2;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        goto try_except_handler_2;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_exists );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        goto try_except_handler_2;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 424;
        goto try_except_handler_2;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_path );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 424;
        goto try_except_handler_2;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 424;
        goto try_except_handler_2;
    }
    tmp_args_element_name_6 = var_abs_path;

    tmp_args_element_name_7 = const_str_digest_409868245cb421b4cd0ecede43982749;
    frame_function->f_lineno = 424;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 424;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 424;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
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
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 424;
        goto try_except_handler_2;
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
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 425;
        goto try_except_handler_2;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_info );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
        goto try_except_handler_2;
    }
    tmp_left_name_2 = const_str_digest_f8335a2416157008868f35eef6407f96;
    tmp_right_name_2 = var_abs_path;

    tmp_args_element_name_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 425;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 426;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_7 = var_add_path;

    tmp_args_element_name_9 = var_abs_path;

    frame_function->f_lineno = 427;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 427;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    goto loop_start_1;
    branch_no_1:;
    tmp_cond_value_3 = var_warned;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "warned" );
        exception_tb = NULL;

        exception_lineno = 429;
        goto try_except_handler_2;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_warn );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warn" );
        exception_tb = NULL;

        exception_lineno = 430;
        goto try_except_handler_2;
    }

    tmp_args_element_name_10 = const_str_digest_b44925416098c2c50c09201548391371;
    tmp_args_element_name_11 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_args_element_name_11 == NULL ))
    {
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DeprecationWarning" );
        exception_tb = NULL;

        exception_lineno = 435;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 435;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_8 = Py_True;
    {
        PyObject *old = var_warned;
        var_warned = tmp_assign_source_8;
        Py_INCREF( var_warned );
        Py_XDECREF( old );
    }

    branch_no_4:;
    tmp_source_name_10 = par_self;

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_testNames );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 437;
        goto try_except_handler_2;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 437;
        goto try_except_handler_2;
    }
    tmp_args_element_name_12 = var_path;

    frame_function->f_lineno = 437;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 437;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 415;
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

            if ( par_where )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_where,
                    par_where
                );

                assert( res == 0 );
            }

            if ( var_add_path )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_add_path,
                    var_add_path
                );

                assert( res == 0 );
            }

            if ( var_warned )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_warned,
                    var_warned
                );

                assert( res == 0 );
            }

            if ( var_path )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_path,
                    var_path
                );

                assert( res == 0 );
            }

            if ( var_abs_path )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_abs_path,
                    var_abs_path
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
    NUITKA_CANNOT_GET_HERE( function_8_configureWhere_of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_where );
    Py_DECREF( par_where );
    par_where = NULL;

    CHECK_OBJECT( (PyObject *)var_add_path );
    Py_DECREF( var_add_path );
    var_add_path = NULL;

    Py_XDECREF( var_warned );
    var_warned = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_abs_path );
    var_abs_path = NULL;

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

    CHECK_OBJECT( (PyObject *)par_where );
    Py_DECREF( par_where );
    par_where = NULL;

    Py_XDECREF( var_add_path );
    var_add_path = NULL;

    Py_XDECREF( var_warned );
    var_warned = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_abs_path );
    var_abs_path = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_8_configureWhere_of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_9_default_of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0c354865906d665a1cb1acb8ba449526, module_nose$config );
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

    tmp_source_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_update );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__default );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 442;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 442;
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


        exception_lineno = 442;
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
    NUITKA_CANNOT_GET_HERE( function_9_default_of_class_4_Config_of_nose$config );
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
    NUITKA_CANNOT_GET_HERE( function_9_default_of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_10_getParser_of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_doc = python_pars[ 1 ];
    PyObject *var_env = NULL;
    PyObject *var_parser = NULL;
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
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
    PyObject *tmp_args_name_9;
    PyObject *tmp_args_name_10;
    PyObject *tmp_args_name_11;
    PyObject *tmp_args_name_12;
    PyObject *tmp_args_name_13;
    PyObject *tmp_args_name_14;
    PyObject *tmp_args_name_15;
    PyObject *tmp_args_name_16;
    PyObject *tmp_args_name_17;
    PyObject *tmp_args_name_18;
    PyObject *tmp_args_name_19;
    PyObject *tmp_args_name_20;
    PyObject *tmp_args_name_21;
    PyObject *tmp_args_name_22;
    PyObject *tmp_args_name_23;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    PyObject *tmp_dict_key_32;
    PyObject *tmp_dict_key_33;
    PyObject *tmp_dict_key_34;
    PyObject *tmp_dict_key_35;
    PyObject *tmp_dict_key_36;
    PyObject *tmp_dict_key_37;
    PyObject *tmp_dict_key_38;
    PyObject *tmp_dict_key_39;
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
    PyObject *tmp_dict_value_32;
    PyObject *tmp_dict_value_33;
    PyObject *tmp_dict_value_34;
    PyObject *tmp_dict_value_35;
    PyObject *tmp_dict_value_36;
    PyObject *tmp_dict_value_37;
    PyObject *tmp_dict_value_38;
    PyObject *tmp_dict_value_39;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
    PyObject *tmp_kw_name_10;
    PyObject *tmp_kw_name_11;
    PyObject *tmp_kw_name_12;
    PyObject *tmp_kw_name_13;
    PyObject *tmp_kw_name_14;
    PyObject *tmp_kw_name_15;
    PyObject *tmp_kw_name_16;
    PyObject *tmp_kw_name_17;
    PyObject *tmp_kw_name_18;
    PyObject *tmp_kw_name_19;
    PyObject *tmp_kw_name_20;
    PyObject *tmp_kw_name_21;
    PyObject *tmp_kw_name_22;
    PyObject *tmp_kw_name_23;
    PyObject *tmp_left_name_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_17b9efb5255841cffda98d4880cbd083, module_nose$config );
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

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parser );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 447;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 447;
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
    tmp_source_name_2 = par_self;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_parser );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_env );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
        goto frame_exception_exit_1;
    }
    assert( var_env == NULL );
    var_env = tmp_assign_source_1;

    tmp_source_name_4 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_parserClass );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 450;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_doc;

    frame_function->f_lineno = 450;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 450;
        goto frame_exception_exit_1;
    }
    assert( var_parser == NULL );
    var_parser = tmp_assign_source_2;

    tmp_source_name_5 = var_parser;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_add_option );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = const_tuple_4892827267518af8d49592eedc550406_tuple;
    tmp_kw_name_1 = PyDict_Copy( const_dict_0b1b7bd353efbaadab6d6121a908c394 );
    frame_function->f_lineno = 454;
    tmp_unused = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 454;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = var_parser;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_add_option );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = const_tuple_8c82047994ba916b412fd3095354a053_tuple;
    tmp_kw_name_2 = PyDict_Copy( const_dict_eabc5ae09e205b6a867bef8808d820a9 );
    frame_function->f_lineno = 458;
    tmp_unused = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = var_parser;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_add_option );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        goto frame_exception_exit_1;
    }
    tmp_args_name_3 = const_tuple_6e0ce2585290961afef9353bf934255f_tuple;
    tmp_kw_name_3 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = const_str_plain_count;
    tmp_dict_key_1 = const_str_plain_action;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = const_str_plain_verbosity;
    tmp_dict_key_2 = const_str_plain_dest;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_source_name_8 = par_self;

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_verbosity );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 463;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_default;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_dict_value_4 = const_str_digest_edf4f5f8f495d4eaa0f752c5c4dfe51f;
    tmp_dict_key_4 = const_str_plain_help;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 464;
    tmp_unused = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 464;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = var_parser;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_add_option );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 465;
        goto frame_exception_exit_1;
    }
    tmp_args_name_4 = const_tuple_str_digest_84742fd914746eb701afeffc11eaf00f_tuple;
    tmp_kw_name_4 = PyDict_Copy( const_dict_6c64884cd19a8b9a401ecd3366b98b56 );
    frame_function->f_lineno = 468;
    tmp_unused = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 468;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = var_parser;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_add_option );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 470;
        goto frame_exception_exit_1;
    }
    tmp_args_name_5 = const_tuple_7738adb322f69e505949fa388c51e3a1_tuple;
    tmp_kw_name_5 = PyDict_Copy( const_dict_ed3aad069bb7e0f8bc588f5557c723fb );
    frame_function->f_lineno = 472;
    tmp_unused = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 472;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = var_parser;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_add_option );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        goto frame_exception_exit_1;
    }
    tmp_args_name_6 = const_tuple_46e30b5030a8d486c63aa88ab509b6ea_tuple;
    tmp_kw_name_6 = PyDict_Copy( const_dict_d5bc5f2eb9c84d10500f1da0e37e3be6 );
    frame_function->f_lineno = 476;
    tmp_unused = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_kw_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 476;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_12 = var_parser;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_add_option );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 479;
        goto frame_exception_exit_1;
    }
    tmp_args_name_7 = const_tuple_67c940dc01e65e2af918d920f31d4e64_tuple;
    tmp_kw_name_7 = PyDict_Copy( const_dict_04428d86bf2c537bffda642e19f6b524 );
    frame_function->f_lineno = 482;
    tmp_unused = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_kw_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 482;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_13 = var_parser;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_add_option );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 488;
        goto frame_exception_exit_1;
    }
    tmp_args_name_8 = const_tuple_str_digest_d2ffc007c774fa9b740b06b6f1177966_tuple;
    tmp_kw_name_8 = PyDict_Copy( const_dict_9f781a4c9b1d670f8f74b41b3c147717 );
    frame_function->f_lineno = 491;
    tmp_unused = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_kw_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 491;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_14 = var_parser;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_add_option );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 498;
        goto frame_exception_exit_1;
    }
    tmp_args_name_9 = const_tuple_0bcbd864cf87e48040420f14b0526312_tuple;
    tmp_kw_name_9 = _PyDict_NewPresized( 5 );
    tmp_dict_value_5 = const_str_plain_store;
    tmp_dict_key_5 = const_str_plain_action;
    PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = const_str_plain_testMatch;
    tmp_dict_key_6 = const_str_plain_dest;
    PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = const_str_plain_REGEX;
    tmp_dict_key_7 = const_str_plain_metavar;
    PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_left_name_1 = const_str_digest_abeeea911faf6e4c508eec2b237cfa84;
    tmp_source_name_15 = par_self;

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_testMatchPat );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_kw_name_9 );

        exception_lineno = 503;
        goto frame_exception_exit_1;
    }
    tmp_dict_value_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_kw_name_9 );

        exception_lineno = 501;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = const_str_plain_help;
    PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    tmp_source_name_16 = par_self;

    tmp_dict_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_testMatchPat );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_kw_name_9 );

        exception_lineno = 504;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_9 = const_str_plain_default;
    PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    frame_function->f_lineno = 504;
    tmp_unused = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_kw_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 504;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_17 = var_parser;

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_add_option );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 505;
        goto frame_exception_exit_1;
    }
    tmp_args_name_10 = const_tuple_str_digest_0754cec1ad269609cd5479d867533609_tuple;
    tmp_kw_name_10 = PyDict_Copy( const_dict_0aad9534fa3e62cd1e1eaf59333df502 );
    frame_function->f_lineno = 508;
    tmp_unused = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_kw_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 508;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_18 = var_parser;

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_add_option );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 512;
        goto frame_exception_exit_1;
    }
    tmp_args_name_11 = const_tuple_6b9c0ca7573737752b56ca7ad4222c37_tuple;
    tmp_kw_name_11 = _PyDict_NewPresized( 4 );
    tmp_dict_value_10 = const_str_plain_store;
    tmp_dict_key_10 = const_str_plain_action;
    PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_10, tmp_dict_value_10 );
    tmp_dict_value_11 = const_str_plain_debug;
    tmp_dict_key_11 = const_str_plain_dest;
    PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_source_name_19 = par_self;

    tmp_dict_value_12 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_debug );
    if ( tmp_dict_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_kw_name_11 );

        exception_lineno = 514;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_12 = const_str_plain_default;
    PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_12, tmp_dict_value_12 );
    Py_DECREF( tmp_dict_value_12 );
    tmp_dict_value_13 = const_str_digest_2ce7afd8717ea7a575892ba920237c12;
    tmp_dict_key_13 = const_str_plain_help;
    PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_13, tmp_dict_value_13 );
    frame_function->f_lineno = 515;
    tmp_unused = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_kw_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_20 = var_parser;

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_add_option );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 519;
        goto frame_exception_exit_1;
    }
    tmp_args_name_12 = const_tuple_str_digest_5a7acf5b3bf49def57e87cf8f93e6c71_tuple;
    tmp_kw_name_12 = _PyDict_NewPresized( 5 );
    tmp_dict_value_14 = const_str_plain_debugLog;
    tmp_dict_key_14 = const_str_plain_dest;
    PyDict_SetItem( tmp_kw_name_12, tmp_dict_key_14, tmp_dict_value_14 );
    tmp_dict_value_15 = const_str_plain_store;
    tmp_dict_key_15 = const_str_plain_action;
    PyDict_SetItem( tmp_kw_name_12, tmp_dict_key_15, tmp_dict_value_15 );
    tmp_source_name_21 = par_self;

    tmp_dict_value_16 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_debugLog );
    if ( tmp_dict_value_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_kw_name_12 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_16 = const_str_plain_default;
    PyDict_SetItem( tmp_kw_name_12, tmp_dict_key_16, tmp_dict_value_16 );
    Py_DECREF( tmp_dict_value_16 );
    tmp_dict_value_17 = const_str_plain_FILE;
    tmp_dict_key_17 = const_str_plain_metavar;
    PyDict_SetItem( tmp_kw_name_12, tmp_dict_key_17, tmp_dict_value_17 );
    tmp_dict_value_18 = const_str_digest_fcb7d8c80a65752732b127e786193e63;
    tmp_dict_key_18 = const_str_plain_help;
    PyDict_SetItem( tmp_kw_name_12, tmp_dict_key_18, tmp_dict_value_18 );
    frame_function->f_lineno = 522;
    tmp_unused = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_kw_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 522;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_22 = var_parser;

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_add_option );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 524;
        goto frame_exception_exit_1;
    }
    tmp_args_name_13 = const_tuple_84c2ba9356ca721c9eff7bd0b9cc6bb7_tuple;
    tmp_kw_name_13 = _PyDict_NewPresized( 5 );
    tmp_dict_value_19 = const_str_plain_loggingConfig;
    tmp_dict_key_19 = const_str_plain_dest;
    PyDict_SetItem( tmp_kw_name_13, tmp_dict_key_19, tmp_dict_value_19 );
    tmp_dict_value_20 = const_str_plain_store;
    tmp_dict_key_20 = const_str_plain_action;
    PyDict_SetItem( tmp_kw_name_13, tmp_dict_key_20, tmp_dict_value_20 );
    tmp_source_name_23 = par_self;

    tmp_dict_value_21 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_loggingConfig );
    if ( tmp_dict_value_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_kw_name_13 );

        exception_lineno = 527;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_21 = const_str_plain_default;
    PyDict_SetItem( tmp_kw_name_13, tmp_dict_key_21, tmp_dict_value_21 );
    Py_DECREF( tmp_dict_value_21 );
    tmp_dict_value_22 = const_str_plain_FILE;
    tmp_dict_key_22 = const_str_plain_metavar;
    PyDict_SetItem( tmp_kw_name_13, tmp_dict_key_22, tmp_dict_value_22 );
    tmp_dict_value_23 = const_str_digest_eb071dce39db570ca497ca16af3067e4;
    tmp_dict_key_23 = const_str_plain_help;
    PyDict_SetItem( tmp_kw_name_13, tmp_dict_key_23, tmp_dict_value_23 );
    frame_function->f_lineno = 528;
    tmp_unused = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_kw_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 528;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_24 = var_parser;

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_add_option );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 530;
        goto frame_exception_exit_1;
    }
    tmp_args_name_14 = const_tuple_0f435e556deced2a12ebeea60b148253_tuple;
    tmp_kw_name_14 = PyDict_Copy( const_dict_54bce8ffa7787d3ba977c8f010ba1de1 );
    frame_function->f_lineno = 533;
    tmp_unused = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_kw_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_25 = var_parser;

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_add_option );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 539;
        goto frame_exception_exit_1;
    }
    tmp_args_name_15 = const_tuple_1c7880cf6402d8d11f95934f3d903937_tuple;
    tmp_kw_name_15 = PyDict_Copy( const_dict_db5d7329ac2b5746eee0a9ca8e2c9f4e );
    frame_function->f_lineno = 542;
    tmp_unused = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_15, tmp_kw_name_15 );
    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_kw_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_26 = var_parser;

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_add_option );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 544;
        goto frame_exception_exit_1;
    }
    tmp_args_name_16 = const_tuple_0db0b925d3278094b2f40de26d6f9922_tuple;
    tmp_kw_name_16 = PyDict_Copy( const_dict_5a3ce7842b3e50f4fe7dbf97327553be );
    frame_function->f_lineno = 547;
    tmp_unused = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_16, tmp_kw_name_16 );
    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_kw_name_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_27 = var_parser;

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_add_option );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 552;
        goto frame_exception_exit_1;
    }
    tmp_args_name_17 = const_tuple_1e27cba3d2448d85ffff055e6900a6b7_tuple;
    tmp_kw_name_17 = _PyDict_NewPresized( 4 );
    tmp_dict_value_24 = const_str_plain_store_true;
    tmp_dict_key_24 = const_str_plain_action;
    PyDict_SetItem( tmp_kw_name_17, tmp_dict_key_24, tmp_dict_value_24 );
    tmp_dict_value_25 = const_str_plain_stopOnError;
    tmp_dict_key_25 = const_str_plain_dest;
    PyDict_SetItem( tmp_kw_name_17, tmp_dict_key_25, tmp_dict_value_25 );
    tmp_source_name_28 = par_self;

    tmp_dict_value_26 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_stopOnError );
    if ( tmp_dict_value_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_kw_name_17 );

        exception_lineno = 554;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_26 = const_str_plain_default;
    PyDict_SetItem( tmp_kw_name_17, tmp_dict_key_26, tmp_dict_value_26 );
    Py_DECREF( tmp_dict_value_26 );
    tmp_dict_value_27 = const_str_digest_2d150b08f849ff6ea8376ad2889e2026;
    tmp_dict_key_27 = const_str_plain_help;
    PyDict_SetItem( tmp_kw_name_17, tmp_dict_key_27, tmp_dict_value_27 );
    frame_function->f_lineno = 555;
    tmp_unused = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_17, tmp_kw_name_17 );
    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_kw_name_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 555;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_29 = var_parser;

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_add_option );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
        goto frame_exception_exit_1;
    }
    tmp_args_name_18 = const_tuple_bb41c153c3536807d9a14c227da41cba_tuple;
    tmp_kw_name_18 = _PyDict_NewPresized( 4 );
    tmp_dict_value_28 = const_str_plain_store_false;
    tmp_dict_key_28 = const_str_plain_action;
    PyDict_SetItem( tmp_kw_name_18, tmp_dict_key_28, tmp_dict_value_28 );
    tmp_dict_value_29 = const_str_plain_addPaths;
    tmp_dict_key_29 = const_str_plain_dest;
    PyDict_SetItem( tmp_kw_name_18, tmp_dict_key_29, tmp_dict_value_29 );
    tmp_source_name_30 = par_self;

    tmp_dict_value_30 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_addPaths );
    if ( tmp_dict_value_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_kw_name_18 );

        exception_lineno = 559;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_30 = const_str_plain_default;
    PyDict_SetItem( tmp_kw_name_18, tmp_dict_key_30, tmp_dict_value_30 );
    Py_DECREF( tmp_dict_value_30 );
    tmp_dict_value_31 = const_str_digest_6c10382c0ea0df4dc0af0d724adc3de1;
    tmp_dict_key_31 = const_str_plain_help;
    PyDict_SetItem( tmp_kw_name_18, tmp_dict_key_31, tmp_dict_value_31 );
    frame_function->f_lineno = 560;
    tmp_unused = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_18, tmp_kw_name_18 );
    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_kw_name_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 560;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_31 = var_parser;

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_add_option );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        goto frame_exception_exit_1;
    }
    tmp_args_name_19 = const_tuple_str_digest_eb2a748be8fdd84357bb51822fa7dd48_tuple;
    tmp_kw_name_19 = _PyDict_NewPresized( 4 );
    tmp_dict_value_32 = const_str_plain_store_true;
    tmp_dict_key_32 = const_str_plain_action;
    PyDict_SetItem( tmp_kw_name_19, tmp_dict_key_32, tmp_dict_value_32 );
    tmp_dict_value_33 = const_str_plain_includeExe;
    tmp_dict_key_33 = const_str_plain_dest;
    PyDict_SetItem( tmp_kw_name_19, tmp_dict_key_33, tmp_dict_value_33 );
    tmp_source_name_32 = par_self;

    tmp_dict_value_34 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_includeExe );
    if ( tmp_dict_value_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_kw_name_19 );

        exception_lineno = 564;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_34 = const_str_plain_default;
    PyDict_SetItem( tmp_kw_name_19, tmp_dict_key_34, tmp_dict_value_34 );
    Py_DECREF( tmp_dict_value_34 );
    tmp_dict_value_35 = const_str_digest_196ea0444f26e8065fa576ae341d479c;
    tmp_dict_key_35 = const_str_plain_help;
    PyDict_SetItem( tmp_kw_name_19, tmp_dict_key_35, tmp_dict_value_35 );
    frame_function->f_lineno = 565;
    tmp_unused = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_19, tmp_kw_name_19 );
    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_kw_name_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 565;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_33 = var_parser;

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_add_option );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 569;
        goto frame_exception_exit_1;
    }
    tmp_args_name_20 = const_tuple_str_digest_205ce5a3ead478d07452774b9e5f1cdf_tuple;
    tmp_kw_name_20 = PyDict_Copy( const_dict_de43cf2019e151511363085f9e8bbc41 );
    frame_function->f_lineno = 571;
    tmp_unused = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_20, tmp_kw_name_20 );
    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_kw_name_20 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 571;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_34 = var_parser;

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_add_option );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 574;
        goto frame_exception_exit_1;
    }
    tmp_args_name_21 = const_tuple_str_digest_f5bff6b10094bf122ddfd4736bd3472b_tuple;
    tmp_kw_name_21 = _PyDict_NewPresized( 4 );
    tmp_dict_value_36 = const_str_plain_store_true;
    tmp_dict_key_36 = const_str_plain_action;
    PyDict_SetItem( tmp_kw_name_21, tmp_dict_key_36, tmp_dict_value_36 );
    tmp_source_name_35 = par_self;

    tmp_dict_value_37 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_traverseNamespace );
    if ( tmp_dict_value_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_kw_name_21 );

        exception_lineno = 576;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_37 = const_str_plain_default;
    PyDict_SetItem( tmp_kw_name_21, tmp_dict_key_37, tmp_dict_value_37 );
    Py_DECREF( tmp_dict_value_37 );
    tmp_dict_value_38 = const_str_plain_traverseNamespace;
    tmp_dict_key_38 = const_str_plain_dest;
    PyDict_SetItem( tmp_kw_name_21, tmp_dict_key_38, tmp_dict_value_38 );
    tmp_dict_value_39 = const_str_digest_5d1d4e57402da78da790d5bfec50566c;
    tmp_dict_key_39 = const_str_plain_help;
    PyDict_SetItem( tmp_kw_name_21, tmp_dict_key_39, tmp_dict_value_39 );
    frame_function->f_lineno = 577;
    tmp_unused = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_21, tmp_kw_name_21 );
    Py_DECREF( tmp_called_name_22 );
    Py_DECREF( tmp_kw_name_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 577;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_36 = var_parser;

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_add_option );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 578;
        goto frame_exception_exit_1;
    }
    tmp_args_name_22 = const_tuple_f7ca98e1bd3012e1fbf3fafe4cfded04_tuple;
    tmp_kw_name_22 = PyDict_Copy( const_dict_7d5728b6635b3689b1ea971cfa72798b );
    frame_function->f_lineno = 581;
    tmp_unused = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_22, tmp_kw_name_22 );
    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_kw_name_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 581;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_37 = var_parser;

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_add_option );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 584;
        goto frame_exception_exit_1;
    }
    tmp_args_name_23 = const_tuple_str_digest_1da5c4fd148aea5b06f3548bc70913ce_tuple;
    tmp_kw_name_23 = PyDict_Copy( const_dict_4961660bac420c2cb880519351ededfc );
    frame_function->f_lineno = 587;
    tmp_unused = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_23, tmp_kw_name_23 );
    Py_DECREF( tmp_called_name_24 );
    Py_DECREF( tmp_kw_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_39 = par_self;

    tmp_source_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_plugins );
    if ( tmp_source_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        goto frame_exception_exit_1;
    }
    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_loadPlugins );
    Py_DECREF( tmp_source_name_38 );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 590;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_25 );
    Py_DECREF( tmp_called_name_25 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_40 = par_self;

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_pluginOpts );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_parser;

    frame_function->f_lineno = 591;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = var_parser;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_parser, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 593;
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

            if ( par_doc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_doc,
                    par_doc
                );

                assert( res == 0 );
            }

            if ( var_env )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_env,
                    var_env
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

    tmp_return_value = var_parser;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_10_getParser_of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_doc );
    Py_DECREF( par_doc );
    par_doc = NULL;

    Py_XDECREF( var_env );
    var_env = NULL;

    Py_XDECREF( var_parser );
    var_parser = NULL;

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

    CHECK_OBJECT( (PyObject *)par_doc );
    Py_DECREF( par_doc );
    par_doc = NULL;

    Py_XDECREF( var_env );
    var_env = NULL;

    Py_XDECREF( var_parser );
    var_parser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_10_getParser_of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_11_help_of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_doc = python_pars[ 1 ];
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
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_774b202136fc577b79baa02eef286e58, module_nose$config );
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

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_getParser );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 599;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_doc;

    frame_function->f_lineno = 599;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 599;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format_help );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 599;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 599;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 599;
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

            if ( par_doc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_doc,
                    par_doc
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
    NUITKA_CANNOT_GET_HERE( function_11_help_of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_doc );
    Py_DECREF( par_doc );
    par_doc = NULL;

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

    CHECK_OBJECT( (PyObject *)par_doc );
    Py_DECREF( par_doc );
    par_doc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_11_help_of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_12_pluginOpts_of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_parser = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f383a7e9f7c2bcbaaca10e0010b294ad, module_nose$config );
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

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_plugins );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 602;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_addOptions );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 602;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_parser;

    tmp_source_name_3 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_env );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 602;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 602;
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


        exception_lineno = 602;
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

            if ( par_parser )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parser,
                    par_parser
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
    NUITKA_CANNOT_GET_HERE( function_12_pluginOpts_of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

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

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_12_pluginOpts_of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_13_reset_of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9d3bfeb6b5e9f66d1e06118d380da111, module_nose$config );
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

    tmp_source_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 605;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_update );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 605;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__orig );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 605;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 605;
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


        exception_lineno = 605;
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
    NUITKA_CANNOT_GET_HERE( function_13_reset_of_class_4_Config_of_nose$config );
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
    NUITKA_CANNOT_GET_HERE( function_13_reset_of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_14_todict_of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5efa9b796250bb6b84d399a82da43a4e, module_nose$config );
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

    tmp_source_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 608;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_copy );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 608;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 608;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 608;
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
    NUITKA_CANNOT_GET_HERE( function_14_todict_of_class_4_Config_of_nose$config );
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
    NUITKA_CANNOT_GET_HERE( function_14_todict_of_class_4_Config_of_nose$config );
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


static PyObject *impl_function_15_update_of_class_4_Config_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e66aeaf0a6fac48a27194002d940add4, module_nose$config );
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

    tmp_source_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 611;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_update );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 611;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_d;

    frame_function->f_lineno = 611;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 611;
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

            if ( par_d )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_d,
                    par_d
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
    NUITKA_CANNOT_GET_HERE( function_15_update_of_class_4_Config_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

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

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_15_update_of_class_4_Config_of_nose$config );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_5_NoOptions_of_nose$config( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___getstate__ = NULL;
    PyObject *var___setstate__ = NULL;
    PyObject *var___getnewargs__ = NULL;
    PyObject *var___nonzero__ = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_c7abdcb9e7eb473f65830c2cbfd31cc0;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1___getstate___of_class_5_NoOptions_of_nose$config(  );
    assert( var___getstate__ == NULL );
    var___getstate__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2___setstate___of_class_5_NoOptions_of_nose$config(  );
    assert( var___setstate__ == NULL );
    var___setstate__ = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_3___getnewargs___of_class_5_NoOptions_of_nose$config(  );
    assert( var___getnewargs__ == NULL );
    var___getnewargs__ = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_4___nonzero___of_class_5_NoOptions_of_nose$config(  );
    assert( var___nonzero__ == NULL );
    var___nonzero__ = tmp_assign_source_6;

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

    if ( var___getstate__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___getstate__,
            var___getstate__
        );

        assert( res == 0 );
    }

    if ( var___setstate__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___setstate__,
            var___setstate__
        );

        assert( res == 0 );
    }

    if ( var___getnewargs__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___getnewargs__,
            var___getnewargs__
        );

        assert( res == 0 );
    }

    if ( var___nonzero__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___nonzero__,
            var___nonzero__
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_5_NoOptions_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___getstate__ );
    Py_DECREF( var___getstate__ );
    var___getstate__ = NULL;

    CHECK_OBJECT( (PyObject *)var___setstate__ );
    Py_DECREF( var___setstate__ );
    var___setstate__ = NULL;

    CHECK_OBJECT( (PyObject *)var___getnewargs__ );
    Py_DECREF( var___getnewargs__ );
    var___getnewargs__ = NULL;

    CHECK_OBJECT( (PyObject *)var___nonzero__ );
    Py_DECREF( var___nonzero__ );
    var___nonzero__ = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___getstate__ );
    Py_DECREF( var___getstate__ );
    var___getstate__ = NULL;

    CHECK_OBJECT( (PyObject *)var___setstate__ );
    Py_DECREF( var___setstate__ );
    var___setstate__ = NULL;

    CHECK_OBJECT( (PyObject *)var___getnewargs__ );
    Py_DECREF( var___getnewargs__ );
    var___getnewargs__ = NULL;

    CHECK_OBJECT( (PyObject *)var___nonzero__ );
    Py_DECREF( var___nonzero__ );
    var___nonzero__ = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_5_NoOptions_of_nose$config );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___getstate___of_class_5_NoOptions_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = PyDict_New();
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1___getstate___of_class_5_NoOptions_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___getstate___of_class_5_NoOptions_of_nose$config );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_2___setstate___of_class_5_NoOptions_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_state = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2___setstate___of_class_5_NoOptions_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2___setstate___of_class_5_NoOptions_of_nose$config );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_3___getnewargs___of_class_5_NoOptions_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_tuple_empty;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3___getnewargs___of_class_5_NoOptions_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3___getnewargs___of_class_5_NoOptions_of_nose$config );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_4___nonzero___of_class_5_NoOptions_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_4___nonzero___of_class_5_NoOptions_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4___nonzero___of_class_5_NoOptions_of_nose$config );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1_user_config_files_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2052a219499f3ee90913a1424631b329, module_nose$config );
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_filter );
    assert( tmp_called_name_1 != NULL );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_os );

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

        exception_lineno = 633;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 633;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exists );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 633;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_map );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 634;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 634;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_expanduser );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 634;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_config_files );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_config_files );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "config_files" );
        exception_tb = NULL;

        exception_lineno = 634;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 634;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 634;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 634;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 634;
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
    NUITKA_CANNOT_GET_HERE( function_1_user_config_files_of_nose$config );
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


static PyObject *impl_function_2_all_config_files_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_user = NULL;
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8027ca91ba34242fe6f5e78bec38a893, module_nose$config );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_user_config_files );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_user_config_files );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "user_config_files" );
        exception_tb = NULL;

        exception_lineno = 641;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 641;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 641;
        goto frame_exception_exit_1;
    }
    assert( var_user == NULL );
    var_user = tmp_assign_source_1;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_os );

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

        exception_lineno = 642;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 642;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exists );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 642;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 642;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_123e5e3534132c1da362a78e1868c5a7_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 642;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 642;
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
    tmp_left_name_1 = var_user;

    tmp_right_name_1 = LIST_COPY( const_list_str_digest_123e5e3534132c1da362a78e1868c5a7_list );
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 643;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
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
            if ( var_user )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_user,
                    var_user
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

    tmp_return_value = var_user;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_all_config_files_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_user );
    Py_DECREF( var_user );
    var_user = NULL;

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

    Py_XDECREF( var_user );
    var_user = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_all_config_files_of_nose$config );
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


static PyObject *impl_function_3_flag_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_str_arg_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c3d4753a02d01586ff9ed21c71a9f1e2, module_nose$config );
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
    tmp_compare_left_1 = par_val;

    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 650;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = par_val;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 652;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    branch_end_1:;
    tmp_str_arg_1 = par_val;

    tmp_assign_source_1 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 654;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_val;
        assert( old != NULL );
        par_val = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_val;

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 655;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_pos_5;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 655;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_source_name_1 = par_val;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_upper );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 657;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 657;
    tmp_compexpr_left_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 657;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_tuple_42106a19a652df870c29fb75e6bd56f0_tuple;
    tmp_return_value = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 657;
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
            if ( par_val )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_val,
                    par_val
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
    NUITKA_CANNOT_GET_HERE( function_3_flag_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_flag_of_nose$config );
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


static PyObject *impl_function_4__bool_of_nose$config( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_str_arg_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_92a74577de7d04cb645a43a54c82a0f3, module_nose$config );
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
    tmp_str_arg_1 = par_val;

    tmp_source_name_1 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 661;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_upper );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 661;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 661;
    tmp_compexpr_left_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 661;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_tuple_str_plain_1_str_plain_T_str_plain_TRUE_str_plain_ON_tuple;
    tmp_return_value = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 661;
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
            if ( par_val )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_val,
                    par_val
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
    NUITKA_CANNOT_GET_HERE( function_4__bool_of_nose$config );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4__bool_of_nose$config );
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



static PyObject *MAKE_FUNCTION_function_10_getParser_of_class_4_Config_of_nose$config( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_10_getParser_of_class_4_Config_of_nose$config,
        const_str_plain_getParser,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_17b9efb5255841cffda98d4880cbd083,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        const_str_digest_b05a584dd45626c486fd086a6593c6b3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_help_of_class_4_Config_of_nose$config( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_11_help_of_class_4_Config_of_nose$config,
        const_str_plain_help,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_774b202136fc577b79baa02eef286e58,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        const_str_digest_bd5f8fa74dd151fe38cac8082249bc5a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_pluginOpts_of_class_4_Config_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_12_pluginOpts_of_class_4_Config_of_nose$config,
        const_str_plain_pluginOpts,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f383a7e9f7c2bcbaaca10e0010b294ad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_reset_of_class_4_Config_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_13_reset_of_class_4_Config_of_nose$config,
        const_str_plain_reset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9d3bfeb6b5e9f66d1e06118d380da111,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_todict_of_class_4_Config_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_14_todict_of_class_4_Config_of_nose$config,
        const_str_plain_todict,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5efa9b796250bb6b84d399a82da43a4e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_update_of_class_4_Config_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_15_update_of_class_4_Config_of_nose$config,
        const_str_plain_update,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e66aeaf0a6fac48a27194002d940add4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___getstate___of_class_5_NoOptions_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___getstate___of_class_5_NoOptions_of_nose$config,
        const_str_plain___getstate__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d0f348e5c880895a3eeeed2cd8652985,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_NoSuchOptionError_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_1_NoSuchOptionError_of_nose$config,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f1a0e82fba51adef0a11a17c18f2cdc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a00608ca032770d8a48eb27cfaf5d6d2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_Config_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_4_Config_of_nose$config,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b9817aaf66e6feacc79bc7a9e7631649,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_lambda_of_function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config( PyCellObject *closure_error )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
    closure[0] = closure_error;
    Py_INCREF( closure[0] );


    PyObject *result = Nuitka_Function_New(
        impl_function_1_lambda_of_function_1___init___of_class_3_ConfiguredDefaultsOptionParser_of_nose$config,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bba69498cf79bc998f424c3f4e616163,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None,
        closure,
        1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_user_config_files_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_user_config_files_of_nose$config,
        const_str_plain_user_config_files,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2052a219499f3ee90913a1424631b329,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        const_str_digest_4971a67e500b768726898a4e98c7eda5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_warn_sometimes_of_function_5__parseArgs_of_class_4_Config_of_nose$config( PyObject *defaults, PyCellObject *closure_self )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
    closure[0] = closure_self;
    Py_INCREF( closure[0] );


    PyObject *result = Nuitka_Function_New(
        impl_function_1_warn_sometimes_of_function_5__parseArgs_of_class_4_Config_of_nose$config,
        const_str_plain_warn_sometimes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3dfa4f4f7afec3cfc42c0499bb49add2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None,
        closure,
        1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___getstate___of_class_4_Config_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2___getstate___of_class_4_Config_of_nose$config,
        const_str_plain___getstate__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_009e19fd48b145724d38597a2dd92eb5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___setstate___of_class_5_NoOptions_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2___setstate___of_class_5_NoOptions_of_nose$config,
        const_str_plain___setstate__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_679a4acf3f23a48a3e14227f18e40556,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__configTuples_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2__configTuples_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config,
        const_str_plain__configTuples,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_36637658154754c07fed5f9b5a04b752,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_all_config_files_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_all_config_files_of_nose$config,
        const_str_plain_all_config_files,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8027ca91ba34242fe6f5e78bec38a893,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        const_str_digest_9417b6c135a0ac578925ae2782c78295
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___getnewargs___of_class_5_NoOptions_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3___getnewargs___of_class_5_NoOptions_of_nose$config,
        const_str_plain___getnewargs__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ceda7daf4e6b1e4c14998c54f0418d24,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___setstate___of_class_4_Config_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3___setstate___of_class_4_Config_of_nose$config,
        const_str_plain___setstate__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9fdfbbcb4ec3855526970aa864953a6d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__readFromFilenames_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3__readFromFilenames_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config,
        const_str_plain__readFromFilenames,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_46ed19d6edf043398f4dae2a5e6341a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_flag_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_flag_of_nose$config,
        const_str_plain_flag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c3d4753a02d01586ff9ed21c71a9f1e2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        const_str_digest_207a5177d480419aff0f9b9adb058ffa
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___nonzero___of_class_5_NoOptions_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4___nonzero___of_class_5_NoOptions_of_nose$config,
        const_str_plain___nonzero__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f5afaec90790e7721d6e8b63ceb336e9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___repr___of_class_4_Config_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4___repr___of_class_4_Config_of_nose$config,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7866bdb0491076d726f23511c8bfe581,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__bool_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4__bool_of_nose$config,
        const_str_plain__bool,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_92a74577de7d04cb645a43a54c82a0f3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__readFromFileObject_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4__readFromFileObject_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config,
        const_str_plain__readFromFileObject,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0a06b96454ffb7096b6fac304dad1b9c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5__parseArgs_of_class_4_Config_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5__parseArgs_of_class_4_Config_of_nose$config,
        const_str_plain__parseArgs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b27722d56144b0b88db05f19cf27d471,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5__readConfiguration_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5__readConfiguration_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config,
        const_str_plain__readConfiguration,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_accc713d205b8fc077b428224a68651e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__processConfigValue_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_6__processConfigValue_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config,
        const_str_plain__processConfigValue,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_264c3192103797e8b525b1ffb17b7b3d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_configure_of_class_4_Config_of_nose$config( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_6_configure_of_class_4_Config_of_nose$config,
        const_str_plain_configure,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_db21283a9bcca37e2615270848a6c9e7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        const_str_digest_fa880cdf31b565712bdf5b14c18be107
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__applyConfigurationToValues_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_7__applyConfigurationToValues_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config,
        const_str_plain__applyConfigurationToValues,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_beb5cea7fb6f412f17f110c4f37dcc6e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_configureLogging_of_class_4_Config_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_7_configureLogging_of_class_4_Config_of_nose$config,
        const_str_plain_configureLogging,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2fe5996fd8e3aebecd1188a19c3e34ed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        const_str_digest_1a92595c7361d8f0f70eb204001b9699
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_configureWhere_of_class_4_Config_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_8_configureWhere_of_class_4_Config_of_nose$config,
        const_str_plain_configureWhere,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5582bf1ec4f2e7b862a81dcf9cb53547,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        const_str_digest_8d881dcdb7033101c8401e951d7ddbb8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_parseArgsAndConfigFiles_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_8_parseArgsAndConfigFiles_of_class_3_ConfiguredDefaultsOptionParser_of_nose$config,
        const_str_plain_parseArgsAndConfigFiles,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ed8f6e0f4639eb340ec9a6d03915ee71,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_default_of_class_4_Config_of_nose$config(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_9_default_of_class_4_Config_of_nose$config,
        const_str_plain_default,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0c354865906d665a1cb1acb8ba449526,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$config,
        const_str_digest_a56522bc05b35d6098aafc8d6499af6a
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nose$config =
{
    PyModuleDef_HEAD_INIT,
    "nose.config",   /* m_name */
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

MOD_INIT_DECL( nose$config )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nose$config );
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

    // puts( "in initnose$config" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nose$config = Py_InitModule4(
        "nose.config",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nose$config = PyModule_Create( &mdef_nose$config );
#endif

    moduledict_nose$config = (PyDictObject *)((PyModuleObject *)module_nose$config)->md_dict;

    CHECK_OBJECT( module_nose$config );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c08fd2a2c2e3c7f92c095d89a635364a, module_nose$config );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nose$config );

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
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
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
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
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
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ad76124311328c9d7edab0cff095456f;
    UPDATE_STRING_DICT0( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_4b8f742214a5f031c875f01196f98748, module_nose$config );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$config)->md_dict;
    frame_module->f_lineno = 1;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_logging, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_nose$config)->md_dict;
    frame_module->f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_optparse, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_optparse, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_nose$config)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_nose$config)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_nose$config)->md_dict;
    frame_module->f_lineno = 5;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_nose$config)->md_dict;
    frame_module->f_lineno = 6;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_ConfigParser, tmp_import_globals_6, tmp_import_globals_6, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_ConfigParser, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_nose$config)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_optparse, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_OptionParser_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_OptionParser );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_OptionParser, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_nose$config)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_absdir_str_plain_tolist_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absdir );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_absdir, tmp_assign_source_10 );
    tmp_import_globals_9 = ((PyModuleObject *)module_nose$config)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_cc4f589119d7c98419ab44ebd707de36, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_absdir_str_plain_tolist_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_tolist );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_tolist, tmp_assign_source_11 );
    tmp_import_globals_10 = ((PyModuleObject *)module_nose$config)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_bb1f241f2000ed1fe809be4d2e88ea72, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_NoPlugins_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_NoPlugins );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_NoPlugins, tmp_assign_source_12 );
    tmp_import_globals_11 = ((PyModuleObject *)module_nose$config)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_warn_str_plain_filterwarnings_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_warn );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_warn, tmp_assign_source_13 );
    tmp_import_globals_12 = ((PyModuleObject *)module_nose$config)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_warn_str_plain_filterwarnings_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_filterwarnings );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_filterwarnings, tmp_assign_source_14 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_logging );

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

        exception_lineno = 12;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getLogger );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 12;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_c08fd2a2c2e3c7f92c095d89a635364a_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_15 );
    tmp_assign_source_16 = LIST_COPY( const_list_str_plain_help_str_plain_verbose_list );
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_option_blacklist, tmp_assign_source_16 );
    tmp_assign_source_17 = LIST_COPY( const_list_bf9914a5a55a3f1809365a486b9461cf_list );
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_config_files, tmp_assign_source_17 );
    tmp_assign_source_18 = const_tuple_str_plain_win32_str_plain_cli_tuple;
    UPDATE_STRING_DICT0( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_exe_allowed_platforms, tmp_assign_source_18 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_filterwarnings );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_filterwarnings );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "filterwarnings" );
        exception_tb = NULL;

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = const_tuple_str_plain_always_tuple;
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
        exception_tb = NULL;

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_category;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = const_str_digest_faf4aa980e8a055cb194555d0338737c;
    tmp_dict_key_2 = const_str_plain_module;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_module->f_lineno = 29;
    tmp_unused = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_19 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_19, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_19;

    tmp_assign_source_20 = impl_class_1_NoSuchOptionError_of_nose$config( NULL );
    assert( tmp_assign_source_20 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_20;

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
    tmp_assign_source_21 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_21 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_21;

    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_NoSuchOptionError;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_22;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

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
    tmp_assign_source_23 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_NoSuchOptionError, tmp_assign_source_23 );
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

    tmp_assign_source_24 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_24, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_24;

    tmp_assign_source_25 = impl_class_2_ConfigError_of_nose$config( NULL );
    assert( tmp_assign_source_25 != NULL );
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_25;

    // Tried code:
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
    tmp_assign_source_26 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    tmp_assign_source_26 = SELECT_METACLASS( tmp_bases_name_2, GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_26;

    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    tmp_args_element_name_4 = const_str_plain_ConfigError;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    frame_module->f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_27;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
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
    tmp_assign_source_28 = tmp_class_creation_2__class;

    UPDATE_STRING_DICT0( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_ConfigError, tmp_assign_source_28 );
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

    tmp_assign_source_29 = PyTuple_New( 1 );
    tmp_tuple_element_3 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_3 != NULL );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_29, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_29;

    tmp_assign_source_30 = impl_class_3_ConfiguredDefaultsOptionParser_of_nose$config( NULL );
    assert( tmp_assign_source_30 != NULL );
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_30;

    // Tried code:
    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_3__class_dict;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_dict_name_3 = tmp_class_creation_3__class_dict;

    tmp_key_name_3 = const_str_plain___metaclass__;
    tmp_assign_source_31 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    tmp_assign_source_31 = SELECT_METACLASS( tmp_bases_name_3, GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_31;

    tmp_called_name_5 = tmp_class_creation_3__metaclass;

    tmp_args_element_name_7 = const_str_plain_ConfiguredDefaultsOptionParser;
    tmp_args_element_name_8 = tmp_class_creation_3__bases;

    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    frame_module->f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_3;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_32;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_33 = tmp_class_creation_3__class;

    UPDATE_STRING_DICT0( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_ConfiguredDefaultsOptionParser, tmp_assign_source_33 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    tmp_assign_source_34 = PyTuple_New( 1 );
    tmp_tuple_element_4 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_4 != NULL );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_34, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_34;

    tmp_assign_source_35 = impl_class_4_Config_of_nose$config( NULL );
    assert( tmp_assign_source_35 != NULL );
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_35;

    // Tried code:
    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_4__class_dict;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_4 = tmp_class_creation_4__class_dict;

    tmp_key_name_4 = const_str_plain___metaclass__;
    tmp_assign_source_36 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto try_except_handler_4;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    tmp_assign_source_36 = SELECT_METACLASS( tmp_bases_name_4, GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_36;

    tmp_called_name_6 = tmp_class_creation_4__metaclass;

    tmp_args_element_name_10 = const_str_plain_Config;
    tmp_args_element_name_11 = tmp_class_creation_4__bases;

    tmp_args_element_name_12 = tmp_class_creation_4__class_dict;

    frame_module->f_lineno = 141;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto try_except_handler_4;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_37;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_assign_source_38 = tmp_class_creation_4__class;

    UPDATE_STRING_DICT0( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_Config, tmp_assign_source_38 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    tmp_assign_source_39 = PyTuple_New( 1 );
    tmp_tuple_element_5 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_5 != NULL );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_39, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_39;

    tmp_assign_source_40 = impl_class_5_NoOptions_of_nose$config( NULL );
    assert( tmp_assign_source_40 != NULL );
    assert( tmp_class_creation_5__class_dict == NULL );
    tmp_class_creation_5__class_dict = tmp_assign_source_40;

    // Tried code:
    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_5__class_dict;

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_dict_name_5 = tmp_class_creation_5__class_dict;

    tmp_key_name_5 = const_str_plain___metaclass__;
    tmp_assign_source_41 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 614;
        goto try_except_handler_5;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_bases_name_5 = tmp_class_creation_5__bases;

    tmp_assign_source_41 = SELECT_METACLASS( tmp_bases_name_5, GET_STRING_DICT_VALUE( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_41;

    tmp_called_name_7 = tmp_class_creation_5__metaclass;

    tmp_args_element_name_13 = const_str_plain_NoOptions;
    tmp_args_element_name_14 = tmp_class_creation_5__bases;

    tmp_args_element_name_15 = tmp_class_creation_5__class_dict;

    frame_module->f_lineno = 614;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 614;
        goto try_except_handler_5;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_42;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

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
    tmp_assign_source_43 = tmp_class_creation_5__class;

    UPDATE_STRING_DICT0( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_NoOptions, tmp_assign_source_43 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class );
    Py_DECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    tmp_assign_source_44 = MAKE_FUNCTION_function_1_user_config_files_of_nose$config(  );
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_user_config_files, tmp_assign_source_44 );
    tmp_assign_source_45 = MAKE_FUNCTION_function_2_all_config_files_of_nose$config(  );
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_all_config_files, tmp_assign_source_45 );
    tmp_assign_source_46 = MAKE_FUNCTION_function_3_flag_of_nose$config(  );
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain_flag, tmp_assign_source_46 );
    tmp_assign_source_47 = MAKE_FUNCTION_function_4__bool_of_nose$config(  );
    UPDATE_STRING_DICT1( moduledict_nose$config, (Nuitka_StringObject *)const_str_plain__bool, tmp_assign_source_47 );

    return MOD_RETURN_VALUE( module_nose$config );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

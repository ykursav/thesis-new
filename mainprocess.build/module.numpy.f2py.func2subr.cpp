// Generated code for Python source for module 'numpy.f2py.func2subr'
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

// The _module_numpy$f2py$func2subr is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$f2py$func2subr;
PyDictObject *moduledict_numpy$f2py$func2subr;

// The module constants used
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_80de7bc8e3a604d4b960ed791ca600e3;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_rname;
static PyObject *const_str_digest_808627bce1223af9ea8da7bb12a3727f;
static PyObject *const_tuple_str_plain_line_str_plain_ret_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_len;
extern PyObject *const_str_plain_auxfuncs;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_createfuncwrapper;
extern PyObject *const_str_plain_signature;
extern PyObject *const_str_digest_2a828626ec9b89c264ad5c223290ba39;
extern PyObject *const_tuple_str_digest_c1efb684c416633d1d418c1db1fa045c_tuple;
static PyObject *const_list_str_plain_hide_list;
extern PyObject *const_str_plain_interface;
extern PyObject *const_list_str_empty_list;
extern PyObject *const_str_plain_issubroutine;
extern PyObject *const_str_plain_vardef;
extern PyObject *const_str_digest_3e4edaff7e969b30ebd2f4c130af1bc5;
static PyObject *const_str_digest_af89aefd338f9d2af96dee487676d0ab;
extern PyObject *const_str_plain_rout;
extern PyObject *const_list_str_chr_42_str_chr_58_list;
extern PyObject *const_str_digest_2d4adc30e980ccfc85f7df36de928e4b;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_ismoduleroutine;
extern PyObject *const_str_digest_357ed0f557a22aaa4a9f55a6da2d7120;
static PyObject *const_str_digest_0772ffcca4f1fc70553bd624e3dd7a52;
extern PyObject *const_str_plain_selector;
static PyObject *const_str_digest_f3a86b9d9335212f1200948e3f40b1bc;
extern PyObject *const_tuple_str_newline_tuple;
extern PyObject *const_str_plain_charselector;
extern PyObject *const_str_plain_fortranname;
extern PyObject *const_str_plain_outmess;
static PyObject *const_tuple_str_plain_interface_tuple;
extern PyObject *const_str_plain_extra_args;
extern PyObject *const_str_plain_args;
static PyObject *const_tuple_d454847410db8f8105221845748e9005_tuple;
static PyObject *const_str_digest_0c3443612e24a5b77ccbe38c9d1abf55;
extern PyObject *const_str_plain_isfunction_wrap;
extern PyObject *const_str_plain_intent;
extern PyObject *const_str_plain_lstrip;
extern PyObject *const_str_plain_kind;
static PyObject *const_str_digest_54461c3711cda1dadf23f6fc0f078206;
extern PyObject *const_str_plain_10;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_isscalar;
static PyObject *const_tuple_str_digest_3406559a4c63e5d622ab879a1b304e43_tuple;
extern PyObject *const_str_digest_9b2a32a10f34854554acce4f0a1e5df6;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_str_plain_fvar;
extern PyObject *const_str_plain_f2py_version;
static PyObject *const_str_digest_722c767fde899aeb02a606630fe23f2a;
static PyObject *const_str_digest_ef416d73b96e2e2a86475a400ee6076a;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_out;
extern PyObject *const_str_plain_dv;
static PyObject *const_str_digest_0a81d51c86ee5bc26f874a65930bdd4f;
static PyObject *const_tuple_str_digest_54461c3711cda1dadf23f6fc0f078206_tuple;
static PyObject *const_str_digest_80310f20f7ffd9429bc0ab090ea29578;
extern PyObject *const_str_digest_a7636f57d1f8f80548278378b7bf84e2;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_a2b77097e26fa3c1967548e95d083958;
extern PyObject *const_str_plain_isexternal;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_hide;
static PyObject *const_tuple_str_chr_42_str_empty_tuple;
extern PyObject *const_str_plain_lk;
static PyObject *const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple;
extern PyObject *const_str_plain_kindselector;
static PyObject *const_tuple_9aa82e64dd9dceb226f9ce6662e09057_tuple;
extern PyObject *const_str_digest_f48ab9da326247418c919b7675ccc719;
extern PyObject *const_str_newline;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_newname;
static PyObject *const_str_digest_35cca0630ad2be135138f05593187969;
extern PyObject *const_str_chr_44;
static PyObject *const_str_plain_dn;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_dimension;
extern PyObject *const_str_plain_vars;
extern PyObject *const_str_plain_typespec;
extern PyObject *const_str_plain_charselect;
extern PyObject *const_str_plain_enumerate;
static PyObject *const_str_plain_need_interface;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_sargs;
extern PyObject *const_str_digest_a2d533f75d6903bf78c57445ac3889ee;
static PyObject *const_dict_3ff3e4e9e317a78311460ecf7af6add5;
extern PyObject *const_str_plain_var2fixfortran;
extern PyObject *const_str_plain_show;
extern PyObject *const_str_plain_fname;
static PyObject *const_list_d4bc04079f357d2a8bd08a67a31f11df_list;
extern PyObject *const_str_plain_createsubrwrapper;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_fa;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_modulename;
static PyObject *const_str_digest_e5ed19889aa981ab855988f4f75aa4d7;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_flag;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_digest_d1afd4948f685dba95ae3f6afcd85cca;
static PyObject *const_str_digest_8e71b3de210a6a67ddcba8e7b56fbd8c;
extern PyObject *const_str_plain_issubroutine_wrap;
extern PyObject *const_str_plain_ret;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_islogicalfunction;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_isintent_in;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_assubr;
static PyObject *const_str_digest_120283daa94b32a06bbb36bd108fc4dc;
static PyObject *const_str_digest_98f05798e55b223870de868fab9b03cc;
extern PyObject *const_str_plain_getfortranname;
extern PyObject *const_str_digest_3406559a4c63e5d622ab879a1b304e43;
static PyObject *const_str_plain_f90mode;
static PyObject *const_str_digest_bd7cf954fd16554693c4a4c0990e5f8e;
static PyObject *const_tuple_4a80300d86ad1359350e91263565ad0b_tuple;
extern PyObject *const_str_chr_61;
static PyObject *const_str_digest_85ce6d1678cbf369ccea3f573b27f45a;
static PyObject *const_str_digest_9987b11e02c9fe6729dad3e127516d03;
static PyObject *const_str_plain_dumped_args;
static PyObject *const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple;
static PyObject *const_str_digest_4629f506100b2a4bba0011ced56e360e;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_integer;
static PyObject *const_str_digest_3b2c0fa2fc4dc6d1316a69cb4245f964;
extern PyObject *const_str_plain_typename;
extern PyObject *const_str_digest_801066a15672b2f2952b87ffd4068931;
static PyObject *const_str_digest_9c4b0d30588e4dcb754f577679644f04;
extern PyObject *const_str_plain_func2subr;
extern PyObject *const_tuple_str_plain_end_tuple;
extern PyObject *const_str_plain_isintent_out;
extern PyObject *const_str_digest_8b86c509e3d80873ba553789a5440397;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_ac77c4c82d64bea33cb67def314a870b;
extern PyObject *const_str_digest_9174fa49098d6a3261d8b8143abc5651;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_saved_interface;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_digest_c1efb684c416633d1d418c1db1fa045c;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
static PyObject *const_str_digest_834b0f233785f6801a2391cc6d08ef9a;
extern PyObject *const_str_plain_isfunction;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_str_plain_out_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_80de7bc8e3a604d4b960ed791ca600e3 = UNSTREAM_STRING( &constant_bin[ 796175 ], 26, 0 );
    const_str_digest_808627bce1223af9ea8da7bb12a3727f = UNSTREAM_STRING( &constant_bin[ 796201 ], 13, 0 );
    const_tuple_str_plain_line_str_plain_ret_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_line_str_plain_ret_tuple, 0, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_str_plain_line_str_plain_ret_tuple, 1, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_list_str_plain_hide_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_hide_list, 0, const_str_plain_hide ); Py_INCREF( const_str_plain_hide );
    const_str_digest_af89aefd338f9d2af96dee487676d0ab = UNSTREAM_STRING( &constant_bin[ 796214 ], 54, 0 );
    const_str_digest_0772ffcca4f1fc70553bd624e3dd7a52 = UNSTREAM_STRING( &constant_bin[ 796268 ], 11, 0 );
    const_str_digest_f3a86b9d9335212f1200948e3f40b1bc = UNSTREAM_STRING( &constant_bin[ 796279 ], 47, 0 );
    const_tuple_str_plain_interface_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_interface_tuple, 0, const_str_plain_interface ); Py_INCREF( const_str_plain_interface );
    const_tuple_d454847410db8f8105221845748e9005_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 796326 ], 206 );
    const_str_digest_0c3443612e24a5b77ccbe38c9d1abf55 = UNSTREAM_STRING( &constant_bin[ 796532 ], 10, 0 );
    const_str_digest_54461c3711cda1dadf23f6fc0f078206 = UNSTREAM_STRING( &constant_bin[ 1680 ], 4, 0 );
    const_tuple_str_digest_3406559a4c63e5d622ab879a1b304e43_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_3406559a4c63e5d622ab879a1b304e43_tuple, 0, const_str_digest_3406559a4c63e5d622ab879a1b304e43 ); Py_INCREF( const_str_digest_3406559a4c63e5d622ab879a1b304e43 );
    const_str_plain_fvar = UNSTREAM_STRING( &constant_bin[ 634375 ], 4, 1 );
    const_str_digest_722c767fde899aeb02a606630fe23f2a = UNSTREAM_STRING( &constant_bin[ 796542 ], 49, 0 );
    const_str_digest_ef416d73b96e2e2a86475a400ee6076a = UNSTREAM_STRING( &constant_bin[ 796591 ], 54, 0 );
    const_str_digest_0a81d51c86ee5bc26f874a65930bdd4f = UNSTREAM_STRING( &constant_bin[ 796645 ], 20, 0 );
    const_tuple_str_digest_54461c3711cda1dadf23f6fc0f078206_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_54461c3711cda1dadf23f6fc0f078206_tuple, 0, const_str_digest_54461c3711cda1dadf23f6fc0f078206 ); Py_INCREF( const_str_digest_54461c3711cda1dadf23f6fc0f078206 );
    const_str_digest_80310f20f7ffd9429bc0ab090ea29578 = UNSTREAM_STRING( &constant_bin[ 796665 ], 12, 0 );
    const_str_digest_a2b77097e26fa3c1967548e95d083958 = UNSTREAM_STRING( &constant_bin[ 796677 ], 11, 0 );
    const_tuple_str_chr_42_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_chr_42_str_empty_tuple, 0, const_str_chr_42 ); Py_INCREF( const_str_chr_42 );
    PyTuple_SET_ITEM( const_tuple_str_chr_42_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 0, const_str_plain_vars ); Py_INCREF( const_str_plain_vars );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 2, const_str_plain_fa ); Py_INCREF( const_str_plain_fa );
    const_str_plain_f90mode = UNSTREAM_STRING( &constant_bin[ 796481 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 3, const_str_plain_f90mode ); Py_INCREF( const_str_plain_f90mode );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 4, const_str_plain_vardef ); Py_INCREF( const_str_plain_vardef );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 5, const_str_plain_selector ); Py_INCREF( const_str_plain_selector );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 6, const_str_plain_lk ); Py_INCREF( const_str_plain_lk );
    const_tuple_9aa82e64dd9dceb226f9ce6662e09057_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 796688 ], 239 );
    const_str_digest_35cca0630ad2be135138f05593187969 = UNSTREAM_STRING( &constant_bin[ 796927 ], 56, 0 );
    const_str_plain_dn = UNSTREAM_STRING( &constant_bin[ 26 ], 2, 1 );
    const_str_plain_need_interface = UNSTREAM_STRING( &constant_bin[ 796421 ], 14, 1 );
    const_dict_3ff3e4e9e317a78311460ecf7af6add5 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_3ff3e4e9e317a78311460ecf7af6add5, const_str_plain_typespec, const_str_plain_integer );
    PyDict_SetItem( const_dict_3ff3e4e9e317a78311460ecf7af6add5, const_str_plain_intent, const_list_str_plain_hide_list );
    assert( PyDict_Size( const_dict_3ff3e4e9e317a78311460ecf7af6add5 ) == 2 );
    const_list_d4bc04079f357d2a8bd08a67a31f11df_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_d4bc04079f357d2a8bd08a67a31f11df_list, 0, const_str_chr_42 ); Py_INCREF( const_str_chr_42 );
    PyList_SET_ITEM( const_list_d4bc04079f357d2a8bd08a67a31f11df_list, 1, const_str_chr_58 ); Py_INCREF( const_str_chr_58 );
    PyList_SET_ITEM( const_list_d4bc04079f357d2a8bd08a67a31f11df_list, 2, const_str_digest_8b86c509e3d80873ba553789a5440397 ); Py_INCREF( const_str_digest_8b86c509e3d80873ba553789a5440397 );
    const_str_digest_e5ed19889aa981ab855988f4f75aa4d7 = UNSTREAM_STRING( &constant_bin[ 796983 ], 13, 0 );
    const_str_digest_8e71b3de210a6a67ddcba8e7b56fbd8c = UNSTREAM_STRING( &constant_bin[ 796996 ], 6, 0 );
    const_str_digest_120283daa94b32a06bbb36bd108fc4dc = UNSTREAM_STRING( &constant_bin[ 797002 ], 23, 0 );
    const_str_digest_98f05798e55b223870de868fab9b03cc = UNSTREAM_STRING( &constant_bin[ 797025 ], 11, 0 );
    const_str_digest_bd7cf954fd16554693c4a4c0990e5f8e = UNSTREAM_STRING( &constant_bin[ 797036 ], 6, 0 );
    const_tuple_4a80300d86ad1359350e91263565ad0b_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, 0, const_str_plain_getfortranname ); Py_INCREF( const_str_plain_getfortranname );
    PyTuple_SET_ITEM( const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, 1, const_str_plain_isexternal ); Py_INCREF( const_str_plain_isexternal );
    PyTuple_SET_ITEM( const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, 2, const_str_plain_isfunction ); Py_INCREF( const_str_plain_isfunction );
    PyTuple_SET_ITEM( const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, 3, const_str_plain_isfunction_wrap ); Py_INCREF( const_str_plain_isfunction_wrap );
    PyTuple_SET_ITEM( const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, 4, const_str_plain_isintent_in ); Py_INCREF( const_str_plain_isintent_in );
    PyTuple_SET_ITEM( const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, 5, const_str_plain_isintent_out ); Py_INCREF( const_str_plain_isintent_out );
    PyTuple_SET_ITEM( const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, 6, const_str_plain_islogicalfunction ); Py_INCREF( const_str_plain_islogicalfunction );
    PyTuple_SET_ITEM( const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, 7, const_str_plain_ismoduleroutine ); Py_INCREF( const_str_plain_ismoduleroutine );
    PyTuple_SET_ITEM( const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, 8, const_str_plain_isscalar ); Py_INCREF( const_str_plain_isscalar );
    PyTuple_SET_ITEM( const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, 9, const_str_plain_issubroutine ); Py_INCREF( const_str_plain_issubroutine );
    PyTuple_SET_ITEM( const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, 10, const_str_plain_issubroutine_wrap ); Py_INCREF( const_str_plain_issubroutine_wrap );
    PyTuple_SET_ITEM( const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, 11, const_str_plain_outmess ); Py_INCREF( const_str_plain_outmess );
    PyTuple_SET_ITEM( const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, 12, const_str_plain_show ); Py_INCREF( const_str_plain_show );
    const_str_digest_85ce6d1678cbf369ccea3f573b27f45a = UNSTREAM_STRING( &constant_bin[ 797042 ], 9, 0 );
    const_str_digest_9987b11e02c9fe6729dad3e127516d03 = UNSTREAM_STRING( &constant_bin[ 797051 ], 17, 0 );
    const_str_plain_dumped_args = UNSTREAM_STRING( &constant_bin[ 796521 ], 11, 1 );
    const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 0, const_str_plain_rout ); Py_INCREF( const_str_plain_rout );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 1, const_str_plain_fortranname ); Py_INCREF( const_str_plain_fortranname );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 3, const_str_plain_fname ); Py_INCREF( const_str_plain_fname );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 4, const_str_plain_rname ); Py_INCREF( const_str_plain_rname );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 5, const_str_plain_fvar ); Py_INCREF( const_str_plain_fvar );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 6, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 7, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_digest_4629f506100b2a4bba0011ced56e360e = UNSTREAM_STRING( &constant_bin[ 797068 ], 343, 0 );
    const_str_digest_3b2c0fa2fc4dc6d1316a69cb4245f964 = UNSTREAM_STRING( &constant_bin[ 797411 ], 30, 0 );
    const_str_digest_9c4b0d30588e4dcb754f577679644f04 = UNSTREAM_STRING( &constant_bin[ 797441 ], 29, 0 );
    const_str_digest_834b0f233785f6801a2391cc6d08ef9a = UNSTREAM_STRING( &constant_bin[ 797470 ], 9, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$f2py$func2subr( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f140a784124bb3437fff7f737da28a5a;
static PyCodeObject *codeobj_e92d481c171590a0b09aa10d0e5d8395;
static PyCodeObject *codeobj_e1b4eac22aa85782ae97c2769c81da3d;
static PyCodeObject *codeobj_0f82ed2edfce22fa701f606788beed43;
static PyCodeObject *codeobj_717db0a95a7cbb6f98d333032fdf97cc;
static PyCodeObject *codeobj_45e22a4e7d2989075cc7e55c93c5a6a6;
static PyCodeObject *codeobj_739c31d4d33a9c08861dfb743a7bafe6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_af89aefd338f9d2af96dee487676d0ab );
    codeobj_f140a784124bb3437fff7f737da28a5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add, 100, const_tuple_str_plain_line_str_plain_ret_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e92d481c171590a0b09aa10d0e5d8395 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add, 206, const_tuple_str_plain_line_str_plain_ret_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e1b4eac22aa85782ae97c2769c81da3d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_assubr, 266, const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0f82ed2edfce22fa701f606788beed43 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_createfuncwrapper, 80, const_tuple_9aa82e64dd9dceb226f9ce6662e09057_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_717db0a95a7cbb6f98d333032fdf97cc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_createsubrwrapper, 186, const_tuple_d454847410db8f8105221845748e9005_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_45e22a4e7d2989075cc7e55c93c5a6a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_func2subr, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_739c31d4d33a9c08861dfb743a7bafe6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_var2fixfortran, 31, const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_add_of_function_2_createfuncwrapper_of_numpy$f2py$func2subr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1_add_of_function_3_createsubrwrapper_of_numpy$f2py$func2subr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1_var2fixfortran_of_numpy$f2py$func2subr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_createfuncwrapper_of_numpy$f2py$func2subr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_createsubrwrapper_of_numpy$f2py$func2subr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_assubr_of_numpy$f2py$func2subr(  );


// The module function definitions.
static PyObject *impl_function_1_var2fixfortran_of_numpy$f2py$func2subr( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_vars = python_pars[ 0 ];
    PyObject *par_a = python_pars[ 1 ];
    PyObject *par_fa = python_pars[ 2 ];
    PyObject *par_f90mode = python_pars[ 3 ];
    PyObject *var_vardef = NULL;
    PyObject *var_selector = NULL;
    PyObject *var_lk = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    int tmp_cmp_NotIn_1;
    int tmp_cmp_NotIn_2;
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
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
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
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscribed_name_14;
    PyObject *tmp_subscribed_name_15;
    PyObject *tmp_subscribed_name_16;
    PyObject *tmp_subscribed_name_17;
    PyObject *tmp_subscribed_name_18;
    PyObject *tmp_subscribed_name_19;
    PyObject *tmp_subscribed_name_20;
    PyObject *tmp_subscribed_name_21;
    PyObject *tmp_subscribed_name_22;
    PyObject *tmp_subscribed_name_23;
    PyObject *tmp_subscribed_name_24;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_subscript_name_14;
    PyObject *tmp_subscript_name_15;
    PyObject *tmp_subscript_name_16;
    PyObject *tmp_subscript_name_17;
    PyObject *tmp_subscript_name_18;
    PyObject *tmp_subscript_name_19;
    PyObject *tmp_subscript_name_20;
    PyObject *tmp_subscript_name_21;
    PyObject *tmp_subscript_name_22;
    PyObject *tmp_subscript_name_23;
    PyObject *tmp_subscript_name_24;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_compare_left_1 = par_fa;

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
    tmp_assign_source_1 = par_a;

    {
        PyObject *old = par_fa;
        assert( old != NULL );
        par_fa = tmp_assign_source_1;
        Py_INCREF( par_fa );
        Py_DECREF( old );
    }

    branch_no_1:;
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_739c31d4d33a9c08861dfb743a7bafe6, module_numpy$f2py$func2subr );
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
    tmp_compare_left_2 = par_a;

    tmp_compare_right_2 = par_vars;

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_show );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_show );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "show" );
        exception_tb = NULL;

        exception_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_vars;

    frame_function->f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_outmess );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outmess );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "outmess" );
        exception_tb = NULL;

        exception_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_722c767fde899aeb02a606630fe23f2a;
    tmp_right_name_1 = par_a;

    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_compare_left_3 = const_str_plain_typespec;
    tmp_subscribed_name_1 = par_vars;

    tmp_subscript_name_1 = par_a;

    tmp_compare_right_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_NotIn_2 == -1) );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_NotIn_2 == 0 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_show );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_show );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "show" );
        exception_tb = NULL;

        exception_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = par_vars;

    tmp_subscript_name_2 = par_a;

    tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_outmess );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outmess );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "outmess" );
        exception_tb = NULL;

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = const_str_digest_f3a86b9d9335212f1200948e3f40b1bc;
    tmp_right_name_2 = par_a;

    tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_subscribed_name_4 = par_vars;

    tmp_subscript_name_3 = par_a;

    tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_3 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_4 = const_str_plain_typespec;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    assert( var_vardef == NULL );
    var_vardef = tmp_assign_source_2;

    tmp_compexpr_left_1 = var_vardef;

    tmp_compexpr_right_1 = const_str_plain_type;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 43;
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
    tmp_compexpr_left_2 = const_str_plain_typename;
    tmp_subscribed_name_5 = par_vars;

    tmp_subscript_name_5 = par_a;

    tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_3 = const_str_digest_a7636f57d1f8f80548278378b7bf84e2;
    tmp_right_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_vardef;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_1 );
    tmp_subscribed_name_7 = par_vars;

    tmp_subscript_name_6 = par_a;

    tmp_subscribed_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_6 );
    if ( tmp_subscribed_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_7 = const_str_plain_typename;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_7 );
    Py_DECREF( tmp_subscribed_name_6 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_1 );
    tmp_assign_source_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vardef;
        assert( old != NULL );
        var_vardef = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_assign_source_4 = PyDict_New();
    assert( var_selector == NULL );
    var_selector = tmp_assign_source_4;

    tmp_assign_source_5 = const_str_empty;
    assert( var_lk == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_lk = tmp_assign_source_5;

    tmp_compare_left_4 = const_str_plain_kindselector;
    tmp_subscribed_name_8 = par_vars;

    tmp_subscript_name_8 = par_a;

    tmp_compare_right_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_subscribed_name_10 = par_vars;

    tmp_subscript_name_9 = par_a;

    tmp_subscribed_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_9 );
    if ( tmp_subscribed_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_10 = const_str_plain_kindselector;
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_10 );
    Py_DECREF( tmp_subscribed_name_9 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_selector;
        assert( old != NULL );
        var_selector = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_assign_source_7 = const_str_plain_kind;
    {
        PyObject *old = var_lk;
        assert( old != NULL );
        var_lk = tmp_assign_source_7;
        Py_INCREF( var_lk );
        Py_DECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_compare_left_5 = const_str_plain_charselector;
    tmp_subscribed_name_11 = par_vars;

    tmp_subscript_name_11 = par_a;

    tmp_compare_right_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_compare_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_2 == -1) );
    Py_DECREF( tmp_compare_right_5 );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_subscribed_name_13 = par_vars;

    tmp_subscript_name_12 = par_a;

    tmp_subscribed_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_12 );
    if ( tmp_subscribed_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_13 = const_str_plain_charselector;
    tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_13 );
    Py_DECREF( tmp_subscribed_name_12 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_selector;
        assert( old != NULL );
        var_selector = tmp_assign_source_8;
        Py_DECREF( old );
    }

    tmp_assign_source_9 = const_str_plain_len;
    {
        PyObject *old = var_lk;
        assert( old != NULL );
        var_lk = tmp_assign_source_9;
        Py_INCREF( var_lk );
        Py_DECREF( old );
    }

    branch_no_6:;
    branch_end_5:;
    tmp_compare_left_6 = const_str_chr_42;
    tmp_compare_right_6 = var_selector;

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_cond_value_2 = par_f90mode;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_subscribed_name_14 = var_selector;

    if ( tmp_subscribed_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;

        exception_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_14 = const_str_chr_42;
    tmp_compare_left_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = LIST_COPY( const_list_d4bc04079f357d2a8bd08a67a31f11df_list );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_4 == -1) );
    Py_DECREF( tmp_compare_left_7 );
    Py_DECREF( tmp_compare_right_7 );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_left_name_4 = const_str_digest_834b0f233785f6801a2391cc6d08ef9a;
    tmp_right_name_4 = var_vardef;

    tmp_assign_source_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vardef;
        assert( old != NULL );
        var_vardef = tmp_assign_source_10;
        Py_DECREF( old );
    }

    goto branch_end_9;
    branch_no_9:;
    tmp_left_name_5 = const_str_digest_85ce6d1678cbf369ccea3f573b27f45a;
    tmp_right_name_5 = PyTuple_New( 3 );
    tmp_tuple_element_2 = var_vardef;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_lk;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_right_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "lk" );
        exception_tb = NULL;

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_2 );
    tmp_subscribed_name_15 = var_selector;

    if ( tmp_subscribed_name_15 == NULL )
    {
        Py_DECREF( tmp_right_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_15 = const_str_chr_42;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_5 );

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_5, 2, tmp_tuple_element_2 );
    tmp_assign_source_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vardef;
        assert( old != NULL );
        var_vardef = tmp_assign_source_11;
        Py_DECREF( old );
    }

    branch_end_9:;
    goto branch_end_8;
    branch_no_8:;
    tmp_subscribed_name_16 = var_selector;

    if ( tmp_subscribed_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_16 = const_str_chr_42;
    tmp_compare_left_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_8 = LIST_COPY( const_list_str_chr_42_str_chr_58_list );
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_5 == -1) );
    Py_DECREF( tmp_compare_left_8 );
    Py_DECREF( tmp_compare_right_8 );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_6 = const_str_digest_a2d533f75d6903bf78c57445ac3889ee;
    tmp_right_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_vardef;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_3 );
    tmp_subscribed_name_17 = var_selector;

    if ( tmp_subscribed_name_17 == NULL )
    {
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_17 = const_str_chr_42;
    tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_6 );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_6, 1, tmp_tuple_element_3 );
    tmp_assign_source_12 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vardef;
        assert( old != NULL );
        var_vardef = tmp_assign_source_12;
        Py_DECREF( old );
    }

    goto branch_end_10;
    branch_no_10:;
    tmp_left_name_7 = const_str_digest_2a828626ec9b89c264ad5c223290ba39;
    tmp_right_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_vardef;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_4 );
    tmp_subscribed_name_18 = var_selector;

    if ( tmp_subscribed_name_18 == NULL )
    {
        Py_DECREF( tmp_right_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_18 = const_str_chr_42;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_7 );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_7, 1, tmp_tuple_element_4 );
    tmp_assign_source_13 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vardef;
        assert( old != NULL );
        var_vardef = tmp_assign_source_13;
        Py_DECREF( old );
    }

    branch_end_10:;
    branch_end_8:;
    goto branch_end_7;
    branch_no_7:;
    tmp_compare_left_9 = const_str_plain_len;
    tmp_compare_right_9 = var_selector;

    if ( tmp_compare_right_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_left_name_8 = const_str_digest_801066a15672b2f2952b87ffd4068931;
    tmp_right_name_8 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_vardef;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_5 );
    tmp_subscribed_name_19 = var_selector;

    if ( tmp_subscribed_name_19 == NULL )
    {
        Py_DECREF( tmp_right_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_19 = const_str_plain_len;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_8 );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_8, 1, tmp_tuple_element_5 );
    tmp_assign_source_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vardef;
        assert( old != NULL );
        var_vardef = tmp_assign_source_14;
        Py_DECREF( old );
    }

    tmp_compare_left_10 = const_str_plain_kind;
    tmp_compare_right_10 = var_selector;

    if ( tmp_compare_right_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_7 == -1) );
    if ( tmp_cmp_In_7 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_left_name_9 = const_str_digest_357ed0f557a22aaa4a9f55a6da2d7120;
    tmp_right_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_vardef;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_right_name_9, 0, tmp_tuple_element_6 );
    tmp_subscribed_name_20 = var_selector;

    if ( tmp_subscribed_name_20 == NULL )
    {
        Py_DECREF( tmp_right_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_20 = const_str_plain_kind;
    tmp_tuple_element_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_9 );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_9, 1, tmp_tuple_element_6 );
    tmp_assign_source_15 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vardef;
        assert( old != NULL );
        var_vardef = tmp_assign_source_15;
        Py_DECREF( old );
    }

    goto branch_end_12;
    branch_no_12:;
    tmp_left_name_10 = const_str_digest_f48ab9da326247418c919b7675ccc719;
    tmp_right_name_10 = var_vardef;

    tmp_assign_source_16 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vardef;
        assert( old != NULL );
        var_vardef = tmp_assign_source_16;
        Py_DECREF( old );
    }

    branch_end_12:;
    goto branch_end_11;
    branch_no_11:;
    tmp_compare_left_11 = const_str_plain_kind;
    tmp_compare_right_11 = var_selector;

    if ( tmp_compare_right_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    assert( !(tmp_cmp_In_8 == -1) );
    if ( tmp_cmp_In_8 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_left_name_11 = const_str_digest_9174fa49098d6a3261d8b8143abc5651;
    tmp_right_name_11 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_vardef;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_right_name_11, 0, tmp_tuple_element_7 );
    tmp_subscribed_name_21 = var_selector;

    if ( tmp_subscribed_name_21 == NULL )
    {
        Py_DECREF( tmp_right_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;

        exception_lineno = 72;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_21 = const_str_plain_kind;
    tmp_tuple_element_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_11 );

        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_11, 1, tmp_tuple_element_7 );
    tmp_assign_source_17 = BINARY_OPERATION_REMAINDER( tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_right_name_11 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vardef;
        assert( old != NULL );
        var_vardef = tmp_assign_source_17;
        Py_DECREF( old );
    }

    branch_no_13:;
    branch_end_11:;
    branch_end_7:;
    tmp_left_name_12 = const_str_digest_9b2a32a10f34854554acce4f0a1e5df6;
    tmp_right_name_12 = PyTuple_New( 2 );
    tmp_tuple_element_8 = var_vardef;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_right_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "vardef" );
        exception_tb = NULL;

        exception_lineno = 74;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_right_name_12, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = par_fa;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_right_name_12, 1, tmp_tuple_element_8 );
    tmp_assign_source_18 = BINARY_OPERATION_REMAINDER( tmp_left_name_12, tmp_right_name_12 );
    Py_DECREF( tmp_right_name_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vardef;
        var_vardef = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_compare_left_12 = const_str_plain_dimension;
    tmp_subscribed_name_22 = par_vars;

    tmp_subscript_name_22 = par_a;

    tmp_compare_right_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
    if ( tmp_compare_right_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    assert( !(tmp_cmp_In_9 == -1) );
    Py_DECREF( tmp_compare_right_12 );
    if ( tmp_cmp_In_9 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_left_name_13 = const_str_digest_a7636f57d1f8f80548278378b7bf84e2;
    tmp_right_name_13 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_vardef;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_right_name_13, 0, tmp_tuple_element_9 );
    tmp_source_name_1 = const_str_chr_44;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_5 != NULL );
    tmp_subscribed_name_24 = par_vars;

    tmp_subscript_name_23 = par_a;

    tmp_subscribed_name_23 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_24, tmp_subscript_name_23 );
    if ( tmp_subscribed_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_13 );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_24 = const_str_plain_dimension;
    tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_23, tmp_subscript_name_24 );
    Py_DECREF( tmp_subscribed_name_23 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_13 );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_tuple_element_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_13 );

        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_13, 1, tmp_tuple_element_9 );
    tmp_assign_source_19 = BINARY_OPERATION_REMAINDER( tmp_left_name_13, tmp_right_name_13 );
    Py_DECREF( tmp_right_name_13 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vardef;
        assert( old != NULL );
        var_vardef = tmp_assign_source_19;
        Py_DECREF( old );
    }

    branch_no_14:;

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
            if ( par_vars )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vars,
                    par_vars
                );

                assert( res == 0 );
            }

            if ( par_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
                );

                assert( res == 0 );
            }

            if ( par_fa )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fa,
                    par_fa
                );

                assert( res == 0 );
            }

            if ( par_f90mode )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f90mode,
                    par_f90mode
                );

                assert( res == 0 );
            }

            if ( var_vardef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vardef,
                    var_vardef
                );

                assert( res == 0 );
            }

            if ( var_selector )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_selector,
                    var_selector
                );

                assert( res == 0 );
            }

            if ( var_lk )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lk,
                    var_lk
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

    tmp_return_value = var_vardef;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_var2fixfortran_of_numpy$f2py$func2subr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_vars );
    Py_DECREF( par_vars );
    par_vars = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_fa );
    Py_DECREF( par_fa );
    par_fa = NULL;

    CHECK_OBJECT( (PyObject *)par_f90mode );
    Py_DECREF( par_f90mode );
    par_f90mode = NULL;

    Py_XDECREF( var_vardef );
    var_vardef = NULL;

    Py_XDECREF( var_selector );
    var_selector = NULL;

    Py_XDECREF( var_lk );
    var_lk = NULL;

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

    CHECK_OBJECT( (PyObject *)par_vars );
    Py_DECREF( par_vars );
    par_vars = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_fa );
    Py_DECREF( par_fa );
    par_fa = NULL;

    CHECK_OBJECT( (PyObject *)par_f90mode );
    Py_DECREF( par_f90mode );
    par_f90mode = NULL;

    Py_XDECREF( var_vardef );
    var_vardef = NULL;

    Py_XDECREF( var_selector );
    var_selector = NULL;

    Py_XDECREF( var_lk );
    var_lk = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_var2fixfortran_of_numpy$f2py$func2subr );
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


static PyObject *impl_function_2_createfuncwrapper_of_numpy$f2py$func2subr( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rout = python_pars[ 0 ];
    PyObject *par_signature = python_pars[ 1 ];
    PyObject *var_extra_args = NULL;
    PyObject *var_vars = NULL;
    PyObject *var_a = NULL;
    PyObject *var_v = NULL;
    PyObject *var_i = NULL;
    PyObject *var_d = NULL;
    PyObject *var_dn = NULL;
    PyObject *var_dv = NULL;
    PyObject *var_need_interface = NULL;
    PyObject *var_ret = NULL;
    PyObject *var_add = NULL;
    PyObject *var_name = NULL;
    PyObject *var_fortranname = NULL;
    PyObject *var_f90mode = NULL;
    PyObject *var_newname = NULL;
    PyObject *var_args = NULL;
    PyObject *var_l = NULL;
    PyObject *var_charselect = NULL;
    PyObject *var_sargs = NULL;
    PyObject *var_line = NULL;
    PyObject *var_dumped_args = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
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
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
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
    PyObject *tmp_bool_arg_1;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_NotIn_1;
    int tmp_cmp_NotIn_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iter_arg_9;
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
    PyObject *tmp_left_name_15;
    PyObject *tmp_left_name_16;
    PyObject *tmp_left_name_17;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
    PyObject *tmp_next_source_7;
    PyObject *tmp_next_source_8;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
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
    PyObject *tmp_right_name_15;
    PyObject *tmp_right_name_16;
    PyObject *tmp_right_name_17;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscribed_name_14;
    PyObject *tmp_subscribed_name_15;
    PyObject *tmp_subscribed_name_16;
    PyObject *tmp_subscribed_name_17;
    PyObject *tmp_subscribed_name_18;
    PyObject *tmp_subscribed_name_19;
    PyObject *tmp_subscribed_name_20;
    PyObject *tmp_subscribed_name_21;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_subscript_name_14;
    PyObject *tmp_subscript_name_15;
    PyObject *tmp_subscript_name_16;
    PyObject *tmp_subscript_name_17;
    PyObject *tmp_subscript_name_18;
    PyObject *tmp_subscript_name_19;
    PyObject *tmp_subscript_name_20;
    PyObject *tmp_subscript_name_21;
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
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0f82ed2edfce22fa701f606788beed43, module_numpy$f2py$func2subr );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isfunction );

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

        exception_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_rout;

    frame_function->f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 81;
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
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 81;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_extra_args == NULL );
    var_extra_args = tmp_assign_source_1;

    tmp_subscribed_name_1 = par_rout;

    tmp_subscript_name_1 = const_str_plain_vars;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    assert( var_vars == NULL );
    var_vars = tmp_assign_source_2;

    tmp_subscribed_name_2 = par_rout;

    tmp_subscript_name_2 = const_str_plain_args;
    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
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
            frame_function->f_lineno = 85;
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
        PyObject *old = var_a;
        var_a = tmp_assign_source_5;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_4 = par_rout;

    tmp_subscript_name_3 = const_str_plain_vars;
    tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_3 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_2;
    }
    tmp_subscript_name_4 = var_a;

    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_v;
        var_v = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_enumerate );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_1 = var_v;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_2;
    }
    tmp_call_arg_element_1 = const_str_plain_dimension;
    tmp_call_arg_element_2 = PyList_New( 0 );
    frame_function->f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1, tmp_call_arg_element_2 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_2;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

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
            frame_function->f_lineno = 87;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_3 = tmp_for_loop_2__iter_value;

    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        exception_lineno = 87;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 87;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
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
    tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_12;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_d;
        var_d = tmp_assign_source_13;
        Py_INCREF( var_d );
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

    tmp_compare_left_1 = var_d;

    tmp_compare_right_1 = const_str_chr_58;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_3;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = const_str_digest_a2b77097e26fa3c1967548e95d083958;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_a;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_i;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_dn;
        var_dn = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = DEEP_COPY( const_dict_3ff3e4e9e317a78311460ecf7af6add5 );
    {
        PyObject *old = var_dv;
        var_dv = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_left_name_2 = const_str_digest_e5ed19889aa981ab855988f4f75aa4d7;
    tmp_right_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_a;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_i;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_2 );
    tmp_dictset_value = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_3;
    }
    tmp_dictset_dict = var_dv;

    tmp_dictset_key = const_str_chr_61;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_source_name_2 = var_extra_args;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto try_except_handler_3;
    }
    tmp_args_element_name_3 = var_dn;

    frame_function->f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_1 = var_dv;

    tmp_ass_subscribed_1 = var_vars;

    tmp_ass_subscript_1 = var_dn;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto try_except_handler_3;
    }
    tmp_ass_subvalue_2 = var_dn;

    tmp_subscribed_name_5 = var_v;

    tmp_subscript_name_5 = const_str_plain_dimension;
    tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_ass_subscribed_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_3;
    }
    tmp_ass_subscript_2 = var_i;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscribed_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_3;
    }
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
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

    tmp_subscribed_name_6 = par_rout;

    tmp_subscript_name_6 = const_str_plain_args;
    tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extend );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_extra_args;

    frame_function->f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_bool_arg_1 = var_extra_args;

    tmp_assign_source_16 = TO_BOOL( tmp_bool_arg_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto frame_exception_exit_1;
    }
    assert( var_need_interface == NULL );
    Py_INCREF( tmp_assign_source_16 );
    var_need_interface = tmp_assign_source_16;

    tmp_assign_source_17 = LIST_COPY( const_list_str_empty_list );
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_17;

    tmp_defaults_1 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_ret;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_3 );
    tmp_assign_source_18 = MAKE_FUNCTION_function_1_add_of_function_2_createfuncwrapper_of_numpy$f2py$func2subr( tmp_defaults_1 );
    assert( var_add == NULL );
    var_add = tmp_assign_source_18;

    tmp_subscribed_name_7 = par_rout;

    tmp_subscript_name_7 = const_str_plain_name;
    tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_19;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_getfortranname );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getfortranname );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "getfortranname" );
        exception_tb = NULL;

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_rout;

    frame_function->f_lineno = 103;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    assert( var_fortranname == NULL );
    var_fortranname = tmp_assign_source_20;

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_ismoduleroutine );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ismoduleroutine );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ismoduleroutine" );
        exception_tb = NULL;

        exception_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_rout;

    frame_function->f_lineno = 104;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    assert( var_f90mode == NULL );
    var_f90mode = tmp_assign_source_21;

    tmp_left_name_3 = const_str_digest_0c3443612e24a5b77ccbe38c9d1abf55;
    tmp_right_name_3 = var_name;

    tmp_assign_source_22 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    assert( var_newname == NULL );
    var_newname = tmp_assign_source_22;

    tmp_compare_left_2 = var_newname;

    tmp_compare_right_2 = var_vars;

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_subscribed_name_8 = var_vars;

    tmp_subscript_name_8 = var_name;

    tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_3 = var_vars;

    tmp_ass_subscript_3 = var_newname;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = PyList_New( 1 );
    tmp_list_element_1 = var_newname;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_left_name_4, 0, tmp_list_element_1 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_subscribed_name_9 = par_rout;

    tmp_subscript_name_9 = const_str_plain_args;
    tmp_slice_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    assert( var_args == NULL );
    var_args = tmp_assign_source_23;

    goto branch_end_3;
    branch_no_3:;
    tmp_left_name_5 = PyList_New( 1 );
    tmp_list_element_2 = var_newname;

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_left_name_5, 0, tmp_list_element_2 );
    tmp_subscribed_name_10 = par_rout;

    tmp_subscript_name_10 = const_str_plain_args;
    tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    assert( var_args == NULL );
    var_args = tmp_assign_source_24;

    branch_end_3:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_var2fixfortran );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "var2fixfortran" );
        exception_tb = NULL;

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_vars;

    tmp_args_element_name_8 = var_name;

    tmp_args_element_name_9 = var_newname;

    tmp_args_element_name_10 = var_f90mode;

    frame_function->f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_8, call_args );
    }

    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    assert( var_l == NULL );
    var_l = tmp_assign_source_25;

    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = 13;
    tmp_slice_source_2 = var_l;

    tmp_compare_left_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_str_digest_808627bce1223af9ea8da7bb12a3727f;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 114;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_cond_value_2 = var_f90mode;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_6 = const_str_digest_9987b11e02c9fe6729dad3e127516d03;
    tmp_sliceslicedel_index_lower_3 = 13;
    tmp_slice_index_upper_3 = PY_SSIZE_T_MAX;
    tmp_slice_source_3 = var_l;

    tmp_right_name_6 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_l;
        assert( old != NULL );
        var_l = tmp_assign_source_26;
        Py_DECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_left_name_7 = const_str_digest_80310f20f7ffd9429bc0ab090ea29578;
    tmp_sliceslicedel_index_lower_4 = 13;
    tmp_slice_index_upper_4 = PY_SSIZE_T_MAX;
    tmp_slice_source_4 = var_l;

    tmp_right_name_7 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_l;
        assert( old != NULL );
        var_l = tmp_assign_source_27;
        Py_DECREF( old );
    }

    branch_end_5:;
    tmp_subscribed_name_12 = var_vars;

    tmp_subscript_name_11 = var_name;

    tmp_subscribed_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_11 );
    if ( tmp_subscribed_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_12 = const_str_plain_charselector;
    tmp_assign_source_28 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_12 );
    Py_DECREF( tmp_subscribed_name_11 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    assert( var_charselect == NULL );
    var_charselect = tmp_assign_source_28;

    tmp_source_name_4 = var_charselect;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 120;
    tmp_compare_left_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_chr_42_str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_str_digest_8b86c509e3d80873ba553789a5440397;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_ass_subvalue_4 = const_str_plain_10;
    tmp_ass_subscribed_4 = var_charselect;

    tmp_ass_subscript_4 = const_str_chr_42;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    branch_no_4:;
    tmp_source_name_5 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    assert( tmp_called_name_10 != NULL );
    tmp_args_element_name_11 = var_args;

    frame_function->f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    assert( var_sargs == NULL );
    var_sargs = tmp_assign_source_29;

    tmp_cond_value_3 = var_f90mode;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_11 = var_add;

    tmp_left_name_8 = const_str_digest_3b2c0fa2fc4dc6d1316a69cb4245f964;
    tmp_right_name_8 = PyTuple_New( 3 );
    tmp_subscribed_name_13 = par_rout;

    tmp_subscript_name_13 = const_str_plain_modulename;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_8 );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_name;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_8, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_sargs;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_8, 2, tmp_tuple_element_4 );
    tmp_args_element_name_12 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_4 = par_signature;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_8;
    }
    else
    {
        goto branch_yes_8;
    }
    branch_yes_8:;
    tmp_called_name_12 = var_add;

    tmp_left_name_9 = const_str_digest_2d4adc30e980ccfc85f7df36de928e4b;
    tmp_right_name_9 = PyTuple_New( 2 );
    tmp_subscribed_name_14 = par_rout;

    tmp_subscript_name_14 = const_str_plain_modulename;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_9 );

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_9, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_fortranname;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_9, 1, tmp_tuple_element_5 );
    tmp_args_element_name_13 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 127;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    tmp_called_name_13 = var_add;

    tmp_left_name_10 = const_str_digest_80de7bc8e3a604d4b960ed791ca600e3;
    tmp_right_name_10 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_name;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_right_name_10, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_sargs;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_right_name_10, 1, tmp_tuple_element_6 );
    tmp_args_element_name_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_5 = var_need_interface;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    tmp_called_name_14 = var_add;

    tmp_left_name_11 = const_str_digest_d1afd4948f685dba95ae3f6afcd85cca;
    tmp_right_name_11 = var_fortranname;

    tmp_args_element_name_15 = BINARY_OPERATION_REMAINDER( tmp_left_name_11, tmp_right_name_11 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_13 = var_l;

    if ( tmp_left_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "l" );
        exception_tb = NULL;

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_right_name_12 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_left_name_12 = BINARY_OPERATION_ADD( tmp_left_name_13, tmp_right_name_12 );
    if ( tmp_left_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_right_name_13 = var_fortranname;

    tmp_assign_source_30 = BINARY_OPERATION_ADD( tmp_left_name_12, tmp_right_name_13 );
    Py_DECREF( tmp_left_name_12 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_l;
        var_l = tmp_assign_source_30;
        Py_XDECREF( old );
    }

    branch_no_9:;
    branch_end_7:;
    tmp_cond_value_6 = var_need_interface;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
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
    tmp_subscribed_name_15 = par_rout;

    tmp_subscript_name_15 = const_str_plain_saved_interface;
    tmp_source_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_split );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 134;
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, &PyTuple_GET_ITEM( const_tuple_str_newline_tuple, 0 ) );

    Py_DECREF( tmp_called_name_15 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_31;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator;

    tmp_assign_source_32 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_32 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 134;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_32;
        Py_XDECREF( old );
    }

    tmp_assign_source_33 = tmp_for_loop_3__iter_value;

    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_33;
        Py_INCREF( var_line );
        Py_XDECREF( old );
    }

    tmp_source_name_8 = var_line;

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_lstrip );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto try_except_handler_5;
    }
    frame_function->f_lineno = 135;
    tmp_source_name_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_17 );
    Py_DECREF( tmp_called_name_17 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto try_except_handler_5;
    }
    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_startswith );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto try_except_handler_5;
    }
    frame_function->f_lineno = 135;
    tmp_cond_value_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_str_digest_54461c3711cda1dadf23f6fc0f078206_tuple, 0 ) );

    Py_DECREF( tmp_called_name_16 );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto try_except_handler_5;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 135;
        goto try_except_handler_5;
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
    tmp_called_name_18 = var_add;

    tmp_args_element_name_16 = var_line;

    frame_function->f_lineno = 136;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    branch_no_11:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
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

    branch_no_10:;
    tmp_sliceslicedel_index_lower_5 = 1;
    tmp_slice_index_upper_5 = PY_SSIZE_T_MAX;
    tmp_slice_source_5 = var_args;

    tmp_assign_source_34 = LOOKUP_INDEX_SLICE( tmp_slice_source_5, tmp_sliceslicedel_index_lower_5, tmp_slice_index_upper_5 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_args;
        assert( old != NULL );
        var_args = tmp_assign_source_34;
        Py_DECREF( old );
    }

    tmp_assign_source_35 = PyList_New( 0 );
    assert( var_dumped_args == NULL );
    var_dumped_args = tmp_assign_source_35;

    tmp_iter_arg_5 = var_args;

    tmp_assign_source_36 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator == NULL );
    tmp_for_loop_4__for_iterator = tmp_assign_source_36;

    // Tried code:
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator;

    tmp_assign_source_37 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_37 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 140;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_for_loop_4__iter_value;
        tmp_for_loop_4__iter_value = tmp_assign_source_37;
        Py_XDECREF( old );
    }

    tmp_assign_source_38 = tmp_for_loop_4__iter_value;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_38;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isexternal );

    if (unlikely( tmp_called_name_19 == NULL ))
    {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isexternal );
    }

    if ( tmp_called_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isexternal" );
        exception_tb = NULL;

        exception_lineno = 141;
        goto try_except_handler_6;
    }

    tmp_subscribed_name_16 = var_vars;

    tmp_subscript_name_16 = var_a;

    tmp_args_element_name_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 141;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_cond_value_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto try_except_handler_6;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 141;
        goto try_except_handler_6;
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
    tmp_called_name_20 = var_add;

    tmp_left_name_14 = const_str_digest_d1afd4948f685dba95ae3f6afcd85cca;
    tmp_right_name_14 = var_a;

    tmp_args_element_name_18 = BINARY_OPERATION_REMAINDER( tmp_left_name_14, tmp_right_name_14 );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = var_dumped_args;

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto try_except_handler_6;
    }
    tmp_args_element_name_19 = var_a;

    frame_function->f_lineno = 143;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_12:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto try_except_handler_6;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
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

    tmp_iter_arg_6 = var_args;

    tmp_assign_source_39 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_5__for_iterator == NULL );
    tmp_for_loop_5__for_iterator = tmp_assign_source_39;

    // Tried code:
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator;

    tmp_assign_source_40 = ITERATOR_NEXT( tmp_next_source_5 );
    if ( tmp_assign_source_40 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_5;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 144;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_for_loop_5__iter_value;
        tmp_for_loop_5__iter_value = tmp_assign_source_40;
        Py_XDECREF( old );
    }

    tmp_assign_source_41 = tmp_for_loop_5__iter_value;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_41;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_compare_left_5 = var_a;

    tmp_compare_right_5 = var_dumped_args;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    goto loop_start_5;
    branch_no_13:;
    tmp_called_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_name_22 == NULL ))
    {
        tmp_called_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isscalar" );
        exception_tb = NULL;

        exception_lineno = 147;
        goto try_except_handler_7;
    }

    tmp_subscribed_name_17 = var_vars;

    tmp_subscript_name_17 = var_a;

    tmp_args_element_name_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_7;
    }
    frame_function->f_lineno = 147;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_cond_value_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_7;
    }
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        exception_lineno = 147;
        goto try_except_handler_7;
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
    tmp_called_name_23 = var_add;

    tmp_called_name_24 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran );

    if (unlikely( tmp_called_name_24 == NULL ))
    {
        tmp_called_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_var2fixfortran );
    }

    if ( tmp_called_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "var2fixfortran" );
        exception_tb = NULL;

        exception_lineno = 148;
        goto try_except_handler_7;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_vars;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_a;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_7 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_f90mode;

    tmp_dict_key_1 = const_str_plain_f90mode;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 148;
    tmp_args_element_name_21 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto try_except_handler_7;
    }
    frame_function->f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = var_dumped_args;

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_append );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto try_except_handler_7;
    }
    tmp_args_element_name_22 = var_a;

    frame_function->f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_called_name_25 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    branch_no_14:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
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
    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    tmp_iter_arg_7 = var_args;

    tmp_assign_source_42 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_6__for_iterator == NULL );
    tmp_for_loop_6__for_iterator = tmp_assign_source_42;

    // Tried code:
    loop_start_6:;
    tmp_next_source_6 = tmp_for_loop_6__for_iterator;

    tmp_assign_source_43 = ITERATOR_NEXT( tmp_next_source_6 );
    if ( tmp_assign_source_43 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_6;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 150;
            goto try_except_handler_8;
        }
    }

    {
        PyObject *old = tmp_for_loop_6__iter_value;
        tmp_for_loop_6__iter_value = tmp_assign_source_43;
        Py_XDECREF( old );
    }

    tmp_assign_source_44 = tmp_for_loop_6__iter_value;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_44;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_compare_left_6 = var_a;

    tmp_compare_right_6 = var_dumped_args;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    goto loop_start_6;
    branch_no_15:;
    tmp_called_name_26 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isintent_in );

    if (unlikely( tmp_called_name_26 == NULL ))
    {
        tmp_called_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_in );
    }

    if ( tmp_called_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isintent_in" );
        exception_tb = NULL;

        exception_lineno = 153;
        goto try_except_handler_8;
    }

    tmp_subscribed_name_18 = var_vars;

    tmp_subscript_name_18 = var_a;

    tmp_args_element_name_23 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_8;
    }
    frame_function->f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_cond_value_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_cond_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_8;
    }
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        exception_lineno = 153;
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_called_name_27 = var_add;

    tmp_called_name_28 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran );

    if (unlikely( tmp_called_name_28 == NULL ))
    {
        tmp_called_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_var2fixfortran );
    }

    if ( tmp_called_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "var2fixfortran" );
        exception_tb = NULL;

        exception_lineno = 154;
        goto try_except_handler_8;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_8 = var_vars;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_a;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_8 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_f90mode;

    tmp_dict_key_2 = const_str_plain_f90mode;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 154;
    tmp_args_element_name_24 = CALL_FUNCTION( tmp_called_name_28, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto try_except_handler_8;
    }
    frame_function->f_lineno = 154;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = var_dumped_args;

    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_append );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_8;
    }
    tmp_args_element_name_25 = var_a;

    frame_function->f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
    }

    Py_DECREF( tmp_called_name_29 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    branch_no_16:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto try_except_handler_8;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    tmp_iter_arg_8 = var_args;

    tmp_assign_source_45 = MAKE_ITERATOR( tmp_iter_arg_8 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_7__for_iterator == NULL );
    tmp_for_loop_7__for_iterator = tmp_assign_source_45;

    // Tried code:
    loop_start_7:;
    tmp_next_source_7 = tmp_for_loop_7__for_iterator;

    tmp_assign_source_46 = ITERATOR_NEXT( tmp_next_source_7 );
    if ( tmp_assign_source_46 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_7;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 156;
            goto try_except_handler_9;
        }
    }

    {
        PyObject *old = tmp_for_loop_7__iter_value;
        tmp_for_loop_7__iter_value = tmp_assign_source_46;
        Py_XDECREF( old );
    }

    tmp_assign_source_47 = tmp_for_loop_7__iter_value;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_47;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_compare_left_7 = var_a;

    tmp_compare_right_7 = var_dumped_args;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
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
    goto loop_start_7;
    branch_no_17:;
    tmp_called_name_30 = var_add;

    tmp_called_name_31 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran );

    if (unlikely( tmp_called_name_31 == NULL ))
    {
        tmp_called_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_var2fixfortran );
    }

    if ( tmp_called_name_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "var2fixfortran" );
        exception_tb = NULL;

        exception_lineno = 159;
        goto try_except_handler_9;
    }

    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_vars;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_a;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_9 );
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = var_f90mode;

    tmp_dict_key_3 = const_str_plain_f90mode;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 159;
    tmp_args_element_name_26 = CALL_FUNCTION( tmp_called_name_31, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_args_element_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto try_except_handler_9;
    }
    frame_function->f_lineno = 159;
    {
        PyObject *call_args[] = { tmp_args_element_name_26 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_args_element_name_26 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto try_except_handler_9;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_7__iter_value );
    tmp_for_loop_7__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_7__for_iterator );
    Py_DECREF( tmp_for_loop_7__for_iterator );
    tmp_for_loop_7__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_7__iter_value );
    tmp_for_loop_7__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_7__for_iterator );
    Py_DECREF( tmp_for_loop_7__for_iterator );
    tmp_for_loop_7__for_iterator = NULL;

    tmp_called_name_32 = var_add;

    tmp_args_element_name_27 = var_l;

    if ( tmp_args_element_name_27 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "l" );
        exception_tb = NULL;

        exception_lineno = 161;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 161;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_11 = var_need_interface;

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_cond_value_12 = var_f90mode;

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_no_19;
    }
    else
    {
        goto branch_yes_19;
    }
    branch_yes_19:;
    tmp_called_name_33 = var_add;

    frame_function->f_lineno = 168;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, &PyTuple_GET_ITEM( const_tuple_str_plain_interface_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_34 = var_add;

    tmp_subscribed_name_19 = par_rout;

    tmp_subscript_name_19 = const_str_plain_saved_interface;
    tmp_source_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        goto frame_exception_exit_1;
    }
    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_lstrip );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 169;
    tmp_args_element_name_28 = CALL_FUNCTION_NO_ARGS( tmp_called_name_35 );
    Py_DECREF( tmp_called_name_35 );
    if ( tmp_args_element_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 169;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
    }

    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_36 = var_add;

    frame_function->f_lineno = 170;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, &PyTuple_GET_ITEM( const_tuple_str_digest_c1efb684c416633d1d418c1db1fa045c_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_19:;
    branch_no_18:;
    tmp_source_name_13 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_join );
    assert( tmp_called_name_37 != NULL );
    // Tried code:
    tmp_iter_arg_9 = var_args;

    tmp_assign_source_49 = MAKE_ITERATOR( tmp_iter_arg_9 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto try_except_handler_10;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_49;

    tmp_assign_source_50 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_50;

    loop_start_8:;
    tmp_next_source_8 = tmp_list_contraction_1__$0;

    tmp_assign_source_51 = ITERATOR_NEXT( tmp_next_source_8 );
    if ( tmp_assign_source_51 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_8;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 172;
            goto try_except_handler_10;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_51;
        Py_XDECREF( old );
    }

    tmp_assign_source_52 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_52;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_compare_left_8 = var_a;

    tmp_compare_right_8 = var_extra_args;

    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_NotIn_2 == -1) );
    if ( tmp_cmp_NotIn_2 == 0 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_append_value_1 = var_a;

    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto try_except_handler_10;
    }
    branch_no_20:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto try_except_handler_10;
    }
    goto loop_start_8;
    loop_end_8:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_createfuncwrapper_of_numpy$f2py$func2subr );
    return NULL;
    // Return handler code:
    try_return_handler_10:;
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
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_createfuncwrapper_of_numpy$f2py$func2subr );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_29 = tmp_outline_return_value_1;
    frame_function->f_lineno = 172;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, call_args );
    }

    Py_DECREF( tmp_called_name_37 );
    Py_DECREF( tmp_args_element_name_29 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_sargs;
        assert( old != NULL );
        var_sargs = tmp_assign_source_48;
        Py_DECREF( old );
    }

    tmp_cond_value_13 = par_signature;

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_13 == 1 )
    {
        goto branch_no_21;
    }
    else
    {
        goto branch_yes_21;
    }
    branch_yes_21:;
    tmp_called_name_38 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_islogicalfunction );

    if (unlikely( tmp_called_name_38 == NULL ))
    {
        tmp_called_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_islogicalfunction );
    }

    if ( tmp_called_name_38 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "islogicalfunction" );
        exception_tb = NULL;

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_30 = par_rout;

    frame_function->f_lineno = 175;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_cond_value_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
    }

    if ( tmp_cond_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_14 );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_called_name_39 = var_add;

    tmp_left_name_15 = const_str_digest_120283daa94b32a06bbb36bd108fc4dc;
    tmp_right_name_15 = PyTuple_New( 3 );
    tmp_tuple_element_10 = var_newname;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_right_name_15, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = var_fortranname;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_right_name_15, 1, tmp_tuple_element_10 );
    tmp_tuple_element_10 = var_sargs;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_right_name_15, 2, tmp_tuple_element_10 );
    tmp_args_element_name_31 = BINARY_OPERATION_REMAINDER( tmp_left_name_15, tmp_right_name_15 );
    Py_DECREF( tmp_right_name_15 );
    if ( tmp_args_element_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_39, call_args );
    }

    Py_DECREF( tmp_args_element_name_31 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_22;
    branch_no_22:;
    tmp_called_name_40 = var_add;

    tmp_left_name_16 = const_str_digest_0772ffcca4f1fc70553bd624e3dd7a52;
    tmp_right_name_16 = PyTuple_New( 3 );
    tmp_tuple_element_11 = var_newname;

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_right_name_16, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_fortranname;

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_right_name_16, 1, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_sargs;

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_right_name_16, 2, tmp_tuple_element_11 );
    tmp_args_element_name_32 = BINARY_OPERATION_REMAINDER( tmp_left_name_16, tmp_right_name_16 );
    Py_DECREF( tmp_right_name_16 );
    if ( tmp_args_element_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 178;
    {
        PyObject *call_args[] = { tmp_args_element_name_32 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, call_args );
    }

    Py_DECREF( tmp_args_element_name_32 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_22:;
    branch_no_21:;
    tmp_cond_value_15 = var_f90mode;

    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_15 == 1 )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_called_name_41 = var_add;

    tmp_left_name_17 = const_str_digest_9c4b0d30588e4dcb754f577679644f04;
    tmp_right_name_17 = PyTuple_New( 2 );
    tmp_subscribed_name_20 = par_rout;

    tmp_subscript_name_20 = const_str_plain_modulename;
    tmp_tuple_element_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
    if ( tmp_tuple_element_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_17 );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_17, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = var_name;

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_right_name_17, 1, tmp_tuple_element_12 );
    tmp_args_element_name_33 = BINARY_OPERATION_REMAINDER( tmp_left_name_17, tmp_right_name_17 );
    Py_DECREF( tmp_right_name_17 );
    if ( tmp_args_element_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_args_element_name_33 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_41, call_args );
    }

    Py_DECREF( tmp_args_element_name_33 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_23;
    branch_no_23:;
    tmp_called_name_42 = var_add;

    frame_function->f_lineno = 182;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_42, &PyTuple_GET_ITEM( const_tuple_str_plain_end_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_23:;
    tmp_subscribed_name_21 = var_ret;

    tmp_subscript_name_21 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
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
            if ( par_rout )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rout,
                    par_rout
                );

                assert( res == 0 );
            }

            if ( par_signature )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_signature,
                    par_signature
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

            if ( var_vars )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vars,
                    var_vars
                );

                assert( res == 0 );
            }

            if ( var_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    var_a
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

            if ( var_i )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_i,
                    var_i
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

            if ( var_dn )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dn,
                    var_dn
                );

                assert( res == 0 );
            }

            if ( var_dv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dv,
                    var_dv
                );

                assert( res == 0 );
            }

            if ( var_need_interface )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_need_interface,
                    var_need_interface
                );

                assert( res == 0 );
            }

            if ( var_ret )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ret,
                    var_ret
                );

                assert( res == 0 );
            }

            if ( var_add )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_add,
                    var_add
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

            if ( var_fortranname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fortranname,
                    var_fortranname
                );

                assert( res == 0 );
            }

            if ( var_f90mode )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f90mode,
                    var_f90mode
                );

                assert( res == 0 );
            }

            if ( var_newname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_newname,
                    var_newname
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

            if ( var_l )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_l,
                    var_l
                );

                assert( res == 0 );
            }

            if ( var_charselect )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_charselect,
                    var_charselect
                );

                assert( res == 0 );
            }

            if ( var_sargs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sargs,
                    var_sargs
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

            if ( var_dumped_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dumped_args,
                    var_dumped_args
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
    NUITKA_CANNOT_GET_HERE( function_2_createfuncwrapper_of_numpy$f2py$func2subr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rout );
    Py_DECREF( par_rout );
    par_rout = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)var_extra_args );
    Py_DECREF( var_extra_args );
    var_extra_args = NULL;

    CHECK_OBJECT( (PyObject *)var_vars );
    Py_DECREF( var_vars );
    var_vars = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_dn );
    var_dn = NULL;

    Py_XDECREF( var_dv );
    var_dv = NULL;

    CHECK_OBJECT( (PyObject *)var_need_interface );
    Py_DECREF( var_need_interface );
    var_need_interface = NULL;

    CHECK_OBJECT( (PyObject *)var_ret );
    Py_DECREF( var_ret );
    var_ret = NULL;

    CHECK_OBJECT( (PyObject *)var_add );
    Py_DECREF( var_add );
    var_add = NULL;

    CHECK_OBJECT( (PyObject *)var_name );
    Py_DECREF( var_name );
    var_name = NULL;

    CHECK_OBJECT( (PyObject *)var_fortranname );
    Py_DECREF( var_fortranname );
    var_fortranname = NULL;

    CHECK_OBJECT( (PyObject *)var_f90mode );
    Py_DECREF( var_f90mode );
    var_f90mode = NULL;

    CHECK_OBJECT( (PyObject *)var_newname );
    Py_DECREF( var_newname );
    var_newname = NULL;

    CHECK_OBJECT( (PyObject *)var_args );
    Py_DECREF( var_args );
    var_args = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_charselect );
    var_charselect = NULL;

    CHECK_OBJECT( (PyObject *)var_sargs );
    Py_DECREF( var_sargs );
    var_sargs = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    CHECK_OBJECT( (PyObject *)var_dumped_args );
    Py_DECREF( var_dumped_args );
    var_dumped_args = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_rout );
    Py_DECREF( par_rout );
    par_rout = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    Py_XDECREF( var_extra_args );
    var_extra_args = NULL;

    Py_XDECREF( var_vars );
    var_vars = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_dn );
    var_dn = NULL;

    Py_XDECREF( var_dv );
    var_dv = NULL;

    Py_XDECREF( var_need_interface );
    var_need_interface = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_add );
    var_add = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_fortranname );
    var_fortranname = NULL;

    Py_XDECREF( var_f90mode );
    var_f90mode = NULL;

    Py_XDECREF( var_newname );
    var_newname = NULL;

    Py_XDECREF( var_args );
    var_args = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_charselect );
    var_charselect = NULL;

    Py_XDECREF( var_sargs );
    var_sargs = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_dumped_args );
    var_dumped_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_createfuncwrapper_of_numpy$f2py$func2subr );
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


static PyObject *impl_function_1_add_of_function_2_createfuncwrapper_of_numpy$f2py$func2subr( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_line = python_pars[ 0 ];
    PyObject *par_ret = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    int tmp_ass_subscript_res_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f140a784124bb3437fff7f737da28a5a, module_numpy$f2py$func2subr );
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
    tmp_left_name_1 = const_str_digest_ac77c4c82d64bea33cb67def314a870b;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_subscribed_name_1 = par_ret;

    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_line;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_ass_subvalue_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = par_ret;

    tmp_ass_subscript_1 = const_int_0;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
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
            if ( par_line )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_line,
                    par_line
                );

                assert( res == 0 );
            }

            if ( par_ret )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ret,
                    par_ret
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
    NUITKA_CANNOT_GET_HERE( function_1_add_of_function_2_createfuncwrapper_of_numpy$f2py$func2subr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_line );
    Py_DECREF( par_line );
    par_line = NULL;

    CHECK_OBJECT( (PyObject *)par_ret );
    Py_DECREF( par_ret );
    par_ret = NULL;

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

    CHECK_OBJECT( (PyObject *)par_line );
    Py_DECREF( par_line );
    par_line = NULL;

    CHECK_OBJECT( (PyObject *)par_ret );
    Py_DECREF( par_ret );
    par_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_add_of_function_2_createfuncwrapper_of_numpy$f2py$func2subr );
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


static PyObject *impl_function_3_createsubrwrapper_of_numpy$f2py$func2subr( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rout = python_pars[ 0 ];
    PyObject *par_signature = python_pars[ 1 ];
    PyObject *var_extra_args = NULL;
    PyObject *var_vars = NULL;
    PyObject *var_a = NULL;
    PyObject *var_v = NULL;
    PyObject *var_i = NULL;
    PyObject *var_d = NULL;
    PyObject *var_dn = NULL;
    PyObject *var_dv = NULL;
    PyObject *var_need_interface = NULL;
    PyObject *var_ret = NULL;
    PyObject *var_add = NULL;
    PyObject *var_name = NULL;
    PyObject *var_fortranname = NULL;
    PyObject *var_f90mode = NULL;
    PyObject *var_args = NULL;
    PyObject *var_sargs = NULL;
    PyObject *var_line = NULL;
    PyObject *var_dumped_args = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
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
    PyObject *tmp_args_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
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
    PyObject *tmp_bool_arg_1;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_NotIn_1;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_frame_locals;
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
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
    PyObject *tmp_next_source_7;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscribed_name_14;
    PyObject *tmp_subscribed_name_15;
    PyObject *tmp_subscribed_name_16;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_subscript_name_14;
    PyObject *tmp_subscript_name_15;
    PyObject *tmp_subscript_name_16;
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
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_717db0a95a7cbb6f98d333032fdf97cc, module_numpy$f2py$func2subr );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_issubroutine );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issubroutine );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "issubroutine" );
        exception_tb = NULL;

        exception_lineno = 187;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_rout;

    frame_function->f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 187;
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
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 187;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_extra_args == NULL );
    var_extra_args = tmp_assign_source_1;

    tmp_subscribed_name_1 = par_rout;

    tmp_subscript_name_1 = const_str_plain_vars;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto frame_exception_exit_1;
    }
    assert( var_vars == NULL );
    var_vars = tmp_assign_source_2;

    tmp_subscribed_name_2 = par_rout;

    tmp_subscript_name_2 = const_str_plain_args;
    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
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
            frame_function->f_lineno = 191;
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
        PyObject *old = var_a;
        var_a = tmp_assign_source_5;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_4 = par_rout;

    tmp_subscript_name_3 = const_str_plain_vars;
    tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_3 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        goto try_except_handler_2;
    }
    tmp_subscript_name_4 = var_a;

    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_v;
        var_v = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_enumerate );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_1 = var_v;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_2;
    }
    tmp_call_arg_element_1 = const_str_plain_dimension;
    tmp_call_arg_element_2 = PyList_New( 0 );
    frame_function->f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1, tmp_call_arg_element_2 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_2;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

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
            frame_function->f_lineno = 193;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_3 = tmp_for_loop_2__iter_value;

    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        exception_lineno = 193;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 193;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
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
    tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_12;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_d;
        var_d = tmp_assign_source_13;
        Py_INCREF( var_d );
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

    tmp_compare_left_1 = var_d;

    tmp_compare_right_1 = const_str_chr_58;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto try_except_handler_3;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = const_str_digest_a2b77097e26fa3c1967548e95d083958;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_a;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_i;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_dn;
        var_dn = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = DEEP_COPY( const_dict_3ff3e4e9e317a78311460ecf7af6add5 );
    {
        PyObject *old = var_dv;
        var_dv = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_left_name_2 = const_str_digest_e5ed19889aa981ab855988f4f75aa4d7;
    tmp_right_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_a;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_i;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_2 );
    tmp_dictset_value = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto try_except_handler_3;
    }
    tmp_dictset_dict = var_dv;

    tmp_dictset_key = const_str_chr_61;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    assert( !(tmp_res != 0) );
    tmp_source_name_2 = var_extra_args;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto try_except_handler_3;
    }
    tmp_args_element_name_3 = var_dn;

    frame_function->f_lineno = 198;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_1 = var_dv;

    tmp_ass_subscribed_1 = var_vars;

    tmp_ass_subscript_1 = var_dn;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto try_except_handler_3;
    }
    tmp_ass_subvalue_2 = var_dn;

    tmp_subscribed_name_5 = var_v;

    tmp_subscript_name_5 = const_str_plain_dimension;
    tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_ass_subscribed_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        goto try_except_handler_3;
    }
    tmp_ass_subscript_2 = var_i;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscribed_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        goto try_except_handler_3;
    }
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
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

    tmp_subscribed_name_6 = par_rout;

    tmp_subscript_name_6 = const_str_plain_args;
    tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extend );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_extra_args;

    frame_function->f_lineno = 201;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_bool_arg_1 = var_extra_args;

    tmp_assign_source_16 = TO_BOOL( tmp_bool_arg_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    assert( var_need_interface == NULL );
    Py_INCREF( tmp_assign_source_16 );
    var_need_interface = tmp_assign_source_16;

    tmp_assign_source_17 = LIST_COPY( const_list_str_empty_list );
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_17;

    tmp_defaults_1 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_ret;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_3 );
    tmp_assign_source_18 = MAKE_FUNCTION_function_1_add_of_function_3_createsubrwrapper_of_numpy$f2py$func2subr( tmp_defaults_1 );
    assert( var_add == NULL );
    var_add = tmp_assign_source_18;

    tmp_subscribed_name_7 = par_rout;

    tmp_subscript_name_7 = const_str_plain_name;
    tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_19;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_getfortranname );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getfortranname );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "getfortranname" );
        exception_tb = NULL;

        exception_lineno = 209;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_rout;

    frame_function->f_lineno = 209;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    assert( var_fortranname == NULL );
    var_fortranname = tmp_assign_source_20;

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_ismoduleroutine );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ismoduleroutine );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ismoduleroutine" );
        exception_tb = NULL;

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_rout;

    frame_function->f_lineno = 210;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    assert( var_f90mode == NULL );
    var_f90mode = tmp_assign_source_21;

    tmp_subscribed_name_8 = par_rout;

    tmp_subscript_name_8 = const_str_plain_args;
    tmp_assign_source_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    assert( var_args == NULL );
    var_args = tmp_assign_source_22;

    tmp_source_name_4 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
    assert( tmp_called_name_8 != NULL );
    tmp_args_element_name_7 = var_args;

    frame_function->f_lineno = 214;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    assert( var_sargs == NULL );
    var_sargs = tmp_assign_source_23;

    tmp_cond_value_2 = var_f90mode;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
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
    tmp_called_name_9 = var_add;

    tmp_left_name_3 = const_str_digest_3b2c0fa2fc4dc6d1316a69cb4245f964;
    tmp_right_name_3 = PyTuple_New( 3 );
    tmp_subscribed_name_9 = par_rout;

    tmp_subscript_name_9 = const_str_plain_modulename;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 217;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_name;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_sargs;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_3, 2, tmp_tuple_element_4 );
    tmp_args_element_name_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 217;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_3 = par_signature;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        goto frame_exception_exit_1;
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
    tmp_called_name_10 = var_add;

    tmp_left_name_4 = const_str_digest_2d4adc30e980ccfc85f7df36de928e4b;
    tmp_right_name_4 = PyTuple_New( 2 );
    tmp_subscribed_name_10 = par_rout;

    tmp_subscript_name_10 = const_str_plain_modulename;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_4 );

        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_fortranname;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_5 );
    tmp_args_element_name_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 219;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_called_name_11 = var_add;

    tmp_left_name_5 = const_str_digest_80de7bc8e3a604d4b960ed791ca600e3;
    tmp_right_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_name;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_sargs;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_6 );
    tmp_args_element_name_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 221;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_4 = var_need_interface;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_called_name_12 = var_add;

    tmp_left_name_6 = const_str_digest_d1afd4948f685dba95ae3f6afcd85cca;
    tmp_right_name_6 = var_fortranname;

    tmp_args_element_name_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    branch_end_3:;
    tmp_cond_value_5 = var_need_interface;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
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
    tmp_subscribed_name_11 = par_rout;

    tmp_subscript_name_11 = const_str_plain_saved_interface;
    tmp_source_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_split );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 226;
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_str_newline_tuple, 0 ) );

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
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
            frame_function->f_lineno = 226;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    tmp_assign_source_26 = tmp_for_loop_3__iter_value;

    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_26;
        Py_INCREF( var_line );
        Py_XDECREF( old );
    }

    tmp_source_name_7 = var_line;

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_lstrip );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        goto try_except_handler_5;
    }
    frame_function->f_lineno = 227;
    tmp_source_name_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_15 );
    Py_DECREF( tmp_called_name_15 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        goto try_except_handler_5;
    }
    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_startswith );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        goto try_except_handler_5;
    }
    frame_function->f_lineno = 227;
    tmp_cond_value_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, &PyTuple_GET_ITEM( const_tuple_str_digest_54461c3711cda1dadf23f6fc0f078206_tuple, 0 ) );

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        goto try_except_handler_5;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 227;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_16 = var_add;

    tmp_args_element_name_12 = var_line;

    frame_function->f_lineno = 228;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
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

    branch_no_6:;
    tmp_assign_source_27 = PyList_New( 0 );
    assert( var_dumped_args == NULL );
    var_dumped_args = tmp_assign_source_27;

    tmp_iter_arg_5 = var_args;

    tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator == NULL );
    tmp_for_loop_4__for_iterator = tmp_assign_source_28;

    // Tried code:
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator;

    tmp_assign_source_29 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_29 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 231;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_for_loop_4__iter_value;
        tmp_for_loop_4__iter_value = tmp_assign_source_29;
        Py_XDECREF( old );
    }

    tmp_assign_source_30 = tmp_for_loop_4__iter_value;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_30;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isexternal );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isexternal );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isexternal" );
        exception_tb = NULL;

        exception_lineno = 232;
        goto try_except_handler_6;
    }

    tmp_subscribed_name_12 = var_vars;

    tmp_subscript_name_12 = var_a;

    tmp_args_element_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 232;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_cond_value_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto try_except_handler_6;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 232;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_name_18 = var_add;

    tmp_left_name_7 = const_str_digest_d1afd4948f685dba95ae3f6afcd85cca;
    tmp_right_name_7 = var_a;

    tmp_args_element_name_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 233;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = var_dumped_args;

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_append );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        goto try_except_handler_6;
    }
    tmp_args_element_name_15 = var_a;

    frame_function->f_lineno = 234;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto try_except_handler_6;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
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

    tmp_iter_arg_6 = var_args;

    tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_5__for_iterator == NULL );
    tmp_for_loop_5__for_iterator = tmp_assign_source_31;

    // Tried code:
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator;

    tmp_assign_source_32 = ITERATOR_NEXT( tmp_next_source_5 );
    if ( tmp_assign_source_32 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_5;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 235;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_for_loop_5__iter_value;
        tmp_for_loop_5__iter_value = tmp_assign_source_32;
        Py_XDECREF( old );
    }

    tmp_assign_source_33 = tmp_for_loop_5__iter_value;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_33;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_a;

    tmp_compare_right_2 = var_dumped_args;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    goto loop_start_5;
    branch_no_9:;
    tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_name_20 == NULL ))
    {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isscalar" );
        exception_tb = NULL;

        exception_lineno = 238;
        goto try_except_handler_7;
    }

    tmp_subscribed_name_13 = var_vars;

    tmp_subscript_name_13 = var_a;

    tmp_args_element_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        goto try_except_handler_7;
    }
    frame_function->f_lineno = 238;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_cond_value_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        goto try_except_handler_7;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 238;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_called_name_21 = var_add;

    tmp_called_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran );

    if (unlikely( tmp_called_name_22 == NULL ))
    {
        tmp_called_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_var2fixfortran );
    }

    if ( tmp_called_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "var2fixfortran" );
        exception_tb = NULL;

        exception_lineno = 239;
        goto try_except_handler_7;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_vars;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_a;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_7 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_f90mode;

    tmp_dict_key_1 = const_str_plain_f90mode;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 239;
    tmp_args_element_name_17 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto try_except_handler_7;
    }
    frame_function->f_lineno = 239;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = var_dumped_args;

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto try_except_handler_7;
    }
    tmp_args_element_name_18 = var_a;

    frame_function->f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    branch_no_10:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
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
    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    tmp_iter_arg_7 = var_args;

    tmp_assign_source_34 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_6__for_iterator == NULL );
    tmp_for_loop_6__for_iterator = tmp_assign_source_34;

    // Tried code:
    loop_start_6:;
    tmp_next_source_6 = tmp_for_loop_6__for_iterator;

    tmp_assign_source_35 = ITERATOR_NEXT( tmp_next_source_6 );
    if ( tmp_assign_source_35 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_6;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 241;
            goto try_except_handler_8;
        }
    }

    {
        PyObject *old = tmp_for_loop_6__iter_value;
        tmp_for_loop_6__iter_value = tmp_assign_source_35;
        Py_XDECREF( old );
    }

    tmp_assign_source_36 = tmp_for_loop_6__iter_value;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_36;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_compare_left_3 = var_a;

    tmp_compare_right_3 = var_dumped_args;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    goto loop_start_6;
    branch_no_11:;
    tmp_called_name_24 = var_add;

    tmp_called_name_25 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran );

    if (unlikely( tmp_called_name_25 == NULL ))
    {
        tmp_called_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_var2fixfortran );
    }

    if ( tmp_called_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "var2fixfortran" );
        exception_tb = NULL;

        exception_lineno = 244;
        goto try_except_handler_8;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_8 = var_vars;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_a;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_8 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_f90mode;

    tmp_dict_key_2 = const_str_plain_f90mode;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 244;
    tmp_args_element_name_19 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto try_except_handler_8;
    }
    frame_function->f_lineno = 244;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto try_except_handler_8;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    tmp_cond_value_9 = var_need_interface;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        goto frame_exception_exit_1;
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
    tmp_cond_value_10 = var_f90mode;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_no_13;
    }
    else
    {
        goto branch_yes_13;
    }
    branch_yes_13:;
    tmp_called_name_26 = var_add;

    frame_function->f_lineno = 251;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, &PyTuple_GET_ITEM( const_tuple_str_plain_interface_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_27 = var_add;

    tmp_subscribed_name_14 = par_rout;

    tmp_subscript_name_14 = const_str_plain_saved_interface;
    tmp_source_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_lstrip );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 252;
    tmp_args_element_name_20 = CALL_FUNCTION_NO_ARGS( tmp_called_name_28 );
    Py_DECREF( tmp_called_name_28 );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 252;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_29 = var_add;

    frame_function->f_lineno = 253;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, &PyTuple_GET_ITEM( const_tuple_str_digest_c1efb684c416633d1d418c1db1fa045c_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_13:;
    branch_no_12:;
    tmp_source_name_11 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_join );
    assert( tmp_called_name_30 != NULL );
    // Tried code:
    tmp_iter_arg_8 = var_args;

    tmp_assign_source_38 = MAKE_ITERATOR( tmp_iter_arg_8 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto try_except_handler_9;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_38;

    tmp_assign_source_39 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_39;

    loop_start_7:;
    tmp_next_source_7 = tmp_list_contraction_1__$0;

    tmp_assign_source_40 = ITERATOR_NEXT( tmp_next_source_7 );
    if ( tmp_assign_source_40 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_7;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 255;
            goto try_except_handler_9;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_40;
        Py_XDECREF( old );
    }

    tmp_assign_source_41 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_41;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_compare_left_4 = var_a;

    tmp_compare_right_4 = var_extra_args;

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_append_value_1 = var_a;

    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto try_except_handler_9;
    }
    branch_no_14:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto try_except_handler_9;
    }
    goto loop_start_7;
    loop_end_7:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_createsubrwrapper_of_numpy$f2py$func2subr );
    return NULL;
    // Return handler code:
    try_return_handler_9:;
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
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_createsubrwrapper_of_numpy$f2py$func2subr );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_21 = tmp_outline_return_value_1;
    frame_function->f_lineno = 255;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_sargs;
        assert( old != NULL );
        var_sargs = tmp_assign_source_37;
        Py_DECREF( old );
    }

    tmp_cond_value_11 = par_signature;

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_no_15;
    }
    else
    {
        goto branch_yes_15;
    }
    branch_yes_15:;
    tmp_called_name_31 = var_add;

    tmp_left_name_8 = const_str_digest_98f05798e55b223870de868fab9b03cc;
    tmp_right_name_8 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_fortranname;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_sargs;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_right_name_8, 1, tmp_tuple_element_9 );
    tmp_args_element_name_22 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 258;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
    }

    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_15:;
    tmp_cond_value_12 = var_f90mode;

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
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
    tmp_called_name_32 = var_add;

    tmp_left_name_9 = const_str_digest_9c4b0d30588e4dcb754f577679644f04;
    tmp_right_name_9 = PyTuple_New( 2 );
    tmp_subscribed_name_15 = par_rout;

    tmp_subscript_name_15 = const_str_plain_modulename;
    tmp_tuple_element_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_9 );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_9, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = var_name;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_right_name_9, 1, tmp_tuple_element_10 );
    tmp_args_element_name_23 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 260;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_16;
    branch_no_16:;
    tmp_called_name_33 = var_add;

    frame_function->f_lineno = 262;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, &PyTuple_GET_ITEM( const_tuple_str_plain_end_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_16:;
    tmp_subscribed_name_16 = var_ret;

    tmp_subscript_name_16 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
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
            if ( par_rout )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rout,
                    par_rout
                );

                assert( res == 0 );
            }

            if ( par_signature )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_signature,
                    par_signature
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

            if ( var_vars )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vars,
                    var_vars
                );

                assert( res == 0 );
            }

            if ( var_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    var_a
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

            if ( var_i )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_i,
                    var_i
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

            if ( var_dn )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dn,
                    var_dn
                );

                assert( res == 0 );
            }

            if ( var_dv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dv,
                    var_dv
                );

                assert( res == 0 );
            }

            if ( var_need_interface )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_need_interface,
                    var_need_interface
                );

                assert( res == 0 );
            }

            if ( var_ret )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ret,
                    var_ret
                );

                assert( res == 0 );
            }

            if ( var_add )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_add,
                    var_add
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

            if ( var_fortranname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fortranname,
                    var_fortranname
                );

                assert( res == 0 );
            }

            if ( var_f90mode )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f90mode,
                    var_f90mode
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

            if ( var_sargs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sargs,
                    var_sargs
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

            if ( var_dumped_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dumped_args,
                    var_dumped_args
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
    NUITKA_CANNOT_GET_HERE( function_3_createsubrwrapper_of_numpy$f2py$func2subr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rout );
    Py_DECREF( par_rout );
    par_rout = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)var_extra_args );
    Py_DECREF( var_extra_args );
    var_extra_args = NULL;

    CHECK_OBJECT( (PyObject *)var_vars );
    Py_DECREF( var_vars );
    var_vars = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_dn );
    var_dn = NULL;

    Py_XDECREF( var_dv );
    var_dv = NULL;

    CHECK_OBJECT( (PyObject *)var_need_interface );
    Py_DECREF( var_need_interface );
    var_need_interface = NULL;

    CHECK_OBJECT( (PyObject *)var_ret );
    Py_DECREF( var_ret );
    var_ret = NULL;

    CHECK_OBJECT( (PyObject *)var_add );
    Py_DECREF( var_add );
    var_add = NULL;

    CHECK_OBJECT( (PyObject *)var_name );
    Py_DECREF( var_name );
    var_name = NULL;

    CHECK_OBJECT( (PyObject *)var_fortranname );
    Py_DECREF( var_fortranname );
    var_fortranname = NULL;

    CHECK_OBJECT( (PyObject *)var_f90mode );
    Py_DECREF( var_f90mode );
    var_f90mode = NULL;

    CHECK_OBJECT( (PyObject *)var_args );
    Py_DECREF( var_args );
    var_args = NULL;

    CHECK_OBJECT( (PyObject *)var_sargs );
    Py_DECREF( var_sargs );
    var_sargs = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    CHECK_OBJECT( (PyObject *)var_dumped_args );
    Py_DECREF( var_dumped_args );
    var_dumped_args = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rout );
    Py_DECREF( par_rout );
    par_rout = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    Py_XDECREF( var_extra_args );
    var_extra_args = NULL;

    Py_XDECREF( var_vars );
    var_vars = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_dn );
    var_dn = NULL;

    Py_XDECREF( var_dv );
    var_dv = NULL;

    Py_XDECREF( var_need_interface );
    var_need_interface = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_add );
    var_add = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_fortranname );
    var_fortranname = NULL;

    Py_XDECREF( var_f90mode );
    var_f90mode = NULL;

    Py_XDECREF( var_args );
    var_args = NULL;

    Py_XDECREF( var_sargs );
    var_sargs = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_dumped_args );
    var_dumped_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_createsubrwrapper_of_numpy$f2py$func2subr );
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


static PyObject *impl_function_1_add_of_function_3_createsubrwrapper_of_numpy$f2py$func2subr( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_line = python_pars[ 0 ];
    PyObject *par_ret = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    int tmp_ass_subscript_res_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e92d481c171590a0b09aa10d0e5d8395, module_numpy$f2py$func2subr );
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
    tmp_left_name_1 = const_str_digest_ac77c4c82d64bea33cb67def314a870b;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_subscribed_name_1 = par_ret;

    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_line;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_ass_subvalue_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = par_ret;

    tmp_ass_subscript_1 = const_int_0;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
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
            if ( par_line )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_line,
                    par_line
                );

                assert( res == 0 );
            }

            if ( par_ret )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ret,
                    par_ret
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
    NUITKA_CANNOT_GET_HERE( function_1_add_of_function_3_createsubrwrapper_of_numpy$f2py$func2subr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_line );
    Py_DECREF( par_line );
    par_line = NULL;

    CHECK_OBJECT( (PyObject *)par_ret );
    Py_DECREF( par_ret );
    par_ret = NULL;

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

    CHECK_OBJECT( (PyObject *)par_line );
    Py_DECREF( par_line );
    par_line = NULL;

    CHECK_OBJECT( (PyObject *)par_ret );
    Py_DECREF( par_ret );
    par_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_add_of_function_3_createsubrwrapper_of_numpy$f2py$func2subr );
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


static PyObject *impl_function_4_assubr_of_numpy$f2py$func2subr( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rout = python_pars[ 0 ];
    PyObject *var_fortranname = NULL;
    PyObject *var_name = NULL;
    PyObject *var_fname = NULL;
    PyObject *var_rname = NULL;
    PyObject *var_fvar = NULL;
    PyObject *var_flag = NULL;
    PyObject *var_i = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
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
    int tmp_cmp_In_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    Py_ssize_t tmp_sliceass_index_upper_1;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_value_1;
    Py_ssize_t tmp_sliceassslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e1b4eac22aa85782ae97c2769c81da3d, module_numpy$f2py$func2subr );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isfunction_wrap );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfunction_wrap );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isfunction_wrap" );
        exception_tb = NULL;

        exception_lineno = 267;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_rout;

    frame_function->f_lineno = 267;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 267;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_getfortranname );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getfortranname );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "getfortranname" );
        exception_tb = NULL;

        exception_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_rout;

    frame_function->f_lineno = 268;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        goto frame_exception_exit_1;
    }
    assert( var_fortranname == NULL );
    var_fortranname = tmp_assign_source_1;

    tmp_subscribed_name_1 = par_rout;

    tmp_subscript_name_1 = const_str_plain_name;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_2;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_outmess );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outmess );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "outmess" );
        exception_tb = NULL;

        exception_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_ef416d73b96e2e2a86475a400ee6076a;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_name;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_fortranname;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 271;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_copy );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "copy" );
        exception_tb = NULL;

        exception_lineno = 272;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_copy );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_rout;

    frame_function->f_lineno = 272;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_rout;
        assert( old != NULL );
        par_rout = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_assign_source_4 = var_name;

    assert( var_fname == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_fname = tmp_assign_source_4;

    tmp_assign_source_5 = var_fname;

    assert( var_rname == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_rname = tmp_assign_source_5;

    tmp_compare_left_1 = const_str_plain_result;
    tmp_compare_right_1 = par_rout;

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
    tmp_subscribed_name_2 = par_rout;

    tmp_subscript_name_2 = const_str_plain_result;
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rname;
        assert( old != NULL );
        var_rname = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_subscribed_name_4 = par_rout;

    tmp_subscript_name_3 = const_str_plain_vars;
    tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_3 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_4 = var_rname;

    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_5 = par_rout;

    tmp_subscript_name_5 = const_str_plain_vars;
    tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 277;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = var_fname;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_subscribed_name_7 = par_rout;

    tmp_subscript_name_6 = const_str_plain_vars;
    tmp_subscribed_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_6 );
    if ( tmp_subscribed_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_7 = var_fname;

    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_7 );
    Py_DECREF( tmp_subscribed_name_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        goto frame_exception_exit_1;
    }
    assert( var_fvar == NULL );
    var_fvar = tmp_assign_source_7;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isintent_out );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_out );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isintent_out" );
        exception_tb = NULL;

        exception_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_fvar;

    frame_function->f_lineno = 279;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 279;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_compare_left_2 = const_str_plain_intent;
    tmp_compare_right_2 = var_fvar;

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_ass_subvalue_2 = PyList_New( 0 );
    tmp_ass_subscribed_2 = var_fvar;

    tmp_ass_subscript_2 = const_str_plain_intent;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_subscribed_name_8 = var_fvar;

    tmp_subscript_name_8 = const_str_plain_intent;
    tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 282;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_plain_out_tuple, 0 ) );

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_8 = const_int_pos_1;
    assert( var_flag == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_flag = tmp_assign_source_8;

    tmp_subscribed_name_9 = var_fvar;

    tmp_subscript_name_9 = const_str_plain_intent;
    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
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
            frame_function->f_lineno = 284;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_assign_source_11 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_11;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = var_i;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_startswith );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 285;
    tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_str_digest_3406559a4c63e5d622ab879a1b304e43_tuple, 0 ) );

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_2;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 285;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_12 = const_int_0;
    {
        PyObject *old = var_flag;
        assert( old != NULL );
        var_flag = tmp_assign_source_12;
        Py_INCREF( var_flag );
        Py_DECREF( old );
    }

    goto loop_end_1;
    branch_no_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
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

    tmp_cond_value_4 = var_flag;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_subscribed_name_10 = var_fvar;

    tmp_subscript_name_10 = const_str_plain_intent;
    tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = const_str_digest_8e71b3de210a6a67ddcba8e7b56fbd8c;
    tmp_right_name_2 = var_rname;

    tmp_args_element_name_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 289;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 289;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    branch_no_3:;
    tmp_left_name_3 = PyList_New( 1 );
    tmp_list_element_1 = var_fname;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_left_name_3, 0, tmp_list_element_1 );
    tmp_subscribed_name_11 = par_rout;

    tmp_subscript_name_11 = const_str_plain_args;
    tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 290;
        goto frame_exception_exit_1;
    }
    tmp_sliceass_value_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_sliceass_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_12 = par_rout;

    tmp_subscript_name_12 = const_str_plain_args;
    tmp_sliceass_target_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_sliceass_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_sliceass_value_1 );

        exception_lineno = 290;
        goto frame_exception_exit_1;
    }
    tmp_sliceassslicedel_index_lower_1 = 0;
    tmp_sliceass_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_result = SET_INDEX_SLICE( tmp_sliceass_target_1, tmp_sliceassslicedel_index_lower_1, tmp_sliceass_index_upper_1, tmp_sliceass_value_1 );
    Py_DECREF( tmp_sliceass_value_1 );
    Py_DECREF( tmp_sliceass_target_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        goto frame_exception_exit_1;
    }
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_rout;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_createfuncwrapper );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_createfuncwrapper );
    }

    if ( tmp_called_name_9 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "createfuncwrapper" );
        exception_tb = NULL;

        exception_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_rout;

    frame_function->f_lineno = 291;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 291;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_issubroutine_wrap );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issubroutine_wrap );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "issubroutine_wrap" );
        exception_tb = NULL;

        exception_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = par_rout;

    frame_function->f_lineno = 292;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 292;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_getfortranname );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getfortranname );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "getfortranname" );
        exception_tb = NULL;

        exception_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = par_rout;

    frame_function->f_lineno = 293;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        goto frame_exception_exit_1;
    }
    assert( var_fortranname == NULL );
    var_fortranname = tmp_assign_source_13;

    tmp_subscribed_name_13 = par_rout;

    tmp_subscript_name_13 = const_str_plain_name;
    tmp_assign_source_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_14;

    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_outmess );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outmess );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "outmess" );
        exception_tb = NULL;

        exception_lineno = 295;
        goto frame_exception_exit_1;
    }

    tmp_left_name_4 = const_str_digest_35cca0630ad2be135138f05593187969;
    tmp_right_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_name;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_fortranname;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_3 );
    tmp_args_element_name_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 296;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_copy );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "copy" );
        exception_tb = NULL;

        exception_lineno = 297;
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_copy );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = par_rout;

    frame_function->f_lineno = 297;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_rout;
        assert( old != NULL );
        par_rout = tmp_assign_source_15;
        Py_DECREF( old );
    }

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_4 = par_rout;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_createsubrwrapper );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_createsubrwrapper );
    }

    if ( tmp_called_name_14 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "createsubrwrapper" );
        exception_tb = NULL;

        exception_lineno = 298;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = par_rout;

    frame_function->f_lineno = 298;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 298;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    goto frame_return_exit_1;
    branch_no_7:;

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
            if ( par_rout )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rout,
                    par_rout
                );

                assert( res == 0 );
            }

            if ( var_fortranname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fortranname,
                    var_fortranname
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

            if ( var_fname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fname,
                    var_fname
                );

                assert( res == 0 );
            }

            if ( var_rname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rname,
                    var_rname
                );

                assert( res == 0 );
            }

            if ( var_fvar )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fvar,
                    var_fvar
                );

                assert( res == 0 );
            }

            if ( var_flag )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_flag,
                    var_flag
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

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_5 = par_rout;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = const_str_empty;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_4_assubr_of_numpy$f2py$func2subr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rout );
    Py_DECREF( par_rout );
    par_rout = NULL;

    Py_XDECREF( var_fortranname );
    var_fortranname = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_fname );
    var_fname = NULL;

    Py_XDECREF( var_rname );
    var_rname = NULL;

    Py_XDECREF( var_fvar );
    var_fvar = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rout );
    Py_DECREF( par_rout );
    par_rout = NULL;

    Py_XDECREF( var_fortranname );
    var_fortranname = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_fname );
    var_fname = NULL;

    Py_XDECREF( var_rname );
    var_rname = NULL;

    Py_XDECREF( var_fvar );
    var_fvar = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_assubr_of_numpy$f2py$func2subr );
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



static PyObject *MAKE_FUNCTION_function_1_add_of_function_2_createfuncwrapper_of_numpy$f2py$func2subr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_add_of_function_2_createfuncwrapper_of_numpy$f2py$func2subr,
        const_str_plain_add,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f140a784124bb3437fff7f737da28a5a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$func2subr,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_add_of_function_3_createsubrwrapper_of_numpy$f2py$func2subr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_add_of_function_3_createsubrwrapper_of_numpy$f2py$func2subr,
        const_str_plain_add,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e92d481c171590a0b09aa10d0e5d8395,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$func2subr,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_var2fixfortran_of_numpy$f2py$func2subr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_var2fixfortran_of_numpy$f2py$func2subr,
        const_str_plain_var2fixfortran,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_739c31d4d33a9c08861dfb743a7bafe6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$func2subr,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_createfuncwrapper_of_numpy$f2py$func2subr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_createfuncwrapper_of_numpy$f2py$func2subr,
        const_str_plain_createfuncwrapper,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0f82ed2edfce22fa701f606788beed43,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$func2subr,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_createsubrwrapper_of_numpy$f2py$func2subr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_createsubrwrapper_of_numpy$f2py$func2subr,
        const_str_plain_createsubrwrapper,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_717db0a95a7cbb6f98d333032fdf97cc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$func2subr,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_assubr_of_numpy$f2py$func2subr(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_assubr_of_numpy$f2py$func2subr,
        const_str_plain_assubr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e1b4eac22aa85782ae97c2769c81da3d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$func2subr,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$f2py$func2subr =
{
    PyModuleDef_HEAD_INIT,
    "numpy.f2py.func2subr",   /* m_name */
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

MOD_INIT_DECL( numpy$f2py$func2subr )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$f2py$func2subr );
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

    // puts( "in initnumpy$f2py$func2subr" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$f2py$func2subr = Py_InitModule4(
        "numpy.f2py.func2subr",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$f2py$func2subr = PyModule_Create( &mdef_numpy$f2py$func2subr );
#endif

    moduledict_numpy$f2py$func2subr = (PyDictObject *)((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;

    CHECK_OBJECT( module_numpy$f2py$func2subr );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_0a81d51c86ee5bc26f874a65930bdd4f, module_numpy$f2py$func2subr );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$f2py$func2subr );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
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
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_4629f506100b2a4bba0011ced56e360e;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_af89aefd338f9d2af96dee487676d0ab;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_bd7cf954fd16554693c4a4c0990e5f8e;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_3e4edaff7e969b30ebd2f4c130af1bc5;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_f2py_version, tmp_assign_source_7 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_45e22a4e7d2989075cc7e55c93c5a6a6, module_numpy$f2py$func2subr );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 22;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_copy, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_copy, tmp_assign_source_8 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_2, tmp_import_globals_2, const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_getfortranname );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_getfortranname, tmp_assign_source_9 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_3, tmp_import_globals_3, const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_isexternal );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isexternal, tmp_assign_source_10 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_4, tmp_import_globals_4, const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_isfunction );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isfunction, tmp_assign_source_11 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_5, tmp_import_globals_5, const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_isfunction_wrap );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isfunction_wrap, tmp_assign_source_12 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_6, tmp_import_globals_6, const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_isintent_in );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isintent_in, tmp_assign_source_13 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_7, tmp_import_globals_7, const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_isintent_out );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isintent_out, tmp_assign_source_14 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_8, tmp_import_globals_8, const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_islogicalfunction );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_islogicalfunction, tmp_assign_source_15 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_9, tmp_import_globals_9, const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ismoduleroutine );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_ismoduleroutine, tmp_assign_source_16 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_10, tmp_import_globals_10, const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_isscalar );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isscalar, tmp_assign_source_17 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_11, tmp_import_globals_11, const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_issubroutine );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_issubroutine, tmp_assign_source_18 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_12, tmp_import_globals_12, const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_issubroutine_wrap );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_issubroutine_wrap, tmp_assign_source_19 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_13, tmp_import_globals_13, const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_outmess );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_outmess, tmp_assign_source_20 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_14, tmp_import_globals_14, const_tuple_4a80300d86ad1359350e91263565ad0b_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_show );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_show, tmp_assign_source_21 );

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
    tmp_defaults_1 = const_tuple_none_none_tuple;
    tmp_assign_source_22 = MAKE_FUNCTION_function_1_var2fixfortran_of_numpy$f2py$func2subr( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran, tmp_assign_source_22 );
    tmp_defaults_2 = const_tuple_int_0_tuple;
    tmp_assign_source_23 = MAKE_FUNCTION_function_2_createfuncwrapper_of_numpy$f2py$func2subr( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_createfuncwrapper, tmp_assign_source_23 );
    tmp_defaults_3 = const_tuple_int_0_tuple;
    tmp_assign_source_24 = MAKE_FUNCTION_function_3_createsubrwrapper_of_numpy$f2py$func2subr( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_createsubrwrapper, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_function_4_assubr_of_numpy$f2py$func2subr(  );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_assubr, tmp_assign_source_25 );

    return MOD_RETURN_VALUE( module_numpy$f2py$func2subr );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

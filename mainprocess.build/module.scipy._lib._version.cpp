// Generated code for Python source for module 'scipy._lib._version'
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

// The _module_scipy$_lib$_version is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$_lib$_version;
PyDictObject *moduledict_scipy$_lib$_version;

// The module constants used
extern PyObject *const_str_plain_beta;
extern PyObject *const_str_plain_ver_main;
static PyObject *const_str_digest_c586132ebdc300ee609c0a426ea09bc3;
extern PyObject *const_str_plain___lt__;
extern PyObject *const_str_digest_a3a53f098fe143781018cd2c2c23c970;
extern PyObject *const_str_plain_bugfix;
extern PyObject *const_str_plain__compare;
extern PyObject *const_str_plain_split;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_719a7304d45ac4b7e4a82eb7685571ed;
extern PyObject *const_str_digest_0f71f7adc4f6ad974f6850f0ab846a87;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_dot;
extern PyObject *const_str_digest_9caf236ee85520b8daffa0634fa87547;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_string_types_tuple;
extern PyObject *const_str_digest_f0892025aa1e6db47b3d42917d0a6856;
extern PyObject *const_dict_empty;
extern PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_vercmp_tuple;
extern PyObject *const_str_digest_e2ee6fbad346f1bf0a9a71cfed354922;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_str_plain_pre_rel;
extern PyObject *const_str_plain___repr;
extern PyObject *const_str_plain_minor;
extern PyObject *const_list_str_plain_NumpyVersion_list;
extern PyObject *const_str_digest_eb11bdbf241104edf303c37717d7afae;
extern PyObject *const_str_digest_c88389693d9d476899c1c6e170568469;
extern PyObject *const_str_plain_NumpyVersion;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_alpha;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_digest_8ddc7c3283f063b0ad6c361a5d9f65f4;
extern PyObject *const_str_digest_07b0e887018359e84e3d2a5047fda63b;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_vercmp;
extern PyObject *const_str_plain__compare_pre_release;
extern PyObject *const_tuple_81af13801c621dbc3105d7d5db35d44c_tuple;
extern PyObject *const_str_plain___ne__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_739668f090bfd9222f6cf24461fa91b9;
extern PyObject *const_str_plain_final;
extern PyObject *const_str_plain___eq__;
extern PyObject *const_str_plain___le__;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_is_devversion;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_string_types;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_88d8297d0c49259d10c45d69afa6dea0;
extern PyObject *const_str_digest_fd87b703850b8cca1886171fc09b324a;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain__compare_version;
extern PyObject *const_str_digest_f9e24859bd587d359e61c1d1ed32c783;
extern PyObject *const_str_plain_search;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___gt__;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain__version;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_major;
extern PyObject *const_str_plain_other;
extern PyObject *const_str_plain___ge__;
extern PyObject *const_str_plain_vstring;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_group;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_pre_release;
extern PyObject *const_str_plain_rc;
extern PyObject *const_str_plain__NumpyVersion__repr;
extern PyObject *const_str_plain_match;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_c586132ebdc300ee609c0a426ea09bc3 = UNSTREAM_STRING( &constant_bin[ 1816560 ], 1187, 0 );
    const_tuple_str_plain_string_types_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_string_types_tuple, 0, const_str_plain_string_types ); Py_INCREF( const_str_plain_string_types );
    const_str_digest_88d8297d0c49259d10c45d69afa6dea0 = UNSTREAM_STRING( &constant_bin[ 1817747 ], 53, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$_lib$_version( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f13db0321d6a4459358b431f132cbe3e;
static PyCodeObject *codeobj_18280914d1a1710c1227e852c8d3a54d;
static PyCodeObject *codeobj_d5030f928aba05353b42ba4176e94e10;
static PyCodeObject *codeobj_238313b0229c61a87aaaca0a983185b2;
static PyCodeObject *codeobj_fefc1558bf1047e08d6119354d7d9bae;
static PyCodeObject *codeobj_9e6e61ff50733bdb9650b2594048fe21;
static PyCodeObject *codeobj_b789dca22b178f07d3c1f304530f2872;
static PyCodeObject *codeobj_814cddaa10452c0c6b816e0f1cb72268;
static PyCodeObject *codeobj_783255b6e71ee984e8a4e8e1042b1a04;
static PyCodeObject *codeobj_c861a369cf3613fb6f2da9e21ab96703;
static PyCodeObject *codeobj_9d6593ddd58214b978ff55fc2d6dae48;
static PyCodeObject *codeobj_8f3c8541df0531d68238cd46518bfa86;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_88d8297d0c49259d10c45d69afa6dea0 );
    codeobj_f13db0321d6a4459358b431f132cbe3e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 142, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_18280914d1a1710c1227e852c8d3a54d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ge__, 151, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d5030f928aba05353b42ba4176e94e10 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___gt__, 148, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_238313b0229c61a87aaaca0a983185b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 55, const_tuple_81af13801c621dbc3105d7d5db35d44c_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fefc1558bf1047e08d6119354d7d9bae = MAKE_CODEOBJ( module_filename_obj, const_str_plain___le__, 139, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9e6e61ff50733bdb9650b2594048fe21 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___lt__, 136, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b789dca22b178f07d3c1f304530f2872 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 145, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_814cddaa10452c0c6b816e0f1cb72268 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr, 154, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_783255b6e71ee984e8a4e8e1042b1a04 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compare, 114, const_tuple_str_plain_self_str_plain_other_str_plain_vercmp_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c861a369cf3613fb6f2da9e21ab96703 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compare_pre_release, 99, const_tuple_str_plain_self_str_plain_other_str_plain_vercmp_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9d6593ddd58214b978ff55fc2d6dae48 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compare_version, 78, const_tuple_str_plain_self_str_plain_other_str_plain_vercmp_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8f3c8541df0531d68238cd46518bfa86 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__version, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_NumpyVersion_of_scipy$_lib$_version( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_10___ge___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );


static PyObject *MAKE_FUNCTION_function_11___repr_of_class_1_NumpyVersion_of_scipy$_lib$_version(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );


static PyObject *MAKE_FUNCTION_function_2__compare_version_of_class_1_NumpyVersion_of_scipy$_lib$_version(  );


static PyObject *MAKE_FUNCTION_function_3__compare_pre_release_of_class_1_NumpyVersion_of_scipy$_lib$_version(  );


static PyObject *MAKE_FUNCTION_function_4__compare_of_class_1_NumpyVersion_of_scipy$_lib$_version(  );


static PyObject *MAKE_FUNCTION_function_5___lt___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );


static PyObject *MAKE_FUNCTION_function_6___le___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );


static PyObject *MAKE_FUNCTION_function_7___eq___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );


static PyObject *MAKE_FUNCTION_function_8___ne___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );


static PyObject *MAKE_FUNCTION_function_9___gt___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_NumpyVersion_of_scipy$_lib$_version( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var__compare_version = NULL;
    PyObject *var__compare_pre_release = NULL;
    PyObject *var__compare = NULL;
    PyObject *var___lt__ = NULL;
    PyObject *var___le__ = NULL;
    PyObject *var___eq__ = NULL;
    PyObject *var___ne__ = NULL;
    PyObject *var___gt__ = NULL;
    PyObject *var___ge__ = NULL;
    PyObject *var__NumpyVersion__repr = NULL;
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
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_f0892025aa1e6db47b3d42917d0a6856;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_c586132ebdc300ee609c0a426ea09bc3;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2__compare_version_of_class_1_NumpyVersion_of_scipy$_lib$_version(  );
    assert( var__compare_version == NULL );
    var__compare_version = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_3__compare_pre_release_of_class_1_NumpyVersion_of_scipy$_lib$_version(  );
    assert( var__compare_pre_release == NULL );
    var__compare_pre_release = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_4__compare_of_class_1_NumpyVersion_of_scipy$_lib$_version(  );
    assert( var__compare == NULL );
    var__compare = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_5___lt___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );
    assert( var___lt__ == NULL );
    var___lt__ = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_6___le___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );
    assert( var___le__ == NULL );
    var___le__ = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_7___eq___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );
    assert( var___eq__ == NULL );
    var___eq__ = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_function_8___ne___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );
    assert( var___ne__ == NULL );
    var___ne__ = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_function_9___gt___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );
    assert( var___gt__ == NULL );
    var___gt__ = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_function_10___ge___of_class_1_NumpyVersion_of_scipy$_lib$_version(  );
    assert( var___ge__ == NULL );
    var___ge__ = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_function_11___repr_of_class_1_NumpyVersion_of_scipy$_lib$_version(  );
    assert( var__NumpyVersion__repr == NULL );
    var__NumpyVersion__repr = tmp_assign_source_13;

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

    if ( var__compare_version )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__compare_version,
            var__compare_version
        );

        assert( res == 0 );
    }

    if ( var__compare_pre_release )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__compare_pre_release,
            var__compare_pre_release
        );

        assert( res == 0 );
    }

    if ( var__compare )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__compare,
            var__compare
        );

        assert( res == 0 );
    }

    if ( var___lt__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___lt__,
            var___lt__
        );

        assert( res == 0 );
    }

    if ( var___le__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___le__,
            var___le__
        );

        assert( res == 0 );
    }

    if ( var___eq__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___eq__,
            var___eq__
        );

        assert( res == 0 );
    }

    if ( var___ne__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___ne__,
            var___ne__
        );

        assert( res == 0 );
    }

    if ( var___gt__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___gt__,
            var___gt__
        );

        assert( res == 0 );
    }

    if ( var___ge__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___ge__,
            var___ge__
        );

        assert( res == 0 );
    }

    if ( var__NumpyVersion__repr )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__NumpyVersion__repr,
            var__NumpyVersion__repr
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_NumpyVersion_of_scipy$_lib$_version );
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

    CHECK_OBJECT( (PyObject *)var__compare_version );
    Py_DECREF( var__compare_version );
    var__compare_version = NULL;

    CHECK_OBJECT( (PyObject *)var__compare_pre_release );
    Py_DECREF( var__compare_pre_release );
    var__compare_pre_release = NULL;

    CHECK_OBJECT( (PyObject *)var__compare );
    Py_DECREF( var__compare );
    var__compare = NULL;

    CHECK_OBJECT( (PyObject *)var___lt__ );
    Py_DECREF( var___lt__ );
    var___lt__ = NULL;

    CHECK_OBJECT( (PyObject *)var___le__ );
    Py_DECREF( var___le__ );
    var___le__ = NULL;

    CHECK_OBJECT( (PyObject *)var___eq__ );
    Py_DECREF( var___eq__ );
    var___eq__ = NULL;

    CHECK_OBJECT( (PyObject *)var___ne__ );
    Py_DECREF( var___ne__ );
    var___ne__ = NULL;

    CHECK_OBJECT( (PyObject *)var___gt__ );
    Py_DECREF( var___gt__ );
    var___gt__ = NULL;

    CHECK_OBJECT( (PyObject *)var___ge__ );
    Py_DECREF( var___ge__ );
    var___ge__ = NULL;

    CHECK_OBJECT( (PyObject *)var__NumpyVersion__repr );
    Py_DECREF( var__NumpyVersion__repr );
    var__NumpyVersion__repr = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var__compare_version );
    Py_DECREF( var__compare_version );
    var__compare_version = NULL;

    CHECK_OBJECT( (PyObject *)var__compare_pre_release );
    Py_DECREF( var__compare_pre_release );
    var__compare_pre_release = NULL;

    CHECK_OBJECT( (PyObject *)var__compare );
    Py_DECREF( var__compare );
    var__compare = NULL;

    CHECK_OBJECT( (PyObject *)var___lt__ );
    Py_DECREF( var___lt__ );
    var___lt__ = NULL;

    CHECK_OBJECT( (PyObject *)var___le__ );
    Py_DECREF( var___le__ );
    var___le__ = NULL;

    CHECK_OBJECT( (PyObject *)var___eq__ );
    Py_DECREF( var___eq__ );
    var___eq__ = NULL;

    CHECK_OBJECT( (PyObject *)var___ne__ );
    Py_DECREF( var___ne__ );
    var___ne__ = NULL;

    CHECK_OBJECT( (PyObject *)var___gt__ );
    Py_DECREF( var___gt__ );
    var___gt__ = NULL;

    CHECK_OBJECT( (PyObject *)var___ge__ );
    Py_DECREF( var___ge__ );
    var___ge__ = NULL;

    CHECK_OBJECT( (PyObject *)var__NumpyVersion__repr );
    Py_DECREF( var__NumpyVersion__repr );
    var__NumpyVersion__repr = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_1_NumpyVersion_of_scipy$_lib$_version( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_vstring = python_pars[ 1 ];
    PyObject *var_ver_main = NULL;
    PyObject *var_x = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_beta = NULL;
    PyObject *var_rc = NULL;
    PyObject *var_m = NULL;
    PyObject *var_pre_rel = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_list_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
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
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
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
    PyObject *tmp_bool_arg_1;
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
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_lower_3;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
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
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_238313b0229c61a87aaaca0a983185b2, module_scipy$_lib$_version );
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
    tmp_assattr_name_1 = par_vstring;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_vstring, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_match );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_07b0e887018359e84e3d2a5047fda63b;
    tmp_args_element_name_2 = par_vstring;

    frame_function->f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    assert( var_ver_main == NULL );
    var_ver_main = tmp_assign_source_1;

    tmp_cond_value_1 = var_ver_main;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
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
    tmp_make_exception_arg_1 = const_str_digest_eb11bdbf241104edf303c37717d7afae;
    frame_function->f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 59;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = var_ver_main;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_group );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 61;
    tmp_assattr_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_version, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    // Tried code:
    // Tried code:
    tmp_source_name_4 = par_self;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_version );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_3;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_split );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_3;
    }
    PyThreadState_GET()->frame->f_lineno = 63;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_3;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_3;
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
            PyThreadState_GET()->frame->f_lineno = 62;
            goto try_except_handler_3;
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

    tmp_int_arg_1 = var_x;

    tmp_append_value_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_NumpyVersion_of_scipy$_lib$_version );
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;
    outline_result_1:;
    tmp_iter_arg_1 = tmp_outline_return_value_1;
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;

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


        exception_lineno = 62;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;

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


        exception_lineno = 62;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_9 == NULL )
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


        exception_lineno = 62;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_9;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_2;
    }
    tmp_assattr_name_3 = tmp_tuple_unpack_1__element_1;

    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_major, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_2;
    }
    tmp_assattr_name_4 = tmp_tuple_unpack_1__element_2;

    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_minor, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_2;
    }
    tmp_assattr_name_5 = tmp_tuple_unpack_1__element_3;

    tmp_assattr_target_5 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_bugfix, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto try_except_handler_2;
    }
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

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
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

    tmp_len_arg_1 = par_vstring;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = var_ver_main;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_end );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 64;
    tmp_compare_right_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_6 = const_str_plain_final;
    tmp_assattr_target_6 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_pre_release, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_match );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_f9e24859bd587d359e61c1d1ed32c783;
    tmp_slice_source_1 = par_vstring;

    tmp_source_name_7 = var_ver_main;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_end );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 67;
    tmp_slice_lower_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_slice_lower_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, Py_None );
    Py_DECREF( tmp_slice_lower_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    assert( var_alpha == NULL );
    var_alpha = tmp_assign_source_10;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_match );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_digest_a3a53f098fe143781018cd2c2c23c970;
    tmp_slice_source_2 = par_vstring;

    tmp_source_name_9 = var_ver_main;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_end );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 68;
    tmp_slice_lower_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    Py_DECREF( tmp_called_name_8 );
    if ( tmp_slice_lower_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_2, Py_None );
    Py_DECREF( tmp_slice_lower_2 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    assert( var_beta == NULL );
    var_beta = tmp_assign_source_11;

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_match );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_digest_e2ee6fbad346f1bf0a9a71cfed354922;
    tmp_slice_source_3 = par_vstring;

    tmp_source_name_11 = var_ver_main;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_end );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 69;
    tmp_slice_lower_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_10 );
    Py_DECREF( tmp_called_name_10 );
    if ( tmp_slice_lower_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = LOOKUP_SLICE( tmp_slice_source_3, tmp_slice_lower_3, Py_None );
    Py_DECREF( tmp_slice_lower_3 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    assert( var_rc == NULL );
    var_rc = tmp_assign_source_12;

    tmp_iter_arg_3 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_alpha;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_beta;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_3, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_rc;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_3, 2, tmp_tuple_element_1 );
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    assert( tmp_assign_source_14 != NULL );
    assert( tmp_list_contraction_2__$0 == NULL );
    tmp_list_contraction_2__$0 = tmp_assign_source_14;

    tmp_assign_source_15 = PyList_New( 0 );
    assert( tmp_list_contraction_2__contraction_result == NULL );
    tmp_list_contraction_2__contraction_result = tmp_assign_source_15;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_2__$0;

    tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 70;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_list_contraction_2__iter_value_0;
        tmp_list_contraction_2__iter_value_0 = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_assign_source_17 = tmp_list_contraction_2__iter_value_0;

    {
        PyObject *old = var_m;
        var_m = tmp_assign_source_17;
        Py_INCREF( var_m );
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_m;

    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_append_list_2 = tmp_list_contraction_2__contraction_result;

    tmp_append_value_2 = var_m;

    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_4;
    }
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_list_contraction_2__contraction_result;

    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
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
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__$0 );
    Py_DECREF( tmp_list_contraction_2__$0 );
    tmp_list_contraction_2__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__contraction_result );
    Py_DECREF( tmp_list_contraction_2__contraction_result );
    tmp_list_contraction_2__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
    tmp_list_contraction_2__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;
    outline_result_2:;
    tmp_assign_source_13 = tmp_outline_return_value_2;
    assert( var_pre_rel == NULL );
    var_pre_rel = tmp_assign_source_13;

    tmp_cond_value_2 = var_pre_rel;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto frame_exception_exit_1;
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
    tmp_subscribed_name_1 = var_pre_rel;

    tmp_subscript_name_1 = const_int_0;
    tmp_source_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_group );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 72;
    tmp_assattr_name_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_11 );
    Py_DECREF( tmp_called_name_11 );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_7 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_pre_release, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    goto branch_end_4;
    branch_no_4:;
    tmp_assattr_name_8 = const_str_empty;
    tmp_assattr_target_8 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_pre_release, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    branch_end_4:;
    branch_end_2:;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_search );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = const_str_digest_739668f090bfd9222f6cf24461fa91b9;
    tmp_args_element_name_10 = par_vstring;

    frame_function->f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_bool_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_bool_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_9 = TO_BOOL( tmp_bool_arg_1 );
    Py_DECREF( tmp_bool_arg_1 );
    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_9 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_is_devversion, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
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

            if ( par_vstring )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vstring,
                    par_vstring
                );

                assert( res == 0 );
            }

            if ( var_ver_main )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ver_main,
                    var_ver_main
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

            if ( var_alpha )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_alpha,
                    var_alpha
                );

                assert( res == 0 );
            }

            if ( var_beta )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_beta,
                    var_beta
                );

                assert( res == 0 );
            }

            if ( var_rc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rc,
                    var_rc
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

            if ( var_pre_rel )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pre_rel,
                    var_pre_rel
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_vstring );
    Py_DECREF( par_vstring );
    par_vstring = NULL;

    CHECK_OBJECT( (PyObject *)var_ver_main );
    Py_DECREF( var_ver_main );
    var_ver_main = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_beta );
    var_beta = NULL;

    Py_XDECREF( var_rc );
    var_rc = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_pre_rel );
    var_pre_rel = NULL;

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

    CHECK_OBJECT( (PyObject *)par_vstring );
    Py_DECREF( par_vstring );
    par_vstring = NULL;

    Py_XDECREF( var_ver_main );
    var_ver_main = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_beta );
    var_beta = NULL;

    Py_XDECREF( var_rc );
    var_rc = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_pre_rel );
    var_pre_rel = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_NumpyVersion_of_scipy$_lib$_version );
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


static PyObject *impl_function_2__compare_version_of_class_1_NumpyVersion_of_scipy$_lib$_version( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_vercmp = NULL;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_Gt_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_frame_locals;
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
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9d6593ddd58214b978ff55fc2d6dae48, module_scipy$_lib$_version );
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

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_major );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_major );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_3 = par_self;

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_minor );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_other;

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_minor );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_5 = par_self;

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bugfix );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_other;

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_bugfix );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_1 = const_int_0;
    assert( var_vercmp == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_vercmp = tmp_assign_source_1;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_7 = par_self;

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_bugfix );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_other;

    tmp_compare_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_bugfix );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_2 = const_int_pos_1;
    assert( var_vercmp == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_vercmp = tmp_assign_source_2;

    goto branch_end_4;
    branch_no_4:;
    tmp_assign_source_3 = const_int_neg_1;
    assert( var_vercmp == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_vercmp = tmp_assign_source_3;

    branch_end_4:;
    branch_end_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_9 = par_self;

    tmp_compare_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_minor );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_other;

    tmp_compare_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_minor );
    if ( tmp_compare_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );
        Py_DECREF( tmp_compare_right_5 );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    Py_DECREF( tmp_compare_right_5 );
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_4 = const_int_pos_1;
    assert( var_vercmp == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_vercmp = tmp_assign_source_4;

    goto branch_end_5;
    branch_no_5:;
    tmp_assign_source_5 = const_int_neg_1;
    assert( var_vercmp == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_vercmp = tmp_assign_source_5;

    branch_end_5:;
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_11 = par_self;

    tmp_compare_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_major );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = par_other;

    tmp_compare_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_major );
    if ( tmp_compare_right_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_3 = RICH_COMPARE_BOOL_GT( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Gt_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_6 );
        Py_DECREF( tmp_compare_right_6 );

        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_6 );
    Py_DECREF( tmp_compare_right_6 );
    if ( tmp_cmp_Gt_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_6 = const_int_pos_1;
    assert( var_vercmp == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_vercmp = tmp_assign_source_6;

    goto branch_end_6;
    branch_no_6:;
    tmp_assign_source_7 = const_int_neg_1;
    assert( var_vercmp == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_vercmp = tmp_assign_source_7;

    branch_end_6:;
    branch_end_1:;
    tmp_return_value = var_vercmp;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "vercmp" );
        exception_tb = NULL;

        exception_lineno = 97;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
                );

                assert( res == 0 );
            }

            if ( var_vercmp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vercmp,
                    var_vercmp
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
    NUITKA_CANNOT_GET_HERE( function_2__compare_version_of_class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_vercmp );
    var_vercmp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_vercmp );
    var_vercmp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2__compare_version_of_class_1_NumpyVersion_of_scipy$_lib$_version );
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


static PyObject *impl_function_3__compare_pre_release_of_class_1_NumpyVersion_of_scipy$_lib$_version( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_vercmp = NULL;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c861a369cf3613fb6f2da9e21ab96703, module_scipy$_lib$_version );
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

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pre_release );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pre_release );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = const_int_0;
    assert( var_vercmp == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_vercmp = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pre_release );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_plain_final;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = const_int_pos_1;
    assert( var_vercmp == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_vercmp = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_4 = par_other;

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pre_release );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_str_plain_final;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_3 = const_int_neg_1;
    assert( var_vercmp == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_vercmp = tmp_assign_source_3;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_5 = par_self;

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_pre_release );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_other;

    tmp_compare_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_pre_release );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_4 = const_int_pos_1;
    assert( var_vercmp == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_vercmp = tmp_assign_source_4;

    goto branch_end_4;
    branch_no_4:;
    tmp_assign_source_5 = const_int_neg_1;
    assert( var_vercmp == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_vercmp = tmp_assign_source_5;

    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    tmp_return_value = var_vercmp;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "vercmp" );
        exception_tb = NULL;

        exception_lineno = 112;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
                );

                assert( res == 0 );
            }

            if ( var_vercmp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vercmp,
                    var_vercmp
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
    NUITKA_CANNOT_GET_HERE( function_3__compare_pre_release_of_class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_vercmp );
    var_vercmp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_vercmp );
    var_vercmp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3__compare_pre_release_of_class_1_NumpyVersion_of_scipy$_lib$_version );
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


static PyObject *impl_function_4__compare_of_class_1_NumpyVersion_of_scipy$_lib$_version( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_vercmp = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
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
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_783255b6e71ee984e8a4e8e1042b1a04, module_scipy$_lib$_version );
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
    tmp_isinstance_inst_1 = par_other;

    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain_string_types );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string_types );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "string_types" );
        exception_tb = NULL;

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain_NumpyVersion );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NumpyVersion );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NumpyVersion" );
        exception_tb = NULL;

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
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
    tmp_make_exception_arg_1 = const_str_digest_8ddc7c3283f063b0ad6c361a5d9f65f4;
    frame_function->f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 116;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_other;

    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain_string_types );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string_types );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "string_types" );
        exception_tb = NULL;

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain_NumpyVersion );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NumpyVersion );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NumpyVersion" );
        exception_tb = NULL;

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_source_name_1 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__compare_version );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_other;

    frame_function->f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    assert( var_vercmp == NULL );
    var_vercmp = tmp_assign_source_2;

    tmp_compare_left_1 = var_vercmp;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
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
    tmp_source_name_2 = par_self;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__compare_pre_release );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_other;

    frame_function->f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vercmp;
        assert( old != NULL );
        var_vercmp = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_compare_left_2 = var_vercmp;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_3 = par_self;

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_is_devversion );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_other;

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_is_devversion );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_is_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_4 = const_int_0;
    {
        PyObject *old = var_vercmp;
        assert( old != NULL );
        var_vercmp = tmp_assign_source_4;
        Py_INCREF( var_vercmp );
        Py_DECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_5 = par_self;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_is_devversion );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_5 = const_int_neg_1;
    {
        PyObject *old = var_vercmp;
        assert( old != NULL );
        var_vercmp = tmp_assign_source_5;
        Py_INCREF( var_vercmp );
        Py_DECREF( old );
    }

    goto branch_end_6;
    branch_no_6:;
    tmp_assign_source_6 = const_int_pos_1;
    {
        PyObject *old = var_vercmp;
        assert( old != NULL );
        var_vercmp = tmp_assign_source_6;
        Py_INCREF( var_vercmp );
        Py_DECREF( old );
    }

    branch_end_6:;
    branch_end_5:;
    branch_no_4:;
    branch_no_3:;
    tmp_return_value = var_vercmp;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "vercmp" );
        exception_tb = NULL;

        exception_lineno = 134;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
                );

                assert( res == 0 );
            }

            if ( var_vercmp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vercmp,
                    var_vercmp
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
    NUITKA_CANNOT_GET_HERE( function_4__compare_of_class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_vercmp );
    var_vercmp = NULL;

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

    Py_XDECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_vercmp );
    var_vercmp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4__compare_of_class_1_NumpyVersion_of_scipy$_lib$_version );
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


static PyObject *impl_function_5___lt___of_class_1_NumpyVersion_of_scipy$_lib$_version( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9e6e61ff50733bdb9650b2594048fe21, module_scipy$_lib$_version );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__compare );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 137;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( function_5___lt___of_class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5___lt___of_class_1_NumpyVersion_of_scipy$_lib$_version );
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


static PyObject *impl_function_6___le___of_class_1_NumpyVersion_of_scipy$_lib$_version( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fefc1558bf1047e08d6119354d7d9bae, module_scipy$_lib$_version );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__compare );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 140;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( function_6___le___of_class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_6___le___of_class_1_NumpyVersion_of_scipy$_lib$_version );
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


static PyObject *impl_function_7___eq___of_class_1_NumpyVersion_of_scipy$_lib$_version( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f13db0321d6a4459358b431f132cbe3e, module_scipy$_lib$_version );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__compare );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 143;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( function_7___eq___of_class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_7___eq___of_class_1_NumpyVersion_of_scipy$_lib$_version );
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


static PyObject *impl_function_8___ne___of_class_1_NumpyVersion_of_scipy$_lib$_version( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b789dca22b178f07d3c1f304530f2872, module_scipy$_lib$_version );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__compare );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 146;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( function_8___ne___of_class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_8___ne___of_class_1_NumpyVersion_of_scipy$_lib$_version );
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


static PyObject *impl_function_9___gt___of_class_1_NumpyVersion_of_scipy$_lib$_version( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d5030f928aba05353b42ba4176e94e10, module_scipy$_lib$_version );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__compare );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( function_9___gt___of_class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_9___gt___of_class_1_NumpyVersion_of_scipy$_lib$_version );
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


static PyObject *impl_function_10___ge___of_class_1_NumpyVersion_of_scipy$_lib$_version( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_18280914d1a1710c1227e852c8d3a54d, module_scipy$_lib$_version );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__compare );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 152;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_GE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( function_10___ge___of_class_1_NumpyVersion_of_scipy$_lib$_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_10___ge___of_class_1_NumpyVersion_of_scipy$_lib$_version );
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


static PyObject *impl_function_11___repr_of_class_1_NumpyVersion_of_scipy$_lib$_version( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_814cddaa10452c0c6b816e0f1cb72268, module_scipy$_lib$_version );
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
    tmp_left_name_1 = const_str_digest_0f71f7adc4f6ad974f6850f0ab846a87;
    tmp_source_name_1 = par_self;

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_vstring );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
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
    NUITKA_CANNOT_GET_HERE( function_11___repr_of_class_1_NumpyVersion_of_scipy$_lib$_version );
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
    NUITKA_CANNOT_GET_HERE( function_11___repr_of_class_1_NumpyVersion_of_scipy$_lib$_version );
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



static PyObject *MAKE_FUNCTION_function_10___ge___of_class_1_NumpyVersion_of_scipy$_lib$_version(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_10___ge___of_class_1_NumpyVersion_of_scipy$_lib$_version,
        const_str_plain___ge__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_18280914d1a1710c1227e852c8d3a54d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$_lib$_version,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11___repr_of_class_1_NumpyVersion_of_scipy$_lib$_version(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_11___repr_of_class_1_NumpyVersion_of_scipy$_lib$_version,
        const_str_plain___repr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_814cddaa10452c0c6b816e0f1cb72268,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$_lib$_version,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_NumpyVersion_of_scipy$_lib$_version(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_1_NumpyVersion_of_scipy$_lib$_version,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_238313b0229c61a87aaaca0a983185b2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$_lib$_version,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__compare_version_of_class_1_NumpyVersion_of_scipy$_lib$_version(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2__compare_version_of_class_1_NumpyVersion_of_scipy$_lib$_version,
        const_str_plain__compare_version,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9d6593ddd58214b978ff55fc2d6dae48,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$_lib$_version,
        const_str_digest_fd87b703850b8cca1886171fc09b324a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__compare_pre_release_of_class_1_NumpyVersion_of_scipy$_lib$_version(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3__compare_pre_release_of_class_1_NumpyVersion_of_scipy$_lib$_version,
        const_str_plain__compare_pre_release,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c861a369cf3613fb6f2da9e21ab96703,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$_lib$_version,
        const_str_digest_719a7304d45ac4b7e4a82eb7685571ed
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__compare_of_class_1_NumpyVersion_of_scipy$_lib$_version(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4__compare_of_class_1_NumpyVersion_of_scipy$_lib$_version,
        const_str_plain__compare,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_783255b6e71ee984e8a4e8e1042b1a04,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$_lib$_version,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5___lt___of_class_1_NumpyVersion_of_scipy$_lib$_version(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5___lt___of_class_1_NumpyVersion_of_scipy$_lib$_version,
        const_str_plain___lt__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9e6e61ff50733bdb9650b2594048fe21,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$_lib$_version,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6___le___of_class_1_NumpyVersion_of_scipy$_lib$_version(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_6___le___of_class_1_NumpyVersion_of_scipy$_lib$_version,
        const_str_plain___le__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fefc1558bf1047e08d6119354d7d9bae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$_lib$_version,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7___eq___of_class_1_NumpyVersion_of_scipy$_lib$_version(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_7___eq___of_class_1_NumpyVersion_of_scipy$_lib$_version,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f13db0321d6a4459358b431f132cbe3e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$_lib$_version,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8___ne___of_class_1_NumpyVersion_of_scipy$_lib$_version(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_8___ne___of_class_1_NumpyVersion_of_scipy$_lib$_version,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b789dca22b178f07d3c1f304530f2872,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$_lib$_version,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9___gt___of_class_1_NumpyVersion_of_scipy$_lib$_version(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_9___gt___of_class_1_NumpyVersion_of_scipy$_lib$_version,
        const_str_plain___gt__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d5030f928aba05353b42ba4176e94e10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$_lib$_version,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$_lib$_version =
{
    PyModuleDef_HEAD_INIT,
    "scipy._lib._version",   /* m_name */
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

MOD_INIT_DECL( scipy$_lib$_version )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$_lib$_version );
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

    // puts( "in initscipy$_lib$_version" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$_lib$_version = Py_InitModule4(
        "scipy._lib._version",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$_lib$_version = PyModule_Create( &mdef_scipy$_lib$_version );
#endif

    moduledict_scipy$_lib$_version = (PyDictObject *)((PyModuleObject *)module_scipy$_lib$_version)->md_dict;

    CHECK_OBJECT( module_scipy$_lib$_version );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f0892025aa1e6db47b3d42917d0a6856, module_scipy$_lib$_version );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$_lib$_version );

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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_9caf236ee85520b8daffa0634fa87547;
    UPDATE_STRING_DICT0( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_88d8297d0c49259d10c45d69afa6dea0;
    UPDATE_STRING_DICT0( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_8f3c8541df0531d68238cd46518bfa86, module_scipy$_lib$_version );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$_lib$_version)->md_dict;
    frame_module->f_lineno = 9;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$_lib$_version)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_c88389693d9d476899c1c6e170568469, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_string_types_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_string_types );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_str_plain_NumpyVersion_list );
    UPDATE_STRING_DICT1( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    tmp_assign_source_6 = impl_class_1_NumpyVersion_of_scipy$_lib$_version( NULL );
    assert( tmp_assign_source_6 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_6;

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
    tmp_assign_source_7 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = const_tuple_empty;
    tmp_assign_source_7 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_7;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_NumpyVersion;
    tmp_args_element_name_2 = const_tuple_empty;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 17;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_8;

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
    tmp_assign_source_9 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_scipy$_lib$_version, (Nuitka_StringObject *)const_str_plain_NumpyVersion, tmp_assign_source_9 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_scipy$_lib$_version );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

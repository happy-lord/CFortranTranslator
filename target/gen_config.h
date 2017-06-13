/*
*   Calvin Neo
*   Copyright (C) 2016  Calvin Neo <calvinneo@calvinneo.com>
*
*   This program is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation; either version 2 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License along
*   with this program; if not, write to the Free Software Foundation, Inc.,
*   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#pragma once
#include "../context.h"
#include <stack>
#include <map>
#include <string>
#include <vector>

#define UBOUND_DELTA 1
#define UBOUND_DELTA_STR "1"

// const map has no operator[]
const std::map<std::string, std::string> pre_map{
	{ "integer", "int" }
	, { "logical", "bool" }
	, { "character", "string" }
	, { "real", "double" }
	, { "complex", "forcomplex" }
	, { "cycle", "continue" }
	, { "exit", "break" }
};

// NOTICE: `pre_map` has already do previous job for `funcname_map`
const std::map<std::string, std::string> funcname_map{
	// math
	{ "min", "min_n" }
	, { "max", "max_n" }
	,{ "amin0", "min_n" }
	,{ "amin1", "min_n" }
	,{ "amax0", "max_n" }
	,{ "amax1", "max_n" }

	,{ "alog10", "log10" }
	,{ "alog", "log" }


	// type
	, {"int", "to_int"}
	, { "bool", "to_bool" }
	, { "string", "to_string" }
	, { "double", "to_double" }
	, { "forcomplex", "forcomplex" }

	// array
	, { "reshape", "forreshape" }
	, { "sum", "forsum" }
	, { "product", "forproduct" }
	, { "size", "forsize" }
	, { "shape", "forshape" }
	, { "lbound", "forlbound" }
	, { "ubound", "forubound" }
	, { "maxloc", "formaxloc" }
	, { "minloc", "forminloc" }
	, { "maxval", "formaxval" }
	, { "minval", "forminval" }

	// file
	, { "open", "foropenfile" }
	, { "close", "forclosefile" }

	// io
	, { "read", "forread" }
	, { "print", "forprint" }
	, { "write", "forwrite" }

	// intrinsic
	, { "present", "forpresent" }
};


const std::map<std::string, std::vector<KeywordParamInfo>> sysfunc_args{
	{ "foropenfile", { { "unit", "int", "" }, { "iostat", "int", "" }, { "err", "forlabel", "" }, { "file", "string", "" }, { "status", "string", "" }, { "access", "string" , "" }, { "form", "string", "" }
		, { "recl", "int", "" }, { "blank", "string", "" }, { "position", "string", "" }, { "action", "string" , "" }, { "delim", "string" , "" }, { "pad", "string" , "" } } }
	, { "forclosefile", { { "unit", "int", "" }, { "iostat", "int", "" }, { "err", "forlabel", "" } } }
	, { "forread", { { "unit", "int" , "" }, { "fmt", "string", "" }, { "iostat", "int", "" } } }
	, { "forwrite", { { "unit", "int" , "" }, { "fmt", "string", "" }, { "iostat", "int", "" } } }
	, { "forprint", { { "unit", "int" , "" }, { "fmt", "string", "" }, { "iostat", "int", "" } } }

	, { "forsum", { { "dim", "int", "" }, { "mask", "mask_wrapper_t", "" } } }
	, { "forproduct", { { "dim", "int", "" }, { "mask", "mask_wrapper_t", "" } } }
	, { "formaxval", { { "dim", "int", "" }, { "mask", "mask_wrapper_t", "" } } }
	, { "forminval", { { "dim", "int", "" }, { "mask", "mask_wrapper_t", "" } } }
	, { "formaxloc", { { "dim", "int", "" }, { "mask", "mask_wrapper_t", "" } } }
	, { "forminloc", { { "dim", "int", "" }, { "mask", "mask_wrapper_t", "" } } }

	, { "forsize", { { "dim", "int", "" } } }
	, { "forlbound", { { "dim", "int", "" } } }
	, { "forubound", { { "dim", "int", "" } } }

	, { "abs", {  } }
	, { "acos", {  } }
	, { "asin", {} }
	, { "atan", {} }
	, { "cos", {} }
	, { "cosh", {} }
	, { "exp", {} }
	, { "log", {} }
	, { "log10", {} }
	, { "sin", {} }
	, { "sinh", {} }
	, { "sqrt", {} }
	, { "tan", {} }
	, { "tanh", {} }
};


const std::string cpp_header = "#include\"for90std.h\" \n";




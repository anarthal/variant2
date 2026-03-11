module;

#include <boost/config.hpp>
#include <boost/config/workaround.hpp>
#include <boost/assert.hpp>
#include <boost/assert/source_location.hpp>
#include <boost/config/disable_module_warnings.hpp>

export module boost.variant2;
import std;
import boost.mp11;

#define BOOST_VARIANT2_INTERFACE_UNIT
#define BOOST_IN_MODULE_PURVIEW

#include <boost/variant2.hpp>

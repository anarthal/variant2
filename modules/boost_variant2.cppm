module;

#include <boost/config.hpp>
#include <boost/config/workaround.hpp>
#include <boost/mp11/version.hpp>
#include <boost/assert.hpp>
#include <cstdint>
#include <boost/assert/current_location.hpp>
#include <cerrno> // EINVAL

export module boost.variant2;

extern "C++" {
#include <boost/variant2.hpp>
}

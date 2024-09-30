#pragma once

#include "elf.h"
#include <utility>
//#include <nlohmann/json.hpp>

namespace hal{

        typedef struct sym_32bit_t{
	  uint32_t name;
	  uint32_t value;
	  uint32_t size;
	}sym_32b_t;

	typedef uint32_t sym_addr_t;

	class jsmap_t {
	  public:
	    jsmap_t() = default;
	   ~jsmap_t() = default;
	   

	  private:
	    std::pair<sym_32b_t, sym_addr_t> memap;
	};

}

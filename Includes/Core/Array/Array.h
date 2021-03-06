/*************************************************************************
> File Name: Array.h
> Project Name: CubbyFlow
> This code is based on Jet Framework that was created by Doyub Kim.
> References: https://github.com/doyubkim/fluid-engine-dev
> Purpose: Generic N-dimensional array class interface.
> Created Time: 2017/01/23
> Copyright (c) 2018, Chan-Ho Chris Ohk
*************************************************************************/
#ifndef CUBBYFLOW_ARRAY_H
#define CUBBYFLOW_ARRAY_H

#include <cstddef>

namespace CubbyFlow
{
	//!
	//! \brief Generic N-dimensional array class interface.
	//!
	//! This class provides generic template class for N-dimensional array where N
	//! must be either 1, 2 or 3. This particular class exists to provide generic
	//! interface for 1, 2 or 3 dimensional arrays using template specialization
	//! only, but it cannot create any instance by itself.
	//!
	//! \tparam T - Real number type.
	//! \tparam N - Dimension.
	//!
	template <typename T, size_t N>
	class Array final
	{
	public:
		static_assert(N < 1 || N > 3, "Not implemented - N should be either 1, 2, or 3.");
	};
}

#endif
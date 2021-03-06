// fwd/after_includes.hpp

// Boost.SmartAssert library
//
// Copyright (C) 2003 John Torjo (john@torjo.com)
//
// Permission to copy, use, sell and distribute this software is granted
// provided this copyright notice appears in all copies.
// Permission to modify the code and to distribute modified code is granted
// provided this copyright notice appears in all copies, and a notice
// that the code was modified is included with the copyright notice.
//
// This software is provided "as is" without express or implied warranty,
// and with no claim as to its suitability for any purpose.
 
// See http://www.boost.org for updates, documentation, and revision history.

// to know the version of the SMART_ASSERT you're using right now, 
// check out <smart_assert/smart_assert/version.txt>

#undef BOOST_SMART_ASSERT_CDECL

// thanks Pavel Vozenilek!
#ifdef __BORLANDC__
#pragma warn .8027
#pragma warn .8026
#endif

// thanks Pavel Vozenilek!
#if defined( BOOST_MSVC)
#  pragma warning (pop)
#endif


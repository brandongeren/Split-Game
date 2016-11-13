#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exampleTouch
struct  exampleTouch_t3735596907  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D exampleTouch::player
	Rigidbody2D_t502193897 * ___player_2;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(exampleTouch_t3735596907, ___player_2)); }
	inline Rigidbody2D_t502193897 * get_player_2() const { return ___player_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Rigidbody2D_t502193897 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

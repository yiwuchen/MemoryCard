#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIButton
struct  UIButton_t3377238306  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UIButton::targetObject
	GameObject_t1756533147 * ___targetObject_2;
	// System.String UIButton::targetMessage
	String_t* ___targetMessage_3;
	// UnityEngine.Color UIButton::highlightColor
	Color_t2020392075  ___highlightColor_4;

public:
	inline static int32_t get_offset_of_targetObject_2() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___targetObject_2)); }
	inline GameObject_t1756533147 * get_targetObject_2() const { return ___targetObject_2; }
	inline GameObject_t1756533147 ** get_address_of_targetObject_2() { return &___targetObject_2; }
	inline void set_targetObject_2(GameObject_t1756533147 * value)
	{
		___targetObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetObject_2, value);
	}

	inline static int32_t get_offset_of_targetMessage_3() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___targetMessage_3)); }
	inline String_t* get_targetMessage_3() const { return ___targetMessage_3; }
	inline String_t** get_address_of_targetMessage_3() { return &___targetMessage_3; }
	inline void set_targetMessage_3(String_t* value)
	{
		___targetMessage_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetMessage_3, value);
	}

	inline static int32_t get_offset_of_highlightColor_4() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___highlightColor_4)); }
	inline Color_t2020392075  get_highlightColor_4() const { return ___highlightColor_4; }
	inline Color_t2020392075 * get_address_of_highlightColor_4() { return &___highlightColor_4; }
	inline void set_highlightColor_4(Color_t2020392075  value)
	{
		___highlightColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

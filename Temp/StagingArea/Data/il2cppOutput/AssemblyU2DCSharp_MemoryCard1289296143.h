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
// UnityEngine.Sprite
struct Sprite_t309593783;
// SceneController
struct SceneController_t38942716;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MemoryCard
struct  MemoryCard_t1289296143  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MemoryCard::cardBack
	GameObject_t1756533147 * ___cardBack_2;
	// UnityEngine.Sprite MemoryCard::image
	Sprite_t309593783 * ___image_3;
	// SceneController MemoryCard::controller
	SceneController_t38942716 * ___controller_4;
	// System.Int32 MemoryCard::_id
	int32_t ____id_5;

public:
	inline static int32_t get_offset_of_cardBack_2() { return static_cast<int32_t>(offsetof(MemoryCard_t1289296143, ___cardBack_2)); }
	inline GameObject_t1756533147 * get_cardBack_2() const { return ___cardBack_2; }
	inline GameObject_t1756533147 ** get_address_of_cardBack_2() { return &___cardBack_2; }
	inline void set_cardBack_2(GameObject_t1756533147 * value)
	{
		___cardBack_2 = value;
		Il2CppCodeGenWriteBarrier(&___cardBack_2, value);
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(MemoryCard_t1289296143, ___image_3)); }
	inline Sprite_t309593783 * get_image_3() const { return ___image_3; }
	inline Sprite_t309593783 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Sprite_t309593783 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier(&___image_3, value);
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(MemoryCard_t1289296143, ___controller_4)); }
	inline SceneController_t38942716 * get_controller_4() const { return ___controller_4; }
	inline SceneController_t38942716 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(SceneController_t38942716 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier(&___controller_4, value);
	}

	inline static int32_t get_offset_of__id_5() { return static_cast<int32_t>(offsetof(MemoryCard_t1289296143, ____id_5)); }
	inline int32_t get__id_5() const { return ____id_5; }
	inline int32_t* get_address_of__id_5() { return &____id_5; }
	inline void set__id_5(int32_t value)
	{
		____id_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

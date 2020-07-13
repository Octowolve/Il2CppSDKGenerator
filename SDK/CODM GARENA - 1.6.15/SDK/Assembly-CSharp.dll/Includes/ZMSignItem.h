#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZMSignItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZMSignItem"));
	}

	template <typename T = uintptr_t> T& UISprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> static T& WARNING_DISTANCE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& WARNING_DISTANCE_INTERNAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& WARNING_ANGLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& HEIGHT_LIMIT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SpriteNormalName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SpriteEliteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Recovery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(uintptr_t root, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(ZMSignItem*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DDD04C))(this, root, args);
	}
	template <typename T = void> T Recovery() {
		return ((T (*)(ZMSignItem*))(Il2CppBase() + 0x4DDD1B0))(this);
	}
	template <typename T = void> T SetValue(float distance, float angle) {
		return ((T (*)(ZMSignItem*, float, float))(Il2CppBase() + 0x4DDD258))(this, distance, angle);
	}
	template <typename T = float> static T CalculateAlpha(float distance) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4DDD3BC))(0, distance);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0, Il2CppArray<uintptr_t>* P1) {
		return ((T (*)(ZMSignItem*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DDD4AC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Recovery() {
		return ((T (*)(ZMSignItem*))(Il2CppBase() + 0x4DDD4B4))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffConditionImmediately
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffCondition_Immediately"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Set() {
		return ((T (*)(BuffConditionImmediately*))(Il2CppBase() + 0x374E10C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Set() {
		return ((T (*)(BuffConditionImmediately*))(Il2CppBase() + 0x374E1A4))(this);
	}

};

}

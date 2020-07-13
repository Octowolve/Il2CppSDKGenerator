#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Volume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Volume"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Volume*))(Il2CppBase() + 0x2E92390))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(Volume*))(Il2CppBase() + 0x2E92438))(this);
	}

};

}

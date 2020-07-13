#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DiedIndicator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DiedIndicator"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T PreInit() {
		return ((T (*)(DiedIndicator*))(Il2CppBase() + 0x40E42D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(DiedIndicator*))(Il2CppBase() + 0x40E4400))(this);
	}

};

}

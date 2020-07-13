#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BaseSlideWindowContentController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BaseSlideWindowContentController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ShutDown() {
		return ((T (*)(BaseSlideWindowContentController*))(Il2CppBase() + 0x2D6F36C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(BaseSlideWindowContentController*))(Il2CppBase() + 0x2D6F414))(this);
	}

};

}

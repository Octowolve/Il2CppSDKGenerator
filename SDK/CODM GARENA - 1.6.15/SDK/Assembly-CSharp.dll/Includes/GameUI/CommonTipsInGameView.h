#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonTipsInGameView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonTipsInGameView"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLastCommonTipsShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnLastCommonTipsShow() {
		return ((T (*)(CommonTipsInGameView*))(Il2CppBase() + 0x3DF65DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLastCommonTipsShow() {
		return ((T (*)(CommonTipsInGameView*))(Il2CppBase() + 0x3DF66C4))(this);
	}

};

}

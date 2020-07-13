#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class LayoutOption
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "LayoutOption"));
	}

	template <typename T = uintptr_t> T& option() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& floatParam() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& boolParam() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T ResetParameters() {
		return ((T (*)(LayoutOption*))(Il2CppBase() + 0x2F2265C))(this);
	}
	template <typename T = uintptr_t> T GetGUILayoutOption() {
		return ((T (*)(LayoutOption*))(Il2CppBase() + 0x2F22684))(this);
	}

};

}

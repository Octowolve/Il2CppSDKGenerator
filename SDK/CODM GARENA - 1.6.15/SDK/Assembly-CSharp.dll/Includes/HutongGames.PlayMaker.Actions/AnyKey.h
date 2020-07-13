#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AnyKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AnyKey"));
	}

	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AnyKey*))(Il2CppBase() + 0x4F2FAB0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(AnyKey*))(Il2CppBase() + 0x4F2FABC))(this);
	}

};

}

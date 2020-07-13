#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class BaseLogAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "BaseLogAction"));
	}

	template <typename T = bool> T& sendToUnityLog() {
		return *(T*)((uintptr_t)this + 0x25);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(BaseLogAction*))(Il2CppBase() + 0x4F33AD8))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetScreenHeight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetScreenHeight"));
	}

	template <typename T = uintptr_t> T& storeScreenHeight() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetScreenHeight*))(Il2CppBase() + 0x4EFEC64))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetScreenHeight*))(Il2CppBase() + 0x4EFEC70))(this);
	}

};

}

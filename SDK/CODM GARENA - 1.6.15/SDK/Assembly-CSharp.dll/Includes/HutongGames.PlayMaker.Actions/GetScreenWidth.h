#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetScreenWidth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetScreenWidth"));
	}

	template <typename T = uintptr_t> T& storeScreenWidth() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetScreenWidth*))(Il2CppBase() + 0x4EFECD0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetScreenWidth*))(Il2CppBase() + 0x4EFECDC))(this);
	}

};

}

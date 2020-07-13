#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetFogColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetFogColor"));
	}

	template <typename T = uintptr_t> T& fogColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetFogColor*))(Il2CppBase() + 0x4FB7364))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetFogColor*))(Il2CppBase() + 0x4FB73B0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetFogColor*))(Il2CppBase() + 0x4FB7430))(this);
	}
	template <typename T = void> T DoSetFogColor() {
		return ((T (*)(SetFogColor*))(Il2CppBase() + 0x4FB73DC))(this);
	}

};

}

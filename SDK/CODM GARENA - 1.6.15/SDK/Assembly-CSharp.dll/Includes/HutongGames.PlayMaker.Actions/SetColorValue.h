#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetColorValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetColorValue"));
	}

	template <typename T = uintptr_t> T& colorVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetColorValue*))(Il2CppBase() + 0x4FB6660))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetColorValue*))(Il2CppBase() + 0x4FB6674))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetColorValue*))(Il2CppBase() + 0x4FB6700))(this);
	}
	template <typename T = void> T DoSetColorValue() {
		return ((T (*)(SetColorValue*))(Il2CppBase() + 0x4FB66A0))(this);
	}

};

}

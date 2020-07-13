#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetFloatValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetFloatValue"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& floatValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetFloatValue*))(Il2CppBase() + 0x4FB7298))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetFloatValue*))(Il2CppBase() + 0x4FB72AC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetFloatValue*))(Il2CppBase() + 0x4FB7310))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetLayer"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& layer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetLayer*))(Il2CppBase() + 0x5026EF4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetLayer*))(Il2CppBase() + 0x5026F00))(this);
	}
	template <typename T = void> T DoSetLayer() {
		return ((T (*)(SetLayer*))(Il2CppBase() + 0x5026F20))(this);
	}

};

}

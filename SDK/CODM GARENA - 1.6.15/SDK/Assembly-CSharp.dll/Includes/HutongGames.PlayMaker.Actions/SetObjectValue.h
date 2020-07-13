#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetObjectValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetObjectValue"));
	}

	template <typename T = uintptr_t> T& objectVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& objectValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetObjectValue*))(Il2CppBase() + 0x5029CC0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetObjectValue*))(Il2CppBase() + 0x5029CD4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetObjectValue*))(Il2CppBase() + 0x5029D38))(this);
	}

};

}

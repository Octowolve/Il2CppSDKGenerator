#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetProperty"));
	}

	template <typename T = uintptr_t> T& targetProperty() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetProperty*))(Il2CppBase() + 0x502A960))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetProperty*))(Il2CppBase() + 0x502AA10))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetProperty*))(Il2CppBase() + 0x502AA58))(this);
	}

};

}

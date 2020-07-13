#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetVector3Value
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetVector3Value"));
	}

	template <typename T = uintptr_t> T& vector3Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& vector3Value() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetVector3Value*))(Il2CppBase() + 0x502D9C0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetVector3Value*))(Il2CppBase() + 0x502D9D4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetVector3Value*))(Il2CppBase() + 0x502DA48))(this);
	}

};

}

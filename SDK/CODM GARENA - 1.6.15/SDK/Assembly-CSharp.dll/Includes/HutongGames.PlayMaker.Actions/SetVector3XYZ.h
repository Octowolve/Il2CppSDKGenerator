#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetVector3XYZ
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetVector3XYZ"));
	}

	template <typename T = uintptr_t> T& vector3Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& vector3Value() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& x() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& y() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& z() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetVector3XYZ*))(Il2CppBase() + 0x502DAA8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetVector3XYZ*))(Il2CppBase() + 0x502DBEC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetVector3XYZ*))(Il2CppBase() + 0x502DD58))(this);
	}
	template <typename T = void> T DoSetVector3XYZ() {
		return ((T (*)(SetVector3XYZ*))(Il2CppBase() + 0x502DC18))(this);
	}

};

}

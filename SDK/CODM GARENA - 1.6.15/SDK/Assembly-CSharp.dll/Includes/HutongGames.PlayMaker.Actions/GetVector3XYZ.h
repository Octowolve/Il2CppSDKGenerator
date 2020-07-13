#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetVector3XYZ
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetVector3XYZ"));
	}

	template <typename T = uintptr_t> T& vector3Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeY() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeZ() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetVector3XYZ*))(Il2CppBase() + 0x4F00B68))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetVector3XYZ*))(Il2CppBase() + 0x4F00B80))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetVector3XYZ*))(Il2CppBase() + 0x4F00C6C))(this);
	}
	template <typename T = void> T DoGetVector3XYZ() {
		return ((T (*)(GetVector3XYZ*))(Il2CppBase() + 0x4F00BAC))(this);
	}

};

}

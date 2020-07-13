#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAngleToTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAngleToTarget"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& targetObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ignoreHeight() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeAngle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAngleToTarget*))(Il2CppBase() + 0x50545AC))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(GetAngleToTarget*))(Il2CppBase() + 0x5054688))(this);
	}
	template <typename T = void> T DoGetAngleToTarget() {
		return ((T (*)(GetAngleToTarget*))(Il2CppBase() + 0x50546B4))(this);
	}

};

}

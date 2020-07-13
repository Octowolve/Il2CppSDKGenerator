#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetRotation"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& quaternion() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& vector() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& xAngle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& yAngle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& zAngle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetRotation*))(Il2CppBase() + 0x5091FC0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetRotation*))(Il2CppBase() + 0x5091FD8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetRotation*))(Il2CppBase() + 0x50922CC))(this);
	}
	template <typename T = void> T DoGetRotation() {
		return ((T (*)(GetRotation*))(Il2CppBase() + 0x5092004))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AddTorque
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AddTorque"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& vector() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& x() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& y() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& z() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& forceMode() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AddTorque*))(Il2CppBase() + 0x476D2B4))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(AddTorque*))(Il2CppBase() + 0x476D400))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AddTorque*))(Il2CppBase() + 0x476D434))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(AddTorque*))(Il2CppBase() + 0x476D6E8))(this);
	}
	template <typename T = void> T DoAddTorque() {
		return ((T (*)(AddTorque*))(Il2CppBase() + 0x476D460))(this);
	}

};

}

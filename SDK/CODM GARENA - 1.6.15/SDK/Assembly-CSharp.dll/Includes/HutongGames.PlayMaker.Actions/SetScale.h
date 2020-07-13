#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetScale"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& vector() {
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
	template <typename T = bool> T& lateUpdate() {
		return *(T*)((uintptr_t)this + 0x3D);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetScale*))(Il2CppBase() + 0x502BB20))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetScale*))(Il2CppBase() + 0x502BC64))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetScale*))(Il2CppBase() + 0x502BEC0))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(SetScale*))(Il2CppBase() + 0x502BED0))(this);
	}
	template <typename T = void> T DoSetScale() {
		return ((T (*)(SetScale*))(Il2CppBase() + 0x502BC90))(this);
	}

};

}

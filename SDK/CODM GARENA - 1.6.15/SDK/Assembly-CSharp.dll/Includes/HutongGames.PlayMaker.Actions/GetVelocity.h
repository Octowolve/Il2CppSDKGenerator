#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetVelocity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetVelocity"));
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
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetVelocity*))(Il2CppBase() + 0x4F00D98))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetVelocity*))(Il2CppBase() + 0x4F00DB0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetVelocity*))(Il2CppBase() + 0x4F00FA8))(this);
	}
	template <typename T = void> T DoGetVelocity() {
		return ((T (*)(GetVelocity*))(Il2CppBase() + 0x4F00DDC))(this);
	}

};

}

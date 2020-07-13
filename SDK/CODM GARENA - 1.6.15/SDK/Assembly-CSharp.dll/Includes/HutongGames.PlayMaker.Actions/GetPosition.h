#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetPosition"));
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
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetPosition*))(Il2CppBase() + 0x508FC10))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetPosition*))(Il2CppBase() + 0x508FC28))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetPosition*))(Il2CppBase() + 0x508FE08))(this);
	}
	template <typename T = void> T DoGetPosition() {
		return ((T (*)(GetPosition*))(Il2CppBase() + 0x508FC54))(this);
	}

};

}

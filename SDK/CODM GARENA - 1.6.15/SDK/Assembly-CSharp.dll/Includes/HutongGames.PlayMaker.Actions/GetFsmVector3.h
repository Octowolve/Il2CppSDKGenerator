#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetFsmVector3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetFsmVector3"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fsmName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& variableName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& goLastFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetFsmVector3*))(Il2CppBase() + 0x508D5F8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetFsmVector3*))(Il2CppBase() + 0x508D6C8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetFsmVector3*))(Il2CppBase() + 0x508D940))(this);
	}
	template <typename T = void> T DoGetFsmVector3() {
		return ((T (*)(GetFsmVector3*))(Il2CppBase() + 0x508D6F4))(this);
	}

};

}

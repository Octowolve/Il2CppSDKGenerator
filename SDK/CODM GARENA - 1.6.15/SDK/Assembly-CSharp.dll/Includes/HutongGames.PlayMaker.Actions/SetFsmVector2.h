#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetFsmVector2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetFsmVector2"));
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
	template <typename T = uintptr_t> T& setValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& goLastFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& fsmNameLastFrame() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetFsmVector2*))(Il2CppBase() + 0x4FBBDD0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetFsmVector2*))(Il2CppBase() + 0x4FBBEA0))(this);
	}
	template <typename T = void> T DoSetFsmVector2() {
		return ((T (*)(SetFsmVector2*))(Il2CppBase() + 0x4FBBECC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetFsmVector2*))(Il2CppBase() + 0x4FBC290))(this);
	}

};

}

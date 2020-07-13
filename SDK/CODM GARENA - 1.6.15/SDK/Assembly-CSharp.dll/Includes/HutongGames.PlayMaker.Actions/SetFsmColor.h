#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetFsmColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetFsmColor"));
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
		return ((T (*)(SetFsmColor*))(Il2CppBase() + 0x4FB8334))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetFsmColor*))(Il2CppBase() + 0x4FB8404))(this);
	}
	template <typename T = void> T DoSetFsmColor() {
		return ((T (*)(SetFsmColor*))(Il2CppBase() + 0x4FB8430))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetFsmColor*))(Il2CppBase() + 0x4FB8800))(this);
	}

};

}

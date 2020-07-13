#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetNextChild
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetNextChild"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeNextChild() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& loopEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& finishedEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& nextChildIndex() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetNextChild*))(Il2CppBase() + 0x508F6AC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetNextChild*))(Il2CppBase() + 0x508F6BC))(this);
	}
	template <typename T = void> T DoGetNextChild(uintptr_t parent) {
		return ((T (*)(GetNextChild*, uintptr_t))(Il2CppBase() + 0x508F70C))(this, parent);
	}

};

}

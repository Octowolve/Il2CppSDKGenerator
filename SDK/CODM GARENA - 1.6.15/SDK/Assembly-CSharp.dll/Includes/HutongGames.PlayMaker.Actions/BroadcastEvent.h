#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class BroadcastEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "BroadcastEvent"));
	}

	template <typename T = uintptr_t> T& broadcastEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& sendToChildren() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& excludeSelf() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(BroadcastEvent*))(Il2CppBase() + 0x4F35D1C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(BroadcastEvent*))(Il2CppBase() + 0x4F35D5C))(this);
	}

};

}

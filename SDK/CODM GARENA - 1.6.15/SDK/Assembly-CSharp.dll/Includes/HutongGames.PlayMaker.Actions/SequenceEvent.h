#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SequenceEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SequenceEvent"));
	}

	template <typename T = uintptr_t> T& delay() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& delayedEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& eventIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SequenceEvent*))(Il2CppBase() + 0x4FB0604))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SequenceEvent*))(Il2CppBase() + 0x4FB0610))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SequenceEvent*))(Il2CppBase() + 0x4FB0768))(this);
	}

};

}

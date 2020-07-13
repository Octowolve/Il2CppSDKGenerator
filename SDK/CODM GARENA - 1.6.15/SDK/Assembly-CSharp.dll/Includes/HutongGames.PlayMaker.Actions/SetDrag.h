#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetDrag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetDrag"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& drag() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetDrag*))(Il2CppBase() + 0x4FB6788))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetDrag*))(Il2CppBase() + 0x4FB67B4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetDrag*))(Il2CppBase() + 0x4FB68F0))(this);
	}
	template <typename T = void> T DoSetDrag() {
		return ((T (*)(SetDrag*))(Il2CppBase() + 0x4FB67E0))(this);
	}

};

}

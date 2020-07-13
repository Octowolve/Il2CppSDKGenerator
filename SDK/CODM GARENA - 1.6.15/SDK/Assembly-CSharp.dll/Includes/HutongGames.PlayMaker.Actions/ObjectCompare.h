#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ObjectCompare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ObjectCompare"));
	}

	template <typename T = uintptr_t> T& objectVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& compareTo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& equalEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& notEqualEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ObjectCompare*))(Il2CppBase() + 0x4D7BAD0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ObjectCompare*))(Il2CppBase() + 0x4D7BAEC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ObjectCompare*))(Il2CppBase() + 0x4D7BC48))(this);
	}
	template <typename T = void> T DoObjectCompare() {
		return ((T (*)(ObjectCompare*))(Il2CppBase() + 0x4D7BB18))(this);
	}

};

}

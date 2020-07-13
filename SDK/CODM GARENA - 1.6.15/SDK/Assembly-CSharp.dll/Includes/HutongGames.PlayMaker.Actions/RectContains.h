#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RectContains
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RectContains"));
	}

	template <typename T = uintptr_t> T& rectangle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& point() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& x() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& y() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& trueEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& falseEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RectContains*))(Il2CppBase() + 0x4D8349C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RectContains*))(Il2CppBase() + 0x4D83634))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(RectContains*))(Il2CppBase() + 0x4D837C0))(this);
	}
	template <typename T = void> T DoRectContains() {
		return ((T (*)(RectContains*))(Il2CppBase() + 0x4D83660))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RectOverlaps
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RectOverlaps"));
	}

	template <typename T = uintptr_t> T& rect1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& rect2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& trueEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& falseEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RectOverlaps*))(Il2CppBase() + 0x4D837CC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RectOverlaps*))(Il2CppBase() + 0x4D838D4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(RectOverlaps*))(Il2CppBase() + 0x4D839F8))(this);
	}
	template <typename T = void> T DoRectOverlap() {
		return ((T (*)(RectOverlaps*))(Il2CppBase() + 0x4D83900))(this);
	}
	template <typename T = bool> static T Intersect(Il2CppRect a, Il2CppRect b) {
		return ((T (*)(void *, Il2CppRect, Il2CppRect))(Il2CppBase() + 0x4D839FC))(0, a, b);
	}
	template <typename T = void> static T FlipNegative(uintptr_t r) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D83B24))(0, r);
	}

};

}

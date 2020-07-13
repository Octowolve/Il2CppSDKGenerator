#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutBeginAreaFollowObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutBeginAreaFollowObject"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& offsetLeft() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& offsetTop() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& width() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& height() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& normalized() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutBeginAreaFollowObject*))(Il2CppBase() + 0x4F033FC))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutBeginAreaFollowObject*))(Il2CppBase() + 0x4F0352C))(this);
	}
	template <typename T = void> static T DummyBeginArea() {
		return ((T (*)(void *))(Il2CppBase() + 0x4F03970))(0);
	}

};

}

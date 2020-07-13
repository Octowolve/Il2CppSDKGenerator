#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUIAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUIAction"));
	}

	template <typename T = uintptr_t> T& screenRect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& top() {
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
	template <typename T = Il2CppRect> T& rect() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GUIAction*))(Il2CppBase() + 0x4F01660))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUIAction*))(Il2CppBase() + 0x4F016DC))(this);
	}

};

}

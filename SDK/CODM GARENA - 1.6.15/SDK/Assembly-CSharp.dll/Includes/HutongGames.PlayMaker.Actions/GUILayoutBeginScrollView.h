#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutBeginScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutBeginScrollView"));
	}

	template <typename T = uintptr_t> T& scrollPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& horizontalScrollbar() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& verticalScrollbar() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& useCustomStyle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& horizontalStyle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& verticalStyle() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& backgroundStyle() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutBeginScrollView*))(Il2CppBase() + 0x4F03E0C))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutBeginScrollView*))(Il2CppBase() + 0x4F03E34))(this);
	}

};

}

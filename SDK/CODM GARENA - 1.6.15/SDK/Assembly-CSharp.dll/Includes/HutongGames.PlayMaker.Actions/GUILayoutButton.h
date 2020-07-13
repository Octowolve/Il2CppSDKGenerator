#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutButton"));
	}

	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeButtonState() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& image() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& tooltip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutButton*))(Il2CppBase() + 0x4F04664))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutButton*))(Il2CppBase() + 0x4F04788))(this);
	}

};

}

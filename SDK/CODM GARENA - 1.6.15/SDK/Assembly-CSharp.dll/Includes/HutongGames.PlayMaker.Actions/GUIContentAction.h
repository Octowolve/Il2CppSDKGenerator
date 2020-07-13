#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUIContentAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUIContentAction"));
	}

	template <typename T = uintptr_t> T& image() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& tooltip() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GUIContentAction*))(Il2CppBase() + 0x4F01DBC))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUIContentAction*))(Il2CppBase() + 0x4F01C14))(this);
	}

};

}

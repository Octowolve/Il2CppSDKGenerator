#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUIButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUIButton"));
	}

	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& storeButtonState() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GUIButton*))(Il2CppBase() + 0x4F01D20))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUIButton*))(Il2CppBase() + 0x4F01ED8))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutTextLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutTextLabel"));
	}

	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutTextLabel*))(Il2CppBase() + 0x4F07138))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutTextLabel*))(Il2CppBase() + 0x4F07230))(this);
	}

};

}

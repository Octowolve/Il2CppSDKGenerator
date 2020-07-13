#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutFloatLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutFloatLabel"));
	}

	template <typename T = uintptr_t> T& prefix() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutFloatLabel*))(Il2CppBase() + 0x4F0553C))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutFloatLabel*))(Il2CppBase() + 0x4F0563C))(this);
	}

};

}

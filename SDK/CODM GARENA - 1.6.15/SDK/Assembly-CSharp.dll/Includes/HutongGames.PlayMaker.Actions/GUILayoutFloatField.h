#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutFloatField
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutFloatField"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& changedEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutFloatField*))(Il2CppBase() + 0x4F05120))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutFloatField*))(Il2CppBase() + 0x4F051F8))(this);
	}

};

}

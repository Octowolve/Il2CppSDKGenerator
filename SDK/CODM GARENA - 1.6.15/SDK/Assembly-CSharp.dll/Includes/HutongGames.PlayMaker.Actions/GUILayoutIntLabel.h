#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutIntLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutIntLabel"));
	}

	template <typename T = uintptr_t> T& prefix() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& intVariable() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutIntLabel*))(Il2CppBase() + 0x4F05FD0))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutIntLabel*))(Il2CppBase() + 0x4F060D0))(this);
	}

};

}

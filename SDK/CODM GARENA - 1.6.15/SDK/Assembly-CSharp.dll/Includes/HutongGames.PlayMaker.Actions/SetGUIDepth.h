#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetGUIDepth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetGUIDepth"));
	}

	template <typename T = uintptr_t> T& depth() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetGUIDepth*))(Il2CppBase() + 0x4FBD33C))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(SetGUIDepth*))(Il2CppBase() + 0x4FBD360))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(SetGUIDepth*))(Il2CppBase() + 0x4FBD394))(this);
	}

};

}

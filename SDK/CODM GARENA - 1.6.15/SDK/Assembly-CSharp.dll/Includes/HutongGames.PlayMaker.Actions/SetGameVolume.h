#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetGameVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetGameVolume"));
	}

	template <typename T = uintptr_t> T& volume() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetGameVolume*))(Il2CppBase() + 0x4FBC838))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetGameVolume*))(Il2CppBase() + 0x4FBC864))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetGameVolume*))(Il2CppBase() + 0x4FBC8BC))(this);
	}

};

}

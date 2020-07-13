#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ISpectateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ISpectateInfo"));
	}


	template <typename T = void> T InitBySpectateInfo() {
		return ((T (*)(ISpectateInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SyncSpectateInfo(bool active) {
		return ((T (*)(ISpectateInfo*, bool))(Il2CppBase() + 0x0))(this, active);
	}
	template <typename T = void> T RecordSpectateInfo(bool active) {
		return ((T (*)(ISpectateInfo*, bool))(Il2CppBase() + 0x0))(this, active);
	}
	template <typename T = void> T HandleSpectateInfo(bool active) {
		return ((T (*)(ISpectateInfo*, bool))(Il2CppBase() + 0x0))(this, active);
	}
	template <typename T = void> T UpdateSpectateInfo() {
		return ((T (*)(ISpectateInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T GetSpectateInfo() {
		return ((T (*)(ISpectateInfo*))(Il2CppBase() + 0x0))(this);
	}

};

}

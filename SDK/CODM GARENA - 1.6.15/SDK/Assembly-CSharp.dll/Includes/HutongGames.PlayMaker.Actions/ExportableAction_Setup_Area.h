#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionSetupArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_Setup_Area"));
	}

	template <typename T = uintptr_t> T& AreaType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& DamageInterval() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionSetupArea*))(Il2CppBase() + 0x5049E24))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionSetupArea*))(Il2CppBase() + 0x5049ECC))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionSetupArea*))(Il2CppBase() + 0x5049F44))(this);
	}

};

}

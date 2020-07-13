#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionSwitchActivedZoneObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_Switch_ActivedZoneObject"));
	}

	template <typename T = int32_t> T& object_type() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isEnable() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionSwitchActivedZoneObject*))(Il2CppBase() + 0x504D45C))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionSwitchActivedZoneObject*))(Il2CppBase() + 0x504D488))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionSwitchActivedZoneObject*))(Il2CppBase() + 0x504D500))(this);
	}

};

}

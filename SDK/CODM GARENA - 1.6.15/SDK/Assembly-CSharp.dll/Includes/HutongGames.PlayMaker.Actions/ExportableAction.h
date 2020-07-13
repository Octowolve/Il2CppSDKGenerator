#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction"));
	}

	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& waveConfigID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& waveRandomConfigIDs() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& waveRandomConfigSpawnWaveIDs() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& waveStateName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& activateType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& matineeName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& matineeDuration() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = unsigned char> static T& MAX_ACTION_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(ExportableAction*))(Il2CppBase() + 0x4FCCF24))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheckFinishEvent() {
		return ((T (*)(ExportableAction*))(Il2CppBase() + 0x4FCCF2C))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheckObject(uintptr_t levelObj) {
		return ((T (*)(ExportableAction*, uintptr_t))(Il2CppBase() + 0x4FCCFB4))(this, levelObj);
	}
	template <typename T = Il2CppString*> T ErrorCheckActionCount() {
		return ((T (*)(ExportableAction*))(Il2CppBase() + 0x4FCD084))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheckActivateType() {
		return ((T (*)(ExportableAction*))(Il2CppBase() + 0x4FCD3E0))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheckInvalidAction() {
		return ((T (*)(ExportableAction*))(Il2CppBase() + 0x4FCD4EC))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableAction*))(Il2CppBase() + 0x4FCD58C))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableAction*))(Il2CppBase() + 0x4FCD5B0))(this);
	}
	template <typename T = Il2CppString*> T GetActivateTypeParameters() {
		return ((T (*)(ExportableAction*))(Il2CppBase() + 0x4FCD864))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableAction*))(Il2CppBase() + 0x4FCDA50))(this);
	}
	template <typename T = Il2CppString*> T GetActionParameters() {
		return ((T (*)(ExportableAction*))(Il2CppBase() + 0x4FCDB00))(this);
	}

};

}

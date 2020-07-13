#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ExportLevelLogic.Random {

class WaveConfigGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ExportLevelLogic.Random", "WaveConfigGroup"));
	}

	template <typename T = Il2CppString*> T& GroupName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& GroupID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WaveConfigList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddWave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Resize(Il2CppArray<uintptr_t>* target) {
		return ((T (*)(WaveConfigGroup*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BD7B04))(this, target);
	}
	template <typename T = void> T AddWave() {
		return ((T (*)(WaveConfigGroup*))(Il2CppBase() + 0x4BD7D50))(this);
	}
	template <typename T = void> T RemoveWave(int32_t index) {
		return ((T (*)(WaveConfigGroup*, int32_t))(Il2CppBase() + 0x4BD7F14))(this, index);
	}

};

}

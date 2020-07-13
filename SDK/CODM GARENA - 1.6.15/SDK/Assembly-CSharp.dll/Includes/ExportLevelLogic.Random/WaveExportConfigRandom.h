#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ExportLevelLogic.Random {

class WaveExportConfigRandom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ExportLevelLogic.Random", "WaveExportConfigRandom"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& WaveConfigGroupList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(WaveExportConfigRandom*))(Il2CppBase() + 0x4BD8150))(this);
	}
	template <typename T = void> T AddGroup(Il2CppArray<uintptr_t>* waveConfigList) {
		return ((T (*)(WaveExportConfigRandom*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4BD8158))(this, waveConfigList);
	}
	template <typename T = void> T RemoveGroup(int32_t index) {
		return ((T (*)(WaveExportConfigRandom*, int32_t))(Il2CppBase() + 0x4BD8314))(this, index);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPAIPawnInitializeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPAIPawnInitializeData"));
	}

	template <typename T = uintptr_t> T& presetData() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPresetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetPresetData(uintptr_t preset) {
		return ((T (*)(MPAIPawnInitializeData*, uintptr_t))(Il2CppBase() + 0x4601360))(this, preset);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class IEquipmentConfConfigUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "IEquipmentConfConfigUtil"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_ItemResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResourceName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T ItemResource(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3764024))(0, config);
	}
	template <typename T = Il2CppString*> static T ResourceName(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37641B4))(0, config);
	}

};

}

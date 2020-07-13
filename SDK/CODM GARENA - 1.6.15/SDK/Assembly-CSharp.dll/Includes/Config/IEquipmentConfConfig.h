#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class IEquipmentConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "IEquipmentConfConfig"));
	}


	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(IEquipmentConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(IEquipmentConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(IEquipmentConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(IEquipmentConfConfig*))(Il2CppBase() + 0x0))(this);
	}

};

}

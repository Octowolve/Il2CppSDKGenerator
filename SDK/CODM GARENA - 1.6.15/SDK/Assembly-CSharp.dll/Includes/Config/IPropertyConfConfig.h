#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class IPropertyConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "IPropertyConfConfig"));
	}


	template <typename T = int32_t> T get_Mobility() {
		return ((T (*)(IPropertyConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Damage() {
		return ((T (*)(IPropertyConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Range() {
		return ((T (*)(IPropertyConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_FireRate() {
		return ((T (*)(IPropertyConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Accuracy() {
		return ((T (*)(IPropertyConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Propertys() {
		return ((T (*)(IPropertyConfConfig*))(Il2CppBase() + 0x0))(this);
	}

};

}

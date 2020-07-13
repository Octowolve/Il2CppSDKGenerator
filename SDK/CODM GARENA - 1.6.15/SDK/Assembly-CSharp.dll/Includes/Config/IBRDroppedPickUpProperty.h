#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class IBRDroppedPickUpProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "IBRDroppedPickUpProperty"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_Propertys() {
		return ((T (*)(IBRDroppedPickUpProperty*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Mobility() {
		return ((T (*)(IBRDroppedPickUpProperty*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Damage() {
		return ((T (*)(IBRDroppedPickUpProperty*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Range() {
		return ((T (*)(IBRDroppedPickUpProperty*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_FireRate() {
		return ((T (*)(IBRDroppedPickUpProperty*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Accuracy() {
		return ((T (*)(IBRDroppedPickUpProperty*))(Il2CppBase() + 0x0))(this);
	}

};

}

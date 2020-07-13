#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class IMachineFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "IMachineFactory"));
	}


	template <typename T = uintptr_t> T NewInstance() {
		return ((T (*)(IMachineFactory*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Mapping() {
		return ((T (*)(IMachineFactory*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Mapping(uintptr_t value) {
		return ((T (*)(IMachineFactory*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T get_GroupCount() {
		return ((T (*)(IMachineFactory*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Gap() {
		return ((T (*)(IMachineFactory*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Gap(int32_t value) {
		return ((T (*)(IMachineFactory*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_NamesMapping() {
		return ((T (*)(IMachineFactory*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_NamesMapping(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(IMachineFactory*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}

};

}

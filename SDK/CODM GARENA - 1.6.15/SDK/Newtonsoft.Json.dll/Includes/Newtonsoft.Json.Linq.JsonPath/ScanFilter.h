#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq.JsonPath {

class ScanFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq.JsonPath", "ScanFilter"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ScanFilter*))(Il2CppBase() + 0x3967850))(this);
	}
	template <typename T = void*> T ExecuteFilter(void* current, bool errorWhenNoMatch) {
		return ((T (*)(ScanFilter*, void*, bool))(Il2CppBase() + 0x3967858))(this, current, errorWhenNoMatch);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq.JsonPath {

class FieldMultipleFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq.JsonPath", "FieldMultipleFilter"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppList<Il2CppString*>*> T get_Names() {
		return ((T (*)(FieldMultipleFilter*))(Il2CppBase() + 0x3965EA0))(this);
	}
	template <typename T = void*> T ExecuteFilter(void* current, bool errorWhenNoMatch) {
		return ((T (*)(FieldMultipleFilter*, void*, bool))(Il2CppBase() + 0x3965EA8))(this, current, errorWhenNoMatch);
	}

};

}

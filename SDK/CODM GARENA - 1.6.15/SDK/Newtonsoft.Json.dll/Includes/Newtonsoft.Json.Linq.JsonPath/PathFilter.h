#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq.JsonPath {

class PathFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq.JsonPath", "PathFilter"));
	}


	template <typename T = void*> T ExecuteFilter(void* current, bool errorWhenNoMatch) {
		return ((T (*)(PathFilter*, void*, bool))(Il2CppBase() + 0x0))(this, current, errorWhenNoMatch);
	}
	template <typename T = uintptr_t> static T GetTokenIndex(uintptr_t t, bool errorWhenNoMatch, int32_t index) {
		return ((T (*)(void *, uintptr_t, bool, int32_t))(Il2CppBase() + 0x3961EC0))(0, t, errorWhenNoMatch, index);
	}

};

}

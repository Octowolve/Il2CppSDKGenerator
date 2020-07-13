#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAttributeArrayInputFunc1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "GetAttributeArrayInputFunc`1"));
	}


	template <typename T = bool> T Invoke(int32_t geoID, int32_t partID, Il2CppString* name, uintptr_t info, Il2CppArray<uintptr_t>** items, int32_t start, int32_t end) {
		return ((T (*)(GetAttributeArrayInputFunc1*, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x48E949C))(this, geoID, partID, name, info, items, start, end);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t geoID, int32_t partID, Il2CppString* name, uintptr_t info, Il2CppArray<uintptr_t>** items, int32_t start, int32_t end, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetAttributeArrayInputFunc1*, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>**, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48E95A4))(this, geoID, partID, name, info, items, start, end, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t info, uintptr_t result) {
		return ((T (*)(GetAttributeArrayInputFunc1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48E96D0))(this, info, result);
	}

};

}

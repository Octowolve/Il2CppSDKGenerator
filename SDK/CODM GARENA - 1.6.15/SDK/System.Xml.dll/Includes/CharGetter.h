#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CharGetter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "CharGetter"));
	}


	template <typename T = int32_t> T Invoke(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t length) {
		return ((T (*)(CharGetter*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x37E5C7C))(this, buffer, offset, length);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t length, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CharGetter*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37E5D58))(this, buffer, offset, length, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(CharGetter*, uintptr_t))(Il2CppBase() + 0x37E5E30))(this, result);
	}

};

}

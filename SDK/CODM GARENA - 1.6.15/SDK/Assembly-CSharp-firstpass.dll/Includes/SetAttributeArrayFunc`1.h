#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetAttributeArrayFunc1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "SetAttributeArrayFunc`1"));
	}


	template <typename T = bool> T Invoke(int32_t geoID, int32_t partID, Il2CppString* attrName, uintptr_t attrInfo, Il2CppArray<uintptr_t>* items, int32_t start, int32_t end) {
		return ((T (*)(SetAttributeArrayFunc1*, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x48E9C34))(this, geoID, partID, attrName, attrInfo, items, start, end);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t geoID, int32_t partID, Il2CppString* attrName, uintptr_t attrInfo, Il2CppArray<uintptr_t>* items, int32_t start, int32_t end, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SetAttributeArrayFunc1*, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48E9D3C))(this, geoID, partID, attrName, attrInfo, items, start, end, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t attrInfo, uintptr_t result) {
		return ((T (*)(SetAttributeArrayFunc1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48E9E68))(this, attrInfo, result);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetAttributeValueFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "SetAttributeValueFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t attributeData, int32_t targetIndex, uintptr_t sourceTools, int32_t sourceIndex, float factor) {
		return ((T (*)(SetAttributeValueFunc*, uintptr_t, int32_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x4C6911C))(this, attributeData, targetIndex, sourceTools, sourceIndex, factor);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t attributeData, int32_t targetIndex, uintptr_t sourceTools, int32_t sourceIndex, float factor, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SetAttributeValueFunc*, uintptr_t, int32_t, uintptr_t, int32_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C6AD24))(this, attributeData, targetIndex, sourceTools, sourceIndex, factor, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SetAttributeValueFunc*, uintptr_t))(Il2CppBase() + 0x4C6AE30))(this, result);
	}

};

}

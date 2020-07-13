#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MemberDescriptorComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "MemberDescriptorComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(MemberDescriptorComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAF154))(this, x, y);
	}

};

}

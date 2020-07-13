#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetBRCFCItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetBRCFCItem"));
	}


	template <typename T = uintptr_t> T Invoke(int32_t expend, bool isVisible) {
		return ((T (*)(GetBRCFCItem*, int32_t, bool))(Il2CppBase() + 0x24F2DA4))(this, expend, isVisible);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t expend, bool isVisible, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetBRCFCItem*, int32_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x24F35DC))(this, expend, isVisible, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetBRCFCItem*, uintptr_t))(Il2CppBase() + 0x24F36BC))(this, result);
	}

};

}

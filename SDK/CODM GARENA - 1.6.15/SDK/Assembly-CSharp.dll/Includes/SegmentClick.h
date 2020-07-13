#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SegmentClick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SegmentClick"));
	}


	template <typename T = void> T Invoke(uintptr_t segment) {
		return ((T (*)(SegmentClick*, uintptr_t))(Il2CppBase() + 0x406642C))(this, segment);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t segment, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SegmentClick*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x40664D8))(this, segment, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SegmentClick*, uintptr_t))(Il2CppBase() + 0x4066504))(this, result);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnInnerSetItemClick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnInnerSetItemClick"));
	}


	template <typename T = void> T Invoke(uint64_t guid, uint32_t id, int32_t index) {
		return ((T (*)(OnInnerSetItemClick*, uint64_t, uint32_t, int32_t))(Il2CppBase() + 0x2329B40))(this, guid, id, index);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint64_t guid, uint32_t id, int32_t index, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnInnerSetItemClick*, uint64_t, uint32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x232A5F4))(this, guid, id, index, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnInnerSetItemClick*, uintptr_t))(Il2CppBase() + 0x232A6F8))(this, result);
	}

};

}

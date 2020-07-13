#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProtocolGetSizeDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProtocolGetSizeDelegate"));
	}


	template <typename T = int32_t> T Invoke(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(ProtocolGetSizeDelegate*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x48528C0))(this, data, DataIndex);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* data, int32_t DataIndex, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ProtocolGetSizeDelegate*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4852F40))(this, data, DataIndex, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(ProtocolGetSizeDelegate*, uintptr_t))(Il2CppBase() + 0x4853008))(this, result);
	}

};

}

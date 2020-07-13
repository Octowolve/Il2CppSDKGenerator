#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProtocolProcessDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProtocolProcessDelegate"));
	}


	template <typename T = int32_t> T Invoke(Il2CppArray<uintptr_t>* data, int32_t PackDataIndex, int32_t PackDataCount, int32_t Sequence) {
		return ((T (*)(ProtocolProcessDelegate*, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4852984))(this, data, PackDataIndex, PackDataCount, Sequence);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* data, int32_t PackDataIndex, int32_t PackDataCount, int32_t Sequence, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ProtocolProcessDelegate*, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x485306C))(this, data, PackDataIndex, PackDataCount, Sequence, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(ProtocolProcessDelegate*, uintptr_t))(Il2CppBase() + 0x4853164))(this, result);
	}

};

}

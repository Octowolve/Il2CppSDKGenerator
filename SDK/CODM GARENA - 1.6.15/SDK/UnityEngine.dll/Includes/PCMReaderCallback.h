#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PCMReaderCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "PCMReaderCallback"));
	}


	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(PCMReaderCallback*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x469CE00))(this, data);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* data, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PCMReaderCallback*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x469CF48))(this, data, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(PCMReaderCallback*, uintptr_t))(Il2CppBase() + 0x469CF74))(this, result);
	}

};

}

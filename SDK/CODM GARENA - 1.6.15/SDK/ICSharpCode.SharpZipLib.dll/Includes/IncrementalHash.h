#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IncrementalHash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "", "IncrementalHash"));
	}

	template <typename T = bool> T& _finalised() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> static T CreateHMAC(Il2CppString* n, Il2CppArray<uintptr_t>* key) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A6F168))(0, n, key);
	}
	template <typename T = void> T AppendData(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(IncrementalHash*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A6F1FC))(this, buffer, offset, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetHashAndReset() {
		return ((T (*)(IncrementalHash*))(Il2CppBase() + 0x4A6F224))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.Core {

class ReaderDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.Core", "ReaderDelegate"));
	}


	template <typename T = bool> T Invoke(uintptr_t reader) {
		return ((T (*)(ReaderDelegate*, uintptr_t))(Il2CppBase() + 0x476317C))(this, reader);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t reader, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ReaderDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4763214))(this, reader, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(ReaderDelegate*, uintptr_t))(Il2CppBase() + 0x4763240))(this, result);
	}

};

}

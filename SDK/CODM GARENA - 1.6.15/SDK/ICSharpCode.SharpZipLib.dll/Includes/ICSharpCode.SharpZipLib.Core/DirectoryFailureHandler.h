#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Core {

class DirectoryFailureHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Core", "DirectoryFailureHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(DirectoryFailureHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A6ABC4))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(DirectoryFailureHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A6AC88))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(DirectoryFailureHandler*, uintptr_t))(Il2CppBase() + 0x4A6ACC0))(this, result);
	}

};

}

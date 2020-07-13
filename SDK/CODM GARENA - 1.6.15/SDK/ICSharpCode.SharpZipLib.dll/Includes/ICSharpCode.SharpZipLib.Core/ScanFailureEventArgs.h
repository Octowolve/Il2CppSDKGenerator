#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Core {

class ScanFailureEventArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Core", "ScanFailureEventArgs"));
	}

	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& exception_() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& continueRunning_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_ContinueRunning() {
		return ((T (*)(ScanFailureEventArgs*))(Il2CppBase() + 0x4A6BE60))(this);
	}

};

}

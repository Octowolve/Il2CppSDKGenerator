#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Core {

class ProgressEventArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Core", "ProgressEventArgs"));
	}

	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& processed_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& target_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& continueRunning_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_ContinueRunning() {
		return ((T (*)(ProgressEventArgs*))(Il2CppBase() + 0x4A6BBC4))(this);
	}

};

}

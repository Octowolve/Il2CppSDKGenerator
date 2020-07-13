#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckWaitDownloadcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckWaitDownload>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(Il2CppString* x) {
		return ((T (*)(CheckWaitDownloadcAnonStorey2*, Il2CppString*))(Il2CppBase() + 0x44678F0))(this, x);
	}

};

}
